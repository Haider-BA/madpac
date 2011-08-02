// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOXRANGETEST_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOXRANGETEST_H_

#include "peano/utils/Dimensions.h"
#include "tarch/tests/TestCase.h"
#include "tarch/la/Vector.h"
//#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/BoxRange.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace tests {
          class BoxRangeTest;
        }
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BoxRangeTest: public tarch::tests::TestCase {
  public:
    BoxRangeTest();
    ~BoxRangeTest(){}

    virtual void run();

    virtual void setUp();
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOXRANGETEST_H_
