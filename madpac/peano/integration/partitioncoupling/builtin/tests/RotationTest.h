// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_TESTS_ROTATIONTEST_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_TESTS_ROTATIONTEST_H_


#include "tarch/tests/TestCase.h"
#include "peano/utils/Dimensions.h"
#include "peano/integration/partitioncoupling/builtin/Rotation.h"
#include "tarch/la/Scalar.h"
#include "tarch/la/Vector.h"
#include "tarch/la/VectorVectorOperations.h"
#include <vector>

namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace builtin {
        namespace tests {
          class RotationTest;
        }
      }
    }
  }
}


/** test for rotation implementations. This part is not needed any longer!
 *
 *  @author Philipp Neumann
 */
class peano::integration::partitioncoupling::builtin::tests::RotationTest: public tarch::tests::TestCase {
  public:
    RotationTest();
    ~RotationTest(){}

    virtual void run();

    virtual void setUp();

  private:
    void createAngles(std::vector<tarch::la::Vector<DIMENSIONS-1,double> >&angles) const;

    void createForceVectors(std::vector<tarch::la::Vector<DIMENSIONS,double> > &forceVectors) const;

};
#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_TESTS_ROTATIONTEST_H_
