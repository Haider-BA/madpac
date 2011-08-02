#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_TESTS_FLUCTUATINGCOLLISIONMODELTEST_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_TESTS_FLUCTUATINGCOLLISIONMODELTEST_H_

#include "tarch/tests/TestCase.h"
#include "tarch/la/Matrix.h"
#include "tarch/la/Vector.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/BlockFluctuatingCollisionModel.h"


namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace tests {
          class FluctuatingCollisionModelTest;
        }
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::FluctuatingCollisionModelTest:
public tarch::tests::TestCase {
  public:
    FluctuatingCollisionModelTest();
    ~FluctuatingCollisionModelTest();

    virtual void run();

    virtual void setUp(){}
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_TESTS_FLUCTUATINGCOLLISIONMODELTEST_H_
