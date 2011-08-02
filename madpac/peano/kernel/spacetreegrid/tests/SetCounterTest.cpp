#include "peano/kernel/spacetreegrid/tests/SetCounterTest.h"
#include "peano/kernel/spacetreegrid/nodes/loops/SetCounterLoopBody.h"
#include "peano/utils/Globals.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::kernel::spacetreegrid::tests::SetCounterTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif



peano::kernel::spacetreegrid::tests::SetCounterTest::SetCounterTest():
  tarch::tests::TestCase( "peano::kernel::spacetreegrid::tests::SetCounterTest" ) {
}


peano::kernel::spacetreegrid::tests::SetCounterTest::~SetCounterTest() {
}


void peano::kernel::spacetreegrid::tests::SetCounterTest::run() {
  testMethod( test2DSpacetreeConstructionFirstLevel );
  testMethod( isOnBoundaryTest );
  testMethod( testAPosterioriRefinement2d );
}


void peano::kernel::spacetreegrid::tests::SetCounterTest::setUp() {
}


void peano::kernel::spacetreegrid::tests::SetCounterTest::isOnBoundaryTest() {
  #ifdef Dim2
  tarch::la::Vector<DIMENSIONS,int>  vertex;

  tarch::la::assignList(vertex) = 3,1;

  bool isOnBoundary = false;
  for (int d=0; d<DIMENSIONS; d++) {
    isOnBoundary |= (vertex(d)==0);
    isOnBoundary |= (vertex(d)==3);
  }
  validate( isOnBoundary );

  const tarch::la::Vector<DIMENSIONS,int>&  vertex2(vertex);
  isOnBoundary = false;
  for (int d=0; d<DIMENSIONS; d++) {
    isOnBoundary |= (vertex2(d)==0);
    isOnBoundary |= (vertex2(d)==3);
  }
  validate( isOnBoundary );

  tarch::la::Vector<DIMENSIONS,int>&  vertex3 = vertex;
  isOnBoundary = false;
  for (int d=0; d<DIMENSIONS; d++) {
    isOnBoundary |= (vertex3(d)==0);
    isOnBoundary |= (vertex3(d)==3);
  }
  validate( isOnBoundary );
  #endif
}


void peano::kernel::spacetreegrid::tests::SetCounterTest::testAPosterioriRefinement2d() {
  #ifdef Dim2
  TestVertex                                            coarseGridVertices[FOUR_POWER_D];
  peano::kernel::spacetreegrid::SingleLevelEnumerator   coarseGridVerticesEnumerator(
    peano::kernel::spacetreegrid::SingleLevelEnumerator::Vector( 3.0),
    peano::kernel::spacetreegrid::SingleLevelEnumerator::Vector(-1.0)
  );
  int                                                   fineGridCounter[FOUR_POWER_D];
  tarch::la::Vector<DIMENSIONS,int>                     vertex;

  coarseGridVertices[0].switchToNonhangingNode();
  coarseGridVertices[0].refine();
  coarseGridVertices[0].switchRefinementTriggeredToRefining();

  coarseGridVertices[1].switchToNonhangingNode();

  coarseGridVertices[4].switchToNonhangingNode();
  coarseGridVertices[4].refine();
  coarseGridVertices[4].switchRefinementTriggeredToRefining();
  coarseGridVertices[4].updateTransientRefinementFlagsBeforeVertexIsStoredToOutputStack();

  coarseGridVertices[5].switchToNonhangingNode();

  peano::kernel::spacetreegrid::nodes::loops::SetCounterLoopBody<TestVertex> loopBody(coarseGridVertices,coarseGridVerticesEnumerator,fineGridCounter);

  tarch::la::assignList(vertex) = 0,0;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[0], peano::kernel::spacetreegrid::nodes::CounterNewNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[0]) );

  tarch::la::assignList(vertex) = 1,0;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[1], peano::kernel::spacetreegrid::nodes::CounterNewNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[1]) );

  tarch::la::assignList(vertex) = 2,0;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[2], peano::kernel::spacetreegrid::nodes::CounterNewNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[2]) );

  tarch::la::assignList(vertex) = 3,0;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[3], peano::kernel::spacetreegrid::nodes::CounterHangingNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[3]) );

  tarch::la::assignList(vertex) = 0,1;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[4], peano::kernel::spacetreegrid::nodes::CounterPersistentNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[4]) );

  tarch::la::assignList(vertex) = 1,1;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[5], peano::kernel::spacetreegrid::nodes::CounterPersistentNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[5]) );

  tarch::la::assignList(vertex) = 2,1;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[6], peano::kernel::spacetreegrid::nodes::CounterPersistentNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[6]) );

  tarch::la::assignList(vertex) = 3,1;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[7], peano::kernel::spacetreegrid::nodes::CounterHangingNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[7]) );

  tarch::la::assignList(vertex) = 0,2;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[8], peano::kernel::spacetreegrid::nodes::CounterPersistentNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[8]) );

  tarch::la::assignList(vertex) = 1,2;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[9], peano::kernel::spacetreegrid::nodes::CounterPersistentNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[9]) );

  tarch::la::assignList(vertex) = 2,2;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[10], peano::kernel::spacetreegrid::nodes::CounterPersistentNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[10]) );

  tarch::la::assignList(vertex) = 3,2;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[11], peano::kernel::spacetreegrid::nodes::CounterHangingNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[11]) );

  tarch::la::assignList(vertex) = 0,3;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[12], peano::kernel::spacetreegrid::nodes::CounterPersistentNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[12]) );

  tarch::la::assignList(vertex) = 1,3;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[13], peano::kernel::spacetreegrid::nodes::CounterPersistentNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[13]) );

  tarch::la::assignList(vertex) = 2,3;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[14], peano::kernel::spacetreegrid::nodes::CounterPersistentNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[14]) );

  tarch::la::assignList(vertex) = 3,3;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[15], peano::kernel::spacetreegrid::nodes::CounterHangingNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[15]) );

  #endif
}


void peano::kernel::spacetreegrid::tests::SetCounterTest::test2DSpacetreeConstructionFirstLevel() {
  #ifdef Dim2
  TestVertex                                            coarseGridVertices[FOUR_POWER_D];
  peano::kernel::spacetreegrid::SingleLevelEnumerator   coarseGridVerticesEnumerator(
    peano::kernel::spacetreegrid::SingleLevelEnumerator::Vector( 3.0),
    peano::kernel::spacetreegrid::SingleLevelEnumerator::Vector(-1.0)
  );
  int                                                   fineGridCounter[FOUR_POWER_D];
  tarch::la::Vector<DIMENSIONS,int>                     vertex;

  peano::kernel::spacetreegrid::nodes::loops::SetCounterLoopBody<TestVertex> loopBody(coarseGridVertices,coarseGridVerticesEnumerator,fineGridCounter);

  validate( coarseGridVertices[0].isHangingNode() );
  validate( coarseGridVertices[1].isHangingNode() );
  validate( coarseGridVertices[2].isHangingNode() );
  validate( coarseGridVertices[3].isHangingNode() );
  validate( coarseGridVertices[4].isHangingNode() );
  coarseGridVertices[5].switchToNonhangingNode();
  coarseGridVertices[5].refine();
  coarseGridVertices[5].switchRefinementTriggeredToRefining();
  coarseGridVertices[6].switchToNonhangingNode();
  coarseGridVertices[6].refine();
  coarseGridVertices[6].switchRefinementTriggeredToRefining();
  validate( coarseGridVertices[7].isHangingNode() );
  validate( coarseGridVertices[8].isHangingNode() );
  coarseGridVertices[9].switchToNonhangingNode();
  coarseGridVertices[9].refine();
  coarseGridVertices[9].switchRefinementTriggeredToRefining();
  coarseGridVertices[10].switchToNonhangingNode();
  coarseGridVertices[10].refine();
  coarseGridVertices[10].switchRefinementTriggeredToRefining();
  validate( coarseGridVertices[11].isHangingNode() );
  validate( coarseGridVertices[12].isHangingNode() );
  validate( coarseGridVertices[13].isHangingNode() );
  validate( coarseGridVertices[14].isHangingNode() );
  validate( coarseGridVertices[15].isHangingNode() );

  tarch::la::assignList(vertex) = 0,0;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[0], peano::kernel::spacetreegrid::nodes::CounterHangingNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[0]) );

  tarch::la::assignList(vertex) = 1,0;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[1], peano::kernel::spacetreegrid::nodes::CounterHangingNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[1]) );

  tarch::la::assignList(vertex) = 2,0;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[2], peano::kernel::spacetreegrid::nodes::CounterHangingNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[2]) );

  tarch::la::assignList(vertex) = 3,0;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[3], peano::kernel::spacetreegrid::nodes::CounterHangingNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[3]) );

  tarch::la::assignList(vertex) = 0,1;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[4], peano::kernel::spacetreegrid::nodes::CounterHangingNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[4]) );

  tarch::la::assignList(vertex) = 1,1;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[5], peano::kernel::spacetreegrid::nodes::CounterNewNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[5]) );

  tarch::la::assignList(vertex) = 2,1;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[6], peano::kernel::spacetreegrid::nodes::CounterNewNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[6]) );

  tarch::la::assignList(vertex) = 3,1;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[7], peano::kernel::spacetreegrid::nodes::CounterNewNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[7]) );

  tarch::la::assignList(vertex) = 0,2;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[8], peano::kernel::spacetreegrid::nodes::CounterHangingNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[8]) );

  tarch::la::assignList(vertex) = 1,2;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[9], peano::kernel::spacetreegrid::nodes::CounterNewNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[9]) );

  tarch::la::assignList(vertex) = 2,2;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[10], peano::kernel::spacetreegrid::nodes::CounterNewNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[10]) );

  tarch::la::assignList(vertex) = 3,2;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[11], peano::kernel::spacetreegrid::nodes::CounterNewNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[11]) );

  tarch::la::assignList(vertex) = 0,3;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[12], peano::kernel::spacetreegrid::nodes::CounterHangingNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[12]) );

  tarch::la::assignList(vertex) = 1,3;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[13], peano::kernel::spacetreegrid::nodes::CounterNewNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[13]) );

  tarch::la::assignList(vertex) = 2,3;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[14], peano::kernel::spacetreegrid::nodes::CounterNewNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[14]) );

  tarch::la::assignList(vertex) = 3,3;
  loopBody(vertex);
  validateEqualsWithParams1( fineGridCounter[15], peano::kernel::spacetreegrid::nodes::CounterNewNode, peano::kernel::spacetreegrid::nodes::counterToString(fineGridCounter[15]) );
  #endif
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
