// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_POISSON_EXPERIMENT_SETUP_H_
#define _PEANO_SCENARIO_POISSON_EXPERIMENT_SETUP_H_

#include "tarch/la/Vector.h"


namespace scenario {
  namespace poisson {
    class ExperimentSetup;
  }
}


class scenario::poisson::ExperimentSetup {
  public:
	enum BoundaryType {
	  DIRICHLET
	};

    virtual double       getRhs(const tarch::la::Vector<DIMENSIONS,int>& x) const = 0;
    virtual double       getInitialValue(const tarch::la::Vector<DIMENSIONS,int>& x) const = 0;
    virtual BoundaryType getBoundaryType(const tarch::la::Vector<DIMENSIONS,int>& x) const = 0;
};


#endif
