#include "scenario/latticeboltzmann/blocklatticeboltzmann/services/ReceiveBoundaryDataService.h"

#include "tarch/services/ServiceFactory.h"
registerService(scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService)


tarch::logging::Log
scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService::_log(
  "scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService"
);


scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService::
ReceiveBoundaryDataService(): tarch::services::Service(), _scenario(NULL){}


scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService::
~ReceiveBoundaryDataService(){}


scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService&
scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService::
getInstance(){
  static ReceiveBoundaryDataService singleton;
  return singleton;
}


void scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService::
advance(double dt){
  assertion(_scenario != NULL);
  _scenario->advance(dt);
}

void scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService::init(
  const tarch::la::Vector<DIMENSIONS,double> &domainSize,
  const tarch::la::Vector<DIMENSIONS,double> &domainOffset,
  const double &characteristicVelocity,
  const bool &useParabolicProfile,
  double timePerSineCycle,
  const scenario::latticeboltzmann::blocklatticeboltzmann::ScenarioType &scenarioType,
  peano::geometry::Geometry* builtinGeometry
){
  // reset scenario
  if (_scenario != NULL){
    delete _scenario;
    _scenario = NULL;
  }

  switch(scenarioType){
    // cavity
    case LID_DRIVEN_CAVITY:
      _scenario = new scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4LidDrivenCavity(
                    domainSize,domainOffset,characteristicVelocity
                  );
      break;
    case DEFAULT_CHANNEL:
      // channel scenario (possibly with no-slip boundaries inside the domain; however, no moving obstacles!)
      _scenario = new scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4ChannelWithNoSlipBoundaries(
                    domainSize,domainOffset,characteristicVelocity,useParabolicProfile
                  );
      break;
    case CHANNEL_WITH_MOVING_OBSTACLE:
      // channel scenario using precice
      _scenario = new scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4PreciceChannel(
                    domainSize,domainOffset,characteristicVelocity,useParabolicProfile
                  );
      break;
    case PRECICE_SCENARIO:
      // channel scenario using precice
      _scenario = new scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4PreciceChannel(
                    domainSize,domainOffset,characteristicVelocity,useParabolicProfile
                  );
      break;
    case EMPTY_BOX:
      _scenario = new scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4EmptyBox(
                    domainSize,domainOffset
                  );
      break;
    case MOVING_SPHERE_IN_DRIFT_RATCHET:
      _scenario = new scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4MovingSphereInDriftRatchet(
                    builtinGeometry,
                    domainSize,
                    domainOffset,
                    characteristicVelocity,
                    timePerSineCycle
                  );
      break;
    default:
      logError("init()", "No valid scenario found!");
      break;
  }

  assertion(_scenario != NULL);
}


void scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService::
shutdown(){
  if (_scenario != NULL){
    delete _scenario;
    _scenario = NULL;
  }
}


void scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService::
getBoundaryData(
  const tarch::la::Vector<DIMENSIONS,double> &x,
  const tarch::la::Vector<DIMENSIONS,double> &h,
  const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
  const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &boundary,
  const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
  std::vector<peano::applications::latticeboltzmann::BoundaryData>& boundaryDataBuffer,
  std::vector<tarch::la::Vector<2,unsigned int> >& boundaryDataIndex
) {
  assertion(_scenario != NULL);
  logDebug("getBoundaryData", "Examine vertex " << x << "," << h);

  // size of small LB cells on the vertex
  tarch::la::Vector<DIMENSIONS,double> cellSize(h(0)/((double) LB_BLOCKSIZE));

  // node inside the domain
  tarch::la::Vector<DIMENSIONS,double> node(0.0);
  // node outside the domain (where the lattice velocity points to)
  tarch::la::Vector<DIMENSIONS,double> nextNode(0.0);

  // lower left... position of the very first LB cell
  const tarch::la::Vector<DIMENSIONS,double> start(x-0.5*h+0.5*cellSize);

  // local cell number on vertex
  unsigned int cellNumber = 0;
  // local cell coordinates
  tarch::la::Vector<DIMENSIONS,unsigned int> cellCoords(0);

  // clear buffer and index structure
  boundaryDataBuffer.clear();
  boundaryDataIndex.clear();

#if (DIMENSIONS == 3)
  for (cellCoords(2) = 0; cellCoords(2) < LB_BLOCKSIZE; cellCoords(2)++){
#endif
    for (cellCoords(1) = 0; cellCoords(1) < LB_BLOCKSIZE; cellCoords(1)++){
      for (cellCoords(0) = 0; cellCoords(0) < LB_BLOCKSIZE; cellCoords(0)++){

        cellNumber = cellCoords(0) + cellCoords(1)*LB_BLOCKSIZE
#if (DIMENSIONS == 3)
                   + cellCoords(2)*LB_BLOCKSIZE*LB_BLOCKSIZE
#endif
                   ;

        for (int d = 0; d < DIMENSIONS; d++){
          node(d) = start(d)+cellSize(0)*cellCoords(d);
        }

        // if the node is near a boundary and inside fluid domain, set up boundary flags
        if (inner[cellNumber] && boundary[cellNumber]){
          logDebug("getBoundaryData()", "Cell " << node << " is a boundary cell");
          for (int i = 0; i < LB_CURRENT_DIR; i++){

            nextNode = node + cellSize(0)*peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i];

            // only return boundary state if node in lattice velocity direction
            // is outside the simulation domain
            if (peano::geometry::services::GeometryService::getInstance().getGeometry().isOutsideClosedDomain(nextNode)){

              // push back new buffer and indices
              boundaryDataBuffer.push_back(peano::applications::latticeboltzmann::BoundaryData());
              boundaryDataIndex.push_back(tarch::la::Vector<2,unsigned int>(cellNumber,LB_CURRENT_DIR-1-i));

              // get boundary data information and write it to buffer
              _scenario->getBoundaryData(node,cellSize,LB_CURRENT_DIR-1-i,multiLevelSimData,boundaryDataBuffer[boundaryDataBuffer.size()-1]);
              logDebug("getBoundaryData()", "Cell " << node << ", Pdf " << LB_CURRENT_DIR-1-i << " has boundary type " << boundaryDataBuffer[boundaryDataBuffer.size()-1].getBoundaryType());
            }
          }// loop over all lattice velocities
        }

      }// coords(0)
    }// coords(1)
#if (DIMENSIONS == 3)
  }// coords(2)
#endif

}
