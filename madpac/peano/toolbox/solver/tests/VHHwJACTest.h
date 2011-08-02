// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_TOOLBOX_TESTS_VHHWJACTEST_H_
#define _PEANO_TOOLBOX_TESTS_VHHWJACTEST_H_

#include "tarch/logging/Log.h"
#include "tarch/tests/TestCase.h"
#include "tarch/tests/TestCaseFactory.h"
#include "peano/toolbox/stencil/Stencil.h"
#include "peano/toolbox/solver/VirtualHierarchicalHRefinement.h"

namespace peano {
  namespace toolbox {
    namespace solver {
      namespace tests {
        class VHHwJACTest;
      }
    }
  }
}

class peano::toolbox::solver::tests::VHHwJACTest: public tarch::tests::TestCase {
private:
  void testWriter();
  void testIntegrals();
public:
  VHHwJACTest();
  virtual ~VHHwJACTest();
  virtual void run();
  virtual void setUp();
  static tarch::logging::Log _log;
};

#endif /* _PEANO_TOOLBOX_TESTS_VHHWJACTEST_H_ */
