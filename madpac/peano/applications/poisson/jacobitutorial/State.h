// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_POISSON_JACOBITUTORIAL_State_H_ 
#define _PEANO_APPLICATIONS_POISSON_JACOBITUTORIAL_State_H_


#include "peano/kernel/spacetreegrid/State.h"

#include "peano/applications/poisson/jacobitutorial/records/SpacetreeGridState.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace jacobitutorial { 
      class State;
}
}
}
}



class peano::applications::poisson::jacobitutorial::State { 
  public:
    /**
     * Empty Destructor
     */
    virtual ~State() {};
};


#endif
