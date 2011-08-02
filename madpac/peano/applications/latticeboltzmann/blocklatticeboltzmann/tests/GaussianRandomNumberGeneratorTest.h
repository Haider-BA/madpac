// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_TESTS_GAUSSIANRANDOMNUMBERGENERATORTEST_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_TESTS_GAUSSIANRANDOMNUMBERGENERATORTEST_H_


#include "tarch/tests/TestCase.h"
#include "peano/applications/latticeboltzmann/GaussianRandomNumberGenerator.h"


namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace tests {
          class GaussianRandomNumberGeneratorTest;
        }
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::GaussianRandomNumberGeneratorTest: public tarch::tests::TestCase {
  public:
    GaussianRandomNumberGeneratorTest();
    ~GaussianRandomNumberGeneratorTest(){}

    virtual void run();

    virtual void setUp(){}
};

#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_TESTS_GAUSSIANRANDOMNUMBERGENERATORTEST_H_
