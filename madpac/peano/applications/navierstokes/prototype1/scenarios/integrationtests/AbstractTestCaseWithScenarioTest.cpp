//#include "peano/applications/navierstokes/prototype1/scenarios/integrationtests/AbstractTestCaseWithScenarioTest.h"
//
//
//tarch::utils::Log peano::fluidscenario::AbstractTestCaseWithScenarioTest::_log("peano::fluidscenario::AbstractTestCaseWithScenarioTest");
//
//
//peano::fluidscenario::AbstractTestCaseWithScenarioTest::AbstractTestCaseWithScenarioTest():
//  AbstractTestCaseWithScenario( "peano::fluidscenario::AbstractTestCaseWithScenarioTest" ) {
//}
//
//
//peano::fluidscenario::AbstractTestCaseWithScenarioTest::~AbstractTestCaseWithScenarioTest(){
//}
//
//
//void peano::fluidscenario::AbstractTestCaseWithScenarioTest::testAreIntArrays1Equal() {
//  // check vectors
//  tarch::la::DynamicVector<int> actualArray(5);
//  actualArray = 0;
//  tarch::la::DynamicVector<int> expectedArray(5);
//  expectedArray = 0;
//  int check = actualArray.exactEqualsReturnIndex(expectedArray);
//  validateEqualsWithParams3(check, -1 , "testAreIntArrays1Equal()", check, actualArray(check), expectedArray(check));
//
//  expectedArray(0) = 22;
//  actualArray(0)   = 22;
//  check = actualArray.exactEqualsReturnIndex(expectedArray);
//  validateEqualsWithParams3(check, -1 , "testAreIntArrays1Equal()", check, actualArray(check), expectedArray(check));
//
//  expectedArray(4) = 1;
//  check = actualArray.exactEqualsReturnIndex(expectedArray);
//  validateEqualsWithParams3(check, 4 , "testAreIntArrays1Equal()", check, actualArray(check), expectedArray(check));
//
//  expectedArray(4) = 0;
//  expectedArray(3) = -500;
//  check = actualArray.exactEqualsReturnIndex(expectedArray);
//  validateEqualsWithParams3(check, 3 , "testAreIntArrays1Equal()", check, actualArray(check), expectedArray(check));
//
//}
//
//
//void peano::fluidscenario::AbstractTestCaseWithScenarioTest::testAreIntArrays2Equal() {
//  // check vectors
//  tarch::la::DynamicMatrix<int> actualArray(5,6);
//  actualArray = 0;
//  tarch::la::DynamicMatrix<int> expectedArray(5,6);
//  expectedArray = 0;
//  int check = actualArray.exactEqualsReturnIndex(expectedArray);
//  validateEqualsWithParams1(check, -1 , "testAreIntArrays2Equal()", check);
//
//  expectedArray(0,0) = 22;
//  actualArray(0,0)   = 22;
//  check = actualArray.exactEqualsReturnIndex(expectedArray);
//  validateEqualsWithParams1(check, -1 , "testAreIntArrays2Equal()", check);
//
//  expectedArray(4,2) = -3;
//  actualArray(4,2)   = -3;
//  check = actualArray.exactEqualsReturnIndex(expectedArray);
//  validateEqualsWithParams1(check, -1 , "testAreIntArrays2Equal()", check);
//
//  expectedArray(4,0) = 1;
//  check = actualArray.exactEqualsReturnIndex(expectedArray);
//  validateEqualsWithParams1(check, 4 , "testAreIntArrays2Equal()", check);
//
//  expectedArray(4,5) = 0;
//  expectedArray(3,5) = -500;
//  check = actualArray.exactEqualsReturnIndex(expectedArray);
//  validateEqualsWithParams1(check, 3 , "testAreIntArrays2Equal()", check);
//
//}
//
//
//void peano::fluidscenario::AbstractTestCaseWithScenarioTest::testareArrays2NumericallyEqual() {
//
//  // check vectors
//  tarch::la::DynamicVector<double> actualArray(5);
//  actualArray = 0;
//  tarch::la::DynamicVector<double> expectedArray(5);
//  expectedArray = 0;
//  int check = actualArray.defaultNumericalEqualsReturnIndex(expectedArray);
//  validateEqualsWithParams3(check, -1 , "testareArrays2NumericallyEqual()", check, actualArray(check), expectedArray(check));
//
//  expectedArray(4) = 1.0;
//  check = actualArray.defaultNumericalEqualsReturnIndex(expectedArray);
//  validateEqualsWithParams3(check, 4 , "testareArrays2NumericallyEqual()", check, actualArray(check), expectedArray(check));
//
//}
//
//
//void peano::fluidscenario::AbstractTestCaseWithScenarioTest::testAreArrays2NumericallyEqual() {
//
//  tarch::la::DynamicMatrix<double> actualMatrix(15,10);
//  actualMatrix = 0;
//  tarch::la::DynamicMatrix<double> expectedMatrix(15,10);
//  expectedMatrix = 0;
//  int check = actualMatrix.defaultNumericalEqualsReturnIndex(expectedMatrix);
//  validateEqualsWithParams1(check, -1 , "testareArrays2NumericallyEqual()", check);
//
//  expectedMatrix = 1.55;
//  actualMatrix = 1.55;
//  check = actualMatrix.defaultNumericalEqualsReturnIndex(expectedMatrix);
//  validateEqualsWithParams1(check, -1 , "testareArrays2NumericallyEqual()", check);
//
//  expectedMatrix(14,9) = 1e-5;
//  actualMatrix(14,9)   = 2e-5;
//  check = actualMatrix.defaultNumericalEqualsReturnIndex(expectedMatrix);
//  validateEqualsWithParams1(check, 14 , "testareArrays2NumericallyEqual()", check);
//
//}
//
//
//void peano::fluidscenario::AbstractTestCaseWithScenarioTest::run(){
//  testAreIntArrays1Equal();
//  testAreIntArrays2Equal();
//  testareArrays2NumericallyEqual();
//  testAreArrays2NumericallyEqual();
//  _log.debug("run()","terminating AbstractTestCaseWithScenarioTest tests");
//}

