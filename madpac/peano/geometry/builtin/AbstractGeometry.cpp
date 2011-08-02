#include "peano/geometry/builtin/AbstractGeometry.h"

#include "peano/utils/Globals.h"
#include "peano/utils/Loop.h"


tarch::logging::Log peano::geometry::builtin::AbstractGeometry::_log("peano::geometry::builtin::AbstractGeometry");

peano::geometry::builtin::AbstractGeometry::AbstractGeometry(
  bool          isInverted
):
  peano::geometry::GeometryObject(),
  _isInverted(isInverted)
  #ifdef ComponentSteering
  _uMax(0.0),
  _restMove(0.0)
  #endif
  {
}


peano::geometry::builtin::AbstractGeometry::~AbstractGeometry() {
}


bool peano::geometry::builtin::AbstractGeometry::isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  logTraceInWith2Arguments( "isCompletelyOutside(tarch::la::Vector<DIMENSIONS,double>,tarch::la::Vector<DIMENSIONS,double>)", x,resolution );

  bool result;
  if (_isInverted) {
    result = isCompletelyInsideNotInverted(x,resolution);
  }
  else {
    result = isCompletelyOutsideNotInverted(x,resolution);
  }

  logTraceOutWith1Argument( "isCompletelyOutside(tarch::la::Vector<DIMENSIONS,double>,tarch::la::Vector<DIMENSIONS,double>)", result );

  return result;
}


bool peano::geometry::builtin::AbstractGeometry::isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  logTraceInWith2Arguments( "isCompletelyInside(tarch::la::Vector<DIMENSIONS,double>,tarch::la::Vector<DIMENSIONS,double>)", x,resolution );

  bool result;
  if (_isInverted) {
    result = isCompletelyOutsideNotInverted(x,resolution);
  }
  else {
    result = isCompletelyInsideNotInverted(x,resolution);
  }

  logTraceOutWith1Argument( "isCompletelyInside(tarch::la::Vector<DIMENSIONS,double>,tarch::la::Vector<DIMENSIONS,double>)", result );

  return result;
}


bool peano::geometry::builtin::AbstractGeometry::isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x ) {
  if (_isInverted) {
    return isCompletelyInsideNotInverted( x, tarch::la::Vector<DIMENSIONS,double>(0.0) );
  }
  else {
    return isOutsideClosedDomainNotInverted( x );
  }
}

tarch::la::Vector<DIMENSIONS,double> peano::geometry::builtin::AbstractGeometry::computePerpendicularPointAndDistanceToStraightLine(
  const tarch::la::Vector<DIMENSIONS,double>& origin,
  const tarch::la::Vector<DIMENSIONS,double>& direction,
  const tarch::la::Vector<DIMENSIONS,double>& x,
  double&       distance
) const {
  assertionMsg( !tarch::la::equals(direction,tarch::la::Vector<DIMENSIONS,double>(0.0)), "zero direction vector detected");

  tarch::la::Vector<DIMENSIONS,double> result(0.0);

  double lambda = -1.0 / (direction*direction) *
                  (direction*(origin-x));
  result = origin + lambda * direction;

  distance = std::sqrt((result-x)*(result-x));

  return result;
}


double peano::geometry::builtin::AbstractGeometry::computeCosineOfAngleBetweenVectors(
  const tarch::la::Vector<DIMENSIONS,double>& a,
  const tarch::la::Vector<DIMENSIONS,double>& b
) const {

  #ifdef Debug
    bool aHasNonzeroEntry = false;
    bool bHasNonzeroEntry = false;
    for (int d=0; d<DIMENSIONS; d++) {
      if (!tarch::la::equals(a(d),0.0)) aHasNonzeroEntry = true;
      if (!tarch::la::equals(b(d),0.0)) bHasNonzeroEntry = true;
    }
    assertionMsg( aHasNonzeroEntry, "invalid zero vector a in input");
    assertionMsg( bHasNonzeroEntry, "invalid zero vector b in input");
  #endif


  return  (a*b) / ( std::sqrt((a*a)) * std::sqrt((b*b)) ) ;
}
