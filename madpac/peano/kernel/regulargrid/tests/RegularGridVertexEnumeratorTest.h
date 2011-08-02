// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULARGRID_TESTS_REGULAR_VERTEX_ENUMERATOR_TEST_H_
#define _PEANO_KERNEL_REGULARGRID_TESTS_REGULAR_VERTEX_ENUMERATOR_TEST_H_


#include "tarch/tests/TestCase.h"


namespace peano {
  namespace kernel {
    namespace regulargrid {
      namespace tests {
        class RegularGridVertexEnumeratorTest;
      }
    }
  }
}


class peano::kernel::regulargrid::tests::RegularGridVertexEnumeratorTest: public tarch::tests::TestCase {
  private:
    void test2D3x3Grid();
    void test2D7x4Grid();

  public:
    RegularGridVertexEnumeratorTest();
    virtual ~RegularGridVertexEnumeratorTest();
    virtual void run();
    virtual void setUp();
};


#endif
