#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"



#include "tarch/services/ServiceFactory.h"
registerService(scenario::diffusionequation::DiffusionEquationScenarioService)



scenario::diffusionequation::DiffusionEquationScenarioService::DiffusionEquationScenarioService():
  _scenario(0) {
}


void scenario::diffusionequation::DiffusionEquationScenarioService::setScenario(DiffusionEquationScenario* scenario) {
  _scenario = scenario;
}


scenario::diffusionequation::DiffusionEquationScenarioService::~DiffusionEquationScenarioService() {
}


scenario::diffusionequation::DiffusionEquationScenarioService& scenario::diffusionequation::DiffusionEquationScenarioService::getInstance() {
  static DiffusionEquationScenarioService singleton;
  return singleton;
}


scenario::diffusionequation::DiffusionEquationScenario& scenario::diffusionequation::DiffusionEquationScenarioService::getScenario() {
  assertion( _scenario!=0 );
  return *_scenario;
}


const scenario::diffusionequation::DiffusionEquationScenario& scenario::diffusionequation::DiffusionEquationScenarioService::getScenario() const {
  assertion( _scenario!=0 );
  return *_scenario;
}


void scenario::diffusionequation::DiffusionEquationScenarioService::receiveDanglingMessages() {
}
