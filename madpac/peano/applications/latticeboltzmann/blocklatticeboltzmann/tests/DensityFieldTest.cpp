#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/tests/DensityFieldTest.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityFieldTest)


peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityFieldTest::DensityFieldTest():
tarch::tests::TestCase("peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityFieldTest"){}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityFieldTest::run(){
//  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> density(0.0);
//  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex vertex;
//#ifdef Parallel
//  double densityOnBoundary;
//#endif
//
//  for (unsigned int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS; i++){
//    density(i) = (double) i;
//  }
//
//  // set the density field
//  vertex.setDensity(density);
//
//  // get density field from vertex
//  density = vertex.getDensity();
//
//  for (unsigned int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS; i++){
//    validateNumericalEquals( density(i), ((double) i) );
//  }
//
//#ifdef Parallel
//  // get density field on boundary of vertex and check that
//  for (unsigned int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY; i++){
//    densityOnBoundary = vertex.getDensityOnBoundary(i);
//    validateNumericalEquals(densityOnBoundary,density(peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKBOUNDARYINDEX.getBlockIndex(i)));
//  }
//#endif
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityFieldTest::setUp(){}
