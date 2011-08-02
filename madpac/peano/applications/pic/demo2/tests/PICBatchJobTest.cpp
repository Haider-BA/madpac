#include "peano/applications/pic/demo2/tests/PICBatchJobTest.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::pic::demo2::tests::PICBatchJobTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif

 
peano::applications::pic::demo2::tests::PICBatchJobTest::PICBatchJobTest():
  tarch::tests::TestCase( "peano::applications::pic::demo2::tests::PICBatchJobTest" ) {
}


peano::applications::pic::demo2::tests::PICBatchJobTest::~PICBatchJobTest() {
}


void peano::applications::pic::demo2::tests::PICBatchJobTest::setUp() {
  // @todo If you have to configure your global test object, please do this 
  //       here. Typically this operation remains empty.
}


void peano::applications::pic::demo2::tests::PICBatchJobTest::run() {
  // @todo If you have further tests, add them here
  testMethod( test1 );
  testMethod( test2 );
  testMethod( test3 );
}


void peano::applications::pic::demo2::tests::PICBatchJobTest::test1() {
  // @todo Add your test here
  validateEquals(1,1);
}


void peano::applications::pic::demo2::tests::PICBatchJobTest::test2() {
  // @todo Add your test here
  validateEquals(2,2);
}


void peano::applications::pic::demo2::tests::PICBatchJobTest::test3() {
  // @todo Add your test here
  validateEquals(3,3);
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
