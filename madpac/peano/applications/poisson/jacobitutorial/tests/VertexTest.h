// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_POISSON_JACOBI_TUTORIAL_TESTS_VERTEX_TEST_H_
#define _PEANO_APPLICATIONS_POISSON_JACOBI_TUTORIAL_TESTS_VERTEX_TEST_H_

#include "tarch/tests/TestCase.h"


namespace peano {
  namespace applications {
    namespace poisson {
      namespace jacobitutorial {
        namespace tests {
          class VertexTest;
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
class peano::applications::poisson::jacobitutorial::tests::VertexTest: public tarch::tests::TestCase{
  private:
    void testInitialValues();
    void testGetResidual();
  public:
    VertexTest();
    virtual ~VertexTest();
    virtual void run();
    virtual void setUp();
};



#endif
