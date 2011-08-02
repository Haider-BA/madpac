#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/Boundaries.h"

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundaries::_log("peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundaries");


peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundaries::Boundaries(
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundariesConfiguration &boundariesConfig
){
  _geometry2BoundaryMap.clear();

  // clear ranges if necessary
  if (_boundaries.size() != 0){
    for (unsigned int i = 0; i < _boundaries.size(); i++){
      if (_boundaries[i] != NULL){
        delete _boundaries[i];
        _boundaries[i] = NULL;
      }
    }
    _boundaries.clear();
  }

  for (unsigned int i = 0; i < boundariesConfig.getNumberOfBoundaryConfigurations(); i++){
    // set up each boundary range
    _boundaries.push_back(boundariesConfig.getBoundaryConfiguration(i).interpreteConfiguration());
    assertion(_boundaries[i] != NULL);

    // create geometryID-to-BoundaryRange map entry
    if (_geometry2BoundaryMap.find(_boundaries[i]->getGeometryID()) != _geometry2BoundaryMap.end()){
      logDebug("Boundaries()", "The geometry ID " << _boundaries[i]->getGeometryID() << " is listed twice in the boundary configurations!");
      assertion(false);
    }
    _geometry2BoundaryMap[_boundaries[i]->getGeometryID()] = i;
  }
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundaries::~Boundaries(){
  for (unsigned int i = 0; i < _boundaries.size(); i++){
    if (_boundaries[i] != NULL){
      delete _boundaries[i];
      _boundaries[i] = NULL;
    }
  }
  _boundaries.clear();
  _geometry2BoundaryMap.clear();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundaries::getBoundaryData(
  const tarch::la::Vector<DIMENSIONS,double> &boundaryNode,
  const tarch::la::Vector<DIMENSIONS,double> &cellSize,
  const unsigned int &pdfDirection,
  peano::applications::latticeboltzmann::BoundaryData& boundaryData
){
  logDebug("getBoundaryData()", "Get boundary data for pdf " << pdfDirection << " at position " << boundaryNode);
  assertion(!peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyInside(boundaryNode,cellSize));
  assertion(!peano::geometry::services::GeometryService::getInstance().getGeometry().isOutsideClosedDomain(boundaryNode));
  // get geometry IDs, map them to boundary range IDs and determine unique ID out of those range IDs
  tarch::la::Vector<DIMENSIONS,double> geometricNode(boundaryNode+0.5*cellSize(0)*peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[LB_CURRENT_DIR-1-pdfDirection]);
  if (peano::geometry::services::GeometryService::getInstance().getGeometry().isOutsideClosedDomain(geometricNode)){
    geometricNode = boundaryNode;
  }
  std::vector<int> ids = peano::geometry::services::FunctionalGeometryService::getInstance().getGeometryIDs(geometricNode,0.5*cellSize);
  translateGeometryIDsToBoundaryIDs(ids);
  int id = getUniqueBoundary(ids,pdfDirection);

  // fill up with boundary data
  assertion5((unsigned int) id != _boundaries.size(), id,boundaryNode,geometricNode,cellSize,pdfDirection);
  _boundaries[id]->getBoundaryData(boundaryNode,cellSize,pdfDirection,boundaryData);
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundaries::
getUniqueBoundary(const std::vector<int> ids,const unsigned int &pdfDirection) const {

  int noSlip = _boundaries.size();
  int movingWall = _boundaries.size();
  int movingObstacle = _boundaries.size();
  int velocityInlet = _boundaries.size();
  int pressureOutlet = _boundaries.size();
  int pressureInlet = _boundaries.size();

  // TODO move this to something like special rules...
  tarch::la::Vector<DIMENSIONS,double> normalLid(0.0);
  normalLid(DIMENSIONS-1) = 1.0;

  for (unsigned int i = 0; i < ids.size(); i++){
    switch(_boundaries[ids[i]]->getBoundaryType()){
      case peano::applications::latticeboltzmann::BoundaryData::HW_BB:
        noSlip = ids[i];
        break;
      case peano::applications::latticeboltzmann::BoundaryData::MOVING_WALL_HW_BB:
        if ( tarch::la::smaller(tarch::la::dot(peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[pdfDirection],normalLid),0.0)){
          movingWall = ids[i];
        }
        break;
      case peano::applications::latticeboltzmann::BoundaryData::MOVING_OBSTACLE_HW_BB:
        movingObstacle = ids[i];
        break;
      case peano::applications::latticeboltzmann::BoundaryData::PRESSURE_OUTLET_HW_BB:
        pressureOutlet = ids[i];
        break;
      case peano::applications::latticeboltzmann::BoundaryData::PRESSURE_INLET_HW_BB:
        pressureInlet = ids[i];
        break;
      case peano::applications::latticeboltzmann::BoundaryData::VELOCITY_INLET_EQUILIBRIUM_DISTRIBUTION:
        velocityInlet =ids[i];
        break;
      default:
        break;
    }
  }

  // determine unique sequence of boundaries
  if ( movingWall < (int) _boundaries.size()){
    logDebug("getUniqueBoundary()", "Pdf " << pdfDirection << " comes from moving wall");
    return movingWall;
  }
  if (movingObstacle < (int) _boundaries.size()){
    logDebug("getUniqueBoundary()", "Pdf " << pdfDirection << " comes from moving obstacle");
    return movingObstacle;
  }
  if (noSlip < (int) _boundaries.size()){
    logDebug("getUniqueBoundary()", "Pdf " << pdfDirection << " comes from noslip wall");
    return noSlip;
  }
  if (velocityInlet < (int) _boundaries.size()){
    logDebug("getUniqueBoundary()", "Pdf " << pdfDirection << " comes from velocity inlet");
    return velocityInlet;
  }
  if (pressureOutlet < (int) _boundaries.size()){
    logDebug("getUniqueBoundary()", "Pdf " << pdfDirection << " comes from pressure outlet");
    return pressureOutlet;
  }
  if (pressureInlet < (int) _boundaries.size()){
    logDebug("getUniqueBoundary()", "Pdf " << pdfDirection << " comes from pressure inlet");
    return pressureInlet;
  }

  return _boundaries.size();
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundaries::
translateGeometryIDsToBoundaryIDs(std::vector<int> ids) const {
  for (unsigned int i = 0; i < ids.size(); i++){
    // take geometry id from ids and translate it into the range id
    ids[i] = _geometry2BoundaryMap.find(ids[i])->second;
  }
}
