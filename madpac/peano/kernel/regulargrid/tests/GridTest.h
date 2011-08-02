// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULARGRID_TESTS_GRID_TEST_H_
#define _PEANO_KERNEL_REGULARGRID_TESTS_GRID_TEST_H_


#include "tarch/tests/TestCase.h"

namespace peano {
  namespace kernel {
    namespace regulargrid {
      namespace tests {
        class GridTest;
      }
    }
  }
}


class peano::kernel::regulargrid::tests::GridTest: public tarch::tests::TestCase {
  private:

  public:
    GridTest();
    virtual ~GridTest();
    virtual void run();
    virtual void setUp();
};


#endif

