#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/BlockMovingWall.h"


tarch::logging::Log
peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockMovingWall::_log("peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockMovingWall");

peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::
BlockMovingWall::BlockMovingWall():
peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::AbstractBlockBoundaryCondition(){}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::
BlockMovingWall::treatBoundaryAfterCollision(
  const int level,
  const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
  const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
){

  // compute acceleration part for pdf pointing out of the domain
  double ciVel = 0.0;
  ciVel = boundaryData.getVelocityL()*peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[LB_CURRENT_DIR-1-boundaryDataIndex(1)];
  ciVel = ciVel*2.0*peano::applications::latticeboltzmann::LATTICEWEIGHTS._entries[LB_CURRENT_DIR-1-boundaryDataIndex(1)]*density(boundaryDataIndex(0))/(CS_L_SQUARED);

  // subtract the acceleration part. This pdf will later be swapped onto the right position (i.e. pointing into the comp. domain)
  pdf(boundaryDataIndex(0)*LB_CURRENT_DIR+LB_CURRENT_DIR-1-boundaryDataIndex(1)) -= ciVel;
  logDebug("treatBoundaryAfterCollision()", "Treat cell-index pair (" \
    << boundaryDataIndex(0) << "," \
    << boundaryDataIndex(1) << ") at moving wall, current value: " \
    << pdf(boundaryDataIndex(0)*LB_CURRENT_DIR+LB_CURRENT_DIR-1-boundaryDataIndex(1)) );

}
