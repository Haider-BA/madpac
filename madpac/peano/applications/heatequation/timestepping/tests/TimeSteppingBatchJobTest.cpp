#include "peano/applications/heatequation/timestepping/tests/TimeSteppingBatchJobTest.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::heatequation::timestepping::tests::TimeSteppingBatchJobTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif

 
peano::applications::heatequation::timestepping::tests::TimeSteppingBatchJobTest::TimeSteppingBatchJobTest():
  tarch::tests::TestCase( "peano::applications::heatequation::timestepping::tests::TimeSteppingBatchJobTest" ) {
}


peano::applications::heatequation::timestepping::tests::TimeSteppingBatchJobTest::~TimeSteppingBatchJobTest() {
}


void peano::applications::heatequation::timestepping::tests::TimeSteppingBatchJobTest::setUp() {
  // @todo If you have to configure your global test object, please do this 
  //       here. Typically this operation remains empty.
}


void peano::applications::heatequation::timestepping::tests::TimeSteppingBatchJobTest::run() {
  // @todo If you have further tests, add them here
  testMethod( test1 );
  testMethod( test2 );
  testMethod( test3 );
}


void peano::applications::heatequation::timestepping::tests::TimeSteppingBatchJobTest::test1() {
  // @todo Add your test here
  validateEquals(1,1);
}


void peano::applications::heatequation::timestepping::tests::TimeSteppingBatchJobTest::test2() {
  // @todo Add your test here
  validateEquals(2,2);
}


void peano::applications::heatequation::timestepping::tests::TimeSteppingBatchJobTest::test3() {
  // @todo Add your test here
  validateEquals(3,3);
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
