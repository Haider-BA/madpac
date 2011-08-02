// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULARGRID_PARALLEL_TESTS_SETUPPARTITIONER_TEST_H_
#define _PEANO_KERNEL_REGULARGRID_PARALLEL_TESTS_SETUPPARTITIONER_TEST_H_


#include "tarch/tests/TestCase.h"


namespace peano {
  namespace kernel {
    namespace regulargrid {
      namespace parallel {
        namespace tests {
          class SetupPartitionerTest;
        }
      }
    }
  }
}


class peano::kernel::regulargrid::parallel::tests::SetupPartitionerTest: public tarch::tests::TestCase {
  private:
    void test2D_12x8();
    void test2D_12x8ForkMessages();
    void test2D_400x400ForkMessages();
  public:
    SetupPartitionerTest();
    virtual ~SetupPartitionerTest();
    virtual void run();
    virtual void setUp();
};

#endif
