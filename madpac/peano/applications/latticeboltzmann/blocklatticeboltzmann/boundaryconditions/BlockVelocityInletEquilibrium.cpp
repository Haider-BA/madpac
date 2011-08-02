#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/BlockVelocityInletEquilibrium.h"


peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockVelocityInletEquilibrium::
BlockVelocityInletEquilibrium():
peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::AbstractBlockBoundaryCondition(){}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockVelocityInletEquilibrium::treatBoundaryAfterCollision(
  const int level,
  const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
  const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
){
  // compute equilibrium distribution and set the value
  tarch::la::Vector<LB_CURRENT_DIR,double> feq(0.0);
  peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKCOMPUTECELLVALUES.computeFeq(
    boundaryData.getDensityL(),boundaryData.getVelocityL(),feq
  );

  pdf(LB_CURRENT_DIR*boundaryDataIndex(0) + LB_CURRENT_DIR-1-boundaryDataIndex(1)) = feq(boundaryDataIndex(1));
}
