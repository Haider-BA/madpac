#include "peano/applications/poisson/vhhjacobi/tests/JacobiBatchJobTest.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::poisson::vhhjacobi::tests::JacobiBatchJobTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif

 
peano::applications::poisson::vhhjacobi::tests::JacobiBatchJobTest::JacobiBatchJobTest():
  tarch::tests::TestCase( "peano::applications::poisson::vhhjacobi::tests::JacobiBatchJobTest" ) {
}


peano::applications::poisson::vhhjacobi::tests::JacobiBatchJobTest::~JacobiBatchJobTest() {
}


void peano::applications::poisson::vhhjacobi::tests::JacobiBatchJobTest::setUp() {
  // @todo If you have to configure your global test object, please do this 
  //       here. Typically this operation remains empty.
}


void peano::applications::poisson::vhhjacobi::tests::JacobiBatchJobTest::run() {
  // @todo If you have further tests, add them here
  testMethod( test1 );
  testMethod( test2 );
  testMethod( test3 );
}


void peano::applications::poisson::vhhjacobi::tests::JacobiBatchJobTest::test1() {
  // @todo Add your test here
  validateEquals(1,1);
}


void peano::applications::poisson::vhhjacobi::tests::JacobiBatchJobTest::test2() {
  // @todo Add your test here
  validateEquals(2,2);
}


void peano::applications::poisson::vhhjacobi::tests::JacobiBatchJobTest::test3() {
  // @todo Add your test here
  validateEquals(3,3);
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
