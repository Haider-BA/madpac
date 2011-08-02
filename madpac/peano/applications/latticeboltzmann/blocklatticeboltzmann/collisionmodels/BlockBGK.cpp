#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/BlockBGK.h"

tarch::logging::Log
peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockBGK::
_log("peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockBGK");



peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockBGK::BlockBGK(
  double tau
):
peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel(),
_tau(tau){
  logDebug("BlockBGK(tau)", "tau is initialised with " << _tau);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockBGK::collide(
const int &cellNumber,
const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
const tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE,double>& velocity,
tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf,
const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries
) const {

  tarch::la::Vector<LB_CURRENT_DIR,double> feq = 0.0;
  tarch::la::Vector<DIMENSIONS,double> localVelocity = 0.0;


  // in all inner cells, get velocity and density and compute equilibrium
  // distribution
  for (int d = 0; d < DIMENSIONS; d++){
    localVelocity(d) = velocity(cellNumber*DIMENSIONS+d);
  }

	peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKCOMPUTECELLVALUES.computeFeq(
	  density(cellNumber),localVelocity,feq
	);

  // perform relaxation towards equilibrium
	for (int p = 0; p < LB_CURRENT_DIR; p++){
    pdf(cellNumber*LB_CURRENT_DIR+p) -= 1.0/_tau*(pdf(cellNumber*LB_CURRENT_DIR+p) - feq(p));
	}
}
