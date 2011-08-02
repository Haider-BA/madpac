// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_POISSON_CONFIGURATION_POISSON_SCENARIO_CONFIGURATION_H_
#define _PEANO_SCENARIO_POISSON_CONFIGURATION_POISSON_SCENARIO_CONFIGURATION_H_

#include "scenario/poisson/PoissonScenario.h"

#include "tarch/configuration/Configuration.h"

namespace scenario {
  namespace poisson {
    namespace configuration {
      class PoissonScenarioConfiguration;
    }
  }
}


class scenario::poisson::configuration::PoissonScenarioConfiguration:
  public tarch::configuration::Configuration {
  public:
	/**
	 * You are responsible to destroy the instances afterwards.
	 */
    virtual PoissonScenario* interpreteConfiguration() const = 0;
};

#endif
