// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_BUILTIN_TESTS_CUTTINGPLANETEST_H_
#define _PEANO_GEOMETRY_BUILTIN_TESTS_CUTTINGPLANETEST_H_


#include "tarch/tests/TestCase.h"
#include "peano/geometry/builtin/CuttingPlane.h"


namespace peano {
  namespace geometry {
    namespace builtin {
      namespace tests {
        class CuttingPlaneTest;
      }
    }
  }
}


/**
 * Test class for cutting planes.
 *
 * @author Philipp Neumann
 */
class peano::geometry::builtin::tests::CuttingPlaneTest: public tarch::tests::TestCase {

  public:
    /**
     * Constructor setting the test case name.
     */
    CuttingPlaneTest();
    /**
     * Standard virtual destructor.
     */
    virtual ~CuttingPlaneTest();
    /**
     * Runner for all individual test cases.
     */
    virtual void run();

    void virtual setUp();
};

#endif
