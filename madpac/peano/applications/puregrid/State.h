// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_PUREGRID_State_H_ 
#define _PEANO_APPLICATIONS_PUREGRID_State_H_


#include "peano/kernel/spacetreegrid/State.h"

#include "peano/applications/puregrid/records/SpacetreeGridState.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


namespace peano { 
  namespace applications { 
    namespace puregrid { 
      class State;
}
}
}



class peano::applications::puregrid::State { 
  public:
    /**
     * Empty Destructor
     */
    virtual ~State() {};
};


#endif
