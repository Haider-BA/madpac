#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/tests/BoxRangeTest.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BoxRangeTest)


peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BoxRangeTest::BoxRangeTest():
tarch::tests::TestCase("peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BoxRangeTest"){}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BoxRangeTest::run(){
//  // set up a box range object ----------------------------------
//  tarch::la::Vector<DIMENSIONS,double> width(0.0);
//  tarch::la::Vector<DIMENSIONS,double> offset(1.0);
//  tarch::la::Vector<DIMENSIONS,double> normal(0.0);
//  tarch::la::Vector<2*DIMENSIONS,bool> isOpen(false);
//  peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData configData;
//  configData.setBoundaryType(peano::applications::latticeboltzmann::BoundaryData::NO_SLIP_WALL);
//  assertion(configData.getBoundaryType() == peano::applications::latticeboltzmann::BoundaryData::NO_SLIP_WALL);
//
//  for (int d = 1; d < DIMENSIONS; d++){
//    width(d) = 1.0;
//  }
//  normal(0) = 1.0;
//
//  peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoxRange boxRange(
//    width,
//    offset,
//    normal,
//    isOpen,
//    configData
//  );
//
//  // ---------------------------- do tests on box range
//  tarch::la::Vector<DIMENSIONS,double> x(1.0);
//  tarch::la::Vector<DIMENSIONS,double> h(0.1);
//  assertion(boxRange.liesInRange(x,h));
//  validate(boxRange.liesInRange(x,h));
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BoxRangeTest::setUp(){}
