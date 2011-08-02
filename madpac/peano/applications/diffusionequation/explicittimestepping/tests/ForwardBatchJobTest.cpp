#include "peano/applications/diffusionequation/explicittimestepping/tests/ForwardBatchJobTest.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::diffusionequation::explicittimestepping::tests::ForwardBatchJobTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif

 
peano::applications::diffusionequation::explicittimestepping::tests::ForwardBatchJobTest::ForwardBatchJobTest():
  tarch::tests::TestCase( "peano::applications::diffusionequation::explicittimestepping::tests::ForwardBatchJobTest" ) {
}


peano::applications::diffusionequation::explicittimestepping::tests::ForwardBatchJobTest::~ForwardBatchJobTest() {
}


void peano::applications::diffusionequation::explicittimestepping::tests::ForwardBatchJobTest::setUp() {
  // @todo If you have to configure your global test object, please do this 
  //       here. Typically this operation remains empty.
}


void peano::applications::diffusionequation::explicittimestepping::tests::ForwardBatchJobTest::run() {
  // @todo If you have further tests, add them here
  testMethod( test1 );
  testMethod( test2 );
  testMethod( test3 );
}


void peano::applications::diffusionequation::explicittimestepping::tests::ForwardBatchJobTest::test1() {
  // @todo Add your test here
  validateEquals(1,1);
}


void peano::applications::diffusionequation::explicittimestepping::tests::ForwardBatchJobTest::test2() {
  // @todo Add your test here
  validateEquals(2,2);
}


void peano::applications::diffusionequation::explicittimestepping::tests::ForwardBatchJobTest::test3() {
  // @todo Add your test here
  validateEquals(3,3);
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
