#include "peano/geometry/builtin/tests/CuttingPlaneTest.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::geometry::builtin::tests::CuttingPlaneTest)


peano::geometry::builtin::tests::CuttingPlaneTest::CuttingPlaneTest():
tarch::tests::TestCase( "peano::geometry::builtin::tests::CuttingPlaneTest" ){}


peano::geometry::builtin::tests::CuttingPlaneTest::~CuttingPlaneTest(){}


void peano::geometry::builtin::tests::CuttingPlaneTest::setUp(){}



void peano::geometry::builtin::tests::CuttingPlaneTest::run(){

  // create cutting plane passing through the point (1,...,1) with normal
  // pointing to (1,0,...,0)
  const tarch::la::Vector<DIMENSIONS,double> position(1.0);
  tarch::la::Vector<DIMENSIONS,double> normal(0.0);
  normal(0) = 1.0;
  peano::geometry::builtin::CuttingPlane cuttingPlane(position,normal);

  // choose meshsize and vertex position
  tarch::la::Vector<DIMENSIONS,double> meshSize(1.0/81.0);
  tarch::la::Vector<DIMENSIONS,double> vertexPosition(position);

  // set position onto boundary
  vertexPosition = position;
  assertion(!cuttingPlane.isCompletelyOutside(vertexPosition,meshSize));
  assertion(!cuttingPlane.isCompletelyInside(vertexPosition,meshSize));
  assertion(!cuttingPlane.isOutsideClosedDomain(vertexPosition));

  // choose position completely outside of domain
  vertexPosition = position;
  vertexPosition(0) += meshSize(0);
  assertion(cuttingPlane.isCompletelyOutside(vertexPosition,meshSize));
  assertion(!cuttingPlane.isCompletelyInside(vertexPosition,meshSize));
  assertion(cuttingPlane.isOutsideClosedDomain(vertexPosition));

  // choose position that is outside but not completely outside of domain
  vertexPosition = position;
  vertexPosition += 0.5*meshSize(0);
  assertion(!cuttingPlane.isCompletelyOutside(vertexPosition,meshSize));
  assertion(!cuttingPlane.isCompletelyInside(vertexPosition,meshSize));
  assertion(cuttingPlane.isOutsideClosedDomain(vertexPosition));

  // choose position that is completely inside domain
  vertexPosition = position;
  vertexPosition -= meshSize(0);
  assertion(!cuttingPlane.isCompletelyOutside(vertexPosition,meshSize));
  assertion(cuttingPlane.isCompletelyInside(vertexPosition,meshSize));
  assertion(!cuttingPlane.isOutsideClosedDomain(vertexPosition));

  // choose position that is inside but not completely inside domain
  vertexPosition = position;
  vertexPosition -= 0.5*meshSize(0);
  assertion(!cuttingPlane.isCompletelyOutside(vertexPosition,meshSize));
  assertion(!cuttingPlane.isCompletelyInside(vertexPosition,meshSize));
  assertion(!cuttingPlane.isOutsideClosedDomain(vertexPosition));


  // set meshsize to zero and try again
  meshSize = tarch::la::Vector<DIMENSIONS,double>(0.0);

  // set position onto boundary
  vertexPosition = position;
  assertion(!cuttingPlane.isCompletelyOutside(vertexPosition,meshSize));
  assertion(!cuttingPlane.isCompletelyInside(vertexPosition,meshSize));
  assertion(!cuttingPlane.isOutsideClosedDomain(vertexPosition));

  // set position into comp. domain
  vertexPosition = position;
  vertexPosition -= 1.0/81.0;
  assertion(!cuttingPlane.isCompletelyOutside(vertexPosition,meshSize));
  assertion(cuttingPlane.isCompletelyInside(vertexPosition,meshSize));
  assertion(!cuttingPlane.isOutsideClosedDomain(vertexPosition));

  // set position out of domain
  vertexPosition = position;
  vertexPosition += 1.0/81.0;
  assertion(cuttingPlane.isCompletelyOutside(vertexPosition,meshSize));
  assertion(!cuttingPlane.isCompletelyInside(vertexPosition,meshSize));
  assertion(cuttingPlane.isOutsideClosedDomain(vertexPosition));

}
