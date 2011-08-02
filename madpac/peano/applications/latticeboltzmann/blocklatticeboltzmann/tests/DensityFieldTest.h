// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_DENSITYFIELDTEST_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_DENSITYFIELDTEST_H_

#include "tarch/tests/TestCase.h"
#include "tarch/la/Vector.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockVertex.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace tests {
          class DensityFieldTest;
        }
      }
    }
  }
}


/** tests the setters and getters for the density field on a vertex. As the field is stored in two different buffers,
 *  this test is essential for FSI scenarios.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityFieldTest:
public tarch::tests::TestCase {
  public:
    DensityFieldTest();
    ~DensityFieldTest(){}

    virtual void run();

    virtual void setUp();
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_DENSITYFIELDTEST_H_
