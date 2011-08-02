#include "peano/kernel/datatraversal/tests/OracleForOnePhaseWithOscillatingSearchTest.h"
#include "peano/kernel/datatraversal/autotuning/OracleForOnePhaseWithOscillatingSearch.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest( peano::kernel::datatraversal::tests::OracleForOnePhaseWithOscillatingSearchTest )


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif



peano::kernel::datatraversal::tests::OracleForOnePhaseWithOscillatingSearchTest::OracleForOnePhaseWithOscillatingSearchTest():
  TestCase( "peano::kernel::datatraversal::tests::OracleForOnePhaseWithOscillatingSearchTest" ) {
}


peano::kernel::datatraversal::tests::OracleForOnePhaseWithOscillatingSearchTest::~OracleForOnePhaseWithOscillatingSearchTest() {
}


void peano::kernel::datatraversal::tests::OracleForOnePhaseWithOscillatingSearchTest::run() {
  testMethod( testGridConstruction2D_1 );
  testMethod( testGridConstruction2D_2 );
  testMethod( testGridConstruction3D_1 );
}


void peano::kernel::datatraversal::tests::OracleForOnePhaseWithOscillatingSearchTest::setUp() {
}


void peano::kernel::datatraversal::tests::OracleForOnePhaseWithOscillatingSearchTest::testGridConstruction2D_1() {
  peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch _oracle;

  int result;
  result = _oracle.parallelise( 4, peano::kernel::datatraversal::autotuning::SpacetreeGridLoadVertices );

  validateEquals( result, 0 );

  _oracle.parallelSectionHasTerminated( 2.91209e-06 );

  result = _oracle.parallelise( 4, peano::kernel::datatraversal::autotuning::SpacetreeGridLoadVertices );

  validateEquals( result, 2 );

  _oracle.parallelSectionHasTerminated( 4.28499e-06 );

  result = _oracle.parallelise( 4, peano::kernel::datatraversal::autotuning::SpacetreeGridLoadVertices );

  validateEquals( result, 0 );

  _oracle.parallelSectionHasTerminated( 2.91209e-06 );

  result = _oracle.parallelise( 4, peano::kernel::datatraversal::autotuning::SpacetreeGridLoadVertices );

  validateEquals( result, 0 );
}


void peano::kernel::datatraversal::tests::OracleForOnePhaseWithOscillatingSearchTest::testGridConstruction2D_2() {
  peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch _oracle;

  int result;
  result = _oracle.parallelise( 16, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );

  validateEquals( result, 0 );

  _oracle.parallelSectionHasTerminated( 2.46937e-06 );

  result = _oracle.parallelise( 16, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );

  validateEquals( result, 8 );

  _oracle.parallelSectionHasTerminated( 3.6534e-06 );

  result = _oracle.parallelise( 16, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );

  validateEquals( result, 0 );

  _oracle.parallelSectionHasTerminated( 2.46937e-06 );

  result = _oracle.parallelise( 16, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );

  validateEquals( result, 0 );
}


void peano::kernel::datatraversal::tests::OracleForOnePhaseWithOscillatingSearchTest::testGridConstruction3D_1() {
  peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch _oracle;

  int result;

  result = _oracle.parallelise( 64, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );
  validateEquals( result, 0 );
  _oracle.parallelSectionHasTerminated( 1.23911e-05 );

  result = _oracle.parallelise( 64, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );
  validateEquals( result, 32 );
  _oracle.parallelSectionHasTerminated( 1.07568e-05 );

  result = _oracle.parallelise( 64, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );
  validateEquals( result, 64 );
  _oracle.parallelSectionHasTerminated( 1.09066e-05 );

  result = _oracle.parallelise( 64, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );
  validateEquals( result, 16 );
  _oracle.parallelSectionHasTerminated( 9.20736e-06 );

  result = _oracle.parallelise( 64, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );
  validateEquals( result, 0 );
  _oracle.parallelSectionHasTerminated( 1.23911e-05 );

  result = _oracle.parallelise( 64, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );
  validateEquals( result, 24 );
  _oracle.parallelSectionHasTerminated( 9.00958e-06 );

  result = _oracle.parallelise( 64, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );
  validateEquals( result, 32 );
  _oracle.parallelSectionHasTerminated( 1.07568e-05 );

  result = _oracle.parallelise( 64, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );
  validateEquals( result, 20 );
  _oracle.parallelSectionHasTerminated( 9.04503e-06 );

  result = _oracle.parallelise( 64, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );
  validateEquals( result, 26 );
  _oracle.parallelSectionHasTerminated( 9.04951e-06 );

  result = _oracle.parallelise( 64, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );
  validateEquals( result, 23 );
  _oracle.parallelSectionHasTerminated( 9.20074e-06 );

  result = _oracle.parallelise( 64, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );
  validateEquals( result, 24 );
  _oracle.parallelSectionHasTerminated( 9.00958e-06 );

  result = _oracle.parallelise( 64, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );
  validateEquals( result, 24 );
  _oracle.parallelSectionHasTerminated( 9.00958e-06 );

  result = _oracle.parallelise( 64, peano::kernel::datatraversal::autotuning::SpacetreeGridSetCounter );
  validateEquals( result, 24 );
  _oracle.parallelSectionHasTerminated( 9.00958e-06 );
}




#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif


