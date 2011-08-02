#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/BlockHalfwayBounceBack.h"


tarch::logging::Log
peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockHalfwayBounceBack::_log("peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockHalfwayBounceBack");

peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockHalfwayBounceBack::BlockHalfwayBounceBack():
peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::AbstractBlockBoundaryCondition(){}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::
BlockHalfwayBounceBack::treatBoundaryAfterCollision(
  const int level,
  const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
  const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
){
  // nop -> the pdf which is going to be streamed into the domain is already at the right position
  // (-> there is no streaming with outer cells, so that the pdf pointing out of the domain will be swapped
  // to its incoming position right after the streaming is finished)
  logDebug("treatBoundaryAfterCollision()", "Treat cell-index pair (" \
    << boundaryDataIndex(0) << "," \
    << boundaryDataIndex(1) << ") at no-slip-wall, current value: " \
    << pdf(boundaryDataIndex(0)*LB_CURRENT_DIR+LB_CURRENT_DIR-1-boundaryDataIndex(1)) );
}
