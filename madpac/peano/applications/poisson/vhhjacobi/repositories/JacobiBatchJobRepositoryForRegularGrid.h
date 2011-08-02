// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_POISSON_VHHJACOBI_REPOSITORIES_JacobiBatchJobRepository_FOR_REGULAR_GRID_H_
#define PEANO_APPLICATIONS_POISSON_VHHJACOBI_REPOSITORIES_JacobiBatchJobRepository_FOR_REGULAR_GRID_H_


#include "peano/applications/poisson/vhhjacobi/repositories/JacobiBatchJobRepository.h"

#include "peano/applications/poisson/vhhjacobi/RegularGridState.h"
#include "peano/applications/poisson/vhhjacobi/RegularGridCell.h"
#include "peano/applications/poisson/vhhjacobi/RegularGridVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace vhhjacobi {
      namespace repositories {
        class JacobiBatchJobRepositoryForRegularGrid;
        class JacobiBatchJobRepositoryState;
      }
}
}
}
}


/**
 * Explicit instantiation
 */
template class peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::vhhjacobi::RegularGridVertex, peano::applications::poisson::vhhjacobi::RegularGridCell>;


class peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryForRegularGrid: public peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepository {
  public:
    /**
     * Create a checkpoint.
     *
     * See createEmptyCheckpoint() before.
     */
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::vhhjacobi::RegularGridVertex, peano::applications::poisson::vhhjacobi::RegularGridCell> * const checkpoint) = 0; 
    
    /**
     * Load a checkpoint
     * 
     * Does neither modify the checkpoint nor does it delete it. If you want to 
     * load a file from a checkpoint, see createEmptyCheckpoint() before.
     */
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::vhhjacobi::RegularGridVertex, peano::applications::poisson::vhhjacobi::RegularGridCell> const * const checkpoint ) = 0;
    
    /**
     * Create empty Checkpoint
     *
     * If you wanna read a checkpoint, implement the following four steps:
     * - Call createEmptyCheckpoint() on the repository. You receive a pointer 
     *   to a new checkpoint object. If you don't use this operation, your code 
     *   won't work in parallel and is not grid-independent.
     * - Invoke readFromFile() on the checkpoint object.
     * - Call readCheckpoint() on the repository and pass it your new checkpoint 
     *   object.
     * - Destroy the checkpoint object on the heap. 
     *
     * If you wanna write a checkpoint, implement the following four steps:
     * - Call createEmptyCheckpoint() on the repository. You receive a pointer 
     *   to a new checkpoint object. If you don't use this operation, your code 
     *   won't work in parallel and is not grid-independent.
     * - Call writeCheckpoint() on the repository and pass it your new checkpoint 
     *   object.
     * - Invoke writeToFile() on the checkpoint object.
     * - Destroy the checkpoint object on the heap. 
     */
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::vhhjacobi::RegularGridVertex, peano::applications::poisson::vhhjacobi::RegularGridCell>* createEmptyCheckpoint() = 0;
    
    /**
     * Restart the repository with a different setup.
     *
     * This operation might be moved up to the general interface. However, its 
     * signature depends on the type of grid used (regular grid vs. k-spacetree). 
     * Hence, I decided not to make it part of the general interface, and the 
     * same holds for the terminate() operation below. Beware: You are not 
     * allowed to call restart on the root node, i.e. restart() may only be 
     * called on the worker nodes. This is a small difference compared to the 
     * terminate() operation.  
     */
    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    ) = 0;     
    
    /**
     * Counterpart of restart(). However, terminate() also is to be called on  
     * the global master.
     */
    virtual void terminate() = 0;
    
    virtual peano::applications::poisson::vhhjacobi::RegularGridState& getRegularGridState() = 0;
    
    
    #ifdef Parallel
    /**
     * Shall a worker in the parallel cluster continue to iterate?
     *
     * This operation may be invoked on a worker node only, i.e. you are not 
     * allowed to trigger it on global rank 0. It waits for a wake-up call from 
     * the master node and then tells you whether to continue your work or not. 
     * If the result is false, you might do some additional iterations (plotting 
     * stuff or writing some statistics, e.g.), but then you should call
     * terminate() on the node and ask the node pool for a new job. If you 
     * invoke additional iterates() after this operation has returned false and 
     * and the terminate(), these iterations won't trigger any communication 
     * anymore.
     */
    virtual bool continueToIterate() = 0;
    #endif
};


#endif
