/*
 * CalculateFTest.h
 *
 *  Created on: Jun 27, 2011
 *      Author: unterweg
 */

#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_TESTS_CALCULATEFTEST_H_
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_TESTS_CALCULATEFTEST_H_

#include "tarch/tests/TestCase.h"

#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
#include "peano/applications/navierstokes/prototype1/FluidStateEnhancedDivFreeEulerExplicit.h"

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {
          namespace tests {
            class CalculateFTest;
            /**
             * Forward declaration for pointer. Include comes in .cpp.
             */
          }
          class AbstractCalculateF;
        }
      }
    }
  }
}
namespace tarch {
  namespace logging {
    class Log;
  }
}

class peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest : public tarch::tests::TestCase
{
  private:
    /**
     * Default position vector (only used for turbulent computations, not here).
     */
    static const Vector DEFAULT_POSITION;

    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    /**
     * Pointer for calculate F. Is set in loadDefaultCalculateF(). Deleted in
     * destructor.
     */
    peano::applications::navierstokes::prototype1::fluidnumerics::AbstractCalculateF* _myCalculateF;

    /**
     * Method that constructs an appropriate CalculateF and stores result in _myCalculateF.
     */
    void loadCalculateF(
      const peano::applications::navierstokes::prototype1::ElementType elementType,
      const double      rho,
      const double      eta
    );
    /**
     * Method to delete _myCalculateF. Is called in loadDefaultCalculateF() and
     * in the destructor.
     */
    void deleteCalculateF();

    /**
     * This test checks the correct copying of the matrix elements from
     * ElementMatrices.h for 2D (dlinear and div-free) and 3D (dlinear only).
     */
    void testCalculateFMatrixEntries();

    /**
     * Test for computing gravity data.
     *
     * We test the correct value of _volumeOfTestFunction as well as a full
     * accumulation of g=9.81 on F.
     */
    void testGravity();

    /**
     * Test suite for calculateF on one cell for bilinear elements in 2D.
     *
     * Only Diffusion and Convection is tested (and implemented), no bodyforces!
     *
     * A suite of 18 test cases is run, subdivided into 3 blocks:
     * The first block (Tests 1-6) ignores the diffusion part by setting eta=0.0, and it uses
     * h==1.0.
     * The second block (Tests 7-12) considers the diffusion (eta/rho==1.0) and again
     * uses h==1.0.
     * The third block (Tests 13-18) considers the diffusion with eta/rho==3.0 and
     * uses h==0.25.
     *
     * The whole bunch of reference values is taken from the matlab file
     * fluid_createFTestValuesForPeano.m (see directory matlab) which uses the
     * quickfluid routine calculateF with bilinear elements.
     *
     * @sa testCalculateFTrilinearOnOneCell() for testing 3D.
     */
    void testCalculateFBilinearOnOneCell();

    /**
     * Test suite for 3x3 regular refined grid cells for bilinear elements.
     *
     * @todo noch zu implementieren!
     */
    void testCalculateFBilinearOn3x3Grid();

    /**
     * Test for calculateF on one cell for dlinear elements in 3D. We can't use
     * the matlab quickfluid reference here, since quickfluid is 2D only. That
     * is why we don't test a whole suite of test cases but some selected ones
     * in 3D.
     *
     * The first block of tests ignores the diffusion contributions by setting
     * eta to zero. Note that we manually computed the results for the (only)
     * real Test 5 (a lot of work); some results computations are available in
     * matlab/fluid_CalculateFTest_trilinearTest5.m.
     *
     * The second block additionally uses the diffusion (eta==2.0) and sets h to
     * 2.0.
     *
     * @sa testCalculateFBilinearOnOneCell() for testing in 2D.
     */
    void testCalculateFTrilinearOnOneCell();

    /**
     * Test suite for calculateF on one cell for divergence free elements (Blanke).
     *
     * Only Diffusion and Convection is tested (and implemented), no bodyforces.
     *
     * A suite of 18 test cases is run, subdivided into 3 blocks:
     * The first block (Tests 1-6) ignores the diffusion part by setting eta=0.0, and it uses
     * h==1.0.
     * The second block (Tests 7-12) considers the diffusion (eta/rho==1.0) and again
     * uses h==1.0.
     * The third block (Tests 13-18) considers the diffusion with eta/rho==3.0 and
     * uses h==0.25.
     *
     * The
     *
     * The whole bunch of reference values is taken from the matlab file
     * fluid_createFTestValuesForPeano_divFreeElements.m (see directory matlab) which
     * uses the quickfluid routine calculateF with the divergence free elements.
     */
    void testCalculateFDivFreeOnOneCell();

    /**
     * Test suite for check of correct implementation of addPressureBoundaryContributionToF().
     *
     * The node type is always set to NEUMANN (except for special tests). The
     * in-/out-flow direction is x-axis (0,2 in, 1,3 out in 2D).
     *
     * We test several setups with different mesh sizes h and different
     * pressure differences in 2D and 3D (eta/rho=0.0 always):
     * -# no boundary nodes
     * -# inlet: \f$ h=1.0, \ p_{\textnormal{in}}=p_{\textnormal{out}}=0.0 \f$.
     * -# inlet: \f$ h=1.0, \ p_{\textnormal{in}}=6.0, \ p_{\textnormal{out}}=-5.0 \f$.
     * -# inlet: \f$ h=1/3, \ p_{\textnormal{in}}=-3.0, \ p_{\textnormal{out}}=-8.0 \f$.
     * -# outlet: \f$ h=0.25, \ p_{\textnormal{in}}=1.5, \ p_{\textnormal{out}}=-7.5 \f$.
     * -# y-dir (commented since only x-dir. allowed), inlet: \f$ h=0.25, \ p_{\textnormal{in}}=2.0, \ p_{\textnormal{out}}=-1.0 \f$. (no contr.)
     * -# y-dir (commented since only x-dir. allowed), outlet: \f$ h=0.25, \ p_{\textnormal{in}}=2.0, \ p_{\textnormal{out}}=-1.0 \f$. (no contr.)
     *
     * @todo nutzt fluid-scenario; evtl. als Integ.-test?
     */
    void testAddPressureBoundaryContributionToF();

    /**
     * Test for inlet Neumann nodes with hydrostatic pressure contribution.
     */
    void testAddPressureAndGravityBoundaryContributionToF();


  public:
    CalculateFTest();
    virtual ~CalculateFTest();

    virtual void run();

    virtual void setUp();
};

#endif /* _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_TESTS_ALCULATEFTEST_H_ */
