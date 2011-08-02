/*
 * CalculateFTest.cpp
 *
 *  Created on: Jun 27, 2011
 *      Author: unterweg
 */

#include "CalculateFTest.h"

#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateFDivFree.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateFDlinear.h"

#include "peano/applications/navierstokes/prototype1/fluidnumerics/tests/TestVertexEnumerator.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif

tarch::logging::Log peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::_log("peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest");

const Vector peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::DEFAULT_POSITION(0.0);

peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::CalculateFTest()
: tarch::tests::TestCase( "peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest" ),
  _myCalculateF(0)
{


}

peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::~CalculateFTest()
{
  deleteCalculateF();
}


void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::loadCalculateF(
    const peano::applications::navierstokes::prototype1::ElementType elementType,
    const double      rho,
    const double      eta
) {
  assertion(
      (elementType==peano::applications::navierstokes::prototype1::Dlinear
          || elementType==peano::applications::navierstokes::prototype1::DivergenceFree)
  );

  deleteCalculateF();

  switch(elementType){
  case peano::applications::navierstokes::prototype1::DivergenceFree:
    _log.debug("setCalculateF","AbstractCalculateF pointer is set to CalculateFDivFree");
    _myCalculateF = new CalculateFDivFree(
        eta/rho,
        rho
    );
    break;
  case peano::applications::navierstokes::prototype1::Dlinear:
    _log.debug("setCalculateF","AbstractCalculateF pointer is set to CalculateFDlinear");
    _myCalculateF = new CalculateFDlinear(
        eta/rho,
        rho
    );
    break;
    _log.error("peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::setCalculateF", "Element type not implemented, yet.");
    exit(ASSERTION_EXIT_CODE);
  default:
    assertionFail("Wrong element type in state. Method RegularGrid2CalculateF::setCalculateF(...)");
    _log.error("peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::setCalculateF", "Wrong element type in state. Method RegularGrid2CalculateF::setCalculateF(...)");
    exit(ASSERTION_EXIT_CODE);
  }

  validate(_myCalculateF !=0);
}


void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::deleteCalculateF() {
  if (_myCalculateF!=0) {
    delete _myCalculateF;
    _myCalculateF = 0;
  }
}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::testCalculateFMatrixEntries() {
  double rho       = 1.0;
  //   double rhoPhase2 = 1.0;
  double eta       = 1.0;
  //   double etaPhase2 = 1.0;

  //   AbstractCalculateF* myCalculateFHelper = peano::fluid::OperatorFactory::loadCalculateF(
  //                                  peano::applications::,
  //                                  rho, rhoPhase2, eta, etaPhase2,
  //                                  );

  loadCalculateF(
      peano::applications::navierstokes::prototype1::Dlinear,
      rho,
      eta
  );

  validate(_myCalculateF);

  CalculateFDlinear* myCalculateF = static_cast<CalculateFDlinear*>(_myCalculateF);

  validate(myCalculateF);

  // check summed entries for D
  const int n = NUMBER_OF_VERTICES_PER_ELEMENT;

  tarch::la::DynamicMatrix<double> actualMatrix(n,n,0);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      for (int d=0; d<DIMENSIONS; d++) {
        actualMatrix(i,j) += myCalculateF->_DElementMatrix[i][j][d];
      }
    }
  }

  tarch::la::DynamicMatrix<double> expectedMatrix(n,n,0);

#ifdef Dim2
  expectedMatrix(0,0) =  2.0/3.0;
  expectedMatrix(0,1) = -0.5/3.0;
  expectedMatrix(0,2) = -0.5/3.0;
  expectedMatrix(0,3) = -1.0/3.0;
  expectedMatrix(1,0) = -0.5/3.0;
  expectedMatrix(1,1) =  2.0/3.0;
  expectedMatrix(1,2) = -1.0/3.0;
  expectedMatrix(1,3) = -0.5/3.0;
  expectedMatrix(2,0) = -0.5/3.0;
  expectedMatrix(2,1) = -1.0/3.0;
  expectedMatrix(2,2) =  2.0/3.0;
  expectedMatrix(2,3) = -0.5/3.0;
  expectedMatrix(3,0) = -1.0/3.0;
  expectedMatrix(3,1) = -0.5/3.0;
  expectedMatrix(3,2) = -0.5/3.0;
  expectedMatrix(3,3) =  2.0/3.0;
#elif Dim3
  expectedMatrix(0,0) = 1.0/3.0;
  expectedMatrix(0,1) = 0.0;
  expectedMatrix(0,2) = 0.0;
  expectedMatrix(0,3) = -1.0/12.0;
  expectedMatrix(0,4) = 0.0;
  expectedMatrix(0,5) = -1.0/12.0;
  expectedMatrix(0,6) = -1.0/12.0;
  expectedMatrix(0,7) = -1.0/12.0;

  expectedMatrix(1,0) = 0.0;
  expectedMatrix(1,1) = 1.0/3.0;
  expectedMatrix(1,2) = -1.0/12.0;
  expectedMatrix(1,3) = 0.0;
  expectedMatrix(1,4) = -1.0/12.0;
  expectedMatrix(1,5) = 0.0;
  expectedMatrix(1,6) = -1.0/12.0;
  expectedMatrix(1,7) = -1.0/12.0;

  expectedMatrix(2,0) = 0.0;
  expectedMatrix(2,1) = -1.0/12.0;
  expectedMatrix(2,2) = 1.0/3.0;
  expectedMatrix(2,3) = 0.0;
  expectedMatrix(2,4) = -1.0/12.0;
  expectedMatrix(2,5) = -1.0/12.0;
  expectedMatrix(2,6) = 0.0;
  expectedMatrix(2,7) = -1.0/12.0;

  expectedMatrix(3,0) =  -1.0/12.0;
  expectedMatrix(3,1) = 0.0;
  expectedMatrix(3,2) = 0.0;
  expectedMatrix(3,3) = 1.0/3.0;
  expectedMatrix(3,4) =  -1.0/12.0;
  expectedMatrix(3,5) =  -1.0/12.0;
  expectedMatrix(3,6) =  -1.0/12.0;
  expectedMatrix(3,7) = 0.0;

  expectedMatrix(4,0) = 0.0;
  expectedMatrix(4,1) = -1.0/12.0;
  expectedMatrix(4,2) = -1.0/12.0;
  expectedMatrix(4,3) = -1.0/12.0;
  expectedMatrix(4,4) = 1.0/3.0;
  expectedMatrix(4,5) = 0.0;
  expectedMatrix(4,6) = 0.0;
  expectedMatrix(4,7) = -1.0/12.0;

  expectedMatrix(5,0) = -1.0/12.0;
  expectedMatrix(5,1) = 0.0;
  expectedMatrix(5,2) = -1.0/12.0;
  expectedMatrix(5,3) = -1.0/12.0;
  expectedMatrix(5,4) = 0.0;
  expectedMatrix(5,5) = 1.0/3.0;
  expectedMatrix(5,6) = -1.0/12.0;
  expectedMatrix(5,7) = 0.0;

  expectedMatrix(6,0) = -1.0/12.0;
  expectedMatrix(6,1) = -1.0/12.0;
  expectedMatrix(6,2) = 0.0;
  expectedMatrix(6,3) = -1.0/12.0;
  expectedMatrix(6,4) = 0.0;
  expectedMatrix(6,5) = -1.0/12.0;
  expectedMatrix(6,6) = 1.0/3.0;
  expectedMatrix(6,7) = 0.0;

  expectedMatrix(7,0) = -1.0/12.0;
  expectedMatrix(7,1) = -1.0/12.0;
  expectedMatrix(7,2) = -1.0/12.0;
  expectedMatrix(7,3) = 0.0;
  expectedMatrix(7,4) = -1.0/12.0;
  expectedMatrix(7,5) = 0.0;
  expectedMatrix(7,6) = 0.0;
  expectedMatrix(7,7) = 1.0/3.0;
#endif
  validateEqualsWithParams2(actualMatrix, expectedMatrix , actualMatrix, expectedMatrix);

  deleteCalculateF();
}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::testGravity() {
  double eta = 0.0;
  double rho = 1.0;
  Vector          gravityVector = Vector(0.0);
  gravityVector(1) = 9.81;

  loadCalculateF(
      peano::applications::navierstokes::prototype1::Dlinear,
      rho,
      eta
  );

  validate(_myCalculateF);
  // check correct constructor settings
  validateNumericalVectorEquals(_myCalculateF->_gravityVector, gravityVector);
  // check correct _volumeOfTestFunction
  //#ifdef Dim2
  //  validateNumericalEquals(_myCalculateF->_volumeOfTestFunction, 0.25);
  //#elif Dim3
  //  validateNumericalEquals(_myCalculateF->_volumeOfTestFunction, 0.125);
  //#endif

  Vector h(1.0);

  deleteCalculateF();
}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::testCalculateFBilinearOnOneCell() {
#ifdef Dim2

  Vector h;
  double eta;
  double rho = 1.0;

  const int n = NUMBER_OF_VERTICES_PER_ELEMENT;
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit nodes[n];
  for (int i=0; i<n; i++) {
    nodes[i].setFluidVertexType(
        peano::applications::navierstokes::prototype1::INNER
    );
  }
  const int vertexIndexMapping[NUMBER_OF_VERTICES_PER_ELEMENT] = { 0, 1, 2, 3  }; //this test is 2d only
  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  Vector u;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * First block of tests: eta==0.0, h==1.0
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  eta = 0.0;
  assignList(h) = 1.0, 1.0;
  TestVertexEnumerator vertexEnumerator(vertexIndexMapping, h);

  loadCalculateF( peano::applications::navierstokes::prototype1::Dlinear,
      rho, eta);
  // --------------------------------------------------------------------
  //Test 1: u1=(0,0,0,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);

  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }


  // --------------------------------------------------------------------
  //Test 2: u1=(0,0,1,1), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
  }
  assignList(u) = 1.0, 0.0;
  nodes[2].setU(u);
  nodes[3].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);

  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  // --------------------------------------------------------------------
  //Test 3: u1=(1,0,1,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, 0.0;
  nodes[0].setU(u);
  nodes[2].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  -2.0/12.0 );
  validateNumericalEquals( nodes[1].getF()(0),  -1.0/12.0 );
  validateNumericalEquals( nodes[2].getF()(0),  -2.0/12.0 );
  validateNumericalEquals( nodes[3].getF()(0),  -1.0/12.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  0.0 );
  validateNumericalEquals( nodes[1].getF()(1),  0.0 );
  validateNumericalEquals( nodes[2].getF()(1),  0.0 );
  validateNumericalEquals( nodes[3].getF()(1),  0.0 );

  // --------------------------------------------------------------------
  //Test 4: u1=(1,1,-1,-1), u2=(-1,1,1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=1.0, -1.0;
  nodes[0].setU(u);
  assignList(u)=1.0, 1.0;
  nodes[1].setU(u);
  assignList(u)=-1.0, 1.0;
  nodes[2].setU(u);
  assignList(u)=-1.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),   1.0/18.0 );
  validateNumericalEquals( nodes[1].getF()(0),  -1.0/18.0 );
  validateNumericalEquals( nodes[2].getF()(0),  -1.0/18.0 );
  validateNumericalEquals( nodes[3].getF()(0),   1.0/18.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  1.0/9.0 );
  validateNumericalEquals( nodes[1].getF()(1),  1.0/9.0 );
  validateNumericalEquals( nodes[2].getF()(1),  2.0/9.0 );
  validateNumericalEquals( nodes[3].getF()(1),  2.0/9.0 );

  // --------------------------------------------------------------------
  //Test 5: u1=(0,0,0,0), u2=(0,0,-1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=0.0, 0.0;
  nodes[0].setU(u);
  assignList(u)=0.0, 0.0;
  nodes[1].setU(u);
  assignList(u)=0.0, -1.0;
  nodes[2].setU(u);
  assignList(u)=0.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  0.0 );
  validateNumericalEquals( nodes[1].getF()(0),  0.0 );
  validateNumericalEquals( nodes[2].getF()(0),  0.0 );
  validateNumericalEquals( nodes[3].getF()(0),  0.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  1.0/12.0 );
  validateNumericalEquals( nodes[1].getF()(1),  1.0/12.0 );
  validateNumericalEquals( nodes[2].getF()(1),  2.0/12.0 );
  validateNumericalEquals( nodes[3].getF()(1),  2.0/12.0 );

  // --------------------------------------------------------------------
  //Test 6: u1=(0,0,0,0), u2=(0,0,-3,-3)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=0.0, 0.0;
  nodes[0].setU(u);
  assignList(u)=0.0, 0.0;
  nodes[1].setU(u);
  assignList(u)=0.0, -3.0;
  nodes[2].setU(u);
  assignList(u)=0.0, -3.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  0.0 );
  validateNumericalEquals( nodes[1].getF()(0),  0.0 );
  validateNumericalEquals( nodes[2].getF()(0),  0.0 );
  validateNumericalEquals( nodes[3].getF()(0),  0.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  3.0/4.0 );
  validateNumericalEquals( nodes[1].getF()(1),  3.0/4.0 );
  validateNumericalEquals( nodes[2].getF()(1),  3.0/2.0 );
  validateNumericalEquals( nodes[3].getF()(1),  3.0/2.0 );

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * Second block of tests: eta==1.0, h==1.0
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  eta = 1.0;
  assignList(h) = 1.0, 1.0;
  loadCalculateF( peano::applications::navierstokes::prototype1::Dlinear,
      rho, eta );
  // --------------------------------------------------------------------
  //Test 7: u1=(0,0,0,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);

  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  // --------------------------------------------------------------------
  //Test 8: u1=(0,0,1,1), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u) = 1.0, 0.0;
  nodes[2].setU(u);
  nodes[3].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  -1.0/2.0 );
  validateNumericalEquals( nodes[1].getF()(0),  -1.0/2.0 );
  validateNumericalEquals( nodes[2].getF()(0),   1.0/2.0 );
  validateNumericalEquals( nodes[3].getF()(0),   1.0/2.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  0.0 );
  validateNumericalEquals( nodes[1].getF()(1),  0.0 );
  validateNumericalEquals( nodes[2].getF()(1),  0.0 );
  validateNumericalEquals( nodes[3].getF()(1),  0.0 );


  // --------------------------------------------------------------------
  //Test 9: u1=(1,0,1,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, 0.0;
  nodes[0].setU(u);
  nodes[2].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),   1.0/3.0 );
  validateNumericalEquals( nodes[1].getF()(0), -21.0/36.0 );
  validateNumericalEquals( nodes[2].getF()(0),   1.0/3.0 );
  validateNumericalEquals( nodes[3].getF()(0), -21.0/36.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  0.0 );
  validateNumericalEquals( nodes[1].getF()(1),  0.0 );
  validateNumericalEquals( nodes[2].getF()(1),  0.0 );
  validateNumericalEquals( nodes[3].getF()(1),  0.0 );

  // --------------------------------------------------------------------
  //Test 10: u1=(1,1,-1,-1), u2=(-1,1,1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=1.0, -1.0;
  nodes[0].setU(u);
  assignList(u)=1.0, 1.0;
  nodes[1].setU(u);
  assignList(u)=-1.0, 1.0;
  nodes[2].setU(u);
  assignList(u)=-1.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),   19.0/18.0 );
  validateNumericalEquals( nodes[1].getF()(0),   17.0/18.0 );
  validateNumericalEquals( nodes[2].getF()(0),  -19.0/18.0 );
  validateNumericalEquals( nodes[3].getF()(0),  -17.0/18.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1), -5.0/9.0 );
  validateNumericalEquals( nodes[1].getF()(1),  7.0/9.0 );
  validateNumericalEquals( nodes[2].getF()(1),  8.0/9.0 );
  validateNumericalEquals( nodes[3].getF()(1), -4.0/9.0 );

  // --------------------------------------------------------------------
  //Test 11: u1=(0,0,0,0), u2=(0,0,-1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=0.0, 0.0;
  nodes[0].setU(u);
  assignList(u)=0.0, 0.0;
  nodes[1].setU(u);
  assignList(u)=0.0, -1.0;
  nodes[2].setU(u);
  assignList(u)=0.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  0.0 );
  validateNumericalEquals( nodes[1].getF()(0),  0.0 );
  validateNumericalEquals( nodes[2].getF()(0),  0.0 );
  validateNumericalEquals( nodes[3].getF()(0),  0.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  21.0/36.0 );
  validateNumericalEquals( nodes[1].getF()(1),  21.0/36.0 );
  validateNumericalEquals( nodes[2].getF()(1),  -1.0/3.0 );
  validateNumericalEquals( nodes[3].getF()(1),  -1.0/3.0 );

  // --------------------------------------------------------------------
  //Test 12: u1=(0,0,0,0), u2=(0,0,-3,-3)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=0.0, 0.0;
  nodes[0].setU(u);
  assignList(u)=0.0, 0.0;
  nodes[1].setU(u);
  assignList(u)=0.0, -3.0;
  nodes[2].setU(u);
  assignList(u)=0.0, -3.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  0.0 );
  validateNumericalEquals( nodes[1].getF()(0),  0.0 );
  validateNumericalEquals( nodes[2].getF()(0),  0.0 );
  validateNumericalEquals( nodes[3].getF()(0),  0.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  2.25 );
  validateNumericalEquals( nodes[1].getF()(1),  2.25 );
  validateNumericalEquals( nodes[2].getF()(1),  0.0 );
  validateNumericalEquals( nodes[3].getF()(1),  0.0 );

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * Third block of tests: eta==3.0, h==0.25
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  eta = 3.0;
  assignList(h) = 0.25, 0.25;
  vertexEnumerator = TestVertexEnumerator(vertexIndexMapping, h);
  loadCalculateF( peano::applications::navierstokes::prototype1::Dlinear,
      rho, eta );
  // --------------------------------------------------------------------
  //Test 13: u1=(0,0,0,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);

  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  // --------------------------------------------------------------------
  //Test 14: u1=(0,0,1,1), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u) = 1.0, 0.0;
  nodes[2].setU(u);
  nodes[3].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  -3.0/2.0 );
  validateNumericalEquals( nodes[1].getF()(0),  -3.0/2.0 );
  validateNumericalEquals( nodes[2].getF()(0),   3.0/2.0 );
  validateNumericalEquals( nodes[3].getF()(0),   3.0/2.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  0.0 );
  validateNumericalEquals( nodes[1].getF()(1),  0.0 );
  validateNumericalEquals( nodes[2].getF()(1),  0.0 );
  validateNumericalEquals( nodes[3].getF()(1),  0.0 );


  // --------------------------------------------------------------------
  //Test 15: u1=(1,0,1,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, 0.0;
  nodes[0].setU(u);
  nodes[2].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),   105.0/72.0 );
  validateNumericalEquals( nodes[1].getF()(0),  -219.0/144.0 );
  validateNumericalEquals( nodes[2].getF()(0),   105.0/72.0 );
  validateNumericalEquals( nodes[3].getF()(0),  -219.0/144.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  0.0 );
  validateNumericalEquals( nodes[1].getF()(1),  0.0 );
  validateNumericalEquals( nodes[2].getF()(1),  0.0 );
  validateNumericalEquals( nodes[3].getF()(1),  0.0 );

  // --------------------------------------------------------------------
  //Test 16: u1=(1,1,-1,-1), u2=(-1,1,1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=1.0, -1.0;
  nodes[0].setU(u);
  assignList(u)=1.0, 1.0;
  nodes[1].setU(u);
  assignList(u)=-1.0, 1.0;
  nodes[2].setU(u);
  assignList(u)=-1.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),   217.0/72.0 );
  validateNumericalEquals( nodes[1].getF()(0),   215.0/72.0 );
  validateNumericalEquals( nodes[2].getF()(0),  -217.0/72.0 );
  validateNumericalEquals( nodes[3].getF()(0),  -215.0/72.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  -142.0/72.0 );
  validateNumericalEquals( nodes[1].getF()(1),   146.0/72.0 );
  validateNumericalEquals( nodes[2].getF()(1),   148.0/72.0 );
  validateNumericalEquals( nodes[3].getF()(1),  -140.0/72.0 );

  // --------------------------------------------------------------------
  //Test 17: u1=(0,0,0,0), u2=(0,0,-1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=0.0, 0.0;
  nodes[0].setU(u);
  assignList(u)=0.0, 0.0;
  nodes[1].setU(u);
  assignList(u)=0.0, -1.0;
  nodes[2].setU(u);
  assignList(u)=0.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  0.0 );
  validateNumericalEquals( nodes[1].getF()(0),  0.0 );
  validateNumericalEquals( nodes[2].getF()(0),  0.0 );
  validateNumericalEquals( nodes[3].getF()(0),  0.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  219.0/144.0 );
  validateNumericalEquals( nodes[1].getF()(1),  219.0/144.0 );
  validateNumericalEquals( nodes[2].getF()(1), -105.0/72.0 );
  validateNumericalEquals( nodes[3].getF()(1), -105.0/72.0 );

  // --------------------------------------------------------------------
  //Test 18: u1=(0,0,0,0), u2=(0,0,-3,-3)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=0.0, 0.0;
  nodes[0].setU(u);
  assignList(u)=0.0, 0.0;
  nodes[1].setU(u);
  assignList(u)=0.0, -3.0;
  nodes[2].setU(u);
  assignList(u)=0.0, -3.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  0.0 );
  validateNumericalEquals( nodes[1].getF()(0),  0.0 );
  validateNumericalEquals( nodes[2].getF()(0),  0.0 );
  validateNumericalEquals( nodes[3].getF()(0),  0.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1), 675.0/144.0 );
  validateNumericalEquals( nodes[1].getF()(1), 675.0/144.0 );
  validateNumericalEquals( nodes[2].getF()(1), -33.0/8.0 );
  validateNumericalEquals( nodes[3].getF()(1), -33.0/8.0 );

#endif //Dim2
}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::testCalculateFBilinearOn3x3Grid() {}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::testCalculateFTrilinearOnOneCell()
{
#ifdef Dim3

  Vector h(1.0);
  double rho = 1.0;
  double eta = 0.0;

  // create nodal data
  const int n = NUMBER_OF_VERTICES_PER_ELEMENT;
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit nodes[n];
  for (int i=0; i<n; i++) {
    nodes[i].setFluidVertexType(peano::applications::navierstokes::prototype1::INNER);
  }
  Vector u;
  //assignList(u) = 0.0, 0.0; changed by gatzhamm
  assignList(u) = 0.0, 0.0, 0.0;
  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
    nodes[i].setU(u);
    nodes[i].setFluidVertexType(peano::applications::navierstokes::prototype1::INNER);
  }
  const int vertexIndexMapping[NUMBER_OF_VERTICES_PER_ELEMENT] = { 0, 1, 2, 3, 4, 5, 6, 7 }; //this test is 3d only

  // create cell data
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit cell;
  cell.setFluidCellType(peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::Records::INNER);
  cell.setRhsPPE(0.0);

  //double hPow3;
  //double hPow2;
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * First block of tests: eta==0.0, h==1.0
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  eta = 0.0;
  h = Vector(1.0);
  TestVertexEnumerator vertexEnumerator(vertexIndexMapping, h);

  loadCalculateF( peano::applications::navierstokes::prototype1::Dlinear
      ,rho, eta);
  validate(_myCalculateF->getElementType() == peano::applications::navierstokes::prototype1::Dlinear);

  // --------------------------------------------------------------------
  //Test 1: u_i=Vector(0.0)
  for(int i=0; i<n; i++){
    nodes[i].setU(Vector(0.0));
    nodes[i].resetFValues();
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  // --------------------------------------------------------------------
  //Test 2: u_i=Vector(1.0)
  for(int i=0; i<n; i++){
    nodes[i].setU(Vector(1.0));
    nodes[i].resetFValues();
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getU(),  Vector(1.0) );
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  // --------------------------------------------------------------------
  //Test 3: u_i=Vector(0.77)
  for(int i=0; i<n; i++){
    nodes[i].setU(Vector(0.77));
    nodes[i].resetFValues();
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getU(),  Vector(0.77) );
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  // --------------------------------------------------------------------
  //Test 4: u_i=Vector(0.0)
  for(int i=0; i<n; i++){
    nodes[i].setU(Vector(0.0));
    nodes[i].resetFValues();
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  // --------------------------------------------------------------------
  //Test 5: u_i=Vector(i)
  for(int i=0; i<n; i++){
    nodes[i].setU(Vector(i));
    nodes[i].resetFValues();
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  validateNumericalVectorEquals( nodes[0].getF(),  Vector(2.04166666666667) );
  validateNumericalVectorEquals( nodes[1].getF(),  Vector(2.3333333333333333) );
  validateNumericalVectorEquals( nodes[2].getF(),  Vector(2.625) );
  validateNumericalVectorEquals( nodes[3].getF(),  Vector(2.9166666666666666) );
  validateNumericalVectorEquals( nodes[4].getF(),  Vector(3.20833333333333333) );
  validateNumericalVectorEquals( nodes[5].getF(),  Vector(3.5) );
  validateNumericalVectorEquals( nodes[6].getF(),  Vector(3.79166666666666666) );
  validateNumericalVectorEquals( nodes[7].getF(),  Vector(4.08333333333333333) );


  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * 2nd block of tests: eta==2.0, h==2.0
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  eta = 2.0;
  h = Vector(2.0);
  vertexEnumerator.setCellSize(h);
  loadCalculateF( peano::applications::navierstokes::prototype1::Dlinear,
                  rho, eta);

  // --------------------------------------------------------------------
  //Test 2.1: u_i=Vector(7-i)
  for(int i=0; i<n; i++){
    nodes[i].setU(Vector(7-i));
    nodes[i].resetFValues();
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //attention: the following test values have NOT been computed by hand (a lot
  //           of work), but taken from sims (after fixing Test 5 above).
  validateNumericalVectorEquals( nodes[0].getF(), Vector(-9.33333333333333333) );
  validateNumericalVectorEquals( nodes[1].getF(), Vector(-10.1666666666666666) );
  validateNumericalVectorEquals( nodes[2].getF(), Vector(-11.0) );
  validateNumericalVectorEquals( nodes[3].getF(), Vector(-11.833333333333333) );
  validateNumericalVectorEquals( nodes[4].getF(), Vector(-12.666666666666666) );
  validateNumericalVectorEquals( nodes[5].getF(), Vector(-13.5) );
  validateNumericalVectorEquals( nodes[6].getF(), Vector(-14.333333333333333) );
  validateNumericalVectorEquals( nodes[7].getF(), Vector(-15.166666666666666) );

  deleteCalculateF();

#endif //Dim3
}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::testCalculateFDivFreeOnOneCell() {
#if defined(Dim2)
  Vector h;
  double eta;
  double rho = 1.0;

  const int n = NUMBER_OF_VERTICES_PER_ELEMENT;
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit nodes[n];
  for (int i=0; i<n; i++) {
    nodes[i].setFluidVertexType(
      peano::applications::navierstokes::prototype1::INNER
    );
  }
  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  const int vertexIndexMapping[NUMBER_OF_VERTICES_PER_ELEMENT] = { 0, 1, 2, 3 }; // this test is 2d only
  Vector u;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * First block of tests: eta==0.0, h==1.0
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  eta = 0.0;
  assignList(h) = 1.0, 1.0;
  TestVertexEnumerator vertexEnumerator(vertexIndexMapping, h);

  loadCalculateF( peano::applications::navierstokes::prototype1::DivergenceFree,
                  rho, eta);
  // --------------------------------------------------------------------
  //Test 1: u1=(0,0,0,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);

  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  // --------------------------------------------------------------------
  //Test 2: u1=(0,0,1,1), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
  }
  assignList(u) = 1.0, 0.0;
  nodes[2].setU(u);
  nodes[3].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);

  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  // --------------------------------------------------------------------
  //Test 3: u1=(1,0,1,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, 0.0;
  nodes[0].setU(u);
  nodes[2].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  -2.0/12.0 );
  validateNumericalEquals( nodes[1].getF()(0),  -1.0/12.0 );
  validateNumericalEquals( nodes[2].getF()(0),  -2.0/12.0 );
  validateNumericalEquals( nodes[3].getF()(0),  -1.0/12.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  -1.0/24.0 );
  validateNumericalEquals( nodes[1].getF()(1),   1.0/24.0 );
  validateNumericalEquals( nodes[2].getF()(1),   1.0/24.0 );
  validateNumericalEquals( nodes[3].getF()(1),  -1.0/24.0 );

  // --------------------------------------------------------------------
  //Test 4: u1=(1,1,-1,-1), u2=(-1,1,1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=1.0, -1.0;
  nodes[0].setU(u);
  assignList(u)=1.0, 1.0;
  nodes[1].setU(u);
  assignList(u)=-1.0, 1.0;
  nodes[2].setU(u);
  assignList(u)=-1.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),   1.0/6.0 );
  validateNumericalEquals( nodes[1].getF()(0),  -1.0/6.0 );
  validateNumericalEquals( nodes[2].getF()(0),   0.0 );
  validateNumericalEquals( nodes[3].getF()(0),   0.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  1.0/12.0 );
  validateNumericalEquals( nodes[1].getF()(1),  1.0/12.0 );
  validateNumericalEquals( nodes[2].getF()(1),  1.0/4.0 );
  validateNumericalEquals( nodes[3].getF()(1),  1.0/4.0 );

  // --------------------------------------------------------------------
  //Test 5: u1=(0,0,0,0), u2=(0,0,-1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=0.0, 0.0;
  nodes[0].setU(u);
  assignList(u)=0.0, 0.0;
  nodes[1].setU(u);
  assignList(u)=0.0, -1.0;
  nodes[2].setU(u);
  assignList(u)=0.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  1.0/24.0 );
  validateNumericalEquals( nodes[1].getF()(0), -1.0/24.0 );
  validateNumericalEquals( nodes[2].getF()(0), -1.0/24.0 );
  validateNumericalEquals( nodes[3].getF()(0),  1.0/24.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  1.0/12.0 );
  validateNumericalEquals( nodes[1].getF()(1),  1.0/12.0 );
  validateNumericalEquals( nodes[2].getF()(1),  2.0/12.0 );
  validateNumericalEquals( nodes[3].getF()(1),  2.0/12.0 );

  // --------------------------------------------------------------------
  //Test 6: u1=(0,0,0,0), u2=(0,0,-3,-3)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=0.0, 0.0;
  nodes[0].setU(u);
  assignList(u)=0.0, 0.0;
  nodes[1].setU(u);
  assignList(u)=0.0, -3.0;
  nodes[2].setU(u);
  assignList(u)=0.0, -3.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  3.0/8.0 );
  validateNumericalEquals( nodes[1].getF()(0), -3.0/8.0 );
  validateNumericalEquals( nodes[2].getF()(0), -3.0/8.0 );
  validateNumericalEquals( nodes[3].getF()(0),  3.0/8.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  3.0/4.0 );
  validateNumericalEquals( nodes[1].getF()(1),  3.0/4.0 );
  validateNumericalEquals( nodes[2].getF()(1),  3.0/2.0 );
  validateNumericalEquals( nodes[3].getF()(1),  3.0/2.0 );

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * Second block of tests: eta==1.0, h==1.0
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  eta = 1.0;
  assignList(h) = 1.0, 1.0;
  vertexEnumerator.setCellSize(h);
  loadCalculateF( peano::applications::navierstokes::prototype1::DivergenceFree,
      rho, eta);
  // --------------------------------------------------------------------
  //Test 7: u1=(0,0,0,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);

  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  // --------------------------------------------------------------------
  //Test 8: u1=(0,0,1,1), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u) = 1.0, 0.0;
  nodes[2].setU(u);
  nodes[3].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  -1.0/2.0 );
  validateNumericalEquals( nodes[1].getF()(0),  -1.0/2.0 );
  validateNumericalEquals( nodes[2].getF()(0),   1.0/2.0 );
  validateNumericalEquals( nodes[3].getF()(0),   1.0/2.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  0.0 );
  validateNumericalEquals( nodes[1].getF()(1),  0.0 );
  validateNumericalEquals( nodes[2].getF()(1),  0.0 );
  validateNumericalEquals( nodes[3].getF()(1),  0.0 );


  // --------------------------------------------------------------------
  //Test 9: u1=(1,0,1,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, 0.0;
  nodes[0].setU(u);
  nodes[2].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),   1.0/3.0 );
  validateNumericalEquals( nodes[1].getF()(0), -21.0/36.0 );
  validateNumericalEquals( nodes[2].getF()(0),   1.0/3.0 );
  validateNumericalEquals( nodes[3].getF()(0), -21.0/36.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  -1.0/24.0 );
  validateNumericalEquals( nodes[1].getF()(1),   1.0/24.0 );
  validateNumericalEquals( nodes[2].getF()(1),   1.0/24.0 );
  validateNumericalEquals( nodes[3].getF()(1),  -1.0/24.0 );

  // --------------------------------------------------------------------
  //Test 10: u1=(1,1,-1,-1), u2=(-1,1,1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=1.0, -1.0;
  nodes[0].setU(u);
  assignList(u)=1.0, 1.0;
  nodes[1].setU(u);
  assignList(u)=-1.0, 1.0;
  nodes[2].setU(u);
  assignList(u)=-1.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),   7.0/6.0 );
  validateNumericalEquals( nodes[1].getF()(0),   5.0/6.0 );
  validateNumericalEquals( nodes[2].getF()(0),  -1.0 );
  validateNumericalEquals( nodes[3].getF()(0),  -1.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1), -23.0/12.0 );
  validateNumericalEquals( nodes[1].getF()(1),  25.0/12.0 );
  validateNumericalEquals( nodes[2].getF()(1),  9.0/4.0 );
  validateNumericalEquals( nodes[3].getF()(1), -7.0/4.0 );

  // --------------------------------------------------------------------
  //Test 11: u1=(0,0,0,0), u2=(0,0,-1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=0.0, 0.0;
  nodes[0].setU(u);
  assignList(u)=0.0, 0.0;
  nodes[1].setU(u);
  assignList(u)=0.0, -1.0;
  nodes[2].setU(u);
  assignList(u)=0.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  1.0/24.0 );
  validateNumericalEquals( nodes[1].getF()(0), -1.0/24.0 );
  validateNumericalEquals( nodes[2].getF()(0), -1.0/24.0 );
  validateNumericalEquals( nodes[3].getF()(0),  1.0/24.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),   7.0/12.0 );
  validateNumericalEquals( nodes[1].getF()(1),   7.0/12.0 );
  validateNumericalEquals( nodes[2].getF()(1),  -1.0/3.0 );
  validateNumericalEquals( nodes[3].getF()(1),  -1.0/3.0 );

  // --------------------------------------------------------------------
  //Test 12: u1=(0,0,0,0), u2=(0,0,-3,-3)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=0.0, 0.0;
  nodes[0].setU(u);
  assignList(u)=0.0, 0.0;
  nodes[1].setU(u);
  assignList(u)=0.0, -3.0;
  nodes[2].setU(u);
  assignList(u)=0.0, -3.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  3.0/8.0 );
  validateNumericalEquals( nodes[1].getF()(0), -3.0/8.0 );
  validateNumericalEquals( nodes[2].getF()(0), -3.0/8.0 );
  validateNumericalEquals( nodes[3].getF()(0),  3.0/8.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  2.25 );
  validateNumericalEquals( nodes[1].getF()(1),  2.25 );
  validateNumericalEquals( nodes[2].getF()(1),  0.0 );
  validateNumericalEquals( nodes[3].getF()(1),  0.0 );

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * Third block of tests: eta==3.0, h==0.25
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  eta = 3.0;
  assignList(h) = 0.25, 0.25;
  vertexEnumerator.setCellSize(h);
  loadCalculateF( peano::applications::navierstokes::prototype1::DivergenceFree,
                  rho, eta);
  // --------------------------------------------------------------------
  //Test 13: u1=(0,0,0,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);

  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  // --------------------------------------------------------------------
  //Test 14: u1=(0,0,1,1), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u) = 1.0, 0.0;
  nodes[2].setU(u);
  nodes[3].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  -3.0/2.0 );
  validateNumericalEquals( nodes[1].getF()(0),  -3.0/2.0 );
  validateNumericalEquals( nodes[2].getF()(0),   3.0/2.0 );
  validateNumericalEquals( nodes[3].getF()(0),   3.0/2.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  0.0 );
  validateNumericalEquals( nodes[1].getF()(1),  0.0 );
  validateNumericalEquals( nodes[2].getF()(1),  0.0 );
  validateNumericalEquals( nodes[3].getF()(1),  0.0 );


  // --------------------------------------------------------------------
  //Test 15: u1=(1,0,1,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, 0.0;
  nodes[0].setU(u);
  nodes[2].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),   35.0/24.0 );
  validateNumericalEquals( nodes[1].getF()(0),  -146.0/96.0 );
  validateNumericalEquals( nodes[2].getF()(0),   35.0/24.0 );
  validateNumericalEquals( nodes[3].getF()(0),  -146.0/96.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  -1.0/96.0 );
  validateNumericalEquals( nodes[1].getF()(1),   1.0/96.0 );
  validateNumericalEquals( nodes[2].getF()(1),   1.0/96.0 );
  validateNumericalEquals( nodes[3].getF()(1),  -1.0/96.0 );

  // --------------------------------------------------------------------
  //Test 16: u1=(1,1,-1,-1), u2=(-1,1,1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=1.0, -1.0;
  nodes[0].setU(u);
  assignList(u)=1.0, 1.0;
  nodes[1].setU(u);
  assignList(u)=-1.0, 1.0;
  nodes[2].setU(u);
  assignList(u)=-1.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),   73.0/24.0 );
  validateNumericalEquals( nodes[1].getF()(0),   71.0/24.0 );
  validateNumericalEquals( nodes[2].getF()(0),   -3.0 );
  validateNumericalEquals( nodes[3].getF()(0),   -3.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  -287.0/48.0 );
  validateNumericalEquals( nodes[1].getF()(1),   289.0/48.0 );
  validateNumericalEquals( nodes[2].getF()(1),   291.0/48.0 );
  validateNumericalEquals( nodes[3].getF()(1),  -285.0/48.0 );

  // --------------------------------------------------------------------
  //Test 17: u1=(0,0,0,0), u2=(0,0,-1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=0.0, 0.0;
  nodes[0].setU(u);
  assignList(u)=0.0, 0.0;
  nodes[1].setU(u);
  assignList(u)=0.0, -1.0;
  nodes[2].setU(u);
  assignList(u)=0.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  1.0/96.0 );
  validateNumericalEquals( nodes[1].getF()(0), -1.0/96.0 );
  validateNumericalEquals( nodes[2].getF()(0), -1.0/96.0 );
  validateNumericalEquals( nodes[3].getF()(0),  1.0/96.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1),  73.0/48.0 );
  validateNumericalEquals( nodes[1].getF()(1),  73.0/48.0 );
  validateNumericalEquals( nodes[2].getF()(1), -70.0/48.0 );
  validateNumericalEquals( nodes[3].getF()(1), -70.0/48.0 );

  // --------------------------------------------------------------------
  //Test 18: u1=(0,0,0,0), u2=(0,0,-3,-3)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }
  assignList(u)=0.0, 0.0;
  nodes[0].setU(u);
  assignList(u)=0.0, 0.0;
  nodes[1].setU(u);
  assignList(u)=0.0, -3.0;
  nodes[2].setU(u);
  assignList(u)=0.0, -3.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  //check F1
  validateNumericalEquals( nodes[0].getF()(0),  9.0/96.0 );
  validateNumericalEquals( nodes[1].getF()(0), -9.0/96.0 );
  validateNumericalEquals( nodes[2].getF()(0), -9.0/96.0 );
  validateNumericalEquals( nodes[3].getF()(0),  9.0/96.0 );
  //check F2
  validateNumericalEquals( nodes[0].getF()(1), 225.0/48.0 );
  validateNumericalEquals( nodes[1].getF()(1), 225.0/48.0 );
  validateNumericalEquals( nodes[2].getF()(1), -33.0/8.0 );
  validateNumericalEquals( nodes[3].getF()(1), -33.0/8.0 );

#endif
}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::testAddPressureBoundaryContributionToF() {
  Vector h(0.0);
  double eta = 0.0;

  double     pInlet         = 0.0;
  double     pOutlet        = 0.0;

  const int n = NUMBER_OF_VERTICES_PER_ELEMENT;
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit nodes[n];
  for (int i=0; i<n; i++) {
    nodes[i].setFluidVertexType(
        peano::applications::navierstokes::prototype1::INNER
    );
  }
  const int vertexIndexMapping[NUMBER_OF_VERTICES_PER_ELEMENT] = {
      0, 1, 2, 3
#ifdef Dim3
      , 4, 5, 6, 7
#endif
  };

  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * 1. test: no boundary nodes
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  eta = 0.0;
  h        = Vector(1.0);
  pInlet   = 0.0;
  pOutlet  = 0.0;
  const double    dummyRho     = 1.0;
  Vector position(0.0);
  TestVertexEnumerator vertexEnumerator(vertexIndexMapping, h);

  loadCalculateF( peano::applications::navierstokes::prototype1::Dlinear,
      dummyRho, eta);
  _myCalculateF->addPressureBoundaryContributionToF(nodes, vertexEnumerator);

  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * 2. test: inlet boundary nodes, no pressure data
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    if (i%2==0) {
      nodes[i].setBoundaryType(
        peano::applications::navierstokes::prototype1::INFLOW
      );
      nodes[i].setFluidVertexType(
        peano::applications::navierstokes::prototype1::NEUMANN
      );
    }
  }

  _myCalculateF->addPressureBoundaryContributionToF(nodes, vertexEnumerator);

  for(int i=0; i<n; i++){
    validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );
  }

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * 3. test: inlet boundary nodes, delta p = 11.0
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  eta = 0.0;
  h        = Vector(1.0);
  vertexEnumerator.setCellSize(h);
  pInlet   =  6.0;
  pOutlet  = -5.0;

  loadCalculateF( peano::applications::navierstokes::prototype1::Dlinear,
                  dummyRho, eta );

  _myCalculateF->addPressureBoundaryContributionToF(nodes, vertexEnumerator);

  double hFactor = 1.0;
#ifdef Dim2
  hFactor = h(0) * 0.5;
#elif Dim3
  hFactor = h(0)*h(0) * 0.25;
#endif
  Vector checkVectorIn(0.0);
  checkVectorIn(0) = hFactor * (-1.0) * pInlet;

  for(int i=0; i<n; i++){
    if (i%2==0) { validateNumericalVectorEquals( nodes[i].getF(),  checkVectorIn );}
    else {        validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) ); }
  }

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * 4. test: inlet boundary nodes, delta p = 5.0, h=Vector(1/3)
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  pInlet   = -3.0;
  pOutlet  = -8.0;
  h = Vector(1.0/3.0);

  loadCalculateF( peano::applications::navierstokes::prototype1::Dlinear,
                  dummyRho, eta );

  _myCalculateF->addPressureBoundaryContributionToF(nodes, vertexEnumerator);
  _myCalculateF->addGravityPressureBoundaryContributionToF(nodes, vertexEnumerator);

#ifdef Dim2
  hFactor = h(0) * 0.5;
#elif Dim3
  hFactor = h(0)*h(0) * 0.25;
#endif
  checkVectorIn    = Vector(0.0);
  checkVectorIn(0) = hFactor * (-1.0) * pInlet;


  for(int i=0; i<n; i++){
    if (i%2==0) { validateNumericalVectorEquals( nodes[i].getF(),  checkVectorIn );}
    else {        validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) ); }
  }


  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * 5. test: oulet boundary nodes, delta p = 5.0, h=Vector(1/4)
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
    if (i%2==1) {
      nodes[i].setFluidVertexType(
        peano::applications::navierstokes::prototype1::NEUMANN
      );
      nodes[i].setBoundaryType(
        peano::applications::navierstokes::prototype1::OUTFLOW
      );
    }
    else {
      nodes[i].setFluidVertexType(
        peano::applications::navierstokes::prototype1::INNER
      );
      nodes[i].setBoundaryType(
        peano::applications::navierstokes::prototype1::BOUNDARY_TYPE_UNDEF
      );
    }
  }

  pInlet   =  1.5;
  pOutlet  = -7.5;
  h = Vector(0.25);
  vertexEnumerator.setCellSize( h );

  loadCalculateF( peano::applications::navierstokes::prototype1::Dlinear,
                  dummyRho, eta);

  _myCalculateF->addPressureBoundaryContributionToF(nodes, vertexEnumerator);

#ifdef Dim2
  hFactor = h(0) * 0.5;
#elif Dim3
  hFactor = h(0)*h(0) * 0.25;
#endif
  Vector checkVectorOut(0.0);
  checkVectorOut(0) = hFactor * pOutlet;

  for(int i=0; i<n; i++){
    if (i%2==0) { validateNumericalVectorEquals( nodes[i].getF(),  Vector(0.0) );}
    else {        validateNumericalVectorEquals( nodes[i].getF(),  checkVectorOut ); }
  }


#if !defined(Dim2) && !defined(Dim3)
  _log.warning("testAddPressureBoundaryContributionToF()","not implemented in dim!=2,3");
#endif //Dim2
}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::testAddPressureAndGravityBoundaryContributionToF() {}



void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::run() {
  testMethod( testCalculateFMatrixEntries );
//  //TODO
//  //  testMethod( testGravity );
  testMethod( testCalculateFBilinearOnOneCell );
  testMethod( testCalculateFTrilinearOnOneCell );
  //TODO Wird fuer 3D erstmal nicht benoetigt
  //testMethod( testCalculateFDivFreeOnOneCell );
  //TODO brauchen wir das momentan?
//  testMethod( testAddPressureBoundaryContributionToF );
}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest::setUp() {}
