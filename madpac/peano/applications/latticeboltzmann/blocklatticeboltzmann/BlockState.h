// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BlockState_H_ 
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BlockState_H_


#include "peano/kernel/spacetreegrid/State.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/records/SpacetreeGridBlockState.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


namespace peano { 
  namespace applications { 
    namespace latticeboltzmann { 
      namespace blocklatticeboltzmann { 
      class BlockState;
}
}
}
}



class peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockState { 
  public:
    /**
     * Empty Destructor
     */
    virtual ~BlockState() {};
};


#endif
