#include "scenario/shallowwater/ShallowWaterScenarioService.h"

#include "tarch/services/ServiceFactory.h"
registerService(scenario::shallowwater::ShallowWaterScenarioService)

scenario::shallowwater::ShallowWaterScenarioService::ShallowWaterScenarioService():
  _scenario(0) {
}

void scenario::shallowwater::ShallowWaterScenarioService::setScenario(ShallowWaterScenario* scenario) {
  _scenario = scenario;
}

scenario::shallowwater::ShallowWaterScenarioService::~ShallowWaterScenarioService() {
}

scenario::shallowwater::ShallowWaterScenarioService & scenario::shallowwater::ShallowWaterScenarioService::getInstance() {
  static ShallowWaterScenarioService singleton;
  return singleton;
}

scenario::shallowwater::ShallowWaterScenario& scenario::shallowwater::ShallowWaterScenarioService::getScenario() {
  assertion( _scenario != 0);
  return *_scenario;
}

const scenario::shallowwater::ShallowWaterScenario& scenario::shallowwater::ShallowWaterScenarioService::getScenario() const {
  assertion( _scenario != 0);
  return *_scenario;
}

void scenario::shallowwater::ShallowWaterScenarioService::receiveDanglingMessages() {
}
