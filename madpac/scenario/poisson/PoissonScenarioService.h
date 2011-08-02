// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_POISSON_POISSON_SCENARIO_SERVICE_H_
#define _PEANO_SCENARIO_POISSON_POISSON_SCENARIO_SERVICE_H_


#include "tarch/services/Service.h"
#include "scenario/poisson/PoissonScenario.h"



namespace scenario {
  namespace poisson {
    class PoissonScenarioService;
  }
}


class scenario::poisson::PoissonScenarioService: public tarch::services::Service {
  private:
	PoissonScenarioService();

	PoissonScenario* _scenario;
  public:
	virtual ~PoissonScenarioService();

	static PoissonScenarioService& getInstance();

	/**
	 * This operation here is nop. Usually, it should for example react if the
	 * master node moves the geometry, e.g., or different boundary conditions
	 * are set.
	 */
    virtual void receiveDanglingMessages();

    PoissonScenario& getScenario();
    const PoissonScenario& getScenario() const;

    /**
     * Set the scenario. You are responsible to ensure that this scenario is
     * alive as long as anybody needs the service.
     */
    void setScenario(PoissonScenario* scenario);
};


#endif
