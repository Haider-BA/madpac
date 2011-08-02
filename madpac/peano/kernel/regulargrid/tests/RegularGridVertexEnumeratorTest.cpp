#include "peano/kernel/regulargrid/tests/RegularGridVertexEnumeratorTest.h"
#include "peano/kernel/regulargrid/RegularGridVertexEnumerator.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::kernel::regulargrid::tests::RegularGridVertexEnumeratorTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif


peano::kernel::regulargrid::tests::RegularGridVertexEnumeratorTest::RegularGridVertexEnumeratorTest():
  TestCase( "peano::kernel::regulargrid::tests::RegularGridVertexEnumeratorTest" ) {
}


peano::kernel::regulargrid::tests::RegularGridVertexEnumeratorTest::~RegularGridVertexEnumeratorTest() {
}


void peano::kernel::regulargrid::tests::RegularGridVertexEnumeratorTest::run() {
  testMethod( test2D3x3Grid );
  testMethod( test2D7x4Grid );
}


void peano::kernel::regulargrid::tests::RegularGridVertexEnumeratorTest::setUp() {
}


void peano::kernel::regulargrid::tests::RegularGridVertexEnumeratorTest::test2D3x3Grid() {
  #ifdef Dim2
  RegularGridVertexEnumerator::LocalVertexIntegerIndex  numberOfGridPoints(0);
  RegularGridVertexEnumerator::LocalVertexIntegerIndex  offset;

  assignList(numberOfGridPoints) = 3,3;
  assignList(offset)             = 0,0;

  RegularGridVertexEnumerator enumerator(numberOfGridPoints, offset, 1.0, 1.0);

  RegularGridVertexEnumerator::LocalVertexIntegerIndex  currentIndexAsIntegerVector;
  RegularGridVertexEnumerator::LocalVertexBitsetIndex   currentIndexAsBitset;
  int                                                   currentIndexAsInteger;

  assignList(currentIndexAsIntegerVector) = 0,0;
  currentIndexAsBitset[0] = false;
  currentIndexAsBitset[1] = false;
  currentIndexAsInteger = 0;
  validateEquals( enumerator(currentIndexAsIntegerVector), 0 );
  validateEquals( enumerator(currentIndexAsBitset), 0 );
  validateEquals( enumerator(currentIndexAsInteger), 0 );

  assignList(currentIndexAsIntegerVector) = 1,0;
  currentIndexAsBitset[0] = true;
  currentIndexAsBitset[1] = false;
  currentIndexAsInteger = 1;
  validateEquals( enumerator(currentIndexAsIntegerVector), 1 );
  validateEquals( enumerator(currentIndexAsBitset), 1 );
  validateEquals( enumerator(currentIndexAsInteger), 1 );

  assignList(currentIndexAsIntegerVector) = 0,1;
  currentIndexAsBitset[0] = false;
  currentIndexAsBitset[1] = true;
  currentIndexAsInteger = 2;
  validateEquals( enumerator(currentIndexAsIntegerVector), 3 );
  validateEquals( enumerator(currentIndexAsBitset), 3 );
  validateEquals( enumerator(currentIndexAsInteger), 3 );

  assignList(currentIndexAsIntegerVector) = 1,1;
  currentIndexAsBitset[0] = true;
  currentIndexAsBitset[1] = true;
  currentIndexAsInteger = 3;
  validateEquals( enumerator(currentIndexAsIntegerVector), 4 );
  validateEquals( enumerator(currentIndexAsBitset), 4 );
  validateEquals( enumerator(currentIndexAsInteger), 4 );
  #endif
}


void peano::kernel::regulargrid::tests::RegularGridVertexEnumeratorTest::test2D7x4Grid() {
  #ifdef Dim2
  RegularGridVertexEnumerator::LocalVertexIntegerIndex  numberOfGridPoints(0);
  RegularGridVertexEnumerator::LocalVertexIntegerIndex  offset;

  assignList(numberOfGridPoints) = 7,4;
  assignList(offset)             = 0,0;

  RegularGridVertexEnumerator enumerator(numberOfGridPoints, offset, 1.0, 1.0);

  RegularGridVertexEnumerator::LocalVertexIntegerIndex  currentIndexAsIntegerVector;
  RegularGridVertexEnumerator::LocalVertexBitsetIndex   currentIndexAsBitset;
  int                                                   currentIndexAsInteger;

  assignList(currentIndexAsIntegerVector) = 0,0;
  currentIndexAsBitset[0] = false;
  currentIndexAsBitset[1] = false;
  currentIndexAsInteger = 0;
  validateEquals( enumerator(currentIndexAsIntegerVector), 0 );
  validateEquals( enumerator(currentIndexAsBitset), 0 );
  validateEquals( enumerator(currentIndexAsInteger), 0 );

  assignList(currentIndexAsIntegerVector) = 1,0;
  currentIndexAsBitset[0] = true;
  currentIndexAsBitset[1] = false;
  currentIndexAsInteger = 1;
  validateEquals( enumerator(currentIndexAsIntegerVector), 1 );
  validateEquals( enumerator(currentIndexAsBitset), 1 );
  validateEquals( enumerator(currentIndexAsInteger), 1 );

  assignList(currentIndexAsIntegerVector) = 0,1;
  currentIndexAsBitset[0] = false;
  currentIndexAsBitset[1] = true;
  currentIndexAsInteger = 2;
  validateEqualsWithParams1( enumerator(currentIndexAsIntegerVector), 7, enumerator(currentIndexAsIntegerVector) );
  validateEquals( enumerator(currentIndexAsBitset), 7 );
  validateEquals( enumerator(currentIndexAsInteger), 7 );

  assignList(currentIndexAsIntegerVector) = 1,1;
  currentIndexAsBitset[0] = true;
  currentIndexAsBitset[1] = true;
  currentIndexAsInteger = 3;
  validateEquals( enumerator(currentIndexAsIntegerVector), 8 );
  validateEquals( enumerator(currentIndexAsBitset), 8 );
  validateEquals( enumerator(currentIndexAsInteger), 8 );
  #endif
}

#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
