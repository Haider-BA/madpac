#include "peano/geometry/builtin/services/FunctionalBuiltinGeometrySubService.h"


void peano::geometry::builtin::services::FunctionalBuiltinGeometrySubService::init(
  const peano::geometry::builtin::configurations::BuiltinGeometryConfiguration& configs
){

  _geometryIDs.clear();
  if (_intersection != NULL){
    // do not delete geometry since this is going to happen by the reset of _geometry!
    _intersection = NULL;
  }
  _intersection = new peano::geometry::Intersection();
  peano::geometry::services::GeometryService::getInstance().init(_intersection,true);

  // get all geometry objects and IDs
  for (unsigned int i = 0; i < configs.size(); i++){
    // only allow the creation for non-negative IDs; otherwise stop
    assertion(configs.getBuiltinGeometryObjectConfiguration(i).getGeometryID() != -1);
    unsigned int number = _intersection->addGeometry(configs.getBuiltinGeometryObjectConfiguration(i));
    _geometryIDs[number] = configs.getBuiltinGeometryObjectConfiguration(i).getGeometryID();
  }
}


std::vector<int> peano::geometry::builtin::services::FunctionalBuiltinGeometrySubService::getGeometryIDs(
  const tarch::la::Vector<DIMENSIONS,double> &x,
  const tarch::la::Vector<DIMENSIONS,double> &h
) {
  assertion(_intersection != NULL);
  std::vector<int> geometryIDs;

  const std::vector< peano::geometry::GeometryObject* >&  subGeometries =_intersection->getSubGeometries();

  for (unsigned int i = 0; i < subGeometries.size(); i++){
    assertion(_geometryIDs.find(i) != _geometryIDs.end());
    if ((!subGeometries[i]->isCompletelyInside(x,h)) && (!subGeometries[i]->isOutsideClosedDomain(x)) ){
      geometryIDs.push_back(_geometryIDs[i]);
    }
  }
  return geometryIDs;
}
