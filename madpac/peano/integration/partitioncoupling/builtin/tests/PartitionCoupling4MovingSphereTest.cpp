#include "peano/integration/partitioncoupling/builtin/tests/PartitionCoupling4MovingSphereTest.h"

#include "tarch/tests/TestCaseFactory.h"
//registerTest(peano::integration::partitioncoupling::builtin::tests::PartitionCoupling4MovingSphereTest)


void peano::integration::partitioncoupling::builtin::tests::PartitionCoupling4MovingSphereTest::run(){


  tarch::la::Vector<DIMENSIONS,double> hexahedronSize(1.0);
  tarch::la::Vector<DIMENSIONS,double> hexahedronOffset(0.0);
  peano::geometry::builtin::Hexahedron *hexahedron = new peano::geometry::builtin::Hexahedron(false,hexahedronSize,hexahedronOffset);

  tarch::la::Vector<DIMENSIONS,double> spherePosition(0.5);
  double sphereRadius = 1.0/6.0;
  double sphereDensity = 1.0;
  double sphereMass = sphereDensity*tarch::la::PI
#if (DIMENSIONS==2)
                      *sphereRadius*sphereRadius
#elif(DIMENSIONS==3)
                      *4.0/3.0*sphereRadius*sphereRadius*sphereRadius
#endif
                    ;

  int timestepsPerPlotting = 5;
  double dt = 0.01;

  tarch::la::Vector<DIMENSIONS,double> force(0.0);
  tarch::la::Vector<DIMENSIONS,double> forcePosition(0.0);
  tarch::la::Vector<DIMENSIONS,double> velocityPosition(0.0);

  std::vector<peano::integration::partitioncoupling::builtin::tests::PartitionCoupling4MovingSphereTest::TestScenario>
    testScenarios = getTestScenarios(spherePosition,sphereRadius,sphereMass,dt);

  for (unsigned int i = 0; i < testScenarios.size(); i++){
    tarch::la::Vector<DIMENSIONS,double> velocity(0.0);
    std::stringstream ss(std::stringstream::in | std::stringstream::out);
    ss << "PartitionCoupling4MovingSphereTest_Test_" << i << "_";

    // create receive-,send- and coupling object
    peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().init(
      spherePosition,sphereRadius,tarch::la::Vector<3,double>(0.0),tarch::la::Vector<3,double>(0.0)
    );
    peano::integration::partitioncoupling::services::SendDataService::getInstance().init(spherePosition);

    PartitionCoupling4MovingSphere partitionCoupling(
      hexahedron,hexahedronSize,hexahedronOffset,spherePosition,sphereRadius,sphereDensity,
      timestepsPerPlotting,timestepsPerPlotting,ss.str()
    );
    partitionCoupling.initialize();
    // add force,advance in time
    peano::integration::partitioncoupling::services::SendDataService::getInstance().getSendData().sendForce(testScenarios[i].forcePosition,testScenarios[i].force);
    partitionCoupling.advance(dt);
    // get velocity and validate its components
    velocity = peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().getReceiveData().getVelocity(testScenarios[i].velocityPosition);
    std::cout << "Velocity: " << velocity << ", expected: " << testScenarios[i].expectedVelocity << std::endl;
    validate(tarch::la::equals(
      tarch::la::dot(velocity-testScenarios[i].expectedVelocity,velocity-testScenarios[i].expectedVelocity),
      0.0
    ));
  }
}


std::vector<peano::integration::partitioncoupling::builtin::tests::PartitionCoupling4MovingSphereTest::TestScenario>
peano::integration::partitioncoupling::builtin::tests::PartitionCoupling4MovingSphereTest::getTestScenarios(
  const tarch::la::Vector<DIMENSIONS,double> &spherePosition,
  const double &radius,
  const double &sphereMass,
  const double &dt
) const {
  std::vector<peano::integration::partitioncoupling::builtin::tests::PartitionCoupling4MovingSphereTest::TestScenario>
  testScenarios;

  peano::integration::partitioncoupling::builtin::tests::PartitionCoupling4MovingSphereTest::TestScenario scenario;
  const double forceMagnitude = 0.5;

  // force test 1: force at (radius,0,...,0)+spherePosition, directed in positive (DIMENSIONS-1)-direction
  scenario.force = tarch::la::Vector<DIMENSIONS,double>(0.0);
  scenario.force(DIMENSIONS-1) = forceMagnitude;
  scenario.forcePosition = spherePosition;
  scenario.forcePosition(0) += radius;

  // evaluation 1: evaluate it where the sphere obtained the force
  scenario.velocityPosition = scenario.forcePosition;

  scenario.expectedVelocity = getExpectedVelocity(
                                spherePosition,scenario.velocityPosition,
                                scenario.force,radius,sphereMass,dt
                              );
  testScenarios.push_back(scenario);

  return testScenarios;
}


tarch::la::Vector<DIMENSIONS,double>
peano::integration::partitioncoupling::builtin::tests::PartitionCoupling4MovingSphereTest::
getExpectedVelocity(
  const tarch::la::Vector<DIMENSIONS,double> &spherePosition,
  const tarch::la::Vector<DIMENSIONS,double> &velocityPosition,
  const tarch::la::Vector<DIMENSIONS,double> &force,
  const double &radius, const double &sphereMass,const double &dt
) const {
  tarch::la::Vector<DIMENSIONS,double> result(0.0);
  tarch::la::Vector<3,double> r(0.0);
  tarch::la::Vector<3,double> spherePos(0.0);
  tarch::la::Vector<3,double> velocityPos(0.0);
  tarch::la::Vector<3,double> force3(0.0);
  for (int d = 0; d < DIMENSIONS; d++){
    force3(d) = force(d);
    spherePos(d) = spherePosition(d);
    velocityPos(d) = velocityPosition(d);
  }

  r = peano::integration::partitioncoupling::builtin::crossProduct(velocityPos-spherePos,force3);
  r = peano::integration::partitioncoupling::builtin::crossProduct(r,velocityPos-spherePos);
  r = dt/(2.0/5.0*sphereMass*radius*radius)*r;

  for (int d = 0; d < DIMENSIONS; d++){
    result(d) = r(d);
  }

  return result;
}
