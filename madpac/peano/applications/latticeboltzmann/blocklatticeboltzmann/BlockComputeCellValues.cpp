#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockComputeCellValues.h"

peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockComputeCellValues::BlockComputeCellValues(){}

peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockComputeCellValues::~BlockComputeCellValues(){}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::
BlockComputeCellValues::computeFeq(
double density,tarch::la::Vector<DIMENSIONS,double> velocity,
tarch::la::Vector<LB_CURRENT_DIR,double>& feq) const {

  double cu = 0.0;
  for (int i = 0; i < LB_CURRENT_DIR; i++){
	cu = tarch::la::dot(peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i], velocity);
	feq[i] = peano::applications::latticeboltzmann::LATTICEWEIGHTS._entries[i]*density*(
			   1.0
			 + cu/(CS_L_SQUARED)
			 + (cu*cu)/(2.0*CS_L_SQUARED*CS_L_SQUARED)
			 - (tarch::la::dot(velocity,velocity)/(2.0*CS_L_SQUARED)) );
  }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::
BlockComputeCellValues::computeDensity(
const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf,
tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries) const {
  for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS; i++){

	if ( inner[i] && (!hasMinusOneEntries(i))){
	  density(i) = 0.0;
	  for (int p = 0; p < LB_CURRENT_DIR; p++){
        density(i) += pdf(i*LB_CURRENT_DIR+p);
	  }
	}
	//else {
	//  density(i) = 1.0;
	//}
  }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::
BlockComputeCellValues::computeVelocity(
const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf,
const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density,
tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries) const {
  tarch::la::Vector<DIMENSIONS,double> buffer = 0.0;

  for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS; i++){
	  buffer = 0.0;
	  if ( inner[i] && (!hasMinusOneEntries(i)) ){
	    for (int p = 0; p < LB_CURRENT_DIR; p++){
        buffer += pdf[i*LB_CURRENT_DIR+p]*peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[p];
	    }
	    buffer = (1.0/density(i))*buffer;
	  }

	  for (int d = 0; d < DIMENSIONS; d++){
	    velocity(i*DIMENSIONS+d) = buffer(d);
	  }
  }
}
