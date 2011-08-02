#include "peano/geometry/precice/services/FunctionalPreciceGeometrySubService.h"

tarch::logging::Log peano::geometry::precice::services::FunctionalPreciceGeometrySubService::_log("peano::geometry::precice::services::FunctionalPreciceGeometryService");


void peano::geometry::precice::services::FunctionalPreciceGeometrySubService::init(
  const peano::geometry::precice::configurations::PreciceConfiguration &config
){
  assertion(config.getPreciceSolverInterface() != NULL);
  ::precice::SolverInterface *interface = config.getPreciceSolverInterface();

  peano::geometry::precice::PreciceGeometry *preciceGeometry = config.interpreteConfigurationAsPreciceGeometry();
  assertion(preciceGeometry != NULL);

  peano::geometry::services::GeometryService::getInstance().init(preciceGeometry,true);
  _preciceGeometry = preciceGeometry;

  // initialise geometry id map
  _geometryIDMap.clear();
  _geometryIDMap = initializeGeometryIDMap(config.getGeometryAddonNames(), config.getGeometryAddonIDs(),interface);
}


std::vector<int> peano::geometry::precice::services::FunctionalPreciceGeometrySubService::getGeometryIDs(
  const tarch::la::Vector<DIMENSIONS,double> &x,
  const tarch::la::Vector<DIMENSIONS,double> &h
){
  assertion(_preciceGeometry != NULL);

  // get precice meshIDs
  std::vector<int> ids = _preciceGeometry->getMeshIDs(x,h);
  // convert ids
  mapIDs(ids);
  // return ids
  return ids;
}


void peano::geometry::precice::services::FunctionalPreciceGeometrySubService::mapIDs ( std::vector<int> & ids ) const
{
  for (size_t i=0; i < ids.size(); i++) {
    std::map<int, int>::const_iterator iter = _geometryIDMap.find(ids[i]);
    if ( iter != _geometryIDMap.end() ) {
      ids[i] = iter->second;
    }
    else {
      std::vector<int>::iterator iter = ids.begin();
      std::advance (iter,i);
      ids.erase ( iter );
      i--;
    }
  }
}



std::map<int,int>
peano::geometry::precice::services::FunctionalPreciceGeometrySubService::initializeGeometryIDMap(
  const std::vector<std::string> &geometryAddonNames,
  const std::vector<int> &geometryAddonIDs,
  ::precice::SolverInterface *interface
){

  std::map<std::string, int> geometryAddons;
  std::map<std::string, int>::const_iterator iter;

  std::map<int, int> geometryIDMap;

  // setup geometry addons
  for (unsigned int i=0; i < geometryAddonIDs.size(); i++) {
    std::string addonName = geometryAddonNames[i];
    assertion (geometryAddons.find(addonName) == geometryAddons.end());
    geometryAddons[addonName] = geometryAddonIDs[i];
  }


  // setup geometry ID map
  for ( iter=geometryAddons.begin(); iter != geometryAddons.end(); iter++ ) {
    std::string name = iter->first;
    int id = iter->second;
    geometryIDMap[interface->getMeshID(name)] = id;
    logDebug ("initializeGeometryIDMap()", "Create map for geometry ID with name "
            << name << " : preciceID/peanoID = "
            << interface->getMeshID(name) << "/" << id );
  }

  return geometryIDMap;
}
