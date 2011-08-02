#include "FluidAbstractChannel.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidScenario.h"
#include "peano/applications/navierstokes/prototype1/scenarios/configuration/FluidScenarioConfiguration.h"

const std::string peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::VELOCITY_PROFILE_NONE     = "NONE";
const std::string peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::VELOCITY_PROFILE_PARABOLA = "parabola";
const std::string peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::VELOCITY_PROFILE_CONST    = "const";


tarch::logging::Log peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::_log( "peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel" );
#ifdef ComponentSteering
peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::FluidAbstractChannel()
{
}
#endif
peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::FluidAbstractChannel(
    const configuration::FluidScenarioConfiguration&  fluidScenarioConfiguration
):
  FluidScenario(fluidScenarioConfiguration),
  _isValid(true),
  _useVelocityInWholeChannelForInitialisation(false),
  _velocityProfile("UNDEF"),
  _inflowType(INFLOW_UNDEF),
  _outflowType(OUTFLOW_UNDEF),
  _meanVelocity(0.0),
  _inletPressure(0.0),
  _outletPressure(0.0),
  _inletOffset(0.0),
  _periodicBoundaryConditionsInUse(false) {

  if (!fluidScenarioConfiguration.isInletPressureSpecified()) {
    //velocity init
    _inflowType = INFLOW_VELOCITY_PROFILE;
    if (!fluidScenarioConfiguration.isVelocityMeanValueSpecified()) {
      _log.error( "FluidAbstractChannel()", "invalid setup: attribute " + configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_MEAN_VALUE +
                                            " missing for u inlet BC!" );
      _isValid = false;
    }
    else {
      _meanVelocity = fluidScenarioConfiguration.getVelocityMeanValue();
    }
    if (!fluidScenarioConfiguration.isVelocityProfileSpecified()) {
      _log.error( "FluidAbstractChannel()", "invalid setup: attribute " + configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_PROFILE +
                                            " missing for u inlet BC!" );
      _isValid = false;
    }
    else {
      _velocityProfile = fluidScenarioConfiguration.getVelocityProfile();
    }
    if (fluidScenarioConfiguration.arePeriodicBCUsed()) {
      _log.error( "FluidAbstractChannel()", "invalid combination: periodic BC only allowed for p inlet BC!" );
      _isValid = false;
    }
    if (fluidScenarioConfiguration.isHasOutletVelocityProfileSpecified() && fluidScenarioConfiguration.hasOutletVelocityProfile()) {
      _outflowType = OUTFLOW_VELOCITY_PROFILE;
      if (fluidScenarioConfiguration.isOutletPressureSpecified()) {
        _log.error( "FluidAbstractChannel()", "invalid combination: attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_HAS_OUTLET_VELOCITY_PROFILE +
                                              "\" may not be set to true while attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_OUTLET_PRESSURE +
                                              "\" is specified in tag \"" + configuration::FluidScenarioConfiguration::TAG);
        _isValid = false;
      }
    }
    else {
      if (!fluidScenarioConfiguration.isOutletPressureSpecified()) {
        _outflowType = OUTFLOW_PRESSURE_EQUALS_ZERO;
        _outletPressure = 0.0;
      }
      else {
        _outflowType = OUTFLOW_PRESSURE;
        _outletPressure = fluidScenarioConfiguration.getOutletPressure();
      }
    }
  }
  else {
    // pressure boundary conditions have (both) to be used, when inlet is defined!
    if (!fluidScenarioConfiguration.isInletPressureSpecified()) {
      _log.error( "FluidAbstractChannel()", "attribute " + configuration::FluidScenarioConfiguration::ATTRIBUTE_INLET_PRESSURE + " not set!" );
      _isValid = false;
    }
    else if (!fluidScenarioConfiguration.isOutletPressureSpecified()) {
      _log.error( "FluidAbstractChannel()", "attribute " + configuration::FluidScenarioConfiguration::ATTRIBUTE_OUTLET_PRESSURE + " not set!" );
      _isValid = false;
    }
    else {
      assertion( fluidScenarioConfiguration.isInletPressureSpecified() &&
                 fluidScenarioConfiguration.isOutletPressureSpecified()   );
      _inflowType = INFLOW_PRESSURE;
      _outflowType = OUTFLOW_PRESSURE;
      _inletPressure = fluidScenarioConfiguration.getInletPressure();
      _outletPressure = fluidScenarioConfiguration.getOutletPressure();
      if (fluidScenarioConfiguration.arePeriodicBCUsed()) _periodicBoundaryConditionsInUse = true;
    }
  }

  if (fluidScenarioConfiguration.isInitiateVelocityEverywhereySpecified()) {
    _useVelocityInWholeChannelForInitialisation = fluidScenarioConfiguration.shallVelocityBeInitiatedEverywhere();
    if (!fluidScenarioConfiguration.isVelocityMeanValueSpecified()) {
      _log.error( "FluidAbstractChannel()", "attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_MEAN_VALUE +
                                            "\" needs to be specified if attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_INITIATE_VELOCITY_EVERYWHERE
                                            + "\" is in use!" );
      _isValid = false;
    }
  }
  else {
    if (_inflowType != INFLOW_PRESSURE || _outflowType != OUTFLOW_PRESSURE) {
      _log.error( "FluidAbstractChannel()", "missing attribute " + configuration::FluidScenarioConfiguration::ATTRIBUTE_INITIATE_VELOCITY_EVERYWHERE +
                                            " (define (" + configuration::FluidScenarioConfiguration::ATTRIBUTE_INLET_PRESSURE + " and " + configuration::FluidScenarioConfiguration::ATTRIBUTE_OUTLET_PRESSURE +
                                            " ) or (" + configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_MEAN_VALUE + " and " + configuration::FluidScenarioConfiguration::ATTRIBUTE_INITIATE_VELOCITY_EVERYWHERE  + ")");
      _isValid = false;
    }
  }

  if (fluidScenarioConfiguration.isVelocityMeanValueSpecified()) {
    _meanVelocity = fluidScenarioConfiguration.getVelocityMeanValue();
    if (fluidScenarioConfiguration.isVelocityProfileSpecified()) {
      _velocityProfile = fluidScenarioConfiguration.getVelocityProfile();
    }
    else {
      _velocityProfile = VELOCITY_PROFILE_NONE;
      _log.error( "FluidAbstractChannel()", "\"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_INITIATE_VELOCITY_EVERYWHERE +
                                            "\" set but missing attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_PROFILE + "\"" );
      _isValid = false;
    }
  }
  else {
    if (fluidScenarioConfiguration.isVelocityProfileSpecified()) {
      _log.error( "FluidAbstractChannel()", "\"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_PROFILE +
                                            "\" set but missing attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_MEAN_VALUE + "\"" );
      _isValid = false;
    }
    else {
      _log.info("FluidAbstractChannel()","velocity not specified everywhere and no velocity profile set (use attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_PROFILE + "\")");
      _velocityProfile = VELOCITY_PROFILE_NONE;
    }
  }

  if ( !fluidScenarioConfiguration.hasInletOffset() ) {
    _log.error( "FluidAbstractChannel()", "attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_INLET_OFFSET + "\" has to be set!" );
    _isValid = false;
  }
  else {
    _inletOffset = fluidScenarioConfiguration.getInletOffset();
  }

  _isValid &= checkFluidScenarioConfig();
}


peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::FluidAbstractChannel(
  const double      meanInletVelocity,
  const Vector&     inletOffset,
  const bool        useInletVelocityInWholeChannel,
  const std::string velocityProfile
  ):
  peano::applications::navierstokes::prototype1::scenarios::FluidScenario::FluidScenario(),
  _isValid(true),
  _useVelocityInWholeChannelForInitialisation(useInletVelocityInWholeChannel),
  _velocityProfile(velocityProfile),
  _inflowType(INFLOW_VELOCITY_PROFILE),
  _outflowType(OUTFLOW_PRESSURE_EQUALS_ZERO),
  _meanVelocity(meanInletVelocity),
  _inletPressure(0.0),
  _outletPressure(0.0),
  _inletOffset(inletOffset),
  _periodicBoundaryConditionsInUse(false)
  {
  assertion( velocityProfile==VELOCITY_PROFILE_PARABOLA ||
             velocityProfile==VELOCITY_PROFILE_CONST );
}


peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::FluidAbstractChannel(
  const double  pInlet,
  const double  pOutlet,
  const Vector& inletOffset,
  const bool    useInletVelocityInWholeChannel,
  const double  meanInitVelocity,
  const bool    usePeriodicBoundaryConditions
):
  peano::applications::navierstokes::prototype1::scenarios::FluidScenario::FluidScenario(),
  _isValid(true),
  _useVelocityInWholeChannelForInitialisation(useInletVelocityInWholeChannel),
  _velocityProfile(VELOCITY_PROFILE_PARABOLA),
  _inflowType(INFLOW_PRESSURE),
  _outflowType(OUTFLOW_PRESSURE),
  _meanVelocity(meanInitVelocity),
  _inletPressure(pInlet),
  _outletPressure(pOutlet),
  _inletOffset(inletOffset),
  _periodicBoundaryConditionsInUse(usePeriodicBoundaryConditions) {
}


peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::~FluidAbstractChannel() {
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::checkFluidScenarioConfig() {
  if (_inflowType == INFLOW_VELOCITY_PROFILE) {
    if (tarch::la::equals(_meanVelocity, 0.0)) {
      std::ostringstream msg;
      msg << "invalid attribute "<< configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_MEAN_VALUE <<
                                    "=" << _meanVelocity << ": Needs to be non-zero for u inlet BC";
      _log.error("checkFluidScenarioConfig()",msg.str() );
      return false;
    }
    if (_velocityProfile==VELOCITY_PROFILE_NONE) {
      _log.error("checkFluidScenarioConfig()","invalid attribute " + configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_PROFILE +
                                              "=" + _velocityProfile + ": Needs to have a real value for u inlet BC" );
      return false;
    }
  }

  if (_inflowType==INFLOW_PRESSURE && _outflowType==OUTFLOW_PRESSURE) {
    if ( tarch::la::equals(_inletPressure,_outletPressure) ) {
      _log.warning("checkFluidScenarioConfig()","\"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_INLET_PRESSURE
                   + "\"==\"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_OUTLET_PRESSURE
                   + "\" => no flow!");
    }
  }
  //TODO_SANGL add extra condition for outflow-pressure if inflow is velocity?

  #ifdef Debug
  if (_periodicBoundaryConditionsInUse) {
    assertion(_inflowType==INFLOW_PRESSURE && _outflowType==OUTFLOW_PRESSURE);
  }
  #endif

  if ( _velocityProfile!=VELOCITY_PROFILE_NONE &&
       _velocityProfile!=VELOCITY_PROFILE_PARABOLA &&
       _velocityProfile!=VELOCITY_PROFILE_CONST      ) {
    _log.error("checkFluidScenarioConfig()","invalid attribute " + configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_PROFILE
                   + "; currently only \"" + VELOCITY_PROFILE_NONE
                   + "\", \"" + VELOCITY_PROFILE_PARABOLA + "\", and \"" + VELOCITY_PROFILE_CONST + "\" supported!" );
    return false;
  }

  return true;
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::isValid() const {
  return _isValid && peano::applications::navierstokes::prototype1::scenarios::FluidScenario::isValid();
}



Vector peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::getVelocityForOuterNode(const Vector& x) const {
  return Vector(0.0);
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::isNodeMixedDirichletNeumannNode(
  const int     uniqueBoundaryNumber
) const {
  return false;
}


double peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::getInitPressureForInnerCell() const {
  return 0.0;
}


double peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::getPressureForOuterCell() const {
  return 0.0;
}


void peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::toString(std::ostream& out) const {
  peano::applications::navierstokes::prototype1::scenarios::FluidScenario::toString(out);
  out << ",inflowType:" << _inflowType << ","
      << "outflowType:" << _outflowType << ","
      << "shallUBeInitEverywhere:" << _useVelocityInWholeChannelForInitialisation <<  ","
      << "uMean:" << _meanVelocity << ","
      << "velProfile:" << _velocityProfile << ","
      << "pInlet:" << _inletPressure << ","
      << "pOutlet:" << _outletPressure << ","
      << "periodicBC:" << _periodicBoundaryConditionsInUse << ","
      << "inletOffset:" <<_inletOffset;
}


Vector peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::computeVelocityProfile(
  const Vector&   x
) const {

  if (_velocityProfile==VELOCITY_PROFILE_PARABOLA) {
    return computeParabolicVelocityProfile(x);
  }
  else if (_velocityProfile==VELOCITY_PROFILE_CONST) {
    return computeConstVelocityProfile();
  }
  else if (_velocityProfile==VELOCITY_PROFILE_NONE) {
    return Vector(0.0);
  }
  else {
    _log.error("computeVelocityProfile()","Invalid velocity profile detected!");
    exit(ASSERTION_EXIT_CODE);
  }

  assertionMsg(false, "should never appear");
  return Vector(0.0);
}

Vector peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::computeConstVelocityProfile(
  ) const {
  Vector result(0.0);
  result(0) = _meanVelocity;
  return result;
}


Vector peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::getInitVelocityForInnerNode(const Vector& x) const {

  return _useVelocityInWholeChannelForInitialisation ? computeVelocityProfile(x) : Vector(0.0);
}


Vector peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::getVelocityForBoundaryNode(
  const Vector& x,
  const int     uniqueBoundaryNumber,
  const bool    isDirichletNode
) const {
  assertion ( _inflowType==INFLOW_VELOCITY_PROFILE || _inflowType==INFLOW_PRESSURE );
  assertion ( _outflowType==OUTFLOW_VELOCITY_PROFILE || _outflowType==OUTFLOW_PRESSURE || _outflowType==OUTFLOW_PRESSURE_EQUALS_ZERO );

  Vector result(0.0);

  if (!_useVelocityInWholeChannelForInitialisation) {
    //usual case
    if (isDirichletNode && (uniqueBoundaryNumber==INFLOW || uniqueBoundaryNumber==OUTFLOW)) {
      result = computeVelocityProfile(x);
    }
    else {
      //keep result at zero
    }
  }
  else {
    switch (uniqueBoundaryNumber) {
      case BOUNDARY_TYPE_UNDEF: //jump to next
      case INFLOW:              //jump to next
      case OUTFLOW:             //jump to next
      case LID:                 //jump to next
      case PERIODIC_LEFT:       //jump to next
      case PERIODIC_RIGHT:      //jump to next
      case PERIODIC_CORNER:     //jump to next
      case IGNORED:
        result = computeVelocityProfile(x);
        break;

      case OBSTACLE:            //jump to next
      case WALL:
        result = Vector(0.0);
        break;

      case WALL_FREE_SLIP_Y:
        result = computeVelocityProfile(x);
        result(1) = 0.0;
        break;

      case WALL_FREE_SLIP_Z:
        result = computeVelocityProfile(x);
        assertion(DIMENSIONS==3);
        #ifdef Dim3
        result(2) = 0.0;
        #endif
        break;

      case WALL_FREE_SLIP_YZ:
        result = computeVelocityProfile(x);
        assertion(DIMENSIONS==3);
        #ifdef Dim3
        result(1) = 0.0;
        result(2) = 0.0;
        #endif
        break;

      case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN:
        //assertion(false); //not yet implemented
        result = computeVelocityProfile(x);
        break;

      case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN:
        //assertion(false); //not yet implemented
        result = computeVelocityProfile(x);
        break;

      default:
        _log.error("getVelocityForBoundaryNode()","boundary type not (yet) supported!");
        assertion(false);
        exit(ASSERTION_EXIT_CODE);
    }
  }

  return result;
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::isNodeDirichletNode(
  const int uniqueBoundaryNumber
) const {

  switch (uniqueBoundaryNumber) {
    case OUTFLOW:
      if (_outflowType==OUTFLOW_VELOCITY_PROFILE) {
        return true;
      }
      else {
        assertion(_outflowType==OUTFLOW_PRESSURE || _outflowType==OUTFLOW_PRESSURE_EQUALS_ZERO);
        return false; // Neumann!
      }
      break;
    case INFLOW:
      if ( _inflowType==INFLOW_VELOCITY_PROFILE ) {
        return true;
      }
      else { //pressure boundary conditions (also for periodic)
        assertion(_inflowType==INFLOW_PRESSURE);
        return false; // Neumann!
      }
      break;

    case PERIODIC_LEFT:
      assertion(arePeriodicBoundaryConditionsInUse());
      return false;

    case PERIODIC_RIGHT:
      assertion(arePeriodicBoundaryConditionsInUse());
      return false;

    case PERIODIC_CORNER:
      assertion(arePeriodicBoundaryConditionsInUse());
      return false;

    case WALL:
      return true;

    case WALL_FREE_SLIP_Y:
      return false;

    case WALL_FREE_SLIP_Z:
      assertion(DIMENSIONS==3);
      return false;

    case WALL_FREE_SLIP_YZ:
      assertion(DIMENSIONS==3);
      return false;

    case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN:
      return false;

    case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN:
      return false;

    case OBSTACLE:
      return true;

    default:
      _log.error("isNodeDirichletNode(x,nr)", "invalid boundary type!");
      assertion(false);
  };

  assertionMsg(false, "must never appear");
  return false;
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::isNodePeriodicNode(
  const int uniqueBoundaryNumber
) const {

  switch (uniqueBoundaryNumber) {
    case OUTFLOW:
      if (arePeriodicBoundaryConditionsInUse()) {
        assertion(_outflowType==OUTFLOW_PRESSURE);
        return true;
      }
      else return false;
      break;

    case INFLOW:
      if (arePeriodicBoundaryConditionsInUse()) {
        assertion(_inflowType==INFLOW_PRESSURE);
        return true;
      }
      else return false;
      break;

    default: //all other nodes are not periodic ones
      return false;
  };

  assertionMsg(false, "must never appear");
  return false;
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::isInflowPressureBoundaryConditionUsed() const {
  return (_inflowType==INFLOW_PRESSURE);
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::isOutflowPressureBoundaryConditionUsed() const {
  return (_outflowType==OUTFLOW_PRESSURE);
}


double peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::getInletPressure() const {
  return _inletPressure;
}


double peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::getOutletPressure() const {
  return _outletPressure;
}


bool peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel::arePeriodicBoundaryConditionsInUse() const {
  return _periodicBoundaryConditionsInUse;
}

