// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_POISSON_JACOBITUTORIAL_REPOSITORIES_JacobiBatchJobRepository_H_
#define PEANO_APPLICATIONS_POISSON_JACOBITUTORIAL_REPOSITORIES_JacobiBatchJobRepository_H_


#include <string>

#if defined(CCA)
#include "peano/integration/cca/ports/grid/Statistics.h"
#endif


namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace jacobitutorial {
      namespace repositories {
        class JacobiBatchJobRepository;  
      }
      /**
       * Forward declaration.
       */
      class State;
}
}
}
}


class peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepository {
  public:
    virtual ~JacobiBatchJobRepository() {}
    
    /**
     * Iterate with current active event handle.
     */
    virtual void iterate() = 0;

    /**
	 * Iterate with current active event handle.
	 * @oaram reduceState Desides if the state should be reduced after each iteration.
	 */
	virtual void iterate( bool reduceState ) = 0;

    virtual peano::applications::poisson::jacobitutorial::State& getState() = 0;

    /**
     * Switch to another event handle.
     */
     virtual void switchToSetupExperiment() = 0;    
     virtual void switchToSetupExperimentAndPlotGrid() = 0;    
     virtual void switchToSetupExperimentAndPlotStartSolution() = 0;    
     virtual void switchToJacobiStep() = 0;    
     virtual void switchToJacobiStepAndPlotSolution() = 0;    
     virtual void switchToPlotSolution() = 0;    

     virtual bool isActiveAdapterSetupExperiment() const = 0;
     virtual bool isActiveAdapterSetupExperimentAndPlotGrid() const = 0;
     virtual bool isActiveAdapterSetupExperimentAndPlotStartSolution() const = 0;
     virtual bool isActiveAdapterJacobiStep() const = 0;
     virtual bool isActiveAdapterJacobiStepAndPlotSolution() const = 0;
     virtual bool isActiveAdapterPlotSolution() const = 0;

    
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
