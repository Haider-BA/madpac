// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_REPOSITORIES_BlockLatticeBoltzmannBatchJobRepository_FOR_SPACETREE_GRID_H_
#define PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_REPOSITORIES_BlockLatticeBoltzmannBatchJobRepository_FOR_SPACETREE_GRID_H_


#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepository.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/SpacetreeGridBlockState.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/SpacetreeGridBlockCell.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/SpacetreeGridBlockVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


namespace peano { 
  namespace applications { 
    namespace latticeboltzmann { 
      namespace blocklatticeboltzmann {
      namespace repositories {
        class BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid;
        class BlockLatticeBoltzmannBatchJobRepositoryState;
      }
}
}
}
}


/**
 * Explicit instantiation
 */
template class peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell>;


class peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid: public peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepository {
  public:
    virtual peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockState& getState() = 0;
        
    /**
     * Create a checkpoint.
     *
     * See createEmptyCheckpoint() before.
     */
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell> * const checkpoint) = 0; 
    
    /**
     * Load a checkpoint
     * 
     * Does neither modify the checkpoint nor does it delete it. If you want to 
     * load a file from a checkpoint, see createEmptyCheckpoint() before.
     */
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell> const * const checkpoint ) = 0;
    
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
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell>* createEmptyCheckpoint() = 0;
    
    /**
     * Restart the repository with a different setup.
     *
     * This operation is only used by the parallel code. It itself derives from 
     * the new master node the new state and the adjacency information. Also 
     * the vertices with the adjacency information are taken from the master 
     * node, so the only interesting thing is how to traverse the adjacent 
     * elements and how the curve runs through the root element.
     */
    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
      const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      int                                          domainLevel
    ) = 0;     
    
    /**
     * Counterpart of restart(). However, terminate() also is to be called on  
     * the global master.
     */
    virtual void terminate() = 0;
    
    virtual peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState& getSpacetreeGridState() = 0;
    
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
