// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_DIFFUSION_EQUATION_EXPERIMENT_SETUP_H_
#define _PEANO_SCENARIO_DIFFUSION_EQUATION_EXPERIMENT_SETUP_H_

#include "tarch/la/Vector.h"


namespace scenario {
  namespace diffusionequation {
    class ExperimentSetup;
  }
}


class scenario::diffusionequation::ExperimentSetup {
  public:
    enum BoundaryType {
      DIRICHLET, NEUMANN
	  };

    virtual double       getRhs(const tarch::la::Vector<1,double>& x) = 0;
    virtual double       getInitialValue(const tarch::la::Vector<1,double>& x) const = 0;
    virtual BoundaryType getBoundaryType(const tarch::la::Vector<1,double>& x) const = 0;
    virtual double       getThermalDiffusivity(const tarch::la::Vector<1,double>& x) = 0;

    virtual double       getRhs(const tarch::la::Vector<2,double>& x) = 0;
    virtual double       getInitialValue(const tarch::la::Vector<2,double>& x) const = 0;
    virtual BoundaryType getBoundaryType(const tarch::la::Vector<2,double>& x) const = 0;
    virtual double       getThermalDiffusivity(const tarch::la::Vector<2,double>& x) = 0;

    virtual double       getRhs(const tarch::la::Vector<3,double>& x) = 0;
    virtual double       getInitialValue(const tarch::la::Vector<3,double>& x) const = 0;
    virtual BoundaryType getBoundaryType(const tarch::la::Vector<3,double>& x) const = 0;
    virtual double       getThermalDiffusivity(const tarch::la::Vector<3,double>& x) = 0;

    /**
     * This number tells you how big you might change your sample mesh width
     * without loosing the stimulus. If you have a regular grid, e.g., with a
     * smaller mesh size than getMaximalSamplingWidth(), you are guaranteed
     * that you will see the stimulus.
     */
    virtual double       getMaximalSamplingWidth() const = 0;
};


#endif
