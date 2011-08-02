#include "peano/geometry/builtin/Sphere.h"
#include "peano/utils/Globals.h"
#include "peano/utils/Loop.h"


tarch::logging::Log peano::geometry::builtin::Sphere::_log( "peano::geometry::builtin::Sphere" );

peano::geometry::builtin::Sphere::Sphere(
  bool   isInverted,
  double radius,
  const  tarch::la::Vector<DIMENSIONS,double>& center
):
  AbstractGeometry(isInverted),
  _radius( radius ),
  _center(center)
{
  logDebug( "Sphere(...)", "created sphere with radius " << _radius << " and center " << _center );
}


void peano::geometry::builtin::Sphere::setCenter( const tarch::la::Vector<DIMENSIONS,double>& x ) {
  _center = x;
}


peano::geometry::builtin::Sphere::~Sphere() {
}


bool peano::geometry::builtin::Sphere::isCompletelyOutsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {

  if (isCompletelyInsideNotInverted(x,resolution)) return false;
  if (!isOutsideClosedSphere(x)) return false;

  if ( !tarch::la::equals(resolution,tarch::la::Vector<DIMENSIONS,double>(0.0)) ) {  // usual real voxel case

    dfor( i, 2 ) {
      tarch::la::Vector<DIMENSIONS,double> currentVector;
      currentVector = x;
        for (int d=0; d<DIMENSIONS; d++) {
          if (i(d)==0) {
            currentVector(d) -= resolution(d);
          }
          else {
            currentVector(d) += resolution(d);
          }
        }
        if ( !isOutsideOpenSphere(currentVector) || isInsideOpenMinkowskiSphere(_center, currentVector) ) {
          return false;
        }
    }

    for (int d=0; d<DIMENSIONS; d++) {
    	tarch::la::Vector<DIMENSIONS,double> currentMinkowsiVoxel;
    	currentMinkowsiVoxel = resolution;
    	currentMinkowsiVoxel(d) += _radius;
    	bool isInside = true;
    	for (int i=0; i<DIMENSIONS; i++) {
    		isInside &= tarch::la::greater( _center(i), x(i)-currentMinkowsiVoxel(i) );
    		isInside &= tarch::la::smaller( _center(i), x(i)+currentMinkowsiVoxel(i) );
    	}
    	if (isInside) return false;
    }

    assertion1( !tarch::la::equals(resolution,tarch::la::Vector<DIMENSIONS,double>(0.0)), resolution );

    #ifdef Dim3
    tarch::la::Vector<DIMENSIONS,double> baseCenterDeltaToX(0.0);
    int dir = 0;
    double height = 2.0 * resolution(dir);
    assignList(baseCenterDeltaToX) = -resolution(0), -resolution(1), -resolution(2);
    if ( isInsideOpenMinkowskiCylinder(_center, dir, x + baseCenterDeltaToX, height) ) return false;
    assignList(baseCenterDeltaToX) = -resolution(0),  resolution(1), -resolution(2);
    if ( isInsideOpenMinkowskiCylinder(_center, dir, x + baseCenterDeltaToX, height) ) return false;
    assignList(baseCenterDeltaToX) = -resolution(0), -resolution(1),  resolution(2);
    if ( isInsideOpenMinkowskiCylinder(_center, dir, x + baseCenterDeltaToX, height) ) return false;
    assignList(baseCenterDeltaToX) = -resolution(0),  resolution(1),  resolution(2);
    if ( isInsideOpenMinkowskiCylinder(_center, dir, x + baseCenterDeltaToX, height) ) return false;
    dir = 1;
    height = 2.0 * resolution(dir);
    assignList(baseCenterDeltaToX) = -resolution(0), -resolution(1), -resolution(2);
    if ( isInsideOpenMinkowskiCylinder(_center, dir, x + baseCenterDeltaToX, height) ) return false;
    assignList(baseCenterDeltaToX) =  resolution(0), -resolution(1), -resolution(2);
    if ( isInsideOpenMinkowskiCylinder(_center, dir, x + baseCenterDeltaToX, height) ) return false;
    assignList(baseCenterDeltaToX) = -resolution(0), -resolution(1),  resolution(2);
    if ( isInsideOpenMinkowskiCylinder(_center, dir, x + baseCenterDeltaToX, height) ) return false;
    assignList(baseCenterDeltaToX) =  resolution(0), -resolution(1),  resolution(2);
    if ( isInsideOpenMinkowskiCylinder(_center, dir, x + baseCenterDeltaToX, height) ) return false;
    dir = 2;
    height = 2.0 * resolution(dir);
    assignList(baseCenterDeltaToX) = -resolution(0), -resolution(1), -resolution(2);
    if ( isInsideOpenMinkowskiCylinder(_center, dir, x + baseCenterDeltaToX, height) ) return false;
    assignList(baseCenterDeltaToX) =  resolution(0), -resolution(1), -resolution(2);
    if ( isInsideOpenMinkowskiCylinder(_center, dir, x + baseCenterDeltaToX, height) ) return false;
    assignList(baseCenterDeltaToX) = -resolution(0),  resolution(1), -resolution(2);
    if ( isInsideOpenMinkowskiCylinder(_center, dir, x + baseCenterDeltaToX, height) ) return false;
    assignList(baseCenterDeltaToX) =  resolution(0),  resolution(1), -resolution(2);
    if ( isInsideOpenMinkowskiCylinder(_center, dir, x + baseCenterDeltaToX, height) ) return false;
#endif
  }
  else { // degenerated voxel == point
    // nothing to do since beginning call [if (!isOutsideClosedSphere(x)) return false;] covers this!
  }

  return true;
}


bool peano::geometry::builtin::Sphere::isInsideOpenMinkowskiSphere( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &center ) {
  double distance = 0.0;
  for (int d=0; d<DIMENSIONS; d++) {
    distance += (x(d)-center(d)) * (x(d)-center(d));
  }

  return tarch::la::smaller( std::sqrt( distance ), _radius );
}


bool peano::geometry::builtin::Sphere::isInsideOpenMinkowskiCylinder(
  const tarch::la::Vector<DIMENSIONS,double>& x,
  const int     dir,
  const tarch::la::Vector<DIMENSIONS,double>& baseCenter,
  const double  height
) {
  assertionMsg( dir >=0 && dir < 3, "only for 3D use!");
  assertion1( !tarch::la::smaller(height, 0.0), height );

  double distance2DCircle = 0.0;
  for (int d=0; d<DIMENSIONS; d++) {
    if (d!=dir) {
      distance2DCircle += (x(d)-baseCenter(d)) * (x(d)-baseCenter(d));
    }
  }

  if (   tarch::la::smaller(std::sqrt(distance2DCircle), _radius)
      && tarch::la::greater(x(dir), baseCenter(dir))
      && tarch::la::smaller(x(dir), baseCenter(dir) + height) ) {
    return true;
  }

  return false;
}


double peano::geometry::builtin::Sphere::getDistance(
  const tarch::la::Vector<DIMENSIONS,double>& x
) const {
  double distance = 0.0;
  for (int d=0; d<DIMENSIONS; d++) {
    distance += (x(d)-_center(d)) * (x(d)-_center(d));
  }
  distance = std::sqrt( distance );
  return distance;
}


bool peano::geometry::builtin::Sphere::isInsideOpenSphere(
  const tarch::la::Vector<DIMENSIONS,double>& x
) const {
  return tarch::la::smaller( getDistance(x), _radius );
}


bool peano::geometry::builtin::Sphere::isInsideClosedSphere(
  const tarch::la::Vector<DIMENSIONS,double>& x
) const {
  return !tarch::la::greater( getDistance(x), _radius );
}


bool peano::geometry::builtin::Sphere::isOutsideClosedSphere(
  const tarch::la::Vector<DIMENSIONS,double>& x
) const {
  return tarch::la::greater( getDistance(x), _radius );
}


bool peano::geometry::builtin::Sphere::isOutsideClosedDomainNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x ) {
  return isOutsideClosedSphere(x);
}


bool peano::geometry::builtin::Sphere::isOutsideOpenSphere(
  const tarch::la::Vector<DIMENSIONS,double>& x
) const {
  return !tarch::la::smaller( getDistance(x), _radius );
}


bool peano::geometry::builtin::Sphere::isCompletelyInsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  bool result = true;
  result &= isInsideOpenSphere( x );
  dfor( i, 2 ) {
    tarch::la::Vector<DIMENSIONS,double> currentVector;
    currentVector = x;
    for (int d=0; d<DIMENSIONS; d++) {
      if (i(d)==0) {
        currentVector(d) -= resolution(d);
      }
      else {
        currentVector(d) += resolution(d);
      }
    }
     result &= isInsideClosedSphere( currentVector );
  }
  return result;
}


int peano::geometry::builtin::Sphere::getNumberOfBoundariesIntersected(const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double>& h) {
    return 1;
	}

void peano::geometry::builtin::Sphere::plotGeometryAsVTK(const std::string& filename) {
  _log.error("plotGeometryAsVTK(std::string)", "geometry plot not supported for the sphere" );
}

