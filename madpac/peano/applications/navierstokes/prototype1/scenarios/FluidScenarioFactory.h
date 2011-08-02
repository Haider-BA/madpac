#ifndef _FLUIDSCENARIO_FLUID_SCENARIO_FACTORY_H_
#define _FLUIDSCENARIO_FLUID_SCENARIO_FACTORY_H_

#include <vector>

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace scenarios {
          class FluidScenarioFactory;
          /**
           * Forward declaration.
           */
          class FluidScenario;
          /**
           * Forward declaration.
           */
          namespace configuration {
            class FluidScenarioConfiguration;
          }  // namespace configuration
        }}}}}


/**
 * Creates the different scenarios for fluid and poisson use cases.
 *
 * Typical workflow of the setup of the program:
 *
 * - The configuration component creates the different geometry and scenario
 *   configuration instances. These classes do almost no attribute validation.
 *   Since the ScenarioConfiguration does not know how many different scenarios
 *   are available and how the set of attributes required for the different
 *   instances looks like, the class is not able to do any validation.
 * - The program runner creates the geometry instance using the geometry
 *   factory. Each geometry instance is passed the geometry configuration and
 *   has to do the validation of the configuration itself. Please note that in
 *   general constructors are not allowed to throw any errors or quit the
 *   program. If an error in a constructor occurs, the constructor should log a
 *   detailed error message and a isValid() operation of the class should return
 *   false afterwards.
 * - The program runner creates the scenario instance using the FluidScenarioFactory.
 *   The factory reads the scenario name, selects a fitting scenario class and
 *   passes both the geometry and the scenario configuration to the scenario
 *   constructor. The constructor reads the different values from geometry and
 *   scenario configuration and validates them. If the configurations are not
 *   valid, it logs and error and subsequent isValid() calls should return
 *   false.
 *   The FluidScenarioFactory checks isValid() after the creation. If isValid()
 *   returns false, the program should free the scenario and abort.
 *
 * The reasoning behind making the scenarios validate the configuration is that
 * otherwise the configuration has to have a lot of know how how the different
 * scenarios 'look like'. Furthermore, for a useful validation often the
 * geometry information is necessary. This information might not be available at
 * startup.
 *
 * After the configuration process has finished, i.e. a geometry and a scenario
 * object are available and both return isValid()=true, the configuration
 * objects might be thrown away. This means, the scenario and geometry instances
 * have to copy the values of the configuration needed into their own
 * attributes. They should not hold the configuration itself.
 *
 * @see poissonscenario::PoissonScenarioFactory
 *
 * @author Tobias Neckel
 */
class peano::applications::navierstokes::prototype1::scenarios::FluidScenarioFactory {
private:
  FluidScenarioFactory();
public:
  virtual ~FluidScenarioFactory();

  /**
   * This method actually generates the scenario out of the configuration.
   *
   * Depending on the content of the fluid scenario name, the corresponding
   * scenario is generated.
   * At the moment, the following scenarios are supported:
|| scenario setting || corresponding name/identifier || note
|  trivial scenario | scenario::FluidTrivialScenario | everything is zero (obsolete?).
|  driven cavity    | scenario::FluidDrivenCavity |
|  circle flow      | scenario::FluidCircleFlow   |
|  channel          | scenario::FluidObstacleInChannel | obstacle may be existent.
|  PreCICE cold leg | scenario::FluidPreCICEColdLeg |
|  all-Dirichlet channel | scenario::FluidObstacleInAllDirichletChannel | setup as in F3F (Dirichlet outflow; only 3D!). \n
                                                                          obstacle may be existent.
|  drift ratchet (e.g. particle) | scenario::FluidObstacleInDriftRatchet | obstacle may be existent.
   *
   */
  static FluidScenario*   loadFluidScenario(
      const configuration::FluidScenarioConfiguration& scenarioConfiguration
  );
};

#endif //_FLUIDSCENARIO_FLUID_SCENARIO_FACTORY_H_
