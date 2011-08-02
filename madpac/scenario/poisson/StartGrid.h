// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_POISSON_START_GRID_H_
#define _PEANO_SCENARIO_POISSON_START_GRID_H_


#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"


namespace scenario {
  namespace poisson {
    class StartGrid;
  }
}


class scenario::poisson::StartGrid {
  public:
    virtual tarch::la::Vector<DIMENSIONS,int>      getNumberOfGridPoints() const = 0;
    virtual tarch::la::Vector<DIMENSIONS,double>   getDomainSize() const = 0;
    virtual tarch::la::Vector<DIMENSIONS,double>   getComputationalDomainOffset() const = 0;
};


#endif
