// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _GEOMETRY_SPHERETEST_H_
#define _GEOMETRY_SPHERETEST_H_

#include "tarch/tests/TestCase.h"
#include "tarch/logging/Log.h"

namespace peano {
  namespace geometry {
    namespace builtin {
      namespace tests {
      	class SphereTest;
      }
    }
  }
}


/**
 * Test case for the hard coded sphere geometry.
 *
 * @author Tobias Weinzierl, Tobias Neckel
 */
class peano::geometry::builtin::tests::SphereTest: public tarch::tests::TestCase {
  private:
    static tarch::logging::Log _log;

    /**
     * This test checks the correct implementation of the method
     * isInsideOpenMinkowskiCylinder() in Sphere. This test is only performed
     * if Dim3 is active.
     */
    void testIsInsideOpenMinkowskiCylinder();
    /**
     *
     */
    void testPointwiseQueries();
    /**
     *
     */
    void testRangeQueries0();
    /**
     *
     */
    void testRangeQueries1();
    /**
     * Additional Test that was detected in the IntersectionTest for a sphere in
     * a unit cube channel (3D): A sphere with radius 0.1 at center=Vector(0.5)
     * is tested using a hmin=0.025 and hmax=0.1. The query point is
     * x=(0.4, 0.4, 0.5), a boundary point.
     *
     * The same setup is equally used for 2D tests.
     */
    void testRangeQueries2();

    /**
     *
     *
     */
    void testFaceIntersection();
    /**
     *
     */
    void testNumberOfFacesIntersected();

    /**
     * Test for problem of adaptivity detected 09.07.09.
     *
     * We check for an embedded sphere geometry located at (7.5,5.0) with a
     * radius of 0.5 used inside a square [10,10]. The check points are
     * (6.6666 | 4.4444) with mesh sizes h=10/9 and h=10/27.
     *
     * @todo: has to be reimplemented as soon as we have intersection back
     *
     */
    void testAdaptivityProblem();

  public:
    /**
     * Constructor setting the test case name.
     */
    SphereTest();
    /**
     * Destructor.
     */
    virtual ~SphereTest();

    virtual void run();
    
    virtual void setUp();
};

#endif
