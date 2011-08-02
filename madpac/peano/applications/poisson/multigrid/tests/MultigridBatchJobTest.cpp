#include "peano/applications/poisson/multigrid/tests/MultigridBatchJobTest.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::poisson::multigrid::tests::MultigridBatchJobTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif

 
peano::applications::poisson::multigrid::tests::MultigridBatchJobTest::MultigridBatchJobTest():
  tarch::tests::TestCase( "peano::applications::poisson::multigrid::tests::MultigridBatchJobTest" ) {
}


peano::applications::poisson::multigrid::tests::MultigridBatchJobTest::~MultigridBatchJobTest() {
}


void peano::applications::poisson::multigrid::tests::MultigridBatchJobTest::setUp() {
  // @todo If you have to configure your global test object, please do this 
  //       here. Typically this operation remains empty.
}


void peano::applications::poisson::multigrid::tests::MultigridBatchJobTest::run() {
  // @todo If you have further tests, add them here
  testMethod( test1 );
  testMethod( test2 );
  testMethod( test3 );
}


void peano::applications::poisson::multigrid::tests::MultigridBatchJobTest::test1() {
  // @todo Add your test here
  validateEquals(1,1);
}


void peano::applications::poisson::multigrid::tests::MultigridBatchJobTest::test2() {
  // @todo Add your test here
  validateEquals(2,2);
}


void peano::applications::poisson::multigrid::tests::MultigridBatchJobTest::test3() {
  // @todo Add your test here
  validateEquals(3,3);
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
