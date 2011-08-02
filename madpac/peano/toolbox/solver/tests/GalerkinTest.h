// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_TOOLBOX_SOLVER_TESTS_GALERKIN_TEST_H_
#define _PEANO_TOOLBOX_SOLVER_TESTS_GALERKIN_TEST_H_

#include "peano/toolbox/solver/Multigrid.h"
#include "peano/toolbox/solver/PetrovGalerkin.h"

#include "tarch/tests/TestCaseFactory.h"
#include "tarch/tests/TestCase.h"


namespace peano{
  namespace toolbox{
    namespace solver{
      namespace tests{
          class GalerkinTest;
      }
    }
  }
}


/**
 * Test case for the matrix-free Galerkin components
 *
 * @author Marion Weinzierl
 */
class peano::toolbox::solver::tests::GalerkinTest: public tarch::tests::TestCase{
  private:

    peano::toolbox::solver::PetrovGalerkin _galerkin;

    /**
     * @todo Marion: Was tut das?
     */
    void testCalculateRAPInnerVertex();

    void testCalculateRAPEdgeVertex();

    void testCalculateRAPCornerVertex();

    /**
     * Test calculation of AP
     *
     * This test simulates two adjacent cells. It consequently sets six tempP values as
     * illustrated in the figure below.
     *
     * @image html GalerkinTest_testCalculateAP.png
     *
     * This test is based upon the 5-point stencil.
     */
    void testCalculateAP2d();

  public:

    GalerkinTest();

    virtual ~GalerkinTest();

    virtual void run();

    void virtual setUp();
};

#endif
