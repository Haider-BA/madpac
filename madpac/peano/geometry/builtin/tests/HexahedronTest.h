// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _GEOMETRY_HEXAHEDRON_TEST_H_
#define _GEOMETRY_HEXAHEDRON_TEST_H_

#include "tarch/tests/TestCase.h"
#include "tarch/logging/Log.h"

namespace peano {
  namespace geometry {
    namespace builtin {
      namespace tests {
        class HexahedronTest;
      }
    }
  }
}


/**
 * Creates a hexahedron that has the size @f$ h_0=0.8, h_1=0.5, h_i=1.0 \forall i \geq 2@f$.
 *
 * For historical reasons, all tests work with a centered channel. This was the standard
 * setting before we introduced the offset for the hexahedron. That is why the
 * constructors of the hexahedrons in all these tests get an offset of 0.5-width/2.0,
 * because this has exactly the effect of centering the channel onto (0.5,0.5).
 *
 * @author Tobias Weinzierl, Tobias Neckel
 * @version $Revision: 1.7 $
 */
class peano::geometry::builtin::tests::HexahedronTest: public tarch::tests::TestCase {
  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;


    /**
     * First test suite for pointwise queries (i.e. h==0.0). Use hexahedron with
     * - reglar grid with grid size 0.1
     * - dimenions @f$ 0.8 \times 0.5 \times 1.0 \times \dots @f$
     * - centred within the unit square
     */
    void testPointwiseQueries0();
    /**
     * Second test suite for pointwise queries (i.e. h==0.0).
     */
    void testPointwiseQueries1();

    /**
     * Test suite for range queries (i.e. h!=0.0, real voxel calls).
     *
     * @image html geometry_HexahedronTest.png
     */
    void testRangeQueries();

    /**
     * Testing a few special cases where the calling voxel is larger than the
     * underlying geometry ("embedding").
     */
    void testFaceIntersection();
    /**
     * Test for the correct number of faces intersected near boundary parts of
     * a hexahedron.
     */
    void testNumberOfFacesIntersected();
    /**
     * This test checks the correct implementation of the refine() method of
     * Geometry on the unit square.
     */
    void testRefine();

    /**
     * This test checks if a splitted (two) voxel call corresponds to one single.
     *
     * This is necessary to check the correct setup in the case of stretched
     * trivialgrid meshes (where stretching in one direction gives different
     * mesh sizes in the stretching direction).
     */
    void testSplittedVoxelCall();

    void testUnitCube();
  public:
    /**
     * Constructor setting the test name.
     */
    HexahedronTest();
    /**
     * Standard destructor.
     */
    virtual ~HexahedronTest();
    /**
     * Runner.
     */
    virtual void run();
    
    virtual void setUp();
};

#endif
