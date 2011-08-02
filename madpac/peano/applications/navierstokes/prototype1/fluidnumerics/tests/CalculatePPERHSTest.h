#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_TESTS_CALCULATEPPERHSTEST_H_
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_TESTS_CALCULATEPPERHSTEST_H_


#include "tarch/tests/TestCase.h"
#include "tarch/logging/Log.h"
#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
#include "peano/applications/navierstokes/prototype1/FluidStateEnhancedDivFreeEulerExplicit.h"

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {
          namespace tests {
            class CalculatePPERHSTest;
          }
          /**
           * Forward declaration.
           */
          class AbstractCalculateF;
        }
      }
    }
  }
}
namespace tarch {
  namespace logging {
    /**
	 * Forward declaration
	 */
    class Log;
  }
}

/**
 * @author Tobias Neckel
 *
 * @test for class peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHS
 */
class peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHSTest : public tarch::tests::TestCase {
  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    /**
     * Default position vector (only used for turbulent computations, not here).
     */
    static const Vector DEFAULT_POSITION;

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
     * Test suite for calculatePPERHS on one cell for bilinear elements in 2D.
     *
     * This test uses the three test blocks from testCalculateFOnOneCell() with
     * adjustmentFactor==1 and adds the third again with adjustmentFactor==0.
     * This is why we use one instance of peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculatePPERHS for the first
     * three test blocks (tau==1.0, adjFac==1.0) and another one for the fourth
     * (tau==1.0, adjFac==0.0).
     *
     * The F values are calculated using the (previously tested) class
     * calculateF().
     * The necessary values of the inverse mass matrix A can't be set directly
     * since there is only an "addValue..."-method. Thus, we use
     * CalculateInverseA(), but not ONCE but four times in order to set _A to
     * h^2 as all nodes are regarded as "inner" nodes.
     * This value is necessary because it is used in quickfluid for usual inner
     * cells.
     *
     * Thus, a suite of 24 test cases is run, subdivided into 4 blocks:
     * The first block (Tests 1-6) ignores the diffusion part by setting eta=0.0,
     * and it uses h==1.0. adjFac==1.
     * The second block (Tests 7-12) considers the diffusion (eta/rho==1.0) and
     * again uses h==1.0. adjFac==1.
     * The third block (Tests 13-18) considers the diffusion with eta/rho==3.0
     * and uses h==0.25. adjFac==1.
     * The fourth block (Tests 19-24) considers the diffusion with eta/rho==3.0
     * and uses h==0.25. adjFac==0.
     *
     * The whole bunch of reference values is taken from the matlab file
     * createPPERHSTestValuesForPeano.m (see directory tests) which uses the
     * quickfluid routine calculatePPERHS and calculateF.
     */
    void testCalculatePPERHSBilinearOnOneCell();

    /**
     * This test case checks the correct computation of the PPE right hand side
     * in 3D. In contrast to the 2D case (testCalculatePPERHSBilinearOnOneCell()),
     * we use artifical values for F on the eight nodes of the cell.
     *
     * The necessary values of the (inverse) mass matrix A can't be set directly
     * since there is only an "addValue..."-method. Thus, we use
     * CalculateInverseA(), but not ONCE but eight times in order to set _A to
     * h^2 as all nodes are regarded as "inner" nodes.
     *
     * The parameters tau and adjustment factor are kept at 1.0.
     */
    void testCalculatePPERHSTrilinearOnOneCell3D();

  public:
    /**
     * Constructor setting test name.
     */
    CalculatePPERHSTest();
    /**
     * Standard destructor
     */
    virtual ~CalculatePPERHSTest();
    /**
     * Routine for running the test case.
     */
    virtual void run();

    virtual void setUp();
};

#endif // _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_TESTS_CALCULATEPPERHSTEST_H_
