#include "peano/applications/puregrid/tests/PuregridBatchJobTest.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::puregrid::tests::PuregridBatchJobTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif

 
peano::applications::puregrid::tests::PuregridBatchJobTest::PuregridBatchJobTest():
  tarch::tests::TestCase( "peano::applications::puregrid::tests::PuregridBatchJobTest" ) {
}


peano::applications::puregrid::tests::PuregridBatchJobTest::~PuregridBatchJobTest() {
}


void peano::applications::puregrid::tests::PuregridBatchJobTest::setUp() {
  // @todo If you have to configure your global test object, please do this 
  //       here. Typically this operation remains empty.
}


void peano::applications::puregrid::tests::PuregridBatchJobTest::run() {
  // @todo If you have further tests, add them here
  testMethod( test1 );
  testMethod( test2 );
  testMethod( test3 );
}


void peano::applications::puregrid::tests::PuregridBatchJobTest::test1() {
  // @todo Add your test here
  validateEquals(1,1);
}


void peano::applications::puregrid::tests::PuregridBatchJobTest::test2() {
  // @todo Add your test here
  validateEquals(2,2);
}


void peano::applications::puregrid::tests::PuregridBatchJobTest::test3() {
  // @todo Add your test here
  validateEquals(3,3);
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
