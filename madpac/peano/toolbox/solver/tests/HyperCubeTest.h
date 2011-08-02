// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_TOOLBOX_TESTS_HYPERCUBE_TEST_H_
#define _PEANO_TOOLBOX_TESTS_HYPERCUBE_TEST_H_

#include "tarch/tests/TestCase.h"

#include "tarch/logging/Log.h"
#include "tarch/tests/TestCaseFactory.h"
#include "peano/toolbox/solver/HyperCube.h"
#include "peano/toolbox/stencil/Stencil.h"
#include "peano/toolbox/solver/VirtualHierarchicalHRefinement.h"
#include <iterator>
#include <map>

namespace peano {
  namespace toolbox {
    namespace solver {
      namespace tests {
        class HyperCubeTest;
      }
    }
  }
}

/**
 * Interpolation  Test
 *
 * @author Roman Karlstetter
 */
class peano::toolbox::solver::tests::HyperCubeTest: public tarch::tests::TestCase{
  private:
  void testBorder2D();
  void testBorder3D();
  void testBorder4D();
  void testGetColors();
  void testApplyStencil();
  void testAssignOperator();
  void testcopyConstructor();
  public:
    HyperCubeTest();
    virtual ~HyperCubeTest();
    virtual void run();
    virtual void setUp();
  static tarch::logging::Log _log;
};

#endif //_PEANO_TOOLBOX_TESTS_HYPERCUBE_TEST_H_
