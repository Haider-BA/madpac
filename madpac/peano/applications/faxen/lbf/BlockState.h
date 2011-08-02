// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_FAXEN_LBF_BlockState_H_
#define _PEANO_APPLICATIONS_FAXEN_LBF_BlockState_H_


#include "peano/kernel/spacetreegrid/State.h"

#include "peano/applications/faxen/lbf/records/SpacetreeGridBlockState.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


namespace peano { 
  namespace applications { 
    namespace faxen {
      namespace lbf {
      class BlockState;
}
}
}
}



class peano::applications::faxen::lbf::BlockState {
  public:
    /**
     * Empty Destructor
     */
    virtual ~BlockState() {};
};


#endif
