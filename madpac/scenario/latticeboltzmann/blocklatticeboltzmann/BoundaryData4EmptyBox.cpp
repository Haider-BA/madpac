#include "scenario/latticeboltzmann/blocklatticeboltzmann/BoundaryData4EmptyBox.h"


scenario::latticeboltzmann::blocklatticeboltzmann::
BoundaryData4EmptyBox::BoundaryData4EmptyBox(
  const tarch::la::Vector<DIMENSIONS,double> &domainSize,
  const tarch::la::Vector<DIMENSIONS,double> &offset
): _domainSize(domainSize), _offset(offset){}


void scenario::latticeboltzmann::blocklatticeboltzmann::
BoundaryData4EmptyBox::getBoundaryData(
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
  double coords = 0.0;

  // if this is a wall at the box boundary, set the HW_BB flag for no-slip (=half-way bounce back boundary)
  // and return
  for (int d = 0; d < DIMENSIONS; d++){
    coords = peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[LB_CURRENT_DIR-1-pdfDirection](d)*latticeWidth(d)
           + latticeNode(d);
    if ( tarch::la::smaller(coords,_offset(d)) || tarch::la::greater(coords,_domainSize(d)+_offset(d)) ){
      boundaryData.setBoundaryType(
        peano::applications::latticeboltzmann::BoundaryData::HW_BB
      );
      return;
    }
  }


  // if this has not been the outer wall, we consider the boundary to be the boundary of
  // a moving structure or obstacle:
  // set boundary type
  boundaryData.setBoundaryType(peano::applications::latticeboltzmann::BoundaryData::MOVING_OBSTACLE_HW_BB);

  // get velocity from structure
  velocityL = peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().getReceiveData().getVelocity(boundaryNode);
  // rescale velocity
  velocityL = velocityL* (dt/dx);
  // set velocity
  boundaryData.setVelocityL(velocityL);
}
