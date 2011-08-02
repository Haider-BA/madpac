// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_TOOLBOX_TESTS_INTERPOLATION_TEST_H_
#define _PEANO_TOOLBOX_TESTS_INTERPOLATION_TEST_H_

#include "tarch/tests/TestCase.h"

#include "tarch/logging/Log.h"
#include "tarch/tests/TestCaseFactory.h"
#include "peano/toolbox/solver/HyperCube.h"
#include "peano/toolbox/stencil/Stencil.h"
#include "peano/toolbox/solver/VirtualHierarchicalHRefinement.h"

namespace peano {
  namespace toolbox {
    namespace solver {
      namespace tests {
        class InterpolationTest;
      }
    }
  }
}

/**
 * Interpolation  Test
 *
 * @author Roman Karlstetter
 */
class peano::toolbox::solver::tests::InterpolationTest: public tarch::tests::TestCase{
  private:
  void test4Dinterpolation();
  void test3Dinterpolation();
  void test2Dinterpolation();
  public:
    InterpolationTest();
    virtual ~InterpolationTest();
    virtual void run();
    virtual void setUp();
  peano::toolbox::solver::VirtualHierarchicalHRefinement _vhh;
  static tarch::logging::Log _log;
};

#endif //_PEANO_TOOLBOX_TESTS_INTERPOLATION_TEST_H_
