// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _GEOMETRY_DRIFTRATCHETTEST_H_
#define _GEOMETRY_DRIFTRATCHETTEST_H_


#include "tarch/tests/TestCase.h"


namespace peano {
  namespace geometry {
    namespace builtin {
      namespace tests {
        class DriftRatchetTest;
      }
    }
  }
}


/**
 * Test class for geometry::DriftRatchet.
 *
 * @author Tobias Weinzierl, Tobias Neckel
 */
class peano::geometry::builtin::tests::DriftRatchetTest: public tarch::tests::TestCase {
  private:
    /**
     * \brief Test case for checking
     *        geometry::DriftRatchet::getDistanceFromRotationAxis().
     *
     * Note that the zero-offset of the drift ratchet means the position of the
     * smallest diameter is in the origin.
     */
    void testDistanceToRotationAxis();
    /**
     * \brief Test case for checking geometry::DriftRatchet::getRadius().
     *
     * Note that the zero-offset of the drift ratchet means the position of the
     * smallest diameter is in the origin.
     */
    void testRadiusCalculation();

    /**
     * Test for checking the problem of inlet face refinement.
     *
     * We imitate the problems at the inlet that we got when setting up a single
     * pore in the unit square.
     *
     * Some points of interests are
     * - x=(0,1/3), h=1/3 (point, 1D y-dir, full)
     * - x=(0,0),   h=1/3 (point, 1D y-dir)
     * - x=(0,2/9), h=1/9 (point, 1D y-dir, full)
     */
    void testInletFaceIntersection();

  public:
    /**
     * Constructor setting the test case name.
     */
    DriftRatchetTest();
    /**
     * Standard virtual destructor.
     */
    virtual ~DriftRatchetTest();
    /**
     * Runner for all individual test cases.
     */
    virtual void run();
    
    void virtual setUp();
};

#endif
