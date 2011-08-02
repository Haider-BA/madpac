#include "peano/geometry/builtin/tests/HexahedronTest.h"
#include "peano/geometry/builtin/Hexahedron.h"

#include "tarch/compiler/CompilerSpecificSettings.h"

#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif



#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::geometry::builtin::tests::HexahedronTest)

tarch::logging::Log peano::geometry::builtin::tests::HexahedronTest::_log("peano::geometry::builtin::tests::HexahedronTest");


peano::geometry::builtin::tests::HexahedronTest::HexahedronTest():
  TestCase("peano::geometry::builtin::tests::HexahedronTest") {
}

peano::geometry::builtin::tests::HexahedronTest::~HexahedronTest() {
}


void peano::geometry::builtin::tests::HexahedronTest::setUp(){}


void peano::geometry::builtin::tests::HexahedronTest::testUnitCube() {
  #if defined(Dim2)
  Hexahedron hexahedron(
      false,
      tarch::la::Vector<DIMENSIONS,double>(1.0),
      tarch::la::Vector<DIMENSIONS,double>(0.0)
  );

  tarch::la::Vector<DIMENSIONS,double> h(1.0/3.0);
  h = h * 1.0/2.0;
  tarch::la::Vector<DIMENSIONS,double> x(0.0 + 1.0/6.0);

  validate( !hexahedron.isCompletelyOutside(x,h));
  validate(  hexahedron.isCompletelyInside(x,h));

  x(0) += 1.0/3.0;
  x(1) += 2.0/3.0;

  validate( !hexahedron.isCompletelyOutside(x,h));
  validate(  hexahedron.isCompletelyInside(x,h));

  x(0) += 1.0/3.0;

  validate( !hexahedron.isCompletelyOutside(x,h));
  validate(  hexahedron.isCompletelyInside(x,h));

  assignList(x) = 0,0;
  validate( !hexahedron.isOutsideClosedDomain(x));

  #endif
}


void peano::geometry::builtin::tests::HexahedronTest::testNumberOfFacesIntersected() {
  tarch::la::Vector<DIMENSIONS,double> width(1.0);
  tarch::la::Vector<DIMENSIONS,double> dimensions(0.0);
  width(0) = 0.8;
  width(1) = 0.5;
  dimensions(0) = 0.5-width(0)/2.0;
  dimensions(1) = 0.5-width(1)/2.0;

  Hexahedron hexahedron(
    false,
    width,
    dimensions
  );

  tarch::la::Vector<DIMENSIONS,double> x(0.5);
  tarch::la::Vector<DIMENSIONS,double> h(0.1);

  x(0)=0.0+0.01;
  validate(  !hexahedron.isCompletelyOutside(x,h));
  validate(  !hexahedron.isCompletelyInside(x,h));
//  validateEquals( hexahedron.getNumberOfBoundariesIntersected(x,h), 1);
//  validateEquals( hexahedron.getBoundaryNumber(0,x,h), 0);

  x(0)=1.0-0.01;
  validate(  !hexahedron.isCompletelyOutside(x,h));
  validate(  !hexahedron.isCompletelyInside(x,h));
//  validateEquals( hexahedron.getNumberOfBoundariesIntersected(x,h), 1);
//  validateEquals( hexahedron.getBoundaryNumber(0,x,h), 0+DIMENSIONS);

  x(0)=0.0+0.01;
  x(1)=0.2;
  validate(  !hexahedron.isCompletelyOutside(x,h));
  validate(  !hexahedron.isCompletelyInside(x,h));
//  validateEquals( hexahedron.getNumberOfBoundariesIntersected(x,h), 2);
//  validateEquals( hexahedron.getBoundaryNumber(0,x,h), 0 );
//  validateEquals( hexahedron.getBoundaryNumber(1,x,h), 1 );

  x(0)=1.0-0.01;
  x(1)=0.2;
  validate(  !hexahedron.isCompletelyOutside(x,h) );
  validate(  !hexahedron.isCompletelyInside(x,h) );
//  validateEquals( hexahedron.getNumberOfBoundariesIntersected(x,h), 2 );
//  validateEquals( hexahedron.getBoundaryNumber(0,x,h), 0+DIMENSIONS );
//  validateEquals( hexahedron.getBoundaryNumber(1,x,h), 1 );

  x = tarch::la::Vector<DIMENSIONS,double>( 0.0 );
  x(0) = 0.05;
  x(1) = 0.2;
  validate(  !hexahedron.isCompletelyOutside(x,h) );
  validate(  !hexahedron.isCompletelyInside(x,h) );
//  validateEquals( hexahedron.getNumberOfBoundariesIntersected(x,h), DIMENSIONS );
//  for (int i=0; i<DIMENSIONS; i++) {
//    validateEquals( hexahedron.getBoundaryNumber(i,x,h), i );
//  }
}


void peano::geometry::builtin::tests::HexahedronTest::testFaceIntersection() {
  tarch::la::Vector<DIMENSIONS,double> width(1.0);
  tarch::la::Vector<DIMENSIONS,double> dimensions(0.0);
  width(0) = 0.8;
  width(1) = 0.5;
  dimensions(0) = 0.5-width(0)/2.0;
  dimensions(1) = 0.5-width(1)/2.0;

  Hexahedron hexahedron(
    false,
    width,
    dimensions
  );

  tarch::la::Vector<DIMENSIONS,double> x(0.0);
  tarch::la::Vector<DIMENSIONS,double> h(1.0);
  validate( !hexahedron.isCompletelyOutside(x,h) );
  validate(  !hexahedron.isCompletelyInside(x,h) );

  h = tarch::la::Vector<DIMENSIONS,double>(1.2);
  x = tarch::la::Vector<DIMENSIONS,double>(-0.1);
  validate( !hexahedron.isCompletelyOutside(x,h) );
  validate(  !hexahedron.isCompletelyInside(x,h) );

  x(1) = -1.1;
  validate(  hexahedron.isCompletelyOutside(x,h) );
  validate(  !hexahedron.isCompletelyInside(x,h) );
}


void peano::geometry::builtin::tests::HexahedronTest::testRangeQueries() {
  tarch::la::Vector<DIMENSIONS,double> width(1.0);
  tarch::la::Vector<DIMENSIONS,double> dimensions(0.0);
  width(0) = 0.8;
  width(1) = 0.5;
  dimensions(0) = 0.5-width(0)/2.0;
  dimensions(1) = 0.5-width(1)/2.0;

  Hexahedron hexahedron(
    false,
    width,
    dimensions
  );

  tarch::la::Vector<DIMENSIONS,double> x(0.0);
  tarch::la::Vector<DIMENSIONS,double> h(0.1);

  validate(  hexahedron.isCompletelyOutside(x,h) );
  validate(  !hexahedron.isCompletelyInside(x,h) );

  x = tarch::la::Vector<DIMENSIONS,double>(0.5);
  x(0)=0.0;
  validate(  hexahedron.isCompletelyOutside(x,h) );
  validate(  !hexahedron.isCompletelyInside(x,h) );

  x(0)=0.05;
  x(1)=0.5;
  validate( !hexahedron.isCompletelyOutside(x,h) );
  validate(  !hexahedron.isCompletelyInside(x,h));

  x(0)=0.15;
  x(1)=0.5;
  validate( !hexahedron.isCompletelyOutside(x,h));
  validate(  !hexahedron.isCompletelyInside(x,h));

  x(0)=0.2;
  x(1)=0.5;
  validate( !hexahedron.isCompletelyOutside(x,h));
  validate(   hexahedron.isCompletelyInside(x,h));

  x(0)=0.25;
  x(1)=0.5;
  validate( !hexahedron.isCompletelyOutside(x,h));
  validate(   hexahedron.isCompletelyInside(x,h));

  x(0)=0.25;
  x(1)=0.65;
  validate( !hexahedron.isCompletelyOutside(x,h));
  validate(   hexahedron.isCompletelyInside(x,h));

  x(0)=0.25;
  x(1)=0.7;
  validate( !hexahedron.isCompletelyOutside(x,h));
  validate(  !hexahedron.isCompletelyInside(x,h));

  x(0)=0.25;
  x(1)=0.85;
  validate(  hexahedron.isCompletelyOutside(x,h));
  validate(  !hexahedron.isCompletelyInside(x,h));

  x(0)=0.25;
  x(1)=0.9;
  validate(  hexahedron.isCompletelyOutside(x,h));
  validate(  !hexahedron.isCompletelyInside(x,h));

  x(0)=0.5;
  x(1)=0.6;
  validate(  !hexahedron.isCompletelyOutside(x,h));
  validate(   hexahedron.isCompletelyInside(x,h));
}


void peano::geometry::builtin::tests::HexahedronTest::testPointwiseQueries0() {
  tarch::la::Vector<DIMENSIONS,double> width(1.0);
  tarch::la::Vector<DIMENSIONS,double> dimensions(0.0);
  width(0) = 0.8;
  width(1) = 0.5;
  dimensions(0) = 0.5-width(0)/2.0;
  dimensions(1) = 0.5-width(1)/2.0;

  Hexahedron hexahedron(
    false,
    width,
    dimensions
  );

  tarch::la::Vector<DIMENSIONS,double> x(0.0);
  tarch::la::Vector<DIMENSIONS,double> h(0.0);

  validate(  hexahedron.isCompletelyOutside(x,h));
  validate(  !hexahedron.isCompletelyInside(x,h));

  x = tarch::la::Vector<DIMENSIONS,double>(0.5);
  x(0) = 0.1;
  x(1) = 0.0;
  validate(  hexahedron.isCompletelyOutside(x,h));
  validate(  !hexahedron.isCompletelyInside(x,h));

  x(0) = 0.1;
  x(1) = 0.25;
  validate(   hexahedron.isCompletelyOutside(x,h));
  validate(  !hexahedron.isCompletelyInside(x,h));
  validate(  !hexahedron.isOutsideClosedDomain(x));

  x(0) = 0.6;
  x(1) = 0.25;
  validate(   hexahedron.isCompletelyOutside(x,h));
  validate(  !hexahedron.isCompletelyInside(x,h));
  validate(  !hexahedron.isOutsideClosedDomain(x));

  x(0) = 0.6;
  x(1) = 0.6;
  validate( !hexahedron.isCompletelyOutside(x,h));
  validate(   hexahedron.isCompletelyInside(x,h));

  x(0) = 1.0;
  x(1) = 0.6;
  validate(  hexahedron.isCompletelyOutside(x,h));
  validate(  !hexahedron.isCompletelyInside(x,h));
}

void peano::geometry::builtin::tests::HexahedronTest::testPointwiseQueries1() {
  #ifdef Dim2
  tarch::la::Vector<DIMENSIONS,double> width(1.0);

  Hexahedron hexahedron(
      false,
      width,
      tarch::la::Vector<DIMENSIONS,double>(0.5-1.0/2.0,0.5-1.0/2.0)
  );

  tarch::la::Vector<DIMENSIONS,double> x(0.0);
  tarch::la::Vector<DIMENSIONS,double> h(0.0);

  validate(  hexahedron.isCompletelyOutside(x,h));
  validate(  !hexahedron.isCompletelyInside(x,h));
  validate( !hexahedron.isOutsideClosedDomain(x));
  #endif
}


void peano::geometry::builtin::tests::HexahedronTest::testRefine() {

  tarch::la::Vector<DIMENSIONS,double> boxDimensions(1.0);
  tarch::la::Vector<DIMENSIONS,double> origin(0.0);
  tarch::la::Vector<DIMENSIONS,double> hMin(0.1);
  tarch::la::Vector<DIMENSIONS,double> hMax(0.2);

  Hexahedron hexahedron(
      false,
      boxDimensions,
      origin
  );

  tarch::la::Vector<DIMENSIONS,double> x(0.0);
  tarch::la::Vector<DIMENSIONS,double> h(0.2);

#ifdef Dim2
  // test refinement info for inner nodes
  assignList(x) = 0.5, 0.5;
  h = tarch::la::Vector<DIMENSIONS,double>(0.3);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2001);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.05);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );

  x = tarch::la::Vector<DIMENSIONS,double>(0.2);
  h = tarch::la::Vector<DIMENSIONS,double>(0.3);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2001);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.1);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );

  x = tarch::la::Vector<DIMENSIONS,double>(0.8);
  h = tarch::la::Vector<DIMENSIONS,double>(0.3);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2001);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );

  // test refinement info for outer nodes
  x = tarch::la::Vector<DIMENSIONS,double>(1.8);
  h = tarch::la::Vector<DIMENSIONS,double>(0.2001);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );

  x = tarch::la::Vector<DIMENSIONS,double>(1.1);
  h = tarch::la::Vector<DIMENSIONS,double>(0.2001);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );

  assignList(x) = -0.01, 0.5;
  h = tarch::la::Vector<DIMENSIONS,double>(0.2001);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );

  // test refinement info for boundary nodes
  assignList(x) = 0.0, 0.0;
  h = tarch::la::Vector<DIMENSIONS,double>(0.21);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.1);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );

  assignList(x) = 0.5, 0.05;
  h = tarch::la::Vector<DIMENSIONS,double>(0.21);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.1);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );

  assignList(x) = 0.99, 0.9;
  h = tarch::la::Vector<DIMENSIONS,double>(0.21);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.1);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.04);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );

#elif Dim3  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

// test refinement info for inner nodes
  x = tarch::la::Vector<DIMENSIONS,double>(0.5);
  h = tarch::la::Vector<DIMENSIONS,double>(0.3);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2001);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.05);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );

  x = tarch::la::Vector<DIMENSIONS,double>(0.2);
  h = tarch::la::Vector<DIMENSIONS,double>(0.3);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2001);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.05);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );

  x = tarch::la::Vector<DIMENSIONS,double>(0.8);
  h = tarch::la::Vector<DIMENSIONS,double>(0.3);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2001);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );

  // test refinement info for outer nodes
  x = tarch::la::Vector<DIMENSIONS,double>(1.8);
  h = tarch::la::Vector<DIMENSIONS,double>(0.2001);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );

  x = tarch::la::Vector<DIMENSIONS,double>(1.1);
  h = tarch::la::Vector<DIMENSIONS,double>(0.2001);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );

  assignList(x) = -0.01, 0.5, 0.5;
  h = tarch::la::Vector<DIMENSIONS,double>(0.2001);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );

  // test refinement info for boundary nodes
  x = tarch::la::Vector<DIMENSIONS,double>(0.0);
  h = tarch::la::Vector<DIMENSIONS,double>(0.21);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.1);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );

  assignList(x) = 0.5, 0.05, 0.05;
  h = tarch::la::Vector<DIMENSIONS,double>(0.21);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.1);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );

  assignList(x) = 0.99, 0.9, 0.9;
  h = tarch::la::Vector<DIMENSIONS,double>(0.21);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.2);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.11);
//  validate( hexahedron.refine(x,h,0) );
//  validate( hexahedron.refine(x,h,1) );
//  validate( hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.1);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );
  h = tarch::la::Vector<DIMENSIONS,double>(0.04);
//  validate( !hexahedron.refine(x,h,0) );
//  validate( !hexahedron.refine(x,h,1) );
//  validate( !hexahedron.refine(x,h,2) );

#else


  #endif  //Dim2
}


void peano::geometry::builtin::tests::HexahedronTest::testSplittedVoxelCall() {
  tarch::la::Vector<DIMENSIONS,double> boxDimensions(1.0);
  tarch::la::Vector<DIMENSIONS,double> origin(0.0);
  tarch::la::Vector<DIMENSIONS,double> hMin(0.2);
  tarch::la::Vector<DIMENSIONS,double> hMax(0.2);

  tarch::la::Vector<DIMENSIONS,double> rotationAxis(1.0);

  Hexahedron hexahedron(
      false,
      boxDimensions,
      origin
  );


  tarch::la::Vector<DIMENSIONS,double> x(0.2);
  x(1) = 0.0;

  //check large box
  tarch::la::Vector<DIMENSIONS,double> xLarge;
  xLarge = x;
  xLarge(1) = -0.05;
  tarch::la::Vector<DIMENSIONS,double> hLarge(0.2);
  hLarge(1) = 0.15;
  validate( !hexahedron.isCompletelyOutside(xLarge,hLarge) );
  validate( !hexahedron.isCompletelyInside(xLarge,hLarge) );

  //check two splitted boxes
  tarch::la::Vector<DIMENSIONS,double> hLower(0.2);
  tarch::la::Vector<DIMENSIONS,double> xLower;
  xLower = x;
  xLower(1) -= hLower(1)/2.0;

  tarch::la::Vector<DIMENSIONS,double> hUpper(0.2);
  hUpper(1) = 0.1;
  tarch::la::Vector<DIMENSIONS,double> xUpper;
  xUpper = x;
  xUpper(1) += hUpper(1)/2.0;

  validate(  hexahedron.isCompletelyOutside(xLower,tarch::la::Vector<DIMENSIONS,double>(0.0)) );
  validate( !hexahedron.isCompletelyOutside(xLower,hLower));
  validate( !hexahedron.isCompletelyInside(xLower,hLower));
  validate(  hexahedron.isCompletelyInside(xUpper,tarch::la::Vector<DIMENSIONS,double>(0.0)));
  validate( !hexahedron.isCompletelyOutside(xUpper,hUpper));
  validate( !hexahedron.isCompletelyInside(xUpper,hUpper));
}


void peano::geometry::builtin::tests::HexahedronTest::run() {
  testMethod(testUnitCube);
  testMethod(testPointwiseQueries0);
  testMethod(testPointwiseQueries1);
  testMethod(testRangeQueries);
  testMethod(testFaceIntersection);
  testMethod(testNumberOfFacesIntersected);
  testMethod(testRefine);
  testMethod(testSplittedVoxelCall);
}

#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
