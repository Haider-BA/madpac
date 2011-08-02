#include "peano/geometry/builtin/Union.h"


peano::geometry::builtin::Union::Union(
  std::vector<peano::geometry::GeometryObject*> geometryObjects
): peano::geometry::GeometryObject(), _geometryObjects(geometryObjects){}


peano::geometry::builtin::Union::~Union(){
  // delete objects
  for (unsigned int i = 0; i < _geometryObjects.size(); i++){
    if (_geometryObjects[i] != NULL){
      delete _geometryObjects[i];
      _geometryObjects[i] = NULL;
    }
  }
  _geometryObjects.clear();
}


bool peano::geometry::builtin::Union::isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ){

  // a point is completely outside if it is outside the object and outside of the planes (that is on the side of each plane
  // which is directed outwards, i.e. into the direction of the predefined surface normal)
  bool outside = true;
  for (unsigned int i = 0; i < _geometryObjects.size(); i++){
    outside = outside && _geometryObjects[i]->isCompletelyOutside(x,resolution);
  }
  return outside;
}


bool peano::geometry::builtin::Union::isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ){
  // true, if point is completely inside of at least one cutting plane
  bool inside = false;
  for (unsigned int i = 0; i < _geometryObjects.size(); i++){
    inside = inside || _geometryObjects[i]->isCompletelyInside(x,resolution);
  }
  return inside;
}


bool peano::geometry::builtin::Union::isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x ){

  // a point is outside the closed domain if it is outside all domains defined by the object and the cutting planes
  bool outside = true;
  for (unsigned int i = 0; i < _geometryObjects.size(); i++){
    outside = outside && _geometryObjects[i]->isOutsideClosedDomain(x);
  }
  return outside;
}
