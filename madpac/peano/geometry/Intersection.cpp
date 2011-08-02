#include "peano/geometry/Intersection.h"


peano::geometry::Intersection::Intersection(
){
}

peano::geometry::Intersection::~Intersection() {
  clear();
}

void peano::geometry::Intersection::clear(){
  for (unsigned int i = 0; i < _geometry.size(); i++){
    if (_geometry[i] != NULL){
      delete _geometry[i];
      _geometry[i] = NULL;
    }
  }
  _geometry.clear();
}


bool peano::geometry::Intersection::isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution )
{
  assertion( _geometry.size() != 0 );
  bool result = false;
  for (unsigned int i = 0; i < _geometry.size(); i++){
    result |= _geometry[i]->isCompletelyOutside(x,resolution);
  }
  return result;
}

bool peano::geometry::Intersection::isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  assertion( _geometry.size() != 0);
  bool result = true;
  for (unsigned int i = 0; i < _geometry.size(); i++){
    result &= _geometry[i]->isCompletelyInside(x,resolution);
  }
  return result;
}

bool peano::geometry::Intersection::isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x ) {
  assertion( _geometry.size() != 0 );
  bool result = false;
  for (unsigned int i = 0; i < _geometry.size(); i++){
    result |= _geometry[i]->isOutsideClosedDomain(x);
  }
  return result;
}

unsigned int peano::geometry::Intersection::addGeometry( const peano::geometry::configurations::GeometryObjectConfiguration& config) {

  peano::geometry::GeometryObject *newObject = config.interpreteConfiguration();
  _geometry.push_back( newObject );
  return (_geometry.size()-1);
}


unsigned int peano::geometry::Intersection::addGeometry(peano::geometry::GeometryObject *object) {

  _geometry.push_back( object );
  return (_geometry.size()-1);
}


unsigned int peano::geometry::Intersection::
replaceGeometry(const unsigned int &index, peano::geometry::GeometryObject *object){
  if (index > _geometry.size()-1){
    unsigned int newPosition = addGeometry(object);
    return newPosition;
  } else {
    if (_geometry[index] != NULL){
      delete _geometry[index];
    }
    _geometry[index] = object;
    return index;
  }
}


const std::vector< peano::geometry::GeometryObject* > & peano::geometry::Intersection::getSubGeometries(){
  return _geometry;
}

