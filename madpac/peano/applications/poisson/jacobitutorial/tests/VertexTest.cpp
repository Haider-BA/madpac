#include "peano/applications/poisson/jacobitutorial/tests/VertexTest.h"
#include "peano/applications/poisson/jacobitutorial/RegularGridVertex.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::poisson::jacobitutorial::tests::VertexTest)


peano::applications::poisson::jacobitutorial::tests::VertexTest::VertexTest():
  TestCase( "peano::applications::poisson::jacobitutorial::tests::VertexTest" ) {
}


peano::applications::poisson::jacobitutorial::tests::VertexTest::~VertexTest() {
}


void peano::applications::poisson::jacobitutorial::tests::VertexTest::run() {
  testMethod(testInitialValues);
  testMethod(testGetResidual);
}


void peano::applications::poisson::jacobitutorial::tests::VertexTest::setUp() {
}


void peano::applications::poisson::jacobitutorial::tests::VertexTest::testGetResidual() {
  #ifdef Dim2
  peano::applications::poisson::jacobitutorial::RegularGridVertex vertex;
  vertex.switchToInside();

  tarch::la::Vector<DIMENSIONS,double> h;
  assignList(h)= 0.4,0.5;
  double scaling = h(0) * h(1);

  vertex.init( 0.1, 0.4, h);

  validateNumericalEquals( vertex.getRhs(),      scaling * 0.4 );
  validateNumericalEquals( vertex.getResidual(), scaling * 0.4 - 0.0 );
  #endif
}


void peano::applications::poisson::jacobitutorial::tests::VertexTest::testInitialValues() {
  peano::applications::poisson::jacobitutorial::RegularGridVertex vertex;
  vertex.switchToInside();

  validateNumericalEquals( vertex.getU(),        0.0 );
  validateNumericalEquals( vertex.getResidual(), 0.0 );
  validateNumericalEquals( vertex.getRhs(),      0.0 );
}
