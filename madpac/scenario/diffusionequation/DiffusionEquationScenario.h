// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_DIFFUSION_EQUATION_DIFFUSION_EQUATION__SCENARIO_H_
#define _PEANO_SCENARIO_DIFFUSION_EQUATION_DIFFUSION_EQUATION__SCENARIO_H_


#include "peano/geometry/Geometry.h"
#include "scenario/diffusionequation/StartGrid.h"
#include "scenario/diffusionequation/ExperimentSetup.h"


namespace scenario {
  namespace diffusionequation {
    class DiffusionEquationScenario;
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
class scenario::diffusionequation::DiffusionEquationScenario:
  public peano::geometry::Geometry,
  public scenario::diffusionequation::StartGrid,
  public scenario::diffusionequation::ExperimentSetup
{
  public:
    /**
     * This operation is important for time-dependent scnearios, i.e. it
     * allows the scenario (or, more often, the geometry) to change.
     */
    virtual void setTime( double t ) = 0;
    virtual void plotInputDataToVTKFile(const std::string& data) const = 0;
};

#endif
