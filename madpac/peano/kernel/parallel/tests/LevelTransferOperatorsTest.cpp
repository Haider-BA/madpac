#include "peano/kernel/parallel/tests/LevelTransferOperatorsTest.h"
#include "peano/kernel/parallel/LevelTransferOperators.h"
#include "tarch/la/WrappedVector.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::kernel::parallel::tests::LevelTransferOperatorsTest)



#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif


peano::kernel::parallel::tests::LevelTransferOperatorsTest::LevelTransferOperatorsTest():
  TestCase("peano::kernel::parallel::tests::LevelTransferOperatorsTest")  {
}


peano::kernel::parallel::tests::LevelTransferOperatorsTest::~LevelTransferOperatorsTest() {
}


void peano::kernel::parallel::tests::LevelTransferOperatorsTest::setUp() {
}


void peano::kernel::parallel::tests::LevelTransferOperatorsTest::run() {
  testMethod(test3x3Regulargrid2D_0);
}


void peano::kernel::parallel::tests::LevelTransferOperatorsTest::test3x3Regulargrid2D_0() {
  #ifdef Dim2
//  tarch::la::Vector<TWO_POWER_D,int> bottomLeft;
//  tarch::la::Vector<TWO_POWER_D,int> bottomRight;
//  tarch::la::Vector<TWO_POWER_D,int> topLeft;
//  tarch::la::Vector<TWO_POWER_D,int> topRight;
//  bottomLeft  = 1,5,1,0;
//  bottomRight = 5,5,0,5;
//  topLeft     = 1,0,2,3;
//  topRight    = 0,5,3,4;

  tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int> coarseGridAdjacencyInformation;
  using tarch::la::slice;
  using tarch::la::assign;
  assignList(slice<4>(coarseGridAdjacencyInformation,0*4)) = 1,5,1,0;
  assignList(slice<4>(coarseGridAdjacencyInformation,1*4)) = 5,5,0,5;
  assignList(slice<4>(coarseGridAdjacencyInformation,2*4)) = 1,0,2,3;
  assignList(slice<4>(coarseGridAdjacencyInformation,3*4)) = 0,5,3,4;
//  coarseGridAdjacencyInformation.setData(bottomLeft,0*4);
//  coarseGridAdjacencyInformation.setData(bottomRight,1*4);
//  coarseGridAdjacencyInformation.setData(topLeft,2*4);
//  coarseGridAdjacencyInformation.setData(topRight,3*4);

  validateEquals(coarseGridAdjacencyInformation(0),1);
  validateEquals(coarseGridAdjacencyInformation(1),5);
  validateEquals(coarseGridAdjacencyInformation(2),1);
  validateEquals(coarseGridAdjacencyInformation(3),0);
  validateEquals(coarseGridAdjacencyInformation(4),5);
  validateEquals(coarseGridAdjacencyInformation(5),5);
  validateEquals(coarseGridAdjacencyInformation(6),0);
  validateEquals(coarseGridAdjacencyInformation(7),5);
  validateEquals(coarseGridAdjacencyInformation(8),1);
  validateEquals(coarseGridAdjacencyInformation(9),0);
  validateEquals(coarseGridAdjacencyInformation(10),2);
  validateEquals(coarseGridAdjacencyInformation(11),3);
  validateEquals(coarseGridAdjacencyInformation(12),0);
  validateEquals(coarseGridAdjacencyInformation(13),5);
  validateEquals(coarseGridAdjacencyInformation(14),3);
  validateEquals(coarseGridAdjacencyInformation(15),4);

  tarch::la::Vector<DIMENSIONS,int> gridSize;
  assignList(gridSize) = 4,4;

  tarch::la::Vector<DIMENSIONS,int>  pick;
  tarch::la::Vector<TWO_POWER_D,int> expectedResult;

  assignList(pick)           = 0,0;
  assignList(expectedResult) = 1,5,1,0;
  validateEquals(getAdjacencyList(coarseGridAdjacencyInformation,gridSize,pick),expectedResult);

  assignList(pick)           = 1,0;
  assignList(expectedResult) = 5,5,0,0;
  validateEquals(getAdjacencyList(coarseGridAdjacencyInformation,gridSize,pick),expectedResult);

  assignList(pick)           = 2,0;
  assignList(expectedResult) = 5,5,0,0;
  validateEquals(getAdjacencyList(coarseGridAdjacencyInformation,gridSize,pick),expectedResult);

  assignList(pick)           = 3,0;
  assignList(expectedResult) = 5,5,0,5;
  validateEquals(getAdjacencyList(coarseGridAdjacencyInformation,gridSize,pick),expectedResult);

  assignList(pick)           = 0,1;
  assignList(expectedResult) = 1,0,1,0;
  validateEquals(getAdjacencyList(coarseGridAdjacencyInformation,gridSize,pick),expectedResult);

  assignList(pick)           = 1,1;
  assignList(expectedResult) = 0,0,0,0;
  validateEquals(getAdjacencyList(coarseGridAdjacencyInformation,gridSize,pick),expectedResult);

  assignList(pick)           = 2,1;
  assignList(expectedResult) = 0,0,0,0;
  validateEquals(getAdjacencyList(coarseGridAdjacencyInformation,gridSize,pick),expectedResult);

  assignList(pick)           = 3,1;
  assignList(expectedResult) = 0,5,0,5;
  validateEquals(getAdjacencyList(coarseGridAdjacencyInformation,gridSize,pick),expectedResult);

  assignList(pick)           = 0,3;
  assignList(expectedResult) = 1,0,2,3;
  validateEquals(getAdjacencyList(coarseGridAdjacencyInformation,gridSize,pick),expectedResult);

  assignList(pick)           = 1,3;
  assignList(expectedResult) = 0,0,3,3;
  validateEquals(getAdjacencyList(coarseGridAdjacencyInformation,gridSize,pick),expectedResult);

  assignList(pick)           = 2,3;
  assignList(expectedResult) = 0,0,3,3;
  validateEquals(getAdjacencyList(coarseGridAdjacencyInformation,gridSize,pick),expectedResult);

  assignList(pick)           = 3,3;
  assignList(expectedResult) = 0,5,3,4;
  validateEquals(getAdjacencyList(coarseGridAdjacencyInformation,gridSize,pick),expectedResult);
  #endif
}


//void peano::kernel::parallel::tests::LevelTransferOperatorsTesttestSetParallelFlags2D_4() {
//  #if defined(Dim2) && defined(ComponentGrid)
//  if ( Node::getInstance().getRank()!=0 ) return;
//
//  ParallelTraversalAutomatonProperties automatonProperties;
//
//  grid::GridVertex parentVertex[FOUR_POWER_D];
//
//  parentVertex[0].setVertexData(true,tarch::la::Vector<DIMENSIONS,double>(0.0),23, false, false);
//  parentVertex[1].setVertexData(true,tarch::la::Vector<DIMENSIONS,double>(0.0),23, false, false);
//  parentVertex[4].setVertexData(true,tarch::la::Vector<DIMENSIONS,double>(0.0),23, false, false);
//  parentVertex[5].setVertexData(true,tarch::la::Vector<DIMENSIONS,double>(0.0),23, false, false);
//
//  parentVertex[0].refine();
//  parentVertex[1].refine();
//  parentVertex[4].refine();
//  parentVertex[5].refine();
//
//  parentVertex[0].clearSublevelList();
//  parentVertex[1].clearSublevelList();
//  parentVertex[4].clearSublevelList();
//  parentVertex[5].clearSublevelList();
//
//  parentVertex[0].clearCurrentLevelList();
//  parentVertex[1].clearCurrentLevelList();
//  parentVertex[4].clearCurrentLevelList();
//  parentVertex[5].clearCurrentLevelList();
//
//  parentVertex[0].replaceAdjacentSubNode( 3, 0 );
//  parentVertex[1].replaceAdjacentSubNode( 2, 0 );
//  parentVertex[4].replaceAdjacentSubNode( 1, 0 );
//  parentVertex[5].replaceAdjacentSubNode( 0, 0 );
//
//  tarch::la::Vector<DIMENSIONS,int> k;
//  parallel::ParallelAdjacencyList result;
//
//  k=0,0;
//  result = parallel::getAdjacentNodeSublevelListFromCoarseGridLevel( parentVertex, 0, k, automatonProperties );
//  validateEqualsWithParams1( result(0), grid::GridVertex::UNDEF_NEIGHBOUR, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(1), grid::GridVertex::UNDEF_NEIGHBOUR, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(2), grid::GridVertex::UNDEF_NEIGHBOUR, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(3),                                 0, "testSetParallelFlags2D_4()", result );
//
//  k=1,0;
//  result = parallel::getAdjacentNodeSublevelListFromCoarseGridLevel( parentVertex, 0, k, automatonProperties );
//  validateEqualsWithParams1( result(0), grid::GridVertex::UNDEF_NEIGHBOUR, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(1), grid::GridVertex::UNDEF_NEIGHBOUR, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(2),                                 0, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(3),                                 0, "testSetParallelFlags2D_4()", result );
//
//  k=2,0;
//  result = parallel::getAdjacentNodeSublevelListFromCoarseGridLevel( parentVertex, 0, k, automatonProperties );
//  validateEqualsWithParams1( result(0), grid::GridVertex::UNDEF_NEIGHBOUR, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(1), grid::GridVertex::UNDEF_NEIGHBOUR, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(2),                                 0, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(3),                                 0, "testSetParallelFlags2D_4()", result );
//
//  k=3,0;
//  result = parallel::getAdjacentNodeSublevelListFromCoarseGridLevel( parentVertex, 0, k, automatonProperties );
//  validateEqualsWithParams1( result(0), grid::GridVertex::UNDEF_NEIGHBOUR, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(1), grid::GridVertex::UNDEF_NEIGHBOUR, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(2),                                 0, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(3), grid::GridVertex::UNDEF_NEIGHBOUR, "testSetParallelFlags2D_4()", result );
//
//  k=0,1;
//  result = parallel::getAdjacentNodeSublevelListFromCoarseGridLevel( parentVertex, 0, k, automatonProperties );
//  validateEqualsWithParams1( result(0), grid::GridVertex::UNDEF_NEIGHBOUR, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(1),                                 0, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(2), grid::GridVertex::UNDEF_NEIGHBOUR, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(3),                                 0, "testSetParallelFlags2D_4()", result );
//
//  k=1,1;
//  result = parallel::getAdjacentNodeSublevelListFromCoarseGridLevel( parentVertex, 0, k, automatonProperties );
//  validateEqualsWithParams1( result(0),                                 0, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(1),                                 0, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(2),                                 0, "testSetParallelFlags2D_4()", result );
//  validateEqualsWithParams1( result(3),                                 0, "testSetParallelFlags2D_4()", result );
//  #endif
//}
//
//void peano::kernel::parallel::tests::LevelTransferOperatorsTesttestSetParallelFlags2D_0() {
//  #if defined(Dim2) && defined(ComponentGrid)
//  if ( Node::getInstance().getNumberOfNodes() < 6 ) return;
//
//  if ( Node::getInstance().getNumberOfNodes()<6 ) return;
//  if ( Node::getInstance().getRank() != 0 ) return;
//
//  ParallelTraversalAutomatonProperties automatonProperties;
//
//  grid::GridVertex parentVertex[FOUR_POWER_D];
//  grid::GridVertex childVertex[FOUR_POWER_D];
//
//  parentVertex[0] = grid::GridVertex();
//  parentVertex[1] = grid::GridVertex();
//  parentVertex[4] = grid::GridVertex();
//  parentVertex[5] = grid::GridVertex();
//
//  parentVertex[0].refine();
//  parentVertex[1].refine();
//  parentVertex[4].refine();
//  parentVertex[5].refine();
//
//  parentVertex[0].replaceAdjacentSubNode( 0, 1 );
//  parentVertex[0].replaceAdjacentSubNode( 1, 5 );
//  parentVertex[0].replaceAdjacentSubNode( 2, 1 );
//  parentVertex[0].replaceAdjacentSubNode( 3, 0 );
//
//  parentVertex[1].replaceAdjacentSubNode( 0, 5 );
//  parentVertex[1].replaceAdjacentSubNode( 1, 5 );
//  parentVertex[1].replaceAdjacentSubNode( 2, 0 );
//  parentVertex[1].replaceAdjacentSubNode( 3, 5 );
//
//  parentVertex[4].replaceAdjacentSubNode( 0, 1 );
//  parentVertex[4].replaceAdjacentSubNode( 1, 0 );
//  parentVertex[4].replaceAdjacentSubNode( 2, 2 );
//  parentVertex[4].replaceAdjacentSubNode( 3, 3 );
//
//  parentVertex[5].replaceAdjacentSubNode( 0, 0 );
//  parentVertex[5].replaceAdjacentSubNode( 1, 5 );
//  parentVertex[5].replaceAdjacentSubNode( 2, 3 );
//  parentVertex[5].replaceAdjacentSubNode( 3, 4 );
//
//  dfor(k,4) {
//    childVertex[tarch::utils::dLinearized(k,4)].takeOverSubLevelList(
//      parallel::getAdjacentNodeSublevelListFromCoarseGridLevel(
//        parentVertex,
//        0,
//        k,
//        automatonProperties
//      )
//    );
//  }
//
//  validateEqualsWithParams1( childVertex[0].getNodeNumber(0),     1,  "testSetParallelFlags2D_0()", childVertex[0] );
//  validateEqualsWithParams1( childVertex[0].getNodeNumber(1),     5,  "testSetParallelFlags2D_0()", childVertex[0] );
//  validateEqualsWithParams1( childVertex[0].getNodeNumber(2),     1,  "testSetParallelFlags2D_0()", childVertex[0] );
//  validateEqualsWithParams1( childVertex[0].getNodeNumber(3),     0,  "testSetParallelFlags2D_0()", childVertex[0] );
//
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(0),     5,  "testSetParallelFlags2D_0()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(1),     5,  "testSetParallelFlags2D_0()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(2),     0,  "testSetParallelFlags2D_0()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(3),     0,  "testSetParallelFlags2D_0()", childVertex[1] );
//
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(0),     5,  "testSetParallelFlags2D_0()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(1),     5,  "testSetParallelFlags2D_0()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(2),     0,  "testSetParallelFlags2D_0()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(3),     0,  "testSetParallelFlags2D_0()", childVertex[2] );
//
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(0),     5,  "testSetParallelFlags2D_0()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(1),     5,  "testSetParallelFlags2D_0()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(2),     0,  "testSetParallelFlags2D_0()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(3),     5,  "testSetParallelFlags2D_0()", childVertex[3] );
//
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(0),     1,  "testSetParallelFlags2D_0()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(1),     0,  "testSetParallelFlags2D_0()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(2),     1,  "testSetParallelFlags2D_0()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(3),     0,  "testSetParallelFlags2D_0()", childVertex[4] );
//
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(0),     0,  "testSetParallelFlags2D_0()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(1),     0,  "testSetParallelFlags2D_0()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(2),     0,  "testSetParallelFlags2D_0()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(3),     0,  "testSetParallelFlags2D_0()", childVertex[5] );
//
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(0),     0,  "testSetParallelFlags2D_0()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(1),     0,  "testSetParallelFlags2D_0()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(2),     0,  "testSetParallelFlags2D_0()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(3),     0,  "testSetParallelFlags2D_0()", childVertex[6] );
//
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(0),     0,  "testSetParallelFlags2D_0()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(1),     5,  "testSetParallelFlags2D_0()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(2),     0,  "testSetParallelFlags2D_0()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(3),     5,  "testSetParallelFlags2D_0()", childVertex[7] );
//
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(0),     1,  "testSetParallelFlags2D_0()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(1),     0,  "testSetParallelFlags2D_0()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(2),     1,  "testSetParallelFlags2D_0()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(3),     0,  "testSetParallelFlags2D_0()", childVertex[8] );
//
//  validateEqualsWithParams1( childVertex[11].getNodeNumber(0),     0,  "testSetParallelFlags2D_0()", childVertex[11] );
//  validateEqualsWithParams1( childVertex[11].getNodeNumber(1),     5,  "testSetParallelFlags2D_0()", childVertex[11] );
//  validateEqualsWithParams1( childVertex[11].getNodeNumber(2),     0,  "testSetParallelFlags2D_0()", childVertex[11] );
//  validateEqualsWithParams1( childVertex[11].getNodeNumber(3),     5,  "testSetParallelFlags2D_0()", childVertex[11] );
//
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(0),     1,  "testSetParallelFlags2D_0()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(1),     0,  "testSetParallelFlags2D_0()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(2),     2,  "testSetParallelFlags2D_0()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(3),     3,  "testSetParallelFlags2D_0()", childVertex[12] );
//
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(0),     0,  "testSetParallelFlags2D_0()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(1),     0,  "testSetParallelFlags2D_0()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(2),     3,  "testSetParallelFlags2D_0()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(3),     3,  "testSetParallelFlags2D_0()", childVertex[13] );
//
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(0),     0,  "testSetParallelFlags2D_0()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(1),     0,  "testSetParallelFlags2D_0()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(2),     3,  "testSetParallelFlags2D_0()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(3),     3,  "testSetParallelFlags2D_0()", childVertex[14] );
//
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(0),     0,  "testSetParallelFlags2D_0()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(1),     5,  "testSetParallelFlags2D_0()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(2),     3,  "testSetParallelFlags2D_0()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(3),     4,  "testSetParallelFlags2D_0()", childVertex[15] );
//  #endif
//}
//
//void peano::kernel::parallel::tests::LevelTransferOperatorsTesttestSetParallelFlags2D_1() {
//  #if defined(Dim2) && defined(ComponentGrid)
//  if ( Node::getInstance().getNumberOfNodes()<6 ) return;
//  if ( Node::getInstance().getRank() != 5 ) return;
//
//  ParallelTraversalAutomatonProperties automatonProperties;
//
//  grid::GridVertex parentVertex[FOUR_POWER_D];
//  grid::GridVertex childVertex[FOUR_POWER_D];
//
//  parentVertex[0] = grid::GridVertex();
//  parentVertex[1] = grid::GridVertex();
//  parentVertex[4] = grid::GridVertex();
//  parentVertex[5] = grid::GridVertex();
//
//  parentVertex[0].refine();
//  parentVertex[1].refine();
//  parentVertex[4].refine();
//  parentVertex[5].refine();
//
//  parentVertex[0].replaceAdjacentSubNode( 0, 1 );
//  parentVertex[0].replaceAdjacentSubNode( 1, 5 );
//  parentVertex[0].replaceAdjacentSubNode( 2, 1 );
//  parentVertex[0].replaceAdjacentSubNode( 3, 5 );
//
//  parentVertex[1].replaceAdjacentSubNode( 0, 5 );
//  parentVertex[1].replaceAdjacentSubNode( 1, 5 );
//  parentVertex[1].replaceAdjacentSubNode( 2, 5 );
//  parentVertex[1].replaceAdjacentSubNode( 3, 5 );
//
//  parentVertex[4].replaceAdjacentSubNode( 0, 1 );
//  parentVertex[4].replaceAdjacentSubNode( 1, 5 );
//  parentVertex[4].replaceAdjacentSubNode( 2, 2 );
//  parentVertex[4].replaceAdjacentSubNode( 3, 3 );
//
//  parentVertex[5].replaceAdjacentSubNode( 0, 5 );
//  parentVertex[5].replaceAdjacentSubNode( 1, 5 );
//  parentVertex[5].replaceAdjacentSubNode( 2, 3 );
//  parentVertex[5].replaceAdjacentSubNode( 3, 4 );
//
//  dfor(k,4) {
//    childVertex[tarch::utils::dLinearized(k,4)].takeOverSubLevelList(
//      parallel::getAdjacentNodeSublevelListFromCoarseGridLevel(
//        parentVertex,
//        0,
//        k,
//        automatonProperties
//      )
//    );
//  }
//
//
//  validateEqualsWithParams1( childVertex[0].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[0] );
//  validateEqualsWithParams1( childVertex[0].getNodeNumber(0),     1,  "testSetParallelFlags2D_1()", childVertex[0] );
//  validateEqualsWithParams1( childVertex[0].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[0] );
//  validateEqualsWithParams1( childVertex[0].getNodeNumber(2),     1,  "testSetParallelFlags2D_1()", childVertex[0] );
//  validateEqualsWithParams1( childVertex[0].getNodeNumber(3),     5,  "testSetParallelFlags2D_1()", childVertex[0] );
//
//  validateEqualsWithParams1( childVertex[1].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(0),     5,  "testSetParallelFlags2D_1()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(2),     5,  "testSetParallelFlags2D_1()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(3),     5,  "testSetParallelFlags2D_1()", childVertex[1] );
//
//  validateEqualsWithParams1( childVertex[2].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(0),     5,  "testSetParallelFlags2D_1()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(2),     5,  "testSetParallelFlags2D_1()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(3),     5,  "testSetParallelFlags2D_1()", childVertex[2] );
//
//  validateEqualsWithParams1( childVertex[3].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(0),     5,  "testSetParallelFlags2D_1()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(2),     5,  "testSetParallelFlags2D_1()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(3),     5,  "testSetParallelFlags2D_1()", childVertex[3] );
//
//  validateEqualsWithParams1( childVertex[4].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(0),     1,  "testSetParallelFlags2D_1()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(2),     1,  "testSetParallelFlags2D_1()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(3),     5,  "testSetParallelFlags2D_1()", childVertex[4] );
//
//  validateEqualsWithParams1( childVertex[5].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(0),     5,  "testSetParallelFlags2D_1()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(2),     5,  "testSetParallelFlags2D_1()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(3),     5,  "testSetParallelFlags2D_1()", childVertex[5] );
//
//  validateEqualsWithParams1( childVertex[6].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(0),     5,  "testSetParallelFlags2D_1()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(2),     5,  "testSetParallelFlags2D_1()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(3),     5,  "testSetParallelFlags2D_1()", childVertex[6] );
//
//  validateEqualsWithParams1( childVertex[7].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(0),     5,  "testSetParallelFlags2D_1()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(2),     5,  "testSetParallelFlags2D_1()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(3),     5,  "testSetParallelFlags2D_1()", childVertex[7] );
//
//  validateEqualsWithParams1( childVertex[8].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(0),     1,  "testSetParallelFlags2D_1()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(2),     1,  "testSetParallelFlags2D_1()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(3),     5,  "testSetParallelFlags2D_1()", childVertex[8] );
//
//  validateEqualsWithParams1( childVertex[11].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[11] );
//  validateEqualsWithParams1( childVertex[11].getNodeNumber(0),     5,  "testSetParallelFlags2D_1()", childVertex[11] );
//  validateEqualsWithParams1( childVertex[11].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[11] );
//  validateEqualsWithParams1( childVertex[11].getNodeNumber(2),     5,  "testSetParallelFlags2D_1()", childVertex[11] );
//  validateEqualsWithParams1( childVertex[11].getNodeNumber(3),     5,  "testSetParallelFlags2D_1()", childVertex[11] );
//
//  validateEqualsWithParams1( childVertex[12].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(0),     1,  "testSetParallelFlags2D_1()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(2),     2,  "testSetParallelFlags2D_1()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(3),     3,  "testSetParallelFlags2D_1()", childVertex[12] );
//
//  validateEqualsWithParams1( childVertex[13].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(0),     5,  "testSetParallelFlags2D_1()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(2),     3,  "testSetParallelFlags2D_1()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(3),     3,  "testSetParallelFlags2D_1()", childVertex[13] );
//
//  validateEqualsWithParams1( childVertex[14].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(0),     5,  "testSetParallelFlags2D_1()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(2),     3,  "testSetParallelFlags2D_1()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(3),     3,  "testSetParallelFlags2D_1()", childVertex[14] );
//
//  validateEqualsWithParams1( childVertex[15].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_1()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(0),     5,  "testSetParallelFlags2D_1()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(1),     5,  "testSetParallelFlags2D_1()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(2),     3,  "testSetParallelFlags2D_1()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(3),     4,  "testSetParallelFlags2D_1()", childVertex[15] );
//
//  #endif
//}
//
//void peano::kernel::parallel::tests::LevelTransferOperatorsTesttestSetParallelFlags2D_2() {
//  #if defined(Dim2) && defined(ComponentGrid)
//  if ( Node::getInstance().getNumberOfNodes() < 6 ) return;
//
//  if ( Node::getInstance().getNumberOfNodes()<6 ) return;
//  if ( Node::getInstance().getRank() != 0 ) return;
//
//  ParallelTraversalAutomatonProperties automatonProperties;
//
//  grid::GridVertex parentVertex[FOUR_POWER_D];
//  grid::GridVertex childVertex[FOUR_POWER_D];
//
//  parentVertex[0].setVertexData( false, tarch::la::Vector<DIMENSIONS,double>(0.0), 23, false, false );
//  parentVertex[1] = grid::GridVertex();
//  parentVertex[4] = grid::GridVertex();
//  parentVertex[5] = grid::GridVertex();
//
//  parentVertex[0].refine();
//  parentVertex[1].refine();
//  parentVertex[4].refine();
//  parentVertex[5].refine();
//
//  // since the vertex is not persistent, the flags are not set
//  //parentVertex[0].replaceAdjacentSubNode( 0, 1 );
//  //parentVertex[0].replaceAdjacentSubNode( 1, 5 );
//  //parentVertex[0].replaceAdjacentSubNode( 2, 1 );
//  //parentVertex[0].replaceAdjacentSubNode( 3, 0 );
//
//  parentVertex[1].replaceAdjacentSubNode( 0, 5 );
//  parentVertex[1].replaceAdjacentSubNode( 1, 5 );
//  parentVertex[1].replaceAdjacentSubNode( 2, 0 );
//  parentVertex[1].replaceAdjacentSubNode( 3, 5 );
//
//  parentVertex[4].replaceAdjacentSubNode( 0, 1 );
//  parentVertex[4].replaceAdjacentSubNode( 1, 0 );
//  parentVertex[4].replaceAdjacentSubNode( 2, 2 );
//  parentVertex[4].replaceAdjacentSubNode( 3, 3 );
//
//  parentVertex[5].replaceAdjacentSubNode( 0, 0 );
//  parentVertex[5].replaceAdjacentSubNode( 1, 5 );
//  parentVertex[5].replaceAdjacentSubNode( 2, 3 );
//  parentVertex[5].replaceAdjacentSubNode( 3, 4 );
//
//  dfor(k,4) {
//    childVertex[tarch::utils::dLinearized(k,4)].takeOverSubLevelList(
//      parallel::getAdjacentNodeSublevelListFromCoarseGridLevel<grid::GridVertex>(
//        parentVertex,
//        0,
//        k,
//        automatonProperties
//      )
//    );
//  }
//
//  validateEqualsWithParams1( childVertex[1].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_2()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(0),     5,  "testSetParallelFlags2D_2()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(1),     5,  "testSetParallelFlags2D_2()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(2),     0,  "testSetParallelFlags2D_2()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(3),     0,  "testSetParallelFlags2D_2()", childVertex[1] );
//
//  validateEqualsWithParams1( childVertex[2].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_2()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(0),     5,  "testSetParallelFlags2D_2()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(1),     5,  "testSetParallelFlags2D_2()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(2),     0,  "testSetParallelFlags2D_2()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(3),     0,  "testSetParallelFlags2D_2()", childVertex[2] );
//
//  validateEqualsWithParams1( childVertex[3].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_2()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(0),     5,  "testSetParallelFlags2D_2()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(1),     5,  "testSetParallelFlags2D_2()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(2),     0,  "testSetParallelFlags2D_2()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(3),     5,  "testSetParallelFlags2D_2()", childVertex[3] );
//
//  validateEqualsWithParams1( childVertex[4].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_2()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(0),     1,  "testSetParallelFlags2D_2()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(1),     0,  "testSetParallelFlags2D_2()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(2),     1,  "testSetParallelFlags2D_2()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(3),     0,  "testSetParallelFlags2D_2()", childVertex[4] );
//
//  validateEqualsWithParams1( childVertex[5].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_2()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(0),     0,  "testSetParallelFlags2D_2()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(1),     0,  "testSetParallelFlags2D_2()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(2),     0,  "testSetParallelFlags2D_2()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(3),     0,  "testSetParallelFlags2D_2()", childVertex[5] );
//
//  validateEqualsWithParams1( childVertex[6].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_2()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(0),     0,  "testSetParallelFlags2D_2()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(1),     0,  "testSetParallelFlags2D_2()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(2),     0,  "testSetParallelFlags2D_2()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(3),     0,  "testSetParallelFlags2D_2()", childVertex[6] );
//
//  validateEqualsWithParams1( childVertex[7].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_2()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(0),     0,  "testSetParallelFlags2D_2()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(1),     5,  "testSetParallelFlags2D_2()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(2),     0,  "testSetParallelFlags2D_2()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(3),     5,  "testSetParallelFlags2D_2()", childVertex[7] );
//
//  validateEqualsWithParams1( childVertex[8].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_2()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(0),     1,  "testSetParallelFlags2D_2()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(1),     0,  "testSetParallelFlags2D_2()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(2),     1,  "testSetParallelFlags2D_2()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(3),     0,  "testSetParallelFlags2D_2()", childVertex[8] );
//
//  validateEqualsWithParams1( childVertex[11].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_2()", childVertex[11] );
//  validateEqualsWithParams1( childVertex[11].getNodeNumber(0),     0,  "testSetParallelFlags2D_2()", childVertex[11] );
//  validateEqualsWithParams1( childVertex[11].getNodeNumber(1),     5,  "testSetParallelFlags2D_2()", childVertex[11] );
//  validateEqualsWithParams1( childVertex[11].getNodeNumber(2),     0,  "testSetParallelFlags2D_2()", childVertex[11] );
//  validateEqualsWithParams1( childVertex[11].getNodeNumber(3),     5,  "testSetParallelFlags2D_2()", childVertex[11] );
//
//  validateEqualsWithParams1( childVertex[12].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_2()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(0),     1,  "testSetParallelFlags2D_2()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(1),     0,  "testSetParallelFlags2D_2()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(2),     2,  "testSetParallelFlags2D_2()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(3),     3,  "testSetParallelFlags2D_2()", childVertex[12] );
//
//  validateEqualsWithParams1( childVertex[13].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_2()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(0),     0,  "testSetParallelFlags2D_2()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(1),     0,  "testSetParallelFlags2D_2()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(2),     3,  "testSetParallelFlags2D_2()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(3),     3,  "testSetParallelFlags2D_2()", childVertex[13] );
//
//  validateEqualsWithParams1( childVertex[14].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_2()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(0),     0,  "testSetParallelFlags2D_2()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(1),     0,  "testSetParallelFlags2D_2()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(2),     3,  "testSetParallelFlags2D_2()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(3),     3,  "testSetParallelFlags2D_2()", childVertex[14] );
//
//  validateEqualsWithParams1( childVertex[15].isValidCurrentLevelList(), true,  "testSetParallelFlags2D_2()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(0),     0,  "testSetParallelFlags2D_2()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(1),     5,  "testSetParallelFlags2D_2()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(2),     3,  "testSetParallelFlags2D_2()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(3),     4,  "testSetParallelFlags2D_2()", childVertex[15] );
//  #endif
//}
//
//void peano::kernel::parallel::tests::LevelTransferOperatorsTesttestSetParallelFlags2D_3() {
//  #if defined(Dim2) && defined(ComponentGrid)
//  if ( Node::getInstance().getNumberOfNodes() < 2 ) return;
//
//  if ( Node::getInstance().getNumberOfNodes()<2 ) return;
//  if ( Node::getInstance().getRank() != 0 ) return;
//
//  ParallelTraversalAutomatonProperties automatonProperties;
//
//  grid::GridVertex parentVertex[FOUR_POWER_D];
//  grid::GridVertex childVertex[FOUR_POWER_D];
//
//  parentVertex[0] = grid::GridVertex();
//  parentVertex[1] = grid::GridVertex();
//  parentVertex[4] = grid::GridVertex();
//  parentVertex[5] = grid::GridVertex();
//
//  parentVertex[0].refine();
//  parentVertex[1].refine();
//  parentVertex[4].refine();
//  parentVertex[5].refine();
//
//  parentVertex[0].replaceAdjacentSubNode( 0, 0 );
//  parentVertex[0].replaceAdjacentSubNode( 1, 0 );
//  parentVertex[0].replaceAdjacentSubNode( 2, 0 );
//  parentVertex[0].replaceAdjacentSubNode( 3, 1 );
//
//  parentVertex[1].replaceAdjacentSubNode( 0, 0 );
//  parentVertex[1].replaceAdjacentSubNode( 1, 0 );
//  parentVertex[1].replaceAdjacentSubNode( 2, 1 );
//  parentVertex[1].replaceAdjacentSubNode( 3, 0 );
//
//  parentVertex[4].replaceAdjacentSubNode( 0, 0 );
//  parentVertex[4].replaceAdjacentSubNode( 1, 1 );
//  parentVertex[4].replaceAdjacentSubNode( 2, 0 );
//  parentVertex[4].replaceAdjacentSubNode( 3, 0 );
//
//  parentVertex[5].replaceAdjacentSubNode( 0, 1 );
//  parentVertex[5].replaceAdjacentSubNode( 1, 0 );
//  parentVertex[5].replaceAdjacentSubNode( 2, 0 );
//  parentVertex[5].replaceAdjacentSubNode( 3, 0 );
//
//  dfor(k,4) {
//    childVertex[tarch::utils::dLinearized(k,4)].takeOverSubLevelList(
//      parallel::getAdjacentNodeSublevelListFromCoarseGridLevel<grid::GridVertex>(
//        parentVertex,
//        0,
//        k,
//        automatonProperties
//      )
//    );
//  }
//
//  validateEqualsWithParams1( childVertex[0].getNodeNumber(0),     0,  "testSetParallelFlags2D_3()", childVertex[0] );
//  validateEqualsWithParams1( childVertex[0].getNodeNumber(1),     0,  "testSetParallelFlags2D_3()", childVertex[0] );
//  validateEqualsWithParams1( childVertex[0].getNodeNumber(2),     0,  "testSetParallelFlags2D_3()", childVertex[0] );
//  validateEqualsWithParams1( childVertex[0].getNodeNumber(3),     1,  "testSetParallelFlags2D_3()", childVertex[0] );
//
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(0),     0,  "testSetParallelFlags2D_3()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(1),     0,  "testSetParallelFlags2D_3()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(2),     1,  "testSetParallelFlags2D_3()", childVertex[1] );
//  validateEqualsWithParams1( childVertex[1].getNodeNumber(3),     1,  "testSetParallelFlags2D_3()", childVertex[1] );
//
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(0),     0,  "testSetParallelFlags2D_3()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(1),     0,  "testSetParallelFlags2D_3()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(2),     1,  "testSetParallelFlags2D_3()", childVertex[2] );
//  validateEqualsWithParams1( childVertex[2].getNodeNumber(3),     1,  "testSetParallelFlags2D_3()", childVertex[2] );
//
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(0),     0,  "testSetParallelFlags2D_3()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(1),     0,  "testSetParallelFlags2D_3()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(2),     1,  "testSetParallelFlags2D_3()", childVertex[3] );
//  validateEqualsWithParams1( childVertex[3].getNodeNumber(3),     0,  "testSetParallelFlags2D_3()", childVertex[3] );
//
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(0),     0,  "testSetParallelFlags2D_3()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(1),     1,  "testSetParallelFlags2D_3()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(2),     0,  "testSetParallelFlags2D_3()", childVertex[4] );
//  validateEqualsWithParams1( childVertex[4].getNodeNumber(3),     1,  "testSetParallelFlags2D_3()", childVertex[4] );
///*
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(0),     1,  "testSetParallelFlags2D_3()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(1),     1,  "testSetParallelFlags2D_3()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(2),     1,  "testSetParallelFlags2D_3()", childVertex[5] );
//  validateEqualsWithParams1( childVertex[5].getNodeNumber(3),     1,  "testSetParallelFlags2D_3()", childVertex[5] );
//
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(0),     1,  "testSetParallelFlags2D_3()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(1),     1,  "testSetParallelFlags2D_3()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(2),     1,  "testSetParallelFlags2D_3()", childVertex[6] );
//  validateEqualsWithParams1( childVertex[6].getNodeNumber(3),     1,  "testSetParallelFlags2D_3()", childVertex[6] );
//*/
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(0),     1,  "testSetParallelFlags2D_3()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(1),     0,  "testSetParallelFlags2D_3()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(2),     1,  "testSetParallelFlags2D_3()", childVertex[7] );
//  validateEqualsWithParams1( childVertex[7].getNodeNumber(3),     0,  "testSetParallelFlags2D_3()", childVertex[7] );
//
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(0),     0,  "testSetParallelFlags2D_3()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(1),     1,  "testSetParallelFlags2D_3()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(2),     0,  "testSetParallelFlags2D_3()", childVertex[8] );
//  validateEqualsWithParams1( childVertex[8].getNodeNumber(3),     1,  "testSetParallelFlags2D_3()", childVertex[8] );
//
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(0),    0,  "testSetParallelFlags2D_3()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(1),    1,  "testSetParallelFlags2D_3()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(2),    0,  "testSetParallelFlags2D_3()", childVertex[12] );
//  validateEqualsWithParams1( childVertex[12].getNodeNumber(3),    0,  "testSetParallelFlags2D_3()", childVertex[12] );
//
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(0),    1,  "testSetParallelFlags2D_3()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(1),    1,  "testSetParallelFlags2D_3()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(2),    0,  "testSetParallelFlags2D_3()", childVertex[13] );
//  validateEqualsWithParams1( childVertex[13].getNodeNumber(3),    0,  "testSetParallelFlags2D_3()", childVertex[13] );
//
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(0),    1,  "testSetParallelFlags2D_3()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(1),    1,  "testSetParallelFlags2D_3()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(2),    0,  "testSetParallelFlags2D_3()", childVertex[14] );
//  validateEqualsWithParams1( childVertex[14].getNodeNumber(3),    0,  "testSetParallelFlags2D_3()", childVertex[14] );
//
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(0),    1,  "testSetParallelFlags2D_3()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(1),    0,  "testSetParallelFlags2D_3()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(2),    0,  "testSetParallelFlags2D_3()", childVertex[15] );
//  validateEqualsWithParams1( childVertex[15].getNodeNumber(3),    0,  "testSetParallelFlags2D_3()", childVertex[15] );
//  #endif
//}

#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
