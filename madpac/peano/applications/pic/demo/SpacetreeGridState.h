// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_PIC_DEMO_SpacetreeGridState_H_ 
#define _PEANO_APPLICATIONS_PIC_DEMO_SpacetreeGridState_H_


#include "peano/kernel/spacetreegrid/State.h"

#include "peano/applications/pic/demo/records/SpacetreeGridState.h"

#include "peano/kernel/gridinterface/Checkpoint.h"

#include "peano/applications/pic/demo/State.h"


namespace peano { 
  namespace applications { 
    namespace pic { 
      namespace demo { 
      class SpacetreeGridState;
      /**
       * Forward declaration
       */
      class SpacetreeGridVertex;
      /**
       * Forward declaration
       */
      class SpacetreeGridCell;
      
      namespace repositories {
        /** 
         * Forward declaration
         */
        class PICBatchJobRepositoryForSpacetreeGridArrayStackImplementation;
        class PICBatchJobRepositoryForSpacetreeGridFileStackImplementation;
        class PICBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation;
        class PICBatchJobRepositoryForSpacetreeGridSTDStackImplementation;
        class PICBatchJobRepositoryForSpacetreeGridDynamicStackImplementation;
      }
}
}
}
}

/**
 * Blueprint for solver/application state.
 * 
 * This file has originally been created by PeProt and may be manually adapted to 
 * the needs of your application. We do not recommend to remove anything!
 * 
 * \author PeProt
 */


class peano::applications::pic::demo::SpacetreeGridState: public peano::kernel::spacetreegrid::State< peano::applications::pic::demo::records::SpacetreeGridState >, public peano::applications::pic::demo::State { 
  private: 
    typedef class peano::kernel::spacetreegrid::State< peano::applications::pic::demo::records::SpacetreeGridState >  Base;

    /**
     * Needed for checkpointing.
     */
    friend class peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridArrayStackImplementation;
    friend class peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridFileStackImplementation;
    friend class peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation;
    friend class peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridSTDStackImplementation;
    friend class peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridDynamicStackImplementation;
  
    void writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo::SpacetreeGridVertex, peano::applications::pic::demo::SpacetreeGridCell>& checkpoint ) const;    
    void readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo::SpacetreeGridVertex, peano::applications::pic::demo::SpacetreeGridCell>& checkpoint );    
  
  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    SpacetreeGridState();

    /**
     * Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it. It is kind of a copy constructor that converts an object which 
     * comprises solely persistent attributes into a full attribute. This very 
     * functionality is implemented within the super type, i.e. this constructor 
     * has to invoke the correponsing super type's constructor and not the super 
     * type standard constructor.
     */
    SpacetreeGridState(const Base::PersistentState& argument);

    #ifdef Parallel
    /**
     * Merge worker state with global master state
     * 
     * The state management follows a one-point-holds-it-all policy, i.e. before 
     * and after each iteration, the global master (rank 0) is the only rank 
     * that has a valid state object. Whenever the application starts up, this 
     * valid state object is distributed among the working nodes. Whenever any 
     * node finishes to iterate, it sends back its state to the global master 
     * where all the state objects are merged into one big state object.
     *
     * This operation implements the merge process (the distribution is just a 
     * simple copying), i.e. it is called on the master node only. Implement 
     * your PDE-specific operations such as the computation of a global residual 
     * here but ensure that you also call the super class' merge operation. The 
     * this object is the master's state. The argument is the state that the 
     * node just received from a worker.
     */
    void mergeWithWorkerState(const SpacetreeGridState& workerState);
    #endif
};


#endif
