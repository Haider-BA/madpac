// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_POISSON_SOLVER_PARAMETERS_H_
#define _PEANO_SCENARIO_POISSON_SOLVER_PARAMETERS_H_

namespace scenario {
  namespace poisson {
    class SolverParameters;
  }
}



class scenario::poisson::SolverParameters {
  public:
	virtual double getRelaxationFactor() const = 0;
};

#endif
