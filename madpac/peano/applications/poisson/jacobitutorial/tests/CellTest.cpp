#include "peano/applications/poisson/jacobitutorial/tests/CellTest.h"
#include "peano/applications/poisson/jacobitutorial/RegularGridCell.h"
#include "peano/applications/poisson/jacobitutorial/RegularGridVertex.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::poisson::jacobitutorial::tests::CellTest)


peano::applications::poisson::jacobitutorial::tests::CellTest::CellTest():
  TestCase( "peano::applications::poisson::jacobitutorial::tests::CellTest" ) {
}


peano::applications::poisson::jacobitutorial::tests::CellTest::~CellTest() {
}


void peano::applications::poisson::jacobitutorial::tests::CellTest::run() {
  testMethod(testStencilInitialisation);
  testMethod(testResidualCalculation);
}


void peano::applications::poisson::jacobitutorial::tests::CellTest::setUp() {
}



void peano::applications::poisson::jacobitutorial::tests::CellTest::testStencilInitialisation() {
  #ifdef Dim2
  peano::applications::poisson::jacobitutorial::RegularGridCell::initStencil();

  validateNumericalEquals( peano::applications::poisson::jacobitutorial::RegularGridCell::_elementWiseAssemblyMatrix(0,0),  2.0/3.0 );
  validateNumericalEquals( peano::applications::poisson::jacobitutorial::RegularGridCell::_elementWiseAssemblyMatrix(0,1), -1.0/(3.0*2.0) );

  validateNumericalEquals( peano::applications::poisson::jacobitutorial::RegularGridCell::getDiagonalElement(), 4.0 * 2.0/3.0 );
  #endif
}



void peano::applications::poisson::jacobitutorial::tests::CellTest::testResidualCalculation() {
  #if defined(Dim2)
    peano::applications::poisson::jacobitutorial::RegularGridVertex    vertices[4];

    vertices[0].switchToInside();
//    vertices[0].init()
//
//  vertices[ grid::getLocalCellIndex(0) ].setValue( 1.0 );
//  vertices[ grid::getLocalCellIndex(1) ].setValue( 0.0 );
//  vertices[ grid::getLocalCellIndex(2) ].setValue( 0.0 );
//  vertices[ grid::getLocalCellIndex(3) ].setValue( 0.0 );
//
//  solver.applyStencil(vertices,0,1.0,true);
//
//  validateNumericalEquals( vertices[ grid::getLocalCellIndex(0) ].getResidual(), -2.0/3.0, "testResidualCalculationDependingOnLHS()" );
//  validateNumericalEquals( vertices[ grid::getLocalCellIndex(1) ].getResidual(),  1.0/6.0, "testResidualCalculationDependingOnLHS()" );
//  validateNumericalEquals( vertices[ grid::getLocalCellIndex(2) ].getResidual(),  1.0/6.0, "testResidualCalculationDependingOnLHS()" );
//  validateNumericalEquals( vertices[ grid::getLocalCellIndex(3) ].getResidual(),  1.0/3.0, "testResidualCalculationDependingOnLHS()" );
//
//  vertices[ grid::getLocalCellIndex(0) ].clearResidual();
//  vertices[ grid::getLocalCellIndex(1) ].clearResidual();
//  vertices[ grid::getLocalCellIndex(2) ].clearResidual();
//  vertices[ grid::getLocalCellIndex(3) ].clearResidual();
//
//  vertices[ grid::getLocalCellIndex(0) ].setValue( 0.0 );
//  vertices[ grid::getLocalCellIndex(1) ].setValue( 1.0 );
//  vertices[ grid::getLocalCellIndex(2) ].setValue( 0.0 );
//  vertices[ grid::getLocalCellIndex(3) ].setValue( 0.0 );
//
//  solver.applyStencil(vertices,0,1.0,true);
//
//  validateNumericalEquals( vertices[ grid::getLocalCellIndex(0) ].getResidual(),  1.0/6.0, "testResidualCalculationDependingOnLHS()" );
//  validateNumericalEquals( vertices[ grid::getLocalCellIndex(1) ].getResidual(), -2.0/3.0, "testResidualCalculationDependingOnLHS()" );
//  validateNumericalEquals( vertices[ grid::getLocalCellIndex(2) ].getResidual(),  1.0/3.0, "testResidualCalculationDependingOnLHS()" );
//  validateNumericalEquals( vertices[ grid::getLocalCellIndex(3) ].getResidual(),  1.0/6.0, "testResidualCalculationDependingOnLHS()" );
  #endif
}
