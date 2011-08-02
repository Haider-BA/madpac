// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_DIFFUSION_EQUATION_HEAT_EQUATION_SCENARIO_SERVICE_H_
#define _PEANO_SCENARIO_DIFFUSION_EQUATION_HEAT_EQUATION_SCENARIO_SERVICE_H_


#include "tarch/services/Service.h"
#include "scenario/diffusionequation/DiffusionEquationScenario.h"



namespace scenario {
  namespace diffusionequation {
    class DiffusionEquationScenarioService;
  }
}


class scenario::diffusionequation::DiffusionEquationScenarioService: public tarch::services::Service {
  private:
	DiffusionEquationScenarioService();

	DiffusionEquationScenario* _scenario;
  public:
	virtual ~DiffusionEquationScenarioService();

	static DiffusionEquationScenarioService& getInstance();

	/**
	 * This operation here is nop. Usually, it should for example react if the
	 * master node moves the geometry, e.g., or different boundary conditions
	 * are set.
	 */
    virtual void receiveDanglingMessages();

    DiffusionEquationScenario& getScenario();
    const DiffusionEquationScenario& getScenario() const;

    /**
     * Set the scenario. You are responsible to ensure that this scenario is
     * alive as long as anybody needs the service.
     */
    void setScenario(DiffusionEquationScenario* scenario);
};


#endif
