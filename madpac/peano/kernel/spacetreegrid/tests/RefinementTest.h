// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_TESTS_REFINEMENT_TEST_H_
#define _PEANO_KERNEL_SPACETREE_GRID_TESTS_REFINEMENT_TEST_H_


#include "tarch/tests/TestCase.h"
#include "peano/kernel/spacetreegrid/tests/records/TestCell.h"
#include "peano/kernel/spacetreegrid/Cell.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      namespace tests {
        class RefinementTest;
      }
    }
  }
}


/**
 *
 * @author Tobias Weinzierl
 */
class peano::kernel::spacetreegrid::tests::RefinementTest: public tarch::tests::TestCase {
  private:
	typedef peano::kernel::spacetreegrid::Cell<peano::kernel::spacetreegrid::tests::records::TestCell> TestCell;


    /**
     *
     * @image html RefinementTest_testRootNodeRefinement.png
     */
	  void testRootNodeRefinementCells();

    void test2DCellM1M2P0P0();
  public:
	  RefinementTest();

	  virtual ~RefinementTest();

    virtual void run();

    void virtual setUp();
};

#endif
