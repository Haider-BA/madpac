#include "peano/geometry/builtin/CuttingPlane.h"


peano::geometry::builtin::CuttingPlane::CuttingPlane(
  const tarch::la::Vector<DIMENSIONS,double> &position,
  const tarch::la::Vector<DIMENSIONS,double> &normal
):
peano::geometry::GeometryObject(),
_position(position),
_normal(normal){}


peano::geometry::builtin::CuttingPlane::~CuttingPlane(){}


bool peano::geometry::builtin::CuttingPlane::isCompletelyOutside(
  const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ){
  bool isCompletelyOutside = true;
  bool isOnBoundary = true;

  tarch::la::Vector<DIMENSIONS,int> corner(0);
  tarch::la::Vector<DIMENSIONS,double> coords(0.0);

  //  a point is completely outside, if all corners of the surrounding rectangle/box of size 2*resolution are on the
  // "outer" side of the plane, i.e. the scalar product between normal and corner-_position-distance needs to be
  // bigger than zero for all corners!
  for (int i = 0; i < TWO_POWER_D; i++){
    for (int d = 0; d < DIMENSIONS; d++){
      coords(d) = (2*corner(d)-1)*resolution(d);
    }
    peano::utils::dInc(corner,2);
    coords = x+coords-_position;

    // if the dot-product is bigger/equal zero, the original point might be considered to be completely outside,
    // except for the case that...
    isCompletelyOutside = isCompletelyOutside && (!tarch::la::smaller(_normal*coords,0.0));
    // ... the meshsize is 0.0: we need to check if all points are located on the boundary (which is actually only the
    // current point). If so, this point cannot be completely outside.
    isOnBoundary = isOnBoundary && (tarch::la::equals(_normal*coords,0.0));
  }

  return isCompletelyOutside && (!isOnBoundary);
}


bool peano::geometry::builtin::CuttingPlane::isCompletelyInside(
  const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ){
  bool isCompletelyInside = true;
  bool isOnBoundary = true;

  tarch::la::Vector<DIMENSIONS,int> corner(0);
  tarch::la::Vector<DIMENSIONS,double> coords(0.0);

  // a point is completely inside, if all corners of the surrounding rectangle/box of size 2*resolution are on the
  // "inner" side of the plane, i.e. the scalar product between normal and corner-_position-distance needs to be
  // smaller than zero for all corners!
  for (int i = 0; i < TWO_POWER_D; i++){
    for (int d = 0; d < DIMENSIONS; d++){
      coords(d) = (2*corner(d)-1)*resolution(d);
    }
    peano::utils::dInc(corner,2);
    coords = x+coords-_position;

    isCompletelyInside = isCompletelyInside && (!tarch::la::greater(_normal*coords,0.0));
    isOnBoundary = isOnBoundary && (tarch::la::equals(_normal*coords,0.0));
  }

  return isCompletelyInside && (!isOnBoundary);
}


bool peano::geometry::builtin::CuttingPlane::isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x ){
  return tarch::la::greater(_normal * (x-_position),0.0);
}

