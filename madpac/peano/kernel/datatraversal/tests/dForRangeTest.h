// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_TESTS_DFORRANGE_TEST_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_TESTS_DFORRANGE_TEST_H_


#include "tarch/tests/TestCase.h"

namespace peano {
  namespace kernel {
    namespace datatraversal {
      namespace tests {
        class dForRangeTest;
      }
    }
  }
}


class peano::kernel::datatraversal::tests::dForRangeTest: public tarch::tests::TestCase {
  private:
    void test2D10x10Range1();
    void test2D10x10Range12();
    void test2D10x10Range23();
    void test2D10x10Range40();
    void test2D10x10Range80();
  public:
    dForRangeTest();
    virtual ~dForRangeTest();
    virtual void run();
    virtual void setUp();
};


#endif
