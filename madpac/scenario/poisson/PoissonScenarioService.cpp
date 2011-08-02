#include "scenario/poisson/PoissonScenarioService.h"



#include "tarch/services/ServiceFactory.h"
registerService(scenario::poisson::PoissonScenarioService)



scenario::poisson::PoissonScenarioService::PoissonScenarioService():
  _scenario(0) {
}


void scenario::poisson::PoissonScenarioService::setScenario(PoissonScenario* scenario) {
  _scenario = scenario;
}


scenario::poisson::PoissonScenarioService::~PoissonScenarioService() {
}


scenario::poisson::PoissonScenarioService& scenario::poisson::PoissonScenarioService::getInstance() {
  static PoissonScenarioService singleton;
  return singleton;
}


scenario::poisson::PoissonScenario& scenario::poisson::PoissonScenarioService::getScenario() {
  assertion( _scenario!=0 );
  return *_scenario;
}


const scenario::poisson::PoissonScenario& scenario::poisson::PoissonScenarioService::getScenario() const {
  assertion( _scenario!=0 );
  return *_scenario;
}


void scenario::poisson::PoissonScenarioService::receiveDanglingMessages() {
}
