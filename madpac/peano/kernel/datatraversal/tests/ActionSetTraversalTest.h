// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_TESTS_ACTION_SET_TRAVERSAL_TEST_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_TESTS_ACTION_SET_TRAVERSAL_TEST_H_


#include "tarch/tests/TestCase.h"


namespace peano {
  namespace kernel {
    namespace datatraversal {
      namespace tests {
        class ActionSetTraversalTest;
      }
    }
  }
}


/**
 *
 * @author Tobias Weinzierl
 */
class peano::kernel::datatraversal::tests::ActionSetTraversalTest: public tarch::tests::TestCase {
  private:
    void testSequentialCartesianGridTraversalOn10x10Grid();
    void testParallelCartesianGridTraversalOn2D10x10Grid();
  public:
    ActionSetTraversalTest();
    virtual ~ActionSetTraversalTest();

    virtual void run();
    virtual void setUp();
};


#endif
