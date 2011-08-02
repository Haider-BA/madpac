#include "peano/geometry/builtin/tests/DriftRatchetTest.h"

#include "peano/geometry/builtin/DriftRatchet.h"
#include "peano/utils/Globals.h"


#include "tarch/compiler/CompilerSpecificSettings.h"


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::geometry::builtin::tests::DriftRatchetTest)

peano::geometry::builtin::tests::DriftRatchetTest::DriftRatchetTest():
  TestCase( "peano::geometry::builtin::tests::DriftRatchetTest" ) {
}

peano::geometry::builtin::tests::DriftRatchetTest::~DriftRatchetTest() {
}


void peano::geometry::builtin::tests::DriftRatchetTest::setUp(){}



void peano::geometry::builtin::tests::DriftRatchetTest::testDistanceToRotationAxis() {
  validateEquals(peano::geometry::builtin::DriftRatchet::getDefaultMinRadius(2.40), 1.25);

  peano::geometry::builtin::DriftRatchet result(
    false,
    2.40/2.40,
    peano::geometry::builtin::DriftRatchet::getDefaultMinRadius( 2.40/2.40 ),
    tarch::la::Vector<DIMENSIONS,double>(0.0)
  );

#ifdef Dim2

  tarch::la::Vector<DIMENSIONS,double> x(0.5);
  x(1)=0.0;
  validateNumericalEquals( result.getDistanceFromRotationAxis(x), 0.0);

  x = tarch::la::Vector<DIMENSIONS,double>(0.5);
  validateNumericalEquals( result.getDistanceFromRotationAxis(x), 0.5);

  x(1) = 1.0;
  validateNumericalEquals( result.getDistanceFromRotationAxis(x), 1.0);

#elif Dim3
  tarch::la::Vector<DIMENSIONS,double> x(0.0);
  x(0) = 0.5;
  validateNumericalEquals( result.getDistanceFromRotationAxis(x), 0.0 );

  assignList(x) = 0.5, 0.5, 0.0;
  validateNumericalEquals( result.getDistanceFromRotationAxis(x), 0.5);

  assignList(x) = 0.0, 0.0, 1.0;
  validateNumericalEquals( result.getDistanceFromRotationAxis(x), 1.0);

  assignList(x) = 0.0, 1.0, 1.0;
  validateNumericalEquals( result.getDistanceFromRotationAxis(x), std::sqrt(2.0));

#endif // Dim2
}


void peano::geometry::builtin::tests::DriftRatchetTest::testRadiusCalculation() {
  peano::geometry::builtin::DriftRatchet result(
    false,
    2.40,
    peano::geometry::builtin::DriftRatchet::getDefaultMinRadius( 2.40 ),
    tarch::la::Vector<DIMENSIONS,double>(0.0)
  );

  validateNumericalEquals( result.getRadius(   0.0   ), 1.25 );
  validateNumericalEqualsWithEps( result.getRadius(
       result.getExtremeCoordinateInAxisDirection(1) + result.getExtremeCoordinateInAxisDirection(0)
                                                   ), 1.25, 1e-12);
  validateNumericalEqualsWithEps( result.getRadius(
       result.getExtremeCoordinateInAxisDirection(0) - result.getExtremeCoordinateInAxisDirection(1)
                                                   ), 2.40, 1e-12);
}


void peano::geometry::builtin::tests::DriftRatchetTest::testInletFaceIntersection() {
#ifdef Dim2

  const bool   isInverted = false;
  const double maxRadius  = 0.28571;
  const double minRadius  = peano::geometry::builtin::DriftRatchet::getDefaultMinRadius(maxRadius);
  tarch::la::Vector<DIMENSIONS,double> offset(0.0);
  offset(1) = 0.5;

  DriftRatchet myDriftRatchet(isInverted,
               maxRadius, minRadius, offset);

  tarch::la::Vector<DIMENSIONS,double> position(0.0);
  position(1) = 1.0/3.0;

  tarch::la::Vector<DIMENSIONS,double> face1D(0.0);
  face1D(1) = 1.0/3.0;

  //check coarse point just below inlet (1/3)
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)) );
  validate( !myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(1.0/3.0)));
  validate( !myDriftRatchet.isCompletelyOutsideNotInverted(position, face1D));
  //check coarse point one layer lower (0.0)
  position = tarch::la::Vector<DIMENSIONS,double>(0.0);
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)));
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, face1D));
  //check finer point at 1/9
  position(1) = 1.0/9.0;
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)));
  face1D(1) = 1.0/9.0;
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, face1D));
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(1.0/9.0)));

  //check finer point at 2/9
  // check problem points only pointwise
  assignList(position) = -1.0/9.0, 1.0/9.0;
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)));
  assignList(position) =  0.0/9.0, 1.0/9.0;
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)));
  assignList(position) =  1.0/9.0, 1.0/9.0;
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)));
  assignList(position) = -1.0/9.0, 2.0/9.0;
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)));
  assignList(position) =  0.0/9.0, 2.0/9.0;
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)));
  assignList(position) =  1.0/9.0, 2.0/9.0;
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)));
//  position = -1.0/9.0, 3.0/9.0; // Problem: periodicity of drift ratchet!
//  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)));
  assignList(position) =  0.0/9.0, 3.0/9.0;
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)));
  assignList(position) =  1.0/9.0, 3.0/9.0;
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)));
  // check voxel calls
  position(1) = 2.0/9.0;
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)));
  face1D(1) = 1.0/9.0;
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, face1D));
  // following not running due to periodicity of DR! (see above)
  //validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(1.0/9.0)) );

  // check problem points only pointwise
  assignList(position) = 1.0/9.0, 1.0/3.0;
  validate(  myDriftRatchet.isCompletelyOutsideNotInverted(position, tarch::la::Vector<DIMENSIONS,double>(0.0)) );

#endif //Dim2
}


void peano::geometry::builtin::tests::DriftRatchetTest::run() {
  testMethod(testDistanceToRotationAxis);
  testMethod(testRadiusCalculation);
  testMethod(testInletFaceIntersection);
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
