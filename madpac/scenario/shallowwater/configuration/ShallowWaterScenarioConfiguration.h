#ifndef _PEANO_SCENARIO_SHALLOWWATER_CONFIGURATION_SHALLOWWATERSCENARIOCONFIGURATION_H_
#define _PEANO_SCENARIO_SHALLOWWATER_CONFIGURATION_SHALLOWWATERSCENARIOCONFIGURATION_H_

#include "scenario/shallowwater/ShallowWaterScenario.h"

#include "tarch/configuration/Configuration.h"

namespace scenario {
  namespace shallowwater {
    namespace configuration {
      class ShallowWaterScenarioConfiguration;
    }
  }
}

class scenario::shallowwater::configuration::ShallowWaterScenarioConfiguration:
  public tarch::configuration::Configuration {
    public:
      virtual ShallowWaterScenario* interpreteConfiguration() const = 0;
};

#endif
