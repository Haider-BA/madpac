#ifndef _PEANO_SCENARIO_SHALLOWWATER_SHALLOWWATERSCENARIOSERVICE_H_
#define _PEANO_SCENARIO_SHALLOWWATER_SHALLOWWATERSCENARIOSERVICE_H_

#include "tarch/services/Service.h"
#include "scenario/shallowwater/ShallowWaterScenario.h"

namespace scenario {
  namespace shallowwater {
    class ShallowWaterScenarioService;
  }
}

class scenario::shallowwater::ShallowWaterScenarioService: public tarch::services::Service {
  private:
    ShallowWaterScenarioService();
    ShallowWaterScenario* _scenario;
  public:
    virtual ~ShallowWaterScenarioService();

    static ShallowWaterScenarioService& getInstance();

    virtual void receiveDanglingMessages();

    ShallowWaterScenario& getScenario();
    const ShallowWaterScenario& getScenario() const;

    void setScenario(ShallowWaterScenario* scenario);
};

#endif
