#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInChannel.h"
#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
#include "configuration/FluidScenarioConfiguration.h"


const std::string peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::IDENTIFIER = "obstacle-in-channel";

tarch::logging::Log peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::_log( "peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel" );

peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::FluidObstacleInChannel(
  const configuration::FluidScenarioConfiguration&  fluidScenarioConfiguration
):
  FluidAbstractChannel(fluidScenarioConfiguration),
  _isValid(true),
  _inletDimensions(0.0) {

  if (!fluidScenarioConfiguration.hasInletDimension() ) {
    _log.error( "FluidObstacleInChannel()", "inlet dimension has to be set" );
    _isValid = false;
  }
  else {
    _inletDimensions = fluidScenarioConfiguration.getInletDimension();
  }


  if (_inflowType==INFLOW_VELOCITY_PROFILE){
    double epsilon = 1e-5;
    double tempRe = _meanVelocity * fluidScenarioConfiguration.getCharacteristicLength() /  _eta * _rho;
    if ( ( fabs((tempRe) - (_Re)) / fabs(tempRe) ) > epsilon ){
      std::ostringstream out;
      out << "incompatible Reynolds number: actual value = " << tempRe;
      out << ", specified config-value = " << _Re;
      out << ", eps=" << epsilon << std::endl;
      _log.error( "FluidObstacleInChannel()", out.str() );
      _isValid = false;
    }

    tempRe = _meanVelocity * fluidScenarioConfiguration.getCharacteristicLength() /  _etaPhase2 * _rhoPhase2;
    if ( _isValid && ( fabs((tempRe) - (_RePhase2)) / fabs(tempRe) ) > epsilon ){
      std::ostringstream out;
      out << "incompatible Reynolds number (phase 2): actual value = " << tempRe;
      out << ", specified config-value = " << _RePhase2;
      out << ", eps=" << epsilon << std::endl;
      _log.error( "FluidObstacleInChannel()", out.str() );
      _isValid = false;
    }
  }

  _isValid &= checkFluidScenarioSetting();
}


peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::FluidObstacleInChannel(
  const Vector&  inletDimensions,
  const Vector&  inletOffset,
  const double   meanInletVelocity,
  const bool     useInletVelocityInWholeChannel
):
  FluidAbstractChannel(meanInletVelocity, inletOffset, useInletVelocityInWholeChannel),
  _isValid(true),
  _inletDimensions(inletDimensions)  {
}


peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::FluidObstacleInChannel(
  const Vector&  inletDimensions,
  const Vector&  inletOffset,
  const double   pInlet,
  const double   pOutlet,
  const bool     useInletVelocityInWholeChannel,
  const double   meanInitVelocity,
  const bool     usePeriodicBoundaryConditions
):
  FluidAbstractChannel(pInlet, pOutlet, inletOffset, useInletVelocityInWholeChannel,
                       meanInitVelocity, usePeriodicBoundaryConditions),
  _isValid(true),
  _inletDimensions(inletDimensions) {
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::checkFluidScenarioSetting(){
  if ( !tarch::la::equals(_inletDimensions(0), 0.0) ) {
    _log.error( "checkFluidScenarioSetting()", "invalid attribute \"" +
                configuration::FluidScenarioConfiguration::ATTRIBUTE_INLET_DIMENSION + "0\" (value!=0.0): channel only supports x-direction flow" );
    return false;
  }

  for (int d=1; d<DIMENSIONS; d++) {
    if ( !tarch::la::greater(_inletDimensions(d), 0.0) ) {
      _log.error( "checkFluidScenarioSetting()", "invalid attribute \"" +
                  configuration::FluidScenarioConfiguration::ATTRIBUTE_INLET_DIMENSION + "d\" (value<=0.0): channel has to have real inlet area!" );
      return false;
    }
  }

#ifdef Debug
#ifdef Dim3
  if ( !tarch::la::equals(_inletDimensions(1),_inletDimensions(2)) ) {
    _log.warning("getInitialVertex(x,h,nr)", "inlet formula not yet tested for non-quadratic inlet!");
  }
#endif //Dim3
#endif //Debug

  return true;
}


peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::~FluidObstacleInChannel() {
}


void peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::toString( std::ostream& out ) const {
  peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::toString(out);
  out << ",inletDim:" << _inletDimensions;
}


std::ostream& operator<<(std::ostream& out, const peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel& scenario) {
  scenario.toString(out);
  return out;
}


Vector peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::computeParabolicVelocityProfile(
  const Vector& x
) const {
  Vector u(0.0);
  double y = x(1) - _inletOffset(1);

  if (!tarch::la::greater(y,0.0) || !tarch::la::smaller(y,_inletDimensions(1))) return Vector(0.0);

  #ifdef Dim2
    u(0) = _meanVelocity * 6.0 * y * (_inletDimensions(1) - y) / (_inletDimensions(1) * _inletDimensions(1));
  #else
    assertion(DIMENSIONS==3);
    double z = x(2) - _inletOffset(2);
    if (!tarch::la::greater(z,0.0) || !tarch::la::smaller(z,_inletDimensions(2))) return Vector(0.0);

    u(0) = _meanVelocity * 36.0 * y * (_inletDimensions(1) - y)
                                * z * (_inletDimensions(2) - z)
                                / (_inletDimensions(1) * _inletDimensions(1) *
                                   _inletDimensions(2) * _inletDimensions(2));
  #endif //Dim2

  return u;
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::isValid() const {
  return _isValid && FluidAbstractChannel::isValid();
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::isInletSmallerResultingInWall(
  const Vector& x
) const {

  return (   !tarch::la::greater(x(1), _inletOffset(1)) || !tarch::la::smaller(x(1), _inletOffset(1)+_inletDimensions(1))
          #ifdef Dim3
          || !tarch::la::greater(x(2), _inletOffset(2)) || !tarch::la::smaller(x(2), _inletOffset(2)+_inletDimensions(2))
          #endif
          );
}


int peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::getUniqueBoundaryNumber(
  int numberOfBoundaries,
  int boundaryNumber[],
  const Vector& x
  ) const {

  bool isWall     = false;
  bool isObstacle = false;
  bool isInflow   = false;
  bool isOutflow  = false;

  for (int i=0; i<numberOfBoundaries; i++) {
    isWall     |= boundaryNumber[i] > 0 && boundaryNumber[i] < 2*DIMENSIONS && boundaryNumber[i] != DIMENSIONS;
    isObstacle |= boundaryNumber[i] >= 2*DIMENSIONS  &&  boundaryNumber[i] < 20;
    isInflow   |= boundaryNumber[i] == 0;
    isOutflow  |= boundaryNumber[i] == DIMENSIONS;
    assertionMsg( boundaryNumber[i] < 20, "must not appear (except PeGSI workaround channel)! check obstacle basenumber!");
  }
  // add inlet offset information: inlet smaller -> WALL
  if (isInflow && isInletSmallerResultingInWall(x) ) {
    return WALL;
  }


  if ( isInflow && isOutflow ) {
    //Assertion disabled for moving geometries
    //assertionMsg( false, "topology mismatch" );
  }
  if ( isObstacle && isInflow ) {
    //Assertion disabled for moving geometries
    //assertionMsg( false, "topology mismatch" );
  }
  if ( isObstacle && isWall ) {
  	//following assertion ignored for peano grid: root cell problem!
    //assertionMsg( false, "topology mismatch" );
  }

  if (isWall)     return WALL;
  if (isObstacle) return OBSTACLE;
  if (isOutflow)  return OUTFLOW;
  if (isInflow)   return INFLOW;

  assertion(false);
  return -1;
}


std::string peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::getIdentifier() const {
  return peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::IDENTIFIER;
}
