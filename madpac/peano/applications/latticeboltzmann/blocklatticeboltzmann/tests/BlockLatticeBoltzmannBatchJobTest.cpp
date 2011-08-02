#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/tests/BlockLatticeBoltzmannBatchJobTest.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BlockLatticeBoltzmannBatchJobTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif

 
peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BlockLatticeBoltzmannBatchJobTest::BlockLatticeBoltzmannBatchJobTest():
  tarch::tests::TestCase( "peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BlockLatticeBoltzmannBatchJobTest" ) {
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BlockLatticeBoltzmannBatchJobTest::~BlockLatticeBoltzmannBatchJobTest() {
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BlockLatticeBoltzmannBatchJobTest::setUp() {
  // @todo If you have to configure your global test object, please do this 
  //       here. Typically this operation remains empty.
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BlockLatticeBoltzmannBatchJobTest::run() {
  // @todo If you have further tests, add them here
  testMethod( test1 );
  testMethod( test2 );
  testMethod( test3 );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BlockLatticeBoltzmannBatchJobTest::test1() {
  // @todo Add your test here
  validateEquals(1,1);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BlockLatticeBoltzmannBatchJobTest::test2() {
  // @todo Add your test here
  validateEquals(2,2);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BlockLatticeBoltzmannBatchJobTest::test3() {
  // @todo Add your test here
  validateEquals(3,3);
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
