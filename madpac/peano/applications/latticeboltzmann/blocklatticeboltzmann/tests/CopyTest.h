#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_TESTS_COPYTEST_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_TESTS_COPYTEST_H_

#include "tarch/utils/Watch.h"
#include "tarch/tests/TestCase.h"
#include "tarch/logging/Log.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"


#define V_SIZE (LB_BLOCKSIZE*LB_CURRENT_DIR)

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace tests {
          class CopyTest;

          class CopyTestClass;
        }
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::CopyTestClass {
  public:
    CopyTestClass(): _v(0.0){}
    ~CopyTestClass(){}

    tarch::la::Vector<V_SIZE,double> getVCopy() const {
      return _v;
    }

    void setV(const tarch::la::Vector<V_SIZE,double> v){
      _v = v;
    }

    tarch::la::Vector<V_SIZE,double>& getVRef() {
      return _v;
    }


  private:
    tarch::la::Vector<V_SIZE,double> _v;
};


class peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::CopyTest:
public tarch::tests::TestCase {
  public:
    CopyTest();
    ~CopyTest(){}

    virtual void setUp(){}

    virtual void run();

  private:
    void work(tarch::la::Vector<V_SIZE,double> &v) const;

    static const int NUMBER_TESTS;
    static tarch::logging::Log _log;
};

#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_TESTS_COPYTEST_H_
