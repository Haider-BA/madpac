#include "peano/applications/puregrid/tests/GridConstructionMovieBatchJobTest.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::puregrid::tests::GridConstructionMovieBatchJobTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif

 
peano::applications::puregrid::tests::GridConstructionMovieBatchJobTest::GridConstructionMovieBatchJobTest():
  tarch::tests::TestCase( "peano::applications::puregrid::tests::GridConstructionMovieBatchJobTest" ) {
}


peano::applications::puregrid::tests::GridConstructionMovieBatchJobTest::~GridConstructionMovieBatchJobTest() {
}


void peano::applications::puregrid::tests::GridConstructionMovieBatchJobTest::setUp() {
  // @todo If you have to configure your global test object, please do this 
  //       here. Typically this operation remains empty.
}


void peano::applications::puregrid::tests::GridConstructionMovieBatchJobTest::run() {
  // @todo If you have further tests, add them here
  testMethod( test1 );
  testMethod( test2 );
  testMethod( test3 );
}


void peano::applications::puregrid::tests::GridConstructionMovieBatchJobTest::test1() {
  // @todo Add your test here
  validateEquals(1,1);
}


void peano::applications::puregrid::tests::GridConstructionMovieBatchJobTest::test2() {
  // @todo Add your test here
  validateEquals(2,2);
}


void peano::applications::puregrid::tests::GridConstructionMovieBatchJobTest::test3() {
  // @todo Add your test here
  validateEquals(3,3);
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
