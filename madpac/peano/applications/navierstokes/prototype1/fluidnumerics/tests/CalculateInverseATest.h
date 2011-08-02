/*
 * CalculateFTest.h
 *
 *  Created on: Jul 7, 2011
 *      Author: liebm
 */

#ifndef _FLUID_CALCULATEINVERSEATEST_H_
#define _FLUID_CALCULATEINVERSEATEST_H_

#include "tarch/tests/TestCase.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
//#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"

#include "tarch/logging/Log.h"

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {
          namespace tests {
	  class CalculateInverseATest;

	  typedef peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit  FluidTestVertex;
        }}}}}}

/**
 * This is a test case for CalculateInverseA. Additional test setup (3D) is
 * located in the integration test
 * fluid-scenario/integration-tests/CalculateInverseAIntegrationTest.
 *
 * @author Tobias Neckel, Michael Lieb
 * @test for class peano::fluid::CalculateInverseA
 */
class peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateInverseATest: public tarch::tests::TestCase {
  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    /**
     * Test for running inv A generation on one cell.
     *
     * Currently, only 3D is tested here.
     */
    void testCalculateInverseAOnOneCell();

    /**
     * Test for running inv A generation on a 3x3 regular grid in 2D. This
     * test method does checks only if Dim2 is switched on (2D).
     *
     * The first test checks a 3x3 cell grid with Dirichlet nodes for
     * the global boundary and inner nodes inside (see image below).
     * Total number of nodes clearly is 16. The mesh size h is set
     * equal to 1.0 in both directions.
     *
     * The second test is similar to the first. It just has the second
     * cell as an outer/Dirichlet cell and thus two more Dirichlet nodes
     * (5 and 6).
     *
     * The third test is the second with h==0.25.
     *
     * @image html fluid_CalculateInverseATest.gif
     *
     * Please note that the corresponding test in 3D is in a separate method
     * (testCalculateInverseA3x3x3()).
     *
     * @todo Evtl. auch umstellen auf trivialgrid-runs (siehe
     *       testCalculateInverseA3x3x3()) statt explizites Aufstellen?
     */
    void testCalculateInverseA3x3();

  public:
    /**
     * Standard constructor setting test name.
     */
    CalculateInverseATest();
    /**
     * Standard destructor
     */
    virtual ~CalculateInverseATest();
    /**
     * Routine for running the test case.
     */
    virtual void run();
    /**
     * Routine for setting up the test case.
     */
    virtual void setUp();
};

#endif //_FLUID_CALCULATEINVERSEATEST_H_
