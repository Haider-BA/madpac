#include "peano/geometry/builtin/tests/SphereTest.h"
#include "peano/geometry/builtin/Sphere.h"
#include "peano/geometry/builtin/Hexahedron.h"
//#include "peano/geometry/builtin/Intersection.h"

#include "tarch/compiler/CompilerSpecificSettings.h"

#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::geometry::builtin::tests::SphereTest)

tarch::logging::Log peano::geometry::builtin::tests::SphereTest::_log("peano::geometry::builtin::tests::SphereTest");


peano::geometry::builtin::tests::SphereTest::SphereTest():
  TestCase("peano::geometry::builtin::tests::SphereTest") {
}


peano::geometry::builtin::tests::SphereTest::~SphereTest() {
}


void peano::geometry::builtin::tests::SphereTest::setUp(){}

void peano::geometry::builtin::tests::SphereTest::testIsInsideOpenMinkowskiCylinder() {
#ifdef Dim3
  double radius = 0.1;
  tarch::la::Vector<DIMENSIONS,double> offset(0.5);
  tarch::la::Vector<DIMENSIONS,double> velocity(0.0);
  tarch::la::Vector<DIMENSIONS,double> rotationAxis(1.0);

  Sphere sphere(false, radius, offset);

  tarch::la::Vector<DIMENSIONS,double> x(0.0);
  tarch::la::Vector<DIMENSIONS,double> baseCenter(0.0);
  int dir = 0;
  double height = 0.0;

  // check dir=0
  // check outer points (even on boundary)
  x = tarch::la::Vector<DIMENSIONS,double>(0.0);
  baseCenter = tarch::la::Vector<DIMENSIONS,double>(1.0);
  height = 0.1;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  x = tarch::la::Vector<DIMENSIONS,double>(0.5);
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  x = tarch::la::Vector<DIMENSIONS,double>(0.7);
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  x = tarch::la::Vector<DIMENSIONS,double>(0.9);
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.5, 1.2, 1.2;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.5, 1.1, 1.1;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));

  x = tarch::la::Vector<DIMENSIONS,double>(0.0);
  baseCenter = tarch::la::Vector<DIMENSIONS,double>(0.0);
  height = 0.5;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = -0.1, 0.0, 0.0;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.5, 0.0, 0.0;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.0, 0.0, 0.0;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.25, 0.1009, 0.10009;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.25, 0.0, 0.10009;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.25, 0.1009, 0.0;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.25, 0.1, 0.1;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.25, 0.0, 0.1;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.25, 0.1, 0.0;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));

  // check inner points
  assignList(x) = 1.5, 1.0, 1.0;
  baseCenter = tarch::la::Vector<DIMENSIONS,double>(1.0);
  height = 1.0;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.9, 1.0, 1.0;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.1, 1.0, 1.0;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.9, 1.0, 0.95;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.1, 1.05, 1.0;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));


  // check dir=1
  dir = 1;
  // check outer points (even on boundary)
  x = tarch::la::Vector<DIMENSIONS,double>(0.0);
  baseCenter = tarch::la::Vector<DIMENSIONS,double>(1.0);
  height = 0.1;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  x = tarch::la::Vector<DIMENSIONS,double>(0.5);
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  x = tarch::la::Vector<DIMENSIONS,double>(0.7);
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  x = tarch::la::Vector<DIMENSIONS,double>(0.9);
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.2, 1.5, 1.2;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.1, 1.5, 1.1;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));

  x = tarch::la::Vector<DIMENSIONS,double>(0.0);
  baseCenter = tarch::la::Vector<DIMENSIONS,double>(0.0);
  height = 0.5;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = -0.0, -0.1, 0.0;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.0, 1.5, 0.0;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.0, 1.0, 0.0;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.1, 0.25, 0.1;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.1, 0.25, 0.0;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.0, 0.25, 0.1;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));

  // check inner points
  assignList(x) = 1.0, 1.5, 1.0;
  baseCenter = tarch::la::Vector<DIMENSIONS,double>(1.0);
  height = 1.0;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.0, 1.9, 1.0;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.0, 1.1, 1.0;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.0, 1.9, 0.95;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.05, 1.1, 1.0;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));


  // check dir=2
  dir = 2;
  // check outer points (even on boundary)
  x = tarch::la::Vector<DIMENSIONS,double>(0.0);
  baseCenter = tarch::la::Vector<DIMENSIONS,double>(1.0);
  height = 0.1;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  x = tarch::la::Vector<DIMENSIONS,double>(0.5);
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  x = tarch::la::Vector<DIMENSIONS,double>(0.7);
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  x = tarch::la::Vector<DIMENSIONS,double>(0.9);
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.2, 1.2, 1.5;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.1, 1.1, 1.5;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));

  x = tarch::la::Vector<DIMENSIONS,double>(0.0);
  baseCenter = tarch::la::Vector<DIMENSIONS,double>(0.0);
  height = 0.5;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = -0.0, 0.0, -0.1;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.0, 0.0, 1.5;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.0, 0.0, 1.0;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.1, 0.1, 0.25;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.0, 0.1, 0.25;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.1, 0.0, 0.25;
  validate( !sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));

  // check inner points
  assignList(x) = 1.0, 1.0, 1.5;
  baseCenter = tarch::la::Vector<DIMENSIONS,double>(1.0);
  height = 1.0;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.0, 1.0, 1.9;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.0, 1.0, 1.1;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 0.95, 1.0, 1.9;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));
  assignList(x) = 1.0, 1.05, 1.1;
  validate( sphere.isInsideOpenMinkowskiCylinder(x, dir, baseCenter, height));

#endif //Dim3
}


void peano::geometry::builtin::tests::SphereTest::testPointwiseQueries() {
  Sphere sphere(false,0.3, tarch::la::Vector<DIMENSIONS,double>(0.5));

  tarch::la::Vector<DIMENSIONS,double> x(0.5);
  tarch::la::Vector<DIMENSIONS,double> h(0.0);

  x(0) = 0.0;
  x(1) = 0.0;
  validate(  sphere.isCompletelyOutside(x,h) );
  validate(  !sphere.isCompletelyInside(x,h) );

  x(0) = 0.2;
  x(1) = 0.0;
  validate(  sphere.isCompletelyOutside(x,h) );
  validate(  !sphere.isCompletelyInside(x,h) );

  x(0) = 0.2;
  x(1) = 0.1;
  validate(  sphere.isCompletelyOutside(x,h) );
  validate(  !sphere.isCompletelyInside(x,h) );

  x(0) = 0.3;
  x(1) = 0.3;
  validate( !sphere.isCompletelyOutside(x,h) );
  validate(   sphere.isCompletelyInside(x,h) );

  x(0) = 0.5;
  x(1) = 0.5-0.3;
  validate( !sphere.isCompletelyOutside(x,h) );
  validate(  !sphere.isCompletelyInside(x,h) );
}


void peano::geometry::builtin::tests::SphereTest::testRangeQueries0() {
  Sphere sphere(false,0.3, tarch::la::Vector<DIMENSIONS,double>(0.5));

  tarch::la::Vector<DIMENSIONS,double> x(0.5);
  tarch::la::Vector<DIMENSIONS,double> h(0.1);

  x(0) = 0.0;
  x(1) = 0.0;
  validate(  sphere.isCompletelyOutside(x,h) );
  validate(  !sphere.isCompletelyInside(x,h) );

  x(0) = 0.1;
  validate(  sphere.isCompletelyOutside(x,h) );
  validate(  !sphere.isCompletelyInside(x,h) );

  x(1) = 0.1;
  validate(  sphere.isCompletelyOutside(x,h) );
  validate(  !sphere.isCompletelyInside(x,h) );

  x(0) = 0.5;
  x(1) = 0.1;
  validate(  sphere.isCompletelyOutside(x,h) );
  validate(  !sphere.isCompletelyInside(x,h) );

  x(0) = 0.5;
  x(1) = 0.3;
  validate( !sphere.isCompletelyOutside(x,h) );
  validate(  !sphere.isCompletelyInside(x,h) );

  x(0) = 0.3;
  x(1) = 0.3;
  validate( !sphere.isCompletelyOutside(x,h) );
  validate(  !sphere.isCompletelyInside(x,h) );

  #ifdef Dim2
  x(0) = 0.4;
  x(1) = 0.4;
  validate( !sphere.isCompletelyOutside(x,h) );
  validate(   sphere.isCompletelyInside(x,h) );
  #endif

  x(0) = 0.5;
  x(1) = 0.5;
  validate( !sphere.isCompletelyOutside(x,h) );
  validate(   sphere.isCompletelyInside(x,h) );
}


void peano::geometry::builtin::tests::SphereTest::testRangeQueries1() {
#ifdef Dim2
  Sphere sphere(false,5.0, tarch::la::Vector<DIMENSIONS,double>(0.5));

  tarch::la::Vector<DIMENSIONS,double> x(0.5);
  tarch::la::Vector<DIMENSIONS,double> h(0.0);

  h(0) = 4.0;
  h(1) = 3.0;

  validate( !sphere.isCompletelyOutside(x,h));
  validate(  sphere.isCompletelyInside(x,h));

#else

#endif
}


void peano::geometry::builtin::tests::SphereTest::testRangeQueries2() {

  tarch::la::Vector<DIMENSIONS,double> h(0.0);
  tarch::la::Vector<DIMENSIONS,double> x(0.0);

//  tarch::la::Vector<DIMENSIONS,double> hMinSphere(0.025);
//  tarch::la::Vector<DIMENSIONS,double> hMaxSphere(0.1);
  tarch::la::Vector<DIMENSIONS,double> sphereCenter(0.5);
//  tarch::la::Vector<DIMENSIONS,double> velocity(0.0);
  tarch::la::Vector<DIMENSIONS,double> rotationAxis(1.0);
  double sphereRadius = 0.1;
  Sphere sphere( false, sphereRadius, sphereCenter );

  h = tarch::la::Vector<DIMENSIONS,double>(0.1);

#ifdef Dim2
  // Test case for Minkowski spheres in 2D
  assignList(x) = 0.39, 0.39;
  validate( !sphere.isCompletelyOutside(x,h));
  validate( !sphere.isCompletelyInside(x,h));

  // Test case (may be correct without Minkowski spheres due to special
  // situation in 2D: currenttarch::la::Vector<DIMENSIONS,double> (one of 8 diagonal neighbours) is
  // already inside sphere -> "too early" return).
  assignList(x) = 0.4, 0.4;
#elif Dim3
  assignList(x) = 0.4, 0.4, 0.5;
#else
#endif

//  validate( !sphere.isCompletelyOutside(x,h));
//  validate( !sphere.isCompletelyInside(x,h));
}


void peano::geometry::builtin::tests::SphereTest::testFaceIntersection() {
  Sphere sphere(false, 0.3, tarch::la::Vector<DIMENSIONS,double>(0.5));

  tarch::la::Vector<DIMENSIONS,double> x(0.5);
  tarch::la::Vector<DIMENSIONS,double> h(0.8);

  x(0) = -0.5;
  validate( !sphere.isCompletelyOutside(x,h));
  validate(  !sphere.isCompletelyInside(x,h));
}


void peano::geometry::builtin::tests::SphereTest::testNumberOfFacesIntersected() {
//  Sphere sphere(false,23,0.3, tarch::la::Vector<DIMENSIONS,double>(0.5));
//
//  tarch::la::Vector<DIMENSIONS,double> x(0.5);
//  tarch::la::Vector<DIMENSIONS,double> h(0.8);
//
//  x(0) = -0.5;
//  validate( !sphere.isCompletelyOutside(x,h));
//  validate( sphere.isOutsideClosedDomain(x));
//  validate(  !sphere.isCompletelyInside(x,h));
//  validateEquals( sphere.getNumberOfBoundariesIntersected(x,h), 1);
//  validateEquals( sphere.getBoundaryNumber(0,x,h), 23);
//
//  h = tarch::la::Vector<DIMENSIONS,double>(0.5);
//  x = tarch::la::Vector<DIMENSIONS,double>(1.0);
//  x(0) = -0.2;
//  validate( !sphere.isCompletelyOutside(x,h));
//  validate(  !sphere.isCompletelyInside(x,h));
//  validateEquals( sphere.getNumberOfBoundariesIntersected(x,h), 1);
//  validateEquals( sphere.getBoundaryNumber(0,x,h), 23);
}


void peano::geometry::builtin::tests::SphereTest::testAdaptivityProblem() {
//#ifdef Dim2
//  const tarch::la::Vector<DIMENSIONS,double> channelDimensions(10.0);
//  const tarch::la::Vector<DIMENSIONS,double> origin(0.0);
//  const tarch::la::Vector<DIMENSIONS,double> maxMeshWidth(10.0/3.0);
//  const tarch::la::Vector<DIMENSIONS,double> minMeshWidth( 1.0/3.0);
//  const tarch::la::Vector<DIMENSIONS,double> minMeshWidthBox(1.0);
//  bool         isInverted = true;
//  int          geometricIndex = 4;
//  double       radius = 0.5;
//  tarch::la::Vector<DIMENSIONS,double> offset(5.0);
//  offset(0) = 7.5;
//  const tarch::la::Vector<DIMENSIONS,double> velocity(0.0);
//  const tarch::la::Vector<DIMENSIONS,double> rotationAxis(1.0);
//
//  peano::geometry::builtin::Hexahedron* box = new peano::geometry::builtin::Hexahedron(
//                false, 0, channelDimensions, origin);
//
//  Sphere* sphere = new Sphere(isInverted, geometricIndex,
//                radius, offset);
//
//  peano::geometry::builtin::Intersection  geometry;
//  geometry.addGeometry(box);
//  geometry.addGeometry(sphere);
//
//  tarch::la::Vector<DIMENSIONS,double> x(20.0/3.0);
//  x(1) = 4.44444444444444444444;
//  tarch::la::Vector<DIMENSIONS,double> h(10.0/9.0);
//
//  validate( !geometry.isCompletelyOutside(x,h));
//  validate( !geometry.isOutsideClosedDomain(x));
//  validate( !geometry.isCompletelyInside(x,h));
//
//  h = tarch::la::Vector<DIMENSIONS,double>(10.0/27.0);
//  validate( !geometry.isCompletelyOutside(x,h));
//  validate( !geometry.isOutsideClosedDomain(x));
//  validate( !geometry.isCompletelyInside(x,h));
//  tarch::la::Vector<DIMENSIONS,double> x2 = x + tarch::la::Vector<DIMENSIONS,double>(10.0/27.0);
//  validate( geometry.isOutsideClosedDomain(x2));
//
//  h = tarch::la::Vector<DIMENSIONS,double>(10.0/81.0);
//  validate( !geometry.isCompletelyOutside(x,h));
//  validate( !geometry.isOutsideClosedDomain(x));
//  validate(  geometry.isCompletelyInside(x,h));
//
//#endif
}


void peano::geometry::builtin::tests::SphereTest::run() {
  testMethod(testIsInsideOpenMinkowskiCylinder);
  testMethod(testPointwiseQueries);
  testMethod(testRangeQueries0);
  testMethod(testRangeQueries1);
  testMethod(testRangeQueries2);
  testMethod(testFaceIntersection);
  testMethod(testNumberOfFacesIntersected);
  testMethod(testAdaptivityProblem);
}

#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif

