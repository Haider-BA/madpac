#ifndef _FLUID_SCENARIO_TEST_CASE_WITH_SCENARIO_TEST_H_
#define _FLUID_SCENARIO_TEST_CASE_WITH_SCENARIO_TEST_H_

#include "peano/applications/navierstokes/prototype1/scenarios/integrationtests/AbstractTestCaseWithScenario.h"
#include "tarch/logging/Log.h"

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace scenarios {
          namespace integrationtests {
	  class AbstractTestCaseWithScenarioTest;
          }  // namespace integrationtests
        }  // namespace scenarios
      }  // namespace prototype1
    }  // namespace navierstokes
  }  // namespace applications

/**
 * Test for class scenario::AbstractTestCaseWithScenario.
 *
 * This test is a "test of tests" in the sense that we test some Test Utility
 * Methods (see G. Meszaros, "xUnit Test Patterns"). This helps to be sure that
 * the utility methods really do what we expect them to do when we use them in
 * tests.
 *
 * @author Tobias Neckel
 *
 */
class peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenarioTest : public peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario {
  private:
    /**
     * Logging device.
     */
    static tarch::utils::Log _log;

    /**
     * Test for checking comparison of arrays.
     *
     * The test sets up several pairs of int vectors and compares them.
     */
    void testAreIntArrays1Equal();
    /**
     * Test for checking comparison of arrays.
     *
     * The test sets up several pairs of int vectors and compares them.
     */
    void testAreIntArrays2Equal();

    /**
     * Test for checking comparison of arrays.
     *
     * The test sets up several pairs of vectors and compares them.
     */
    void testareArrays2NumericallyEqual();

    /**
     * Test for checking comparison of arrays.
     *
     * The test sets up several pairs of matrices and compares them.
     */
    void testAreArrays2NumericallyEqual();

  public:
    /**
     * Constructor setting test name.
     */
    AbstractTestCaseWithScenarioTest();
    /**
     * Standard destructor
     */
    virtual ~AbstractTestCaseWithScenarioTest();
    /**
     * Routine for running the test case.
     */
    virtual void run();
};


#endif //_SCENARIO_TEST_CASE_WITH_SCENARIO_TEST_H_
