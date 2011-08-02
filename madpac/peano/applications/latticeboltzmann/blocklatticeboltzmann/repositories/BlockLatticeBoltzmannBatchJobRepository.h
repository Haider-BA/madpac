// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_REPOSITORIES_BlockLatticeBoltzmannBatchJobRepository_H_
#define PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_REPOSITORIES_BlockLatticeBoltzmannBatchJobRepository_H_


#include <string>

#if defined(CCA)
#include "peano/integration/cca/ports/grid/Statistics.h"
#endif


namespace peano { 
  namespace applications { 
    namespace latticeboltzmann { 
      namespace blocklatticeboltzmann {
      namespace repositories {
        class BlockLatticeBoltzmannBatchJobRepository;  
      }
      /**
       * Forward declaration.
       */
      class BlockState;
}
}
}
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepository {
  public:
    virtual ~BlockLatticeBoltzmannBatchJobRepository() {}

    /**
     * Iterate with current active event handle.
     * @oaram reduceState Desides if the state should be reduced after each iteration.
     */
    virtual void iterate( bool reduceState = true ) = 0;

    virtual peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockState& getState() = 0;

    /**
     * Switch to another event handle.
     */
     virtual void switchToRegularBlockSolverAdapter() = 0;    
     virtual void switchToInitialiseSpacetreeGridAdapter() = 0;    
     virtual void switchToBlockCCAOutputAdapter() = 0;    
     virtual void switchToDynamicRefinementForSpacetreeGridAdapter() = 0;    
     virtual void switchToBlockVTKOutputAdapter() = 0;    
     virtual void switchToRegularBlockSolverAndVTKOutputAdapter() = 0;    

     virtual bool isActiveAdapterRegularBlockSolverAdapter() const = 0;
     virtual bool isActiveAdapterInitialiseSpacetreeGridAdapter() const = 0;
     virtual bool isActiveAdapterBlockCCAOutputAdapter() const = 0;
     virtual bool isActiveAdapterDynamicRefinementForSpacetreeGridAdapter() const = 0;
     virtual bool isActiveAdapterBlockVTKOutputAdapter() const = 0;
     virtual bool isActiveAdapterRegularBlockSolverAndVTKOutputAdapter() const = 0;

    
    /**
     * Give Some Statistics
     *
     * This operation gives you a table which tells you for each adapter how 
     * much time was spent in it. The result is written to the info log device 
     * if you are not using CCA/sciCoDE. If you use the PSE framework, it is 
     * written to the corresponding output port. 
     */
    #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const = 0;
    #endif
    virtual void logIterationStatistics() const = 0;
};


#endif
