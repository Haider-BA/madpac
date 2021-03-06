#include "peano/kernel/spacetreegrid/tests/SingleLevelEnumeratorTest.h"
#include "peano/kernel/spacetreegrid/SingleLevelEnumerator.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::kernel::spacetreegrid::tests::SingleLevelEnumeratorTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif


peano::kernel::spacetreegrid::tests::SingleLevelEnumeratorTest::SingleLevelEnumeratorTest():
  tarch::tests::TestCase( "peano::kernel::spacetreegrid::tests::SingleLevelEnumeratorTest" ) {
}


peano::kernel::spacetreegrid::tests::SingleLevelEnumeratorTest::~SingleLevelEnumeratorTest() {
}


void peano::kernel::spacetreegrid::tests::SingleLevelEnumeratorTest::run() {
  testMethod( test2DLineariseCellIndex );
  testMethod( test2DLineariseVertexIndex );
  testMethod( testFunctorWithZeroArgument );
  testMethod( testGetVertexPositionOnCoarserLevel );
  testMethod( test2DFunctor );
}



void peano::kernel::spacetreegrid::tests::SingleLevelEnumeratorTest::setUp() {
}


void peano::kernel::spacetreegrid::tests::SingleLevelEnumeratorTest::test2DFunctor() {
  #ifdef Dim2
  const tarch::la::Vector<DIMENSIONS,double>  coarseGridCellSize(0.2);
  const tarch::la::Vector<DIMENSIONS,double>  domainOffset(0.2);
  const int                                   level(3);
  peano::kernel::spacetreegrid::SingleLevelEnumerator vertexEnumerator(coarseGridCellSize,domainOffset,level);

  assertionEquals( vertexEnumerator(0), 0 );
  assertionEquals( vertexEnumerator(1), 1 );
  assertionEquals( vertexEnumerator(2), 4 );
  assertionEquals( vertexEnumerator(3), 5 );

  vertexEnumerator.setOffset( tarch::la::Vector<DIMENSIONS,int>(2) );
  assertionEquals( vertexEnumerator(0), 10 );
  assertionEquals( vertexEnumerator(1), 11 );
  assertionEquals( vertexEnumerator(2), 14 );
  assertionEquals( vertexEnumerator(3), 15 );
  #endif
}


void peano::kernel::spacetreegrid::tests::SingleLevelEnumeratorTest::testGetVertexPositionOnCoarserLevel() {
  #ifdef Dim2
  tarch::la::Vector<DIMENSIONS,int> fineGridPositionOfVertex;

  fineGridPositionOfVertex(0) = 0;
  fineGridPositionOfVertex(1) = 0;
  validate(peano::kernel::spacetreegrid::SingleLevelEnumerator::isVertexPositionAtCoarseVertexsPosition(fineGridPositionOfVertex));
  validateEquals(
    peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPositionOnCoarserLevel(fineGridPositionOfVertex)(0),
    0
  );
  validateEquals(
    peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPositionOnCoarserLevel(fineGridPositionOfVertex)(1),
    0
  );

  fineGridPositionOfVertex(0) = 1;
  fineGridPositionOfVertex(1) = 0;
  validate(!peano::kernel::spacetreegrid::SingleLevelEnumerator::isVertexPositionAtCoarseVertexsPosition(fineGridPositionOfVertex));

  fineGridPositionOfVertex(0) = 2;
  fineGridPositionOfVertex(1) = 0;
  validate(!peano::kernel::spacetreegrid::SingleLevelEnumerator::isVertexPositionAtCoarseVertexsPosition(fineGridPositionOfVertex));

  fineGridPositionOfVertex(0) = 3;
  fineGridPositionOfVertex(1) = 0;
  validate(peano::kernel::spacetreegrid::SingleLevelEnumerator::isVertexPositionAtCoarseVertexsPosition(fineGridPositionOfVertex));
  validateEquals(
    peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPositionOnCoarserLevel(fineGridPositionOfVertex)(0),
    1
  );
  validateEquals(
    peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPositionOnCoarserLevel(fineGridPositionOfVertex)(1),
    0
  );

  fineGridPositionOfVertex(0) = 0;
  fineGridPositionOfVertex(1) = 1;
  validate(!peano::kernel::spacetreegrid::SingleLevelEnumerator::isVertexPositionAtCoarseVertexsPosition(fineGridPositionOfVertex));

  fineGridPositionOfVertex(0) = 2;
  fineGridPositionOfVertex(1) = 1;
  validate(!peano::kernel::spacetreegrid::SingleLevelEnumerator::isVertexPositionAtCoarseVertexsPosition(fineGridPositionOfVertex));

  fineGridPositionOfVertex(0) = 1;
  fineGridPositionOfVertex(1) = 2;
  validate(!peano::kernel::spacetreegrid::SingleLevelEnumerator::isVertexPositionAtCoarseVertexsPosition(fineGridPositionOfVertex));

  fineGridPositionOfVertex(0) = 0;
  fineGridPositionOfVertex(1) = 3;
  validate(peano::kernel::spacetreegrid::SingleLevelEnumerator::isVertexPositionAtCoarseVertexsPosition(fineGridPositionOfVertex));
  validateEquals(
    peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPositionOnCoarserLevel(fineGridPositionOfVertex)(0),
    0
  );
  validateEquals(
    peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPositionOnCoarserLevel(fineGridPositionOfVertex)(1),
    1
  );

  fineGridPositionOfVertex(0) = 1;
  fineGridPositionOfVertex(1) = 3;
  validate(!peano::kernel::spacetreegrid::SingleLevelEnumerator::isVertexPositionAtCoarseVertexsPosition(fineGridPositionOfVertex));

  fineGridPositionOfVertex(0) = 3;
  fineGridPositionOfVertex(1) = 3;
  validate(peano::kernel::spacetreegrid::SingleLevelEnumerator::isVertexPositionAtCoarseVertexsPosition(fineGridPositionOfVertex));
  validateEquals(
    peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPositionOnCoarserLevel(fineGridPositionOfVertex)(0),
    1
  );
  validateEquals(
    peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPositionOnCoarserLevel(fineGridPositionOfVertex)(1),
    1
  );
  #endif
}


void peano::kernel::spacetreegrid::tests::SingleLevelEnumeratorTest::test2DLineariseCellIndex() {
  #ifdef Dim2
  peano::kernel::spacetreegrid::SingleLevelEnumerator::LocalVertexIntegerIndex  cellPosition;

  tarch::la::assignList(cellPosition) = 0,0;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseCellIndex( cellPosition ), 0 );

  tarch::la::assignList(cellPosition) = 1,0;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseCellIndex( cellPosition ), 1 );

  tarch::la::assignList(cellPosition) = 2,0;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseCellIndex( cellPosition ), 2 );

  tarch::la::assignList(cellPosition) = 0,1;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseCellIndex( cellPosition ), 3 );

  tarch::la::assignList(cellPosition) = 1,1;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseCellIndex( cellPosition ), 4 );

  tarch::la::assignList(cellPosition) = 2,1;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseCellIndex( cellPosition ), 5 );

  tarch::la::assignList(cellPosition) = 0,2;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseCellIndex( cellPosition ), 6 );

  tarch::la::assignList(cellPosition) = 1,2;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseCellIndex( cellPosition ), 7 );

  tarch::la::assignList(cellPosition) = 2,2;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseCellIndex( cellPosition ), 8 );
  #endif
}


void peano::kernel::spacetreegrid::tests::SingleLevelEnumeratorTest::test2DLineariseVertexIndex() {
  #ifdef Dim2
  peano::kernel::spacetreegrid::SingleLevelEnumerator::LocalVertexIntegerIndex  vertexPosition;

  tarch::la::assignList(vertexPosition) = 0,0;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 0 );

  tarch::la::assignList(vertexPosition) = 1,0;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 1 );

  tarch::la::assignList(vertexPosition) = 2,0;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 2 );

  tarch::la::assignList(vertexPosition) = 3,0;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 3 );

  tarch::la::assignList(vertexPosition) = 0,1;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 4 );

  tarch::la::assignList(vertexPosition) = 1,1;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 5 );

  tarch::la::assignList(vertexPosition) = 2,1;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 6 );

  tarch::la::assignList(vertexPosition) = 3,1;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 7 );

  tarch::la::assignList(vertexPosition) = 0,2;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 8 );

  tarch::la::assignList(vertexPosition) = 1,2;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 9 );

  tarch::la::assignList(vertexPosition) = 2,2;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 10 );

  tarch::la::assignList(vertexPosition) = 3,2;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 11 );

  tarch::la::assignList(vertexPosition) = 0,3;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 12 );

  tarch::la::assignList(vertexPosition) = 1,3;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 13 );

  tarch::la::assignList(vertexPosition) = 2,3;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 14 );

  tarch::la::assignList(vertexPosition) = 3,3;
  validateEquals( peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( vertexPosition ), 15 );
  #endif
}

void peano::kernel::spacetreegrid::tests::SingleLevelEnumeratorTest::testFunctorWithZeroArgument() {
  peano::kernel::spacetreegrid::SingleLevelEnumerator enumerator(tarch::la::Vector<DIMENSIONS,double>(1.0),tarch::la::Vector<DIMENSIONS,double>(0.0));

  peano::kernel::spacetreegrid::SingleLevelEnumerator::LocalVertexIntegerIndex offset(0);

  offset(0) = 0;
  enumerator.setOffset( offset );
  validateEquals( enumerator(0), 0 );

  offset(0) = 1;
  enumerator.setOffset( offset );
  validateEquals( enumerator(0), 1 );

  offset(0) = 2;
  enumerator.setOffset( offset );
  validateEquals( enumerator(0), 2 );

  offset(0) = 3;
  enumerator.setOffset( offset );
  validateEquals( enumerator(0), 3 );

  offset(0) = 0;
  offset(1) = 1;
  enumerator.setOffset( offset );
  validateEquals( enumerator(0), 4 );
}



#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
