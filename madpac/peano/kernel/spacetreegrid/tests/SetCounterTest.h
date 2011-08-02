// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_TESTS_SET_COUNTER_TEST_H_
#define _PEANO_KERNEL_SPACETREE_GRID_TESTS_SET_COUNTER_TEST_H_


#include "tarch/tests/TestCase.h"
#include "peano/kernel/spacetreegrid/tests/records/TestVertex.h"
#include "peano/kernel/spacetreegrid/Vertex.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      namespace tests {
        class SetCounterTest;
      }
    }
  }
}


class peano::kernel::spacetreegrid::tests::SetCounterTest: public tarch::tests::TestCase {
  private:
    typedef peano::kernel::spacetreegrid::Vertex<peano::kernel::spacetreegrid::tests::records::TestVertex> TestVertex;

    /**
     * Test whether (3,1) is a boundary point. It should be, but in my test
     * cases it is not recognised as a boundary point. Probably there's an
     * error in the LA component if this test fails. If it doesn't fail but
     * the other tests fail, the error is not due to LA.
     */
    void isOnBoundaryTest();

    void test2DSpacetreeConstructionFirstLevel();

    /**
     * @imgage html SetCounterTest_testAPosterioriRefinement2d.png
     */
    void testAPosterioriRefinement2d();
  public:
    SetCounterTest();

    virtual ~SetCounterTest();

    virtual void run();

    void virtual setUp();
};

#endif
