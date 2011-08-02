#ifndef _PEANO_SCENARIO_SHALLOWWATER_SHALLOWWATERSCENARIO_H_
#define _PEANO_SCENARIO_SHALLOWWATER_SHALLOWWATERSCENARIO_H_

#include "scenario/shallowwater/Input.h"
#include "scenario/shallowwater/Output.h"
#include "scenario/shallowwater/SimulationSetup.h"

namespace scenario {
  namespace shallowwater {
    class ShallowWaterScenario;
  }
}

class scenario::shallowwater::ShallowWaterScenario:
  public scenario::shallowwater::Input,
  public scenario::shallowwater::Output,
  public scenario::shallowwater::SimulationSetup
{};

#endif
