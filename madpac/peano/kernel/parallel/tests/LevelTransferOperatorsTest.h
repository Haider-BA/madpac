// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_PARALLEL_TESTS_LEVEL_TRANSFER_OPERATORS_TEST_H_
#define _PEANO_KERNEL_PARALLEL_TESTS_LEVEL_TRANSFER_OPERATORS_TEST_H_


#include "tarch/tests/TestCase.h"


namespace peano {
  namespace kernel {
    namespace parallel {
      namespace tests {
        class LevelTransferOperatorsTest;
      }
    }
  }
}


/**
 * Tests the behaviour of the adjacency lists in between the different grid
 * level.
 *
 * @image html LevelTransferOperatorsTest.png
 *
 * The left picture illustrates the finest grid where the node 0 is forked from
 * rank 5. For the regulargrid, the right-hand side picture is not relevant at
 * all.
 *
 *
 * @author Tobias Weinzierl
 * @version $Revision: 1.3 $
 */
class peano::kernel::parallel::tests::LevelTransferOperatorsTest: public tarch::tests::TestCase {
  private:
    void test3x3Regulargrid2D_0();

    /**
     * Equals the test case of the illustration used for
     * ParallelFlag::setParallelFlags() right hand side. All the vertices are
     * refined vertices, i.e. on the fine grid there are no hanging nodes to
     * take into considerations.
     *
     * @image html ../parallel_ParallelFlag_getAdjacentNodeSublevelListFromCoarseGridLevel.png
     */
//    void testSetParallelFlags2D_1();

    /**
     * Equals testSetParallelFlags2D_0(), but the left bottom vertex of the
     * parent cell is not persistent, i.e. the left bottom vertex is hanging.
     *
     * @image html ../parallel_ParallelFlag_getAdjacentNodeSublevelListFromCoarseGridLevel.png
     */
//    void testSetParallelFlags2D_2();

    /**
     * Tests the derivement of the inner nodes of a forked element.
     */
//    void testSetParallelFlags2D_3();

    /**
     * Reconstructs the master's initial setup: All the super level vertices
     * hold either 0 or UNDEF_NEIGHBOUR and the subelements have to be derived.
     */
//    void testSetParallelFlags2D_4();

  public:
    LevelTransferOperatorsTest();
    virtual ~LevelTransferOperatorsTest();
    virtual void run();
    virtual void setUp();
};

#endif
