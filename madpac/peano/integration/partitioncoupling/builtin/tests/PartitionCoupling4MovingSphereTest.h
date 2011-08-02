// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_TESTS_PARTITIONCOUPLING4MOVINGSPHERETEST_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_TESTS_PARTITIONCOUPLING4MOVINGSPHERETEST_H_

#include "tarch/tests/TestCase.h"
#include "tarch/la/ScalarOperations.h"
#include "peano/integration/partitioncoupling/builtin/PartitionCoupling4MovingSphere.h"
#include "peano/geometry/builtin/Hexahedron.h"

namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace builtin {
        namespace tests {
          class PartitionCoupling4MovingSphereTest;
        }
      }
    }
  }
}


/** carries out one or two simple tests for the partitioncoupling classes.
 *
 * @author Philipp Neumann
 */
class peano::integration::partitioncoupling::builtin::tests::PartitionCoupling4MovingSphereTest:
public tarch::tests::TestCase {

  public:
    PartitionCoupling4MovingSphereTest(): tarch::tests::TestCase("peano::integration::partitioncoupling::builtin::tests::PartitionCoupling4MovingSphereTest"){}
    ~PartitionCoupling4MovingSphereTest(){}

    virtual void run();

    virtual void setUp(){}

  private:
    /** parameters needed for testing */
    struct TestScenario {
      // force values
      tarch::la::Vector<DIMENSIONS,double> force;
      // position where force is applied
      tarch::la::Vector<DIMENSIONS,double> forcePosition;
      // position on sphere surface where velocity shall be returned
      tarch::la::Vector<DIMENSIONS,double> velocityPosition;
      // velocity that is expected at velocityPosition
      tarch::la::Vector<DIMENSIONS,double> expectedVelocity;
    };

    /** create all test scenarios */
    std::vector<TestScenario> getTestScenarios(
      const tarch::la::Vector<DIMENSIONS,double> &spherePosition,
      const double &radius,
      const double &sphereMass,
      const double &dt
    ) const;

    /** determine expected velocity for a sphere placed at
     *  spherePosition with radius 'radius' and mass sphereMass,
     *  when the force 'force' is applied and the velocity shall
     *  be measured at velocityPosition. dt is the respective timestep.
     */
    tarch::la::Vector<DIMENSIONS,double>
    getExpectedVelocity(
      const tarch::la::Vector<DIMENSIONS,double> &spherePosition,
      const tarch::la::Vector<DIMENSIONS,double> &velocityPosition,
      const tarch::la::Vector<DIMENSIONS,double> &force,
      const double &radius, const double &sphereMass,const double &dt
    ) const;
};

#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_TESTS_PARTITIONCOUPLING4MOVINGSPHERE_H_
