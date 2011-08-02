#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/BlockAbstractPressureCondition.h"

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockAbstractPressureCondition::_log("peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockAbstractPressureCondition");

peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockAbstractPressureCondition::
BlockAbstractPressureCondition():
peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::AbstractBlockBoundaryCondition(){}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockAbstractPressureCondition::
treatBoundaryAfterCollision(
  const int level,
  const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
  const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
){
  tarch::la::Vector<DIMENSIONS,double> targetVelocity(0.0);
  tarch::la::Vector<LB_CURRENT_DIR,double> feq(0.0);
  double targetDensity = 0.0;
  // determine local velocity
  getVelocity(boundaryData,boundaryDataIndex,velocity,targetVelocity);
  getDensity(boundaryData,boundaryDataIndex,density,targetDensity);

  // determine equilibrium distribution
  peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKCOMPUTECELLVALUES.computeFeq(
    targetDensity,targetVelocity,feq
  );

  // set the pdf pdf_in = -pdf_out + feq_out + feq_in (the pdf which is actually set currently points outwards,
  // however, after streaming, it will be swapped to the correct position)
  logDebug("treatBoundaryAfterCollision()", "Treat pressure boundary for cell " << boundaryDataIndex(0) << "," << boundaryDataIndex(1));
  pdf(LB_CURRENT_DIR*boundaryDataIndex(0) + LB_CURRENT_DIR-1-boundaryDataIndex(1)) =
    -pdf(LB_CURRENT_DIR*boundaryDataIndex(0) + LB_CURRENT_DIR-1-boundaryDataIndex(1))
    +feq(boundaryDataIndex(1)) + feq(LB_CURRENT_DIR-1-boundaryDataIndex(1));
}
