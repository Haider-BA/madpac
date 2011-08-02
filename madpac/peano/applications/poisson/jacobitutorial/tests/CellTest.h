// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_POISSON_JACOBI_TUTORIAL_TESTS_CELL_TEST_H_
#define _PEANO_APPLICATIONS_POISSON_JACOBI_TUTORIAL_TESTS_CELL_TEST_H_

#include "tarch/tests/TestCase.h"


namespace peano {
  namespace applications {
    namespace poisson {
      namespace jacobitutorial {
        namespace tests {
          class CellTest;
        }
      }
    }
  }
}


/**
 * Cell Test
 *
 * @author Tobias Weinzierl
 */
class peano::applications::poisson::jacobitutorial::tests::CellTest: public tarch::tests::TestCase{
  private:
    void testStencilInitialisation();
    void testResidualCalculation();
  public:
    CellTest();
    virtual ~CellTest();
    virtual void run();
    virtual void setUp();
};



#endif
