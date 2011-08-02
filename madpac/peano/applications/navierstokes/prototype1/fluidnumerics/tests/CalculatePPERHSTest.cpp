#include "peano/applications/navierstokes/prototype1/fluidnumerics/tests/CalculatePPERHSTest.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculatePPERHSEnhancedDivFree.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculatePPERHSDlinear.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/AbstractCalculateF.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateFDlinear.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateFDivFree.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/tests/TestVertexEnumerator.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateInverseA.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest)


const Vector peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest::DEFAULT_POSITION(0.0);


tarch::logging::Log peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest::_log(
  "peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest"
);


peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest::CalculatePPERHSTest():
  TestCase( "peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest" ),
  _myCalculateF(0) {
}


peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest::~CalculatePPERHSTest(){
  deleteCalculateF();
}


void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest::loadCalculateF(
  const peano::applications::navierstokes::prototype1::ElementType elementType,
  const double      rho,
  const double      eta
) {
  assertion(
      (elementType==peano::applications::navierstokes::prototype1::Dlinear
          || elementType==peano::applications::navierstokes::prototype1::DivergenceFree
          || elementType==peano::applications::navierstokes::prototype1::EnhancedDivergenceFree)
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


void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest::deleteCalculateF() {
  if (_myCalculateF!=0) {
    delete _myCalculateF;
    _myCalculateF = 0;
  }
}


void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest::testCalculatePPERHSBilinearOnOneCell() {
#ifdef Dim2

  peano::applications::navierstokes::prototype1::fluidnumerics::CalculateInverseA  myInvA(1.0, 1.0);

  Vector h;
  double eta;
  double rho = 1.0;

  // create nodal data
  const int n = NUMBER_OF_VERTICES_PER_ELEMENT;
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit nodes[n];
  for (int i=0; i<n; i++) {
    nodes[i].setFluidVertexType(peano::applications::navierstokes::prototype1::INNER);
  }
  for(int i=0; i<n; i++){
    validateNumericalEquals( nodes[i].getF()(0),  0.0 );
    validateNumericalEquals( nodes[i].getF()(1),  0.0 );
  }
  const int vertexIndexMapping[NUMBER_OF_VERTICES_PER_ELEMENT] = { 0, 1, 2, 3 }; // this test is 2d only
  Vector u;

  // create cell data
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit cell;
  cell.setFluidCellType(
    peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::Records::INNER
  );
  cell.setRhsPPE(0.0);

  // set everything concerning the geo scenario
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].setFluidVertexType(
      peano::applications::navierstokes::prototype1::INNER
    );
  }

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * First block of tests: eta==0.0, h==1.0
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  eta = 0.0;
  assignList(h) = 1, 1;
  peano::applications::navierstokes::prototype1::fluidnumerics::tests::TestVertexEnumerator vertexEnumerator( vertexIndexMapping, h );
  for(int i=0; i<n; i++){
    nodes[i].resetA();
  }
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  for(int i=0; i<n; i++){
    validateNumericalEquals( nodes[i].getInverseA(),  1.0/(h[0]*h[0]) );
  }
  peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSDlinear myCalcPPERHS(1.0, 1.0);

  loadCalculateF(peano::applications::navierstokes::prototype1::Dlinear,
                 rho, eta);
  // --------------------------------------------------------------------
  //Test 1: u1=(0,0,0,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);

  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  0.0 );

  // --------------------------------------------------------------------
  //Test 2: u1=(0,0,1,1), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, 0.0;
  nodes[2].setU(u);
  nodes[3].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);

  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  0.0 );

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
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  78.0/72.0 );

  // --------------------------------------------------------------------
  //Test 4: u1=(1,1,-1,-1), u2=(-1,1,1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, -1.0;
  nodes[0].setU(u);
  assignList(u) = 1.0, 1.0;
  nodes[1].setU(u);
  assignList(u) = -1.0, 1.0;
  nodes[2].setU(u);
  assignList(u) = -1.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  1.0/9.0 );


  // --------------------------------------------------------------------
  //Test 5: u1=(0,0,0,0), u2=(0,0,-1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  assignList(u) = 0.0, 0.0;
  nodes[0].setU(u);
  assignList(u) = 0.0, 0.0;
  nodes[1].setU(u);
  assignList(u) = 0.0, -1.0;
  nodes[2].setU(u);
  assignList(u) = 0.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  78.0/72.0 );

  // --------------------------------------------------------------------
  //Test 6: u1=(0,0,0,0), u2=(0,0,-3,-3)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  assignList(u) = 0.0, 0.0;
  nodes[0].setU(u);
  assignList(u) = 0.0, 0.0;
  nodes[1].setU(u);
  assignList(u) = 0.0, -3.0;
  nodes[2].setU(u);
  assignList(u) = 0.0, -3.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  15.0/4.0 );

  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  // Second block of tests: eta==1.0, h==1.0
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  eta = 1.0;
  h[0] = 1.0;
  h[1] = 1.0;
  for(int i=0; i<n; i++){
    nodes[i].resetA();
  }
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  for(int i=0; i<n; i++){
    validateNumericalEquals( nodes[i].getInverseA(),  1.0/(h[0]*h[0]) );
  }
  loadCalculateF(peano::applications::navierstokes::prototype1::Dlinear,
                 rho,eta);
  // --------------------------------------------------------------------
  //Test 7: u1=(0,0,0,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);

  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  0.0 );

  // --------------------------------------------------------------------
  //Test 8: u1=(0,0,1,1), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, 0.0;
  nodes[2].setU(u);
  nodes[3].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  0.0 );

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
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  6.0/72.0 );

  // --------------------------------------------------------------------
  //Test 10: u1=(1,1,-1,-1), u2=(-1,1,1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, -1.0;
  nodes[0].setU(u);
  assignList(u) = 1.0, 1.0;
  nodes[1].setU(u);
  assignList(u) = -1.0, 1.0;
  nodes[2].setU(u);
  assignList(u) = -1.0,-1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  1.0/9.0 );

  // --------------------------------------------------------------------
  //Test 11: u1=(0,0,0,0), u2=(0,0,-1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  assignList(u) = 0.0, 0.0;
  nodes[0].setU(u);
  assignList(u) = 0.0, 0.0;
  nodes[1].setU(u);
  assignList(u) = 0.0, -1.0;
  nodes[2].setU(u);
  assignList(u) = 0.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  6.0/72.0 );

  // --------------------------------------------------------------------
  //Test 12: u1=(0,0,0,0), u2=(0,0,-3,-3)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  assignList(u) = 0.0, 0.0;
  nodes[0].setU(u);
  assignList(u) = 0.0, 0.0;
  nodes[1].setU(u);
  assignList(u) = 0.0, -3.0;
  nodes[2].setU(u);
  assignList(u) = 0.0, -3.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  3.0/4.0 );

  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  // Third block of tests: eta==3.0, h==0.25
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  eta = 3.0;
  h[0] = 0.25;
  h[1] = 0.25;
  Vector cellSize(h[0],h[1]);
  vertexEnumerator.setCellSize(cellSize);
  for(int i=0; i<n; i++){
    nodes[i].resetA();
  }

  myInvA.accumulateAValues(nodes, vertexEnumerator);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  for(int i=0; i<n; i++){
    validateNumericalEquals( nodes[i].getInverseA(),  1.0/(h[0]*h[0]) );
  }

  loadCalculateF(peano::applications::navierstokes::prototype1::Dlinear,
                 rho, eta);
  // --------------------------------------------------------------------
  //Test 13: u1=(0,0,0,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);

  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  0.0 );

  // --------------------------------------------------------------------
  //Test 14: u1=(0,0,1,1), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, 0.0;
  nodes[2].setU(u);
  nodes[3].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  0.0 );

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
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  -35.0/3.0 );

  // --------------------------------------------------------------------
  //Test 16: u1=(1,1,-1,-1), u2=(-1,1,1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, -1.0;
  nodes[0].setU(u);
  assignList(u) = 1.0, 1.0;
  nodes[1].setU(u);
  assignList(u) = -1.0, 1.0;
  nodes[2].setU(u);
  assignList(u) = -1.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  1.0/9.0 );

  // --------------------------------------------------------------------
  //Test 17: u1=(0,0,0,0), u2=(0,0,-1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  assignList(u) = 0.0, 0.0;
  nodes[0].setU(u);
  assignList(u) = 0.0, 0.0;
  nodes[1].setU(u);
  assignList(u) = 0.0, -1.0;
  nodes[2].setU(u);
  assignList(u) = 0.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  -35.0/3.0 );

  // --------------------------------------------------------------------
  //Test 18: u1=(0,0,0,0), u2=(0,0,-3,-3)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  assignList(u) = 0.0, 0.0;
  nodes[0].setU(u);
  assignList(u) = 0.0, 0.0;
  nodes[1].setU(u);
  assignList(u) = 0.0, -3.0;
  nodes[2].setU(u);
  assignList(u) = 0.0, -3.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  -69.0/2.0 );


  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  // Fourth block of tests: eta==3.0, h==0.25, adjFac==0
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  eta = 3.0;
  h[0] = 0.25;
  h[1] = 0.25;
  for(int i=0; i<n; i++){
    nodes[i].resetA();
  }
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  for(int i=0; i<n; i++){
    validateNumericalEquals( nodes[i].getInverseA(),  1.0/(h[0]*h[0]) );
  }
  peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSDlinear myCalcPPERHS4(0.0, 1.0);
  loadCalculateF(peano::applications::navierstokes::prototype1::Dlinear,
                 rho, eta);
  // --------------------------------------------------------------------
  //Test 19: u1=(0,0,0,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);

  myCalcPPERHS4.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  0.0 );

  // --------------------------------------------------------------------
  //Test 20: u1=(0,0,1,1), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, 0.0;
  nodes[2].setU(u);
  nodes[3].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS4.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  0.0 );

  // --------------------------------------------------------------------
  //Test 21: u1=(1,0,1,0), u2=(0,0,0,0)
  assignList(u) = 0.0, 0.0;
  for(int i=0; i<n; i++){
    nodes[i].setU(u);
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, 0.0;
  nodes[0].setU(u);
  nodes[2].setU(u);
  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS4.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  -858.0/72.0 );

  // --------------------------------------------------------------------
  //Test 22: u1=(1,1,-1,-1), u2=(-1,1,1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  assignList(u) = 1.0, -1.0;
  nodes[0].setU(u);
  assignList(u) = 1.0, 1.0;
  nodes[1].setU(u);
  assignList(u) = -1.0, 1.0;
  nodes[2].setU(u);
  assignList(u) = -1.0,-1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS4.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  1.0/9.0 );

  // --------------------------------------------------------------------
  //Test 23: u1=(0,0,0,0), u2=(0,0,-1,-1)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  assignList(u) = 0.0, 0.0;
  nodes[0].setU(u);
  assignList(u) = 0.0, 0.0;
  nodes[1].setU(u);
  assignList(u) = 0.0, -1.0;
  nodes[2].setU(u);
  assignList(u) = 0.0, -1.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS4.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  -858.0/72.0 );

  // --------------------------------------------------------------------
  //Test 24: u1=(0,0,0,0), u2=(0,0,-3,-3)
  for(int i=0; i<n; i++){
    nodes[i].resetFValues();
  }
  assignList(u) = 0.0, 0.0;
  nodes[0].setU(u);
  assignList(u) = 0.0, 0.0;
  nodes[1].setU(u);
  assignList(u) = 0.0, -3.0;
  nodes[2].setU(u);
  assignList(u) = 0.0, -3.0;
  nodes[3].setU(u);

  _myCalculateF->accumulateFValues(nodes, vertexEnumerator);
  myCalcPPERHS4.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);

  validateNumericalEquals( cell.getRhsPPE(),  -141.0/4.0 );

#endif //Dim2
}


void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest::testCalculatePPERHSTrilinearOnOneCell3D() {
#ifdef Dim3

  peano::applications::navierstokes::prototype1::fluidnumerics::CalculateInverseA  myInvA(1.0,1.0);

  Vector h(1.0);

  // create nodal data
  const int n = NUMBER_OF_VERTICES_PER_ELEMENT;
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit nodes[n];
  for (int i=0; i<n; i++) {
    nodes[i].setFluidVertexType(peano::applications::navierstokes::prototype1::INNER);
  }
  const int vertexIndexMapping[NUMBER_OF_VERTICES_PER_ELEMENT] = { 0, 1, 2, 3, 4, 5, 6, 7 }; // this test is 3d only
  TestVertexEnumerator vertexEnumerator(vertexIndexMapping, h);

  Vector u(0.0);
  for(int i=0; i<n; i++){
    validateNumericalEquals( nodes[i].getF()(0),  0.0 );
    validateNumericalEquals( nodes[i].getF()(1),  0.0 );
    validateNumericalEquals( nodes[i].getF()(2),  0.0 );
    nodes[i].setU(u);
    nodes[i].setFluidVertexType(peano::applications::navierstokes::prototype1::INNER);
  }

  // create cell data
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit cell;
  cell.setFluidCellType(peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit::Records::INNER);
  cell.setRhsPPE(0.0);

  double hPow3;
  double hPow2;
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * First block of tests: h==1.0, tau==1.0, adjustmentFactor==1.0
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSDlinear myCalcPPERHS(1.0, 1.0);
  h = Vector(1.0);
  hPow3 = h(0)*h(1)*h(2);
  hPow2 = h(0)*h(1);
  for(int i=0; i<n; i++){
    nodes[i].resetA();
  }
  for(int i=0; i<n; i++){
    myInvA.accumulateAValues(nodes, vertexEnumerator);
  }
  for(int i=0; i<n; i++){
    validateNumericalEquals( nodes[i].getInverseA(),  1.0 / hPow3 );
  }

  // --------------------------------------------------------------------
  //Test 1: u_i=Vector(0.0), F_i=Vector(0.0)
  for(int i=0; i<n; i++){
    nodes[i].setU(Vector(0.0));
    nodes[i].resetFValues();
  }
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);
  validateNumericalEquals( cell.getRhsPPE(),  0.0 );

  // --------------------------------------------------------------------
  //Test 2: u_i=Vector(0.0), F_i=Vector(1.0)
  for(int i=0; i<n; i++){
    nodes[i].setU(Vector(0.0));
    nodes[i].setF(Vector(1.0));
  }
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);
  validateNumericalEquals( cell.getRhsPPE(),  0.0 / hPow3 );

  // --------------------------------------------------------------------
  //Test 3: u_i=Vector(0.0), F_i=Vector(i);
  for(int i=0; i<n; i++){
    nodes[i].setU(Vector(0.0));
    nodes[i].setF( Vector(i) );
    assertion( tarch::la::equals(nodes[i].getF()(0),  (double)i) );
    assertion( tarch::la::equals(nodes[i].getF()(1),  (double)i) );
    assertion( tarch::la::equals(nodes[i].getF()(2),  (double)i) );
  }
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);
  validateNumericalEquals( cell.getRhsPPE(),  7.0 / h(0) );

  // --------------------------------------------------------------------
  //Test 4: u_i=Vector(0.0), F_i=Dim*i;
  for(int i=0; i<n; i++){
    nodes[i].setU(Vector(0.0));
    Vector temp(0.0);
    assignList(temp) = 1*i, 2*i, 3*i;
    nodes[i].setF( temp );
  }
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);
  validateNumericalEquals( cell.getRhsPPE(),  17.0 / h(0) );

  // --------------------------------------------------------------------
  //Test 5: u_i=Vector(1.0), F_i=Vector(0.0)
  for(int i=0; i<n; i++){
    nodes[i].setU(Vector(1.0));
    nodes[i].resetFValues();
  }
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);
  validateNumericalEquals( cell.getRhsPPE(),  0.0 );

  // --------------------------------------------------------------------
  //Test 6: u_i=Vector(i), F_i=Vector(0.0)
  for(int i=0; i<n; i++){
    nodes[i].setU(Vector(i));
    nodes[i].resetFValues();
  }
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);
  validateNumericalEquals( cell.getRhsPPE(),  -7.0 * hPow2 );

  // --------------------------------------------------------------------
  //Test 7: u_i=Vector(i), F_i=Vector(0.0)
  for(int i=0; i<n; i++){
    Vector temp(0.0);
    assignList(temp) = 1*i, 2*i, 3*i;
    nodes[i].setU(temp);
    nodes[i].resetFValues();
  }
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);
  validateNumericalEquals( cell.getRhsPPE(),  -17.0 * hPow2 );

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   * 2nd block of tests: h==0.5, tau==0.25, adjustmentFactor==1.0
   * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  myCalcPPERHS.setNewTimeStepSizeTau(0.25);
  h = Vector(0.5);
  vertexEnumerator.setCellSize(h);
  hPow3 = h(0)*h(1)*h(2);
  hPow2 = h(0)*h(1);
  for(int i=0; i<n; i++){
    nodes[i].resetA();
  }
  for(int i=0; i<n; i++){
    myInvA.accumulateAValues(nodes, vertexEnumerator);
  }
  for(int i=0; i<n; i++){
    validateNumericalEquals( nodes[i].getInverseA(),  1.0 / hPow3 );
  }

  // --------------------------------------------------------------------
  //Test 8: u_i=Vector(0.0), F_i=Dim*i;
  for(int i=0; i<n; i++){
    nodes[i].setU(Vector(0.0));
    Vector temp(0.0);
    assignList(temp) = 1*i, 2*i, 3*i;
    nodes[i].setF( temp );
  }
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);
  validateNumericalEquals( cell.getRhsPPE(),  17.0 / h(0) );

  // --------------------------------------------------------------------
  //Test 9: u_i=Vector(i), F_i=Vector(0.0)
  for(int i=0; i<n; i++){
    Vector temp(0.0);
    assignList(temp) = 1*i, 2*i, 3*i;
    nodes[i].setU(temp);
    nodes[i].resetFValues();
  }
  myCalcPPERHS.calculateCellPPERightHandSide(nodes, vertexEnumerator, cell);
  validateNumericalEquals( cell.getRhsPPE(),  -17.0 * hPow2 / 0.25 );

#endif //Dim3
}


void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest::run(){
  testCalculatePPERHSBilinearOnOneCell();
  testCalculatePPERHSTrilinearOnOneCell3D();
}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest::setUp() {

}

