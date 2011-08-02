// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATION_HEAT_EQUATION_TIMESTEPPING_TESTS_HIERARCHICAL_TRANSFORM_TEST_H_
#define _PEANO_APPLICATION_HEAT_EQUATION_TIMESTEPPING_TESTS_HIERARCHICAL_TRANSFORM_TEST_H_


#include "tarch/tests/TestCase.h"


namespace peano {
  namespace applications {
    namespace heatequation {
      namespace timestepping {
        namespace tests {
          class HierarchicalTransformTest;
        }
      }
    }
  }
}


class peano::applications::heatequation::timestepping::tests::HierarchicalTransformTest: public tarch::tests::TestCase {
  private:
    void testComputeHierarchicalTransform();
    void testRestrictHierarchicalResidual();
  public:
    HierarchicalTransformTest();

    virtual ~HierarchicalTransformTest();

    virtual void run();

    void virtual setUp();
};

#endif
