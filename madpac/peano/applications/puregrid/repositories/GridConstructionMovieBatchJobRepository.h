// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_PUREGRID_REPOSITORIES_GridConstructionMovieBatchJobRepository_H_
#define PEANO_APPLICATIONS_PUREGRID_REPOSITORIES_GridConstructionMovieBatchJobRepository_H_


#include <string>

#if defined(CCA)
#include "peano/integration/cca/ports/grid/Statistics.h"
#endif


namespace peano { 
  namespace applications { 
    namespace puregrid {
      namespace repositories {
        class GridConstructionMovieBatchJobRepository;  
      }
      /**
       * Forward declaration.
       */
      class State;
}
}
}


class peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepository {
  public:
    virtual ~GridConstructionMovieBatchJobRepository() {}
    
    /**
     * Iterate with current active event handle.
     */
    virtual void iterate() = 0;

    /**
	 * Iterate with current active event handle.
	 * @oaram reduceState Desides if the state should be reduced after each iteration.
	 */
	virtual void iterate( bool reduceState ) = 0;

    virtual peano::applications::puregrid::State& getState() = 0;

    /**
     * Switch to another event handle.
     */
     virtual void switchToPerformOneRefinement() = 0;    
     virtual void switchToPerformOneRefinementWithoutGridSnapshot() = 0;    

     virtual bool isActiveAdapterPerformOneRefinement() const = 0;
     virtual bool isActiveAdapterPerformOneRefinementWithoutGridSnapshot() const = 0;

    
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
