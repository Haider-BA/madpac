#include "scenario/latticeboltzmann/blocklatticeboltzmann/BoundaryData4PreciceChannel.h"


scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4PreciceChannel::
BoundaryData4PreciceChannel(
  const tarch::la::Vector<DIMENSIONS,double> &domainSize,
  const tarch::la::Vector<DIMENSIONS,double> &offset,
  const double &meanInletVelocity,
  const bool &useParabolicProfile
):
scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Channel(domainSize,offset,meanInletVelocity,useParabolicProfile){}


void scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4PreciceChannel::advance(double dt){
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::
  getInstance().sendForcesToSendDataService();
#ifdef Parallel
  peano::integration::partitioncoupling::services::SendDataService::getInstance().synchronizeForces();
#endif
  peano::integration::partitioncoupling::services::CouplingService::getInstance().advance(dt);
}

void scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4PreciceChannel::
fillBoundaryData4InnerBoundaries(
  const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
  const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
  const int& pdfDirection,
  const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
  peano::applications::latticeboltzmann::BoundaryData &boundaryData
){
  // determine meshsize and timestep for simulation
  int level = multiLevelSimData.getSimData(0).getLevel();
  double dt = multiLevelSimData.getSimData(level).getDt();
  double dx = multiLevelSimData.getSimData(level).getDx();

  // determine boundary node (in this case, this is the midpoint between the first node outside the comp. domain
  // (= inside the structure) and the last node inside the comp. domain)
  const tarch::la::Vector<DIMENSIONS,double> boundaryNode(latticeNode + 0.5*latticeWidth(0)*peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[LB_CURRENT_DIR-1-pdfDirection]);
  tarch::la::Vector<DIMENSIONS,double> velocityL(0.0);


  // set boundary type
  boundaryData.setBoundaryType(peano::applications::latticeboltzmann::BoundaryData::MOVING_OBSTACLE_HW_BB);

  // get velocity from structure
  velocityL = peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().getReceiveData().getVelocity(boundaryNode);

  // rescale velocity
  velocityL = velocityL* (dt/dx);

  // set velocity
  boundaryData.setVelocityL(velocityL);
}
