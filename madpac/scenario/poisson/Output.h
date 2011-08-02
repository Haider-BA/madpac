// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_POISSON_OUTPUT_H_
#define _PEANO_SCENARIO_POISSON_OUTPUT_H_

namespace scenario {
  namespace poisson {
    class Output;
  }
}



class scenario::poisson::Output {
  public:
	virtual std::string getOutputFile() const = 0;
};

#endif
