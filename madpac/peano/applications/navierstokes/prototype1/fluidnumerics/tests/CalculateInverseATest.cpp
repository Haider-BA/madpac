/*
 * CalculateFTest.cpp
 *
 *  Created on: Jul 7, 2011
 *      Author: liebm
 */

#include "CalculateInverseATest.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateInverseA.h"

#include "peano/applications/navierstokes/prototype1/fluidnumerics/tests/TestVertexEnumerator.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"


tarch::logging::Log peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateInverseATest::_log("peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateInverseATest");


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateInverseATest)



peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateInverseATest::CalculateInverseATest():
  TestCase( "peano::fluid::AssembleQAdapterTest" ) {
}


peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateInverseATest::~CalculateInverseATest(){
}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateInverseATest::run(){
  testMethod( testCalculateInverseAOnOneCell );
  testMethod( testCalculateInverseA3x3 );
}

void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateInverseATest::setUp() {}


void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateInverseATest::testCalculateInverseAOnOneCell() {
#ifdef Dim3
  const int n = 8;
  Vector h(1.0);
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit nodes[n];
  const int vertexIndexMapping[NUMBER_OF_VERTICES_PER_ELEMENT] = { 0, 1, 2, 3, 4, 5, 6, 7  }; //this test is 3d only
  TestVertexEnumerator vertexEnumerator(vertexIndexMapping, h);
  for (int i=0; i<n; i++) {
    nodes[i].setFluidVertexType(peano::applications::navierstokes::prototype1::INNER);
  }

  for(int i=0; i<n; i++){
    validateNumericalEquals( nodes[i].getA(),  0.0 );
  }

  for(int d=0; d<DIMENSIONS; d++){
    validateNumericalEquals( h(d),  1.0 );
  }

  peano::applications::navierstokes::prototype1::fluidnumerics::CalculateInverseA  myInvA(1.0,1.0);

  myInvA.accumulateAValues(nodes, vertexEnumerator);

  for(int i=0; i<n; i++){
    validateNumericalEquals( nodes[i].getInverseA(),  8.0 / (h(0)*h(1)*h(2)) );
  }
#endif
}


void peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateInverseATest::testCalculateInverseA3x3() {
  #if defined(Dim2)

  /*
   * First Test case: 3x3 cells -> 16 nodes
   *                  Dirichlet on global boundary
   */
  const int n = 16;
  FluidTestVertex nodes[n];
  int vertexIndexMapping[NUMBER_OF_VERTICES_PER_ELEMENT] = { 0, 1, 2, 3 }; //this test is 2d only
  Vector h(1.0,1.0);
  TestVertexEnumerator vertexEnumerator(vertexIndexMapping, h);

  for (int i=0; i<n; i++) {
    nodes[i].setFluidVertexType(DIRICHLET);
  }
  nodes[5].setFluidVertexType(INNER);
  nodes[6].setFluidVertexType(INNER);
  nodes[9].setFluidVertexType(INNER);
  nodes[10].setFluidVertexType(INNER);

  for(int i=0; i<n; i++){
    validateNumericalEquals( nodes[i].getA(),  0.0 );
  }

  peano::applications::navierstokes::prototype1::fluidnumerics::CalculateInverseA  myInvA(1.0,1.0);

  // cell 1 (bottom left; then lexicographic)
  vertexIndexMapping[0] = 0;
  vertexIndexMapping[1] = 1;
  vertexIndexMapping[2] = 4;
  vertexIndexMapping[3] = 5;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);

  // cell 2
  vertexIndexMapping[0] = 1;
  vertexIndexMapping[1] = 2;
  vertexIndexMapping[2] = 5;
  vertexIndexMapping[3] = 6;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 3
  vertexIndexMapping[0] = 2;
  vertexIndexMapping[1] = 3;
  vertexIndexMapping[2] = 6;
  vertexIndexMapping[3] = 7;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 4
  vertexIndexMapping[0] = 4;
  vertexIndexMapping[1] = 5;
  vertexIndexMapping[2] = 8;
  vertexIndexMapping[3] = 9;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 5
  vertexIndexMapping[0] = 5;
  vertexIndexMapping[1] = 6;
  vertexIndexMapping[2] = 9;
  vertexIndexMapping[3] = 10;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 6
  vertexIndexMapping[0] = 6;
  vertexIndexMapping[1] = 7;
  vertexIndexMapping[2] = 10;
  vertexIndexMapping[3] = 11;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 7
  vertexIndexMapping[0] = 8;
  vertexIndexMapping[1] = 9;
  vertexIndexMapping[2] = 12;
  vertexIndexMapping[3] = 13;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 8
  vertexIndexMapping[0] = 9;
  vertexIndexMapping[1] = 10;
  vertexIndexMapping[2] = 13;
  vertexIndexMapping[3] = 14;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 9
  vertexIndexMapping[0] = 10;
  vertexIndexMapping[1] = 11;
  vertexIndexMapping[2] = 14;
  vertexIndexMapping[3] = 15;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);

  //check corners
  validateNumericalEquals( nodes[0].getInverseA(),  4.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[3].getInverseA(),  4.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[12].getInverseA(),  4.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[15].getInverseA(),  4.0 / (h[0]*h[0]) );
  //check edges
  validateNumericalEquals( nodes[1].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[2].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[4].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[7].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[8].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[11].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[13].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[14].getInverseA(),  2.0 / (h[0]*h[0]) );
  //check inner points
  validateNumericalEquals( nodes[5].getInverseA(),  1.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[6].getInverseA(),  1.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[9].getInverseA(),  1.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[10].getInverseA(),  1.0 / (h[0]*h[0]) );

  /*
   * 2. Test case: 3x3 cells -> 16 nodes
   *               Dirichlet on global boundary, second cell out
   */
  for (int i=0; i<n; i++) {
    nodes[i].setFluidVertexType(DIRICHLET);
    nodes[i].resetA();
  }
  nodes[9].setFluidVertexType(INNER);
  nodes[10].setFluidVertexType(INNER);

  for(int i=0; i<n; i++){
    validateNumericalEquals( nodes[i].getA(),  0.0 );
  }

  h = Vector(1.0,1.0);

  // cell 1 (bottom left; then lexicographic)
  vertexIndexMapping[0] = 0;
  vertexIndexMapping[1] = 1;
  vertexIndexMapping[2] = 4;
  vertexIndexMapping[3] = 5;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 2
  // not used because outer cell!
  // cell 3
  vertexIndexMapping[0] = 2;
  vertexIndexMapping[1] = 3;
  vertexIndexMapping[2] = 6;
  vertexIndexMapping[3] = 7;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 4
  vertexIndexMapping[0] = 4;
  vertexIndexMapping[1] = 5;
  vertexIndexMapping[2] = 8;
  vertexIndexMapping[3] = 9;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 5
  vertexIndexMapping[0] = 5;
  vertexIndexMapping[1] = 6;
  vertexIndexMapping[2] = 9;
  vertexIndexMapping[3] = 10;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 6
  vertexIndexMapping[0] = 6;
  vertexIndexMapping[1] = 7;
  vertexIndexMapping[2] = 10;
  vertexIndexMapping[3] = 11;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 7
  vertexIndexMapping[0] = 8;
  vertexIndexMapping[1] = 9;
  vertexIndexMapping[2] = 12;
  vertexIndexMapping[3] = 13;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 8
  vertexIndexMapping[0] = 9;
  vertexIndexMapping[1] = 10;
  vertexIndexMapping[2] = 13;
  vertexIndexMapping[3] = 14;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 9
  vertexIndexMapping[0] = 10;
  vertexIndexMapping[1] = 11;
  vertexIndexMapping[2] = 14;
  vertexIndexMapping[3] = 15;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);

  //check corners
  validateNumericalEquals( nodes[0].getInverseA(),  4.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[1].getInverseA(),  4.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[2].getInverseA(),  4.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[3].getInverseA(),  4.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[12].getInverseA(),  4.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[15].getInverseA(),  4.0 / (h[0]*h[0]) );
  //check special corners
  validateNumericalEquals( nodes[5].getInverseA(),  4.0 / (3.0*h[0]*h[0]) );
  validateNumericalEquals( nodes[6].getInverseA(),  4.0 / (3.0*h[0]*h[0]) );
  //check edges
  validateNumericalEquals( nodes[4].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[7].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[8].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[11].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[13].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[14].getInverseA(),  2.0 / (h[0]*h[0]) );
  //check inner points
  validateNumericalEquals( nodes[9].getInverseA(),  1.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[10].getInverseA(),  1.0 / (h[0]*h[0]) );

  /*
   * 3. Test case: 3x3 cells -> 16 nodes, h==0.25
   *               Dirichlet on global boundary, second cell out
   */
  for (int i=0; i<n; i++) {
    nodes[i].resetA();
  }

  for(int i=0; i<n; i++){
    validateNumericalEquals( nodes[i].getA(),  0.0 );
  }

  h = Vector(0.25,0.25);

  // cell 1 (bottom left; then lexicographic)
  vertexIndexMapping[0] = 0;
  vertexIndexMapping[1] = 1;
  vertexIndexMapping[2] = 4;
  vertexIndexMapping[3] = 5;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 2
  // not used because outer cell!
  // cell 3
  vertexIndexMapping[0] = 2;
  vertexIndexMapping[1] = 3;
  vertexIndexMapping[2] = 6;
  vertexIndexMapping[3] = 7;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 4
  vertexIndexMapping[0] = 4;
  vertexIndexMapping[1] = 5;
  vertexIndexMapping[2] = 8;
  vertexIndexMapping[3] = 9;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 5
  vertexIndexMapping[0] = 5;
  vertexIndexMapping[1] = 6;
  vertexIndexMapping[2] = 9;
  vertexIndexMapping[3] = 10;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 6
  vertexIndexMapping[0] = 6;
  vertexIndexMapping[1] = 7;
  vertexIndexMapping[2] = 10;
  vertexIndexMapping[3] = 11;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 7
  vertexIndexMapping[0] = 8;
  vertexIndexMapping[1] = 9;
  vertexIndexMapping[2] = 12;
  vertexIndexMapping[3] = 13;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 8
  vertexIndexMapping[0] = 9;
  vertexIndexMapping[1] = 10;
  vertexIndexMapping[2] = 13;
  vertexIndexMapping[3] = 14;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);
  // cell 9
  vertexIndexMapping[0] = 10;
  vertexIndexMapping[1] = 11;
  vertexIndexMapping[2] = 14;
  vertexIndexMapping[3] = 15;
  vertexEnumerator.resetIndexMapping(vertexIndexMapping, h);
  myInvA.accumulateAValues(nodes, vertexEnumerator);

  //check corners
  validateNumericalEquals( nodes[0].getInverseA(),  4.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[1].getInverseA(),  4.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[2].getInverseA(),  4.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[3].getInverseA(),  4.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[12].getInverseA(),  4.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[15].getInverseA(),  4.0 / (h[0]*h[0]) );
  //check special corners
  validateNumericalEquals( nodes[5].getInverseA(),  4.0 / (3.0*h[0]*h[0]) );
  validateNumericalEquals( nodes[6].getInverseA(),  4.0 / (3.0*h[0]*h[0]) );
  //check edges
  validateNumericalEquals( nodes[4].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[7].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[8].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[11].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[13].getInverseA(),  2.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[14].getInverseA(),  2.0 / (h[0]*h[0]) );
  //check inner points
  validateNumericalEquals( nodes[9].getInverseA(),  1.0 / (h[0]*h[0]) );
  validateNumericalEquals( nodes[10].getInverseA(),  1.0 / (h[0]*h[0]) );
  #endif
}

