#ifndef _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SCENARIODEFINITIONS_H_
#define _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SCENARIODEFINITIONS_H_


namespace scenario {
  namespace latticeboltzmann {
    namespace blocklatticeboltzmann {
      /** scenario types. */
      enum ScenarioType{
        // lid driven cavity scenario
        LID_DRIVEN_CAVITY=0,
        // default channel (with no-slip obstacles allowed)
        DEFAULT_CHANNEL=1,
        // channel with a moving sphere (for simple FSI)
        CHANNEL_WITH_MOVING_OBSTACLE=2,
        // scenario involving preCICE
        PRECICE_SCENARIO=3,
        // empty box scenario with a moving obstacle
        EMPTY_BOX=4,
        // builtin geometry with moving sphere with
        // constant inlet velocity
        MOVING_SPHERE_IN_DRIFT_RATCHET=5
      };

    }
  }
}

#endif // _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SCENARIODEFINITIONS_H_
