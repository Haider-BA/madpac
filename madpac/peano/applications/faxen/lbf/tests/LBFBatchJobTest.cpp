#include "peano/applications/faxen/lbf/tests/LBFBatchJobTest.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::faxen::lbf::tests::LBFBatchJobTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif

 
peano::applications::faxen::lbf::tests::LBFBatchJobTest::LBFBatchJobTest():
  tarch::tests::TestCase( "peano::applications::faxen::lbf::tests::LBFBatchJobTest" ) {
}


peano::applications::faxen::lbf::tests::LBFBatchJobTest::~LBFBatchJobTest() {
}


void peano::applications::faxen::lbf::tests::LBFBatchJobTest::setUp() {
  // @todo If you have to configure your global test object, please do this 
  //       here. Typically this operation remains empty.
}


void peano::applications::faxen::lbf::tests::LBFBatchJobTest::run() {
  // @todo If you have further tests, add them here
  testMethod( test1 );
  testMethod( test2 );
  testMethod( test3 );
}


void peano::applications::faxen::lbf::tests::LBFBatchJobTest::test1() {
  // @todo Add your test here
  validateEquals(1,1);
}


void peano::applications::faxen::lbf::tests::LBFBatchJobTest::test2() {
  // @todo Add your test here
  validateEquals(2,2);
}


void peano::applications::faxen::lbf::tests::LBFBatchJobTest::test3() {
  // @todo Add your test here
  validateEquals(3,3);
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
