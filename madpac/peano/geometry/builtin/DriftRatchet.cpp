#include "peano/geometry/builtin/DriftRatchet.h"
#include "peano/utils/Loop.h"
#include "peano/utils/Globals.h"

tarch::logging::Log peano::geometry::builtin::DriftRatchet::_log( "peano::geometry::DriftRatchet" );


const int peano::geometry::builtin::DriftRatchet::_MAX_RECURSION_DEPTH = 100;


double peano::geometry::builtin::DriftRatchet::DefaultCPore = 0.61;


double peano::geometry::builtin::DriftRatchet::getDefaultMinRadius(double maxRadius) {
  return maxRadius / 2.40 * 1.25;
}


peano::geometry::builtin::DriftRatchet::DriftRatchet(
  bool          isInverted,
  double        maxRadius,
  double        minRadius,
  const tarch::la::Vector<DIMENSIONS,double>& offset,
  double        CPore
):
  AbstractGeometry(isInverted),
  _maxRadius(maxRadius),
  _minRadius(minRadius),
  _offset(offset),
  _CPore(CPore) {

  logDebug( "DriftRatchet(...)", "created drift ratchet with max radius " << _maxRadius );
}

peano::geometry::builtin::DriftRatchet::DriftRatchet(
  bool          isInverted,
  double        maxRadius,
  const tarch::la::Vector<DIMENSIONS,double>& offset,
  double        CPore
):
  AbstractGeometry(isInverted),
  _maxRadius(maxRadius),
  _minRadius(getDefaultMinRadius(maxRadius)),
  _offset(offset),
  _CPore(CPore)  {
  logDebug( "DriftRatchet(...)", "created default drift ratchet with max radius " << _maxRadius );
}


peano::geometry::builtin::DriftRatchet::~DriftRatchet() {
}


double peano::geometry::builtin::DriftRatchet::getCharacteristicLength() const {
  return _maxRadius / 2.40 * 8.4;
}


double peano::geometry::builtin::DriftRatchet::getG( double z, int remainingIterations ) const {
  double result = 0.0;
  if (remainingIterations==0) {
    result = std::sin( 2.0 * tarch::la::PI * z );
  }
  else {
    double recursion = getG(z, remainingIterations-1 );
    assertion( recursion <=  1.0 );
    assertion( recursion >= -1.0 );
    result = std::sin( 2.0 * tarch::la::PI * z - _CPore * recursion );
  }
   return result;
}


double peano::geometry::builtin::DriftRatchet::getRadius( double z ) const {
  assertion( _maxRadius > _minRadius );
  z = z - _offset(0) - getExtremeCoordinateInAxisDirection(0);
  double recursionParameter = z / getCharacteristicLength();
  while ( tarch::la::greater(recursionParameter,1.0) ) recursionParameter -= 1.0;
  while ( tarch::la::smaller(recursionParameter,0.0) ) recursionParameter += 1.0;
  double g = getG(recursionParameter,_MAX_RECURSION_DEPTH);
  assertion( !tarch::la::smaller(g,-1.0) );
  assertion( !tarch::la::greater(g, 1.0) );
  double result = _minRadius + 0.5 * (_maxRadius-_minRadius) * (1.0+g);
  assertion( result >= _minRadius );
  assertion( result <= _maxRadius );
  return result;
}


double peano::geometry::builtin::DriftRatchet::getDistanceFromRotationAxis(
  const tarch::la::Vector<DIMENSIONS,double>& x
) const {
  double result = 0.0;
  for (int d=1; d<DIMENSIONS; d++) {
  	result += (x(d)-_offset(d)) * (x(d)-_offset(d));
  }
  return std::sqrt( result );
}


bool peano::geometry::builtin::DriftRatchet::isInsideClosedDriftRatchet(
  const tarch::la::Vector<DIMENSIONS,double>& x
) const {
  return !tarch::la::greater( getDistanceFromRotationAxis(x), getRadius(x(0)) );
}


bool peano::geometry::builtin::DriftRatchet::isOutsideClosedDomainNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x ) {
  return !isInsideClosedDriftRatchet(x);
}


bool peano::geometry::builtin::DriftRatchet::isInsideOpenDriftRatchet(
  const tarch::la::Vector<DIMENSIONS,double>& x
) const {
  return tarch::la::smaller( getDistanceFromRotationAxis(x), getRadius(x(0)) );
}


bool peano::geometry::builtin::DriftRatchet::isCompletelyOutsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  // treat point call to avoid lots of computations below
  if ( tarch::la::equals(resolution, tarch::la::Vector<DIMENSIONS,double>(0.0)) ) {
    return !isInsideClosedDriftRatchet( x );
  }

  // check is DR contained completely in one voxel
  for (int d=1; d<DIMENSIONS; d++) { //start at 1 (x is flow-orientation)
    if ( !tarch::la::smaller(x(d)+resolution(d), _offset(d)+_maxRadius) &&
         !tarch::la::greater(x(d)-resolution(d), _offset(d)-_maxRadius) ) {
      return false;
    }
  }

  #ifdef Dim2
  // check face intersection (1-D or 2-D only!)
  double radius = getRadius(x(0));
  if ( tarch::la::equals( resolution(0),0.0 ) ) {
    for (int d=1; d<DIMENSIONS; d++) { //start at 1 (x is flow-orientation)
      if ( !tarch::la::smaller(x(d)+resolution(d), _offset(d)+radius) &&
           !tarch::la::greater(x(d)-resolution(d), _offset(d)-radius) ) {
        return false;
      }
    }
  }
  #else
  _log.error("isCompletelyOutsideNotInverted()","only implemented in 2D!!");
  #endif


	// check single position
  bool result = !isInsideClosedDriftRatchet( x );
  // check neighbouring 8 or 26 position points of total voxel
  dfor( i, 3 ) {
    tarch::la::Vector<DIMENSIONS,double> currentVector;
    currentVector = x;
    for (int d=0; d<DIMENSIONS; d++) {
      if (i(d)==0) {
        currentVector(d) -= resolution(d);
      }
      if (i(d)==2) {
        currentVector(d) += resolution(d);
      }
    }
    result &= !isInsideOpenDriftRatchet( currentVector );
  }
  return result;
}


bool peano::geometry::builtin::DriftRatchet::isCompletelyInsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  for (int d=0; d<DIMENSIONS; d++) {
    if (tarch::la::greater(resolution(d),_minRadius)) return false;
  }

  bool result = isInsideOpenDriftRatchet( x );

  dfor( i, 3 ) {
    tarch::la::Vector<DIMENSIONS,double> currentVector;
    currentVector = x;
    for (int d=0; d<DIMENSIONS; d++) {
      if (i(d)==0) {
        currentVector(d) -= resolution(d);
      }
      if (i(d)==2) {
        currentVector(d) += resolution(d);
      }
    }
    result &= isInsideClosedDriftRatchet( currentVector );
  }
  return result;
}


double peano::geometry::builtin::DriftRatchet::getExtremeCoordinateInAxisDirection(const int n) const {
  assertion(n>=0);

  double signum = (n & 1)!=0 ? -1.0 : 1.0;

  return ( ( signum*_CPore/2.0/tarch::la::PI + 0.25 + n/2.0 ) * getCharacteristicLength() );
}
