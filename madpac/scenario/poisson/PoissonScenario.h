// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_POISSON_POISSON_SCENARIO_H_
#define _PEANO_SCENARIO_POISSON_POISSON_SCENARIO_H_


#include "peano/geometry/Geometry.h"
#include "scenario/poisson/StartGrid.h"
#include "scenario/poisson/ExperimentSetup.h"
#include "scenario/poisson/Output.h"
#include "scenario/poisson/SolverParameters.h"


namespace scenario {
  namespace poisson {
    class PoissonScenario;
  }
}


/**
 * Poisson Scenario
 *
 * Like any scenario, the poisson scenario merged different views on the
 * experimental setup, i.e. an instance of a Poisson scenario is all a
 * poisson PDE solver has to know about the experimental setting.
 *
 * Before you start up a Poisson experiment, you although have to create a
 * poisson scenario on each node and add it to the local service.
 *
 * @author Tobias Weinzierl
 */
class scenario::poisson::PoissonScenario:
  public peano::geometry::Geometry,
  public scenario::poisson::StartGrid,
  public scenario::poisson::ExperimentSetup,
  public scenario::poisson::Output,
  public scenario::poisson::SolverParameters
{
};

#endif
