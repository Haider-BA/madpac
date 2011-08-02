// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_TESTS_BLOCKRESTRICTIONPROLONGATIONTEST_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_TESTS_BLOCKRESTRICTIONPROLONGATIONTEST_H_
#include "tarch/tests/TestCase.h"
#include "tarch/logging/Log.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockRestrictionProlongation.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace tests {
          class BlockRestrictionProlongationTest;
        }
      }
    }
  }
}


/** performs tests on the restriction-prolongation class
 *
 * @author Philipp Neumann
 *
 * */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::
BlockRestrictionProlongationTest: public tarch::tests::TestCase {
  public:
    BlockRestrictionProlongationTest();
    ~BlockRestrictionProlongationTest();

    virtual void run();


    virtual void setUp(){}

  private:
    void testProlongation();

    void testFindFineOverlapCells();

    /** for logging */
    static tarch::logging::Log _log;
};

#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_TESTS_BLOCKRESTRICTIONPROLONGATIONTEST_H_
