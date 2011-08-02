// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _SCENARIO_DIFFUSION_EQUATION_TESTS_CORNER_POINT_FIELD_TEST_H_
#define _SCENARIO_DIFFUSION_EQUATION_TESTS_CORNER_POINT_FIELD_TEST_H_



#include "tarch/tests/TestCase.h"


namespace scenario {
  namespace diffusionequation {
    namespace tests {
      class CornerPointFieldTest;
    }
  }
}


class scenario::diffusionequation::tests::CornerPointFieldTest: public tarch::tests::TestCase {
  private:
    /**
     * @image html CornerPointFieldTest.png
     */
    void testCubeWithSixColoursIn2d();

  public:
    CornerPointFieldTest();
    virtual ~CornerPointFieldTest();

    virtual void run();

    void virtual setUp();

};


#endif

