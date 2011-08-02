// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_TESTS_SINGLE_LEVEL_ENUMERATOR_TEST_H_
#define _PEANO_KERNEL_SPACETREE_GRID_TESTS_SINGLE_LEVEL_ENUMERATOR_TEST_H_


#include "tarch/tests/TestCase.h"
#include "peano/kernel/spacetreegrid/tests/records/TestCell.h"
#include "peano/kernel/spacetreegrid/Cell.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      namespace tests {
        class SingleLevelEnumeratorTest;
      }
    }
  }
}


class peano::kernel::spacetreegrid::tests::SingleLevelEnumeratorTest: public tarch::tests::TestCase {
  private:
    void test2DLineariseCellIndex();
    void test2DLineariseVertexIndex();
    void testFunctorWithZeroArgument();
    void testGetVertexPositionOnCoarserLevel();
    void test2DFunctor();
  public:
    SingleLevelEnumeratorTest();

    virtual ~SingleLevelEnumeratorTest();

    virtual void run();

    void virtual setUp();
};

#endif
