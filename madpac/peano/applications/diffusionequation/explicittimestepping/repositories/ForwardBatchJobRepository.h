// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_DIFFUSIONEQUATION_EXPLICITTIMESTEPPING_REPOSITORIES_ForwardBatchJobRepository_H_
#define PEANO_APPLICATIONS_DIFFUSIONEQUATION_EXPLICITTIMESTEPPING_REPOSITORIES_ForwardBatchJobRepository_H_


#include <string>


namespace peano { 
  namespace applications { 
    namespace diffusionequation { 
      namespace explicittimestepping {
      namespace repositories {
        class ForwardBatchJobRepository;  
      }
      /**
       * Forward declaration.
       */
      class State;
}
}
}
}


class peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepository {
  public:
    virtual ~ForwardBatchJobRepository() {}

    /**
     * Iterate with current active event handle.
     * @oaram reduceState Desides if the state should be reduced after each iteration.
     */
    virtual void iterate( bool reduceState = true ) = 0;

    virtual peano::applications::diffusionequation::explicittimestepping::State& getState() = 0;

    /**
     * Switch to another event handle.
     */
    virtual void switchToSetupExperiment() = 0;    
    virtual void switchToSetupExperimentAndPlot() = 0;    
    virtual void switchToPerformExplitEulerTimeStep() = 0;    
    virtual void switchToPerformExplitEulerTimeStepAndPlot() = 0;    
    virtual void switchToPlotSolution() = 0;    
    virtual void switchToApplyRefineDeleteCriterion() = 0;    

    virtual bool isActiveAdapterSetupExperiment() const = 0;
    virtual bool isActiveAdapterSetupExperimentAndPlot() const = 0;
    virtual bool isActiveAdapterPerformExplitEulerTimeStep() const = 0;
    virtual bool isActiveAdapterPerformExplitEulerTimeStepAndPlot() const = 0;
    virtual bool isActiveAdapterPlotSolution() const = 0;
    virtual bool isActiveAdapterApplyRefineDeleteCriterion() const = 0;

    
    /**
     * Give Some Statistics
     *
     * This operation gives you a table which tells you for each adapter how 
     * much time was spent in it. The result is written to the info log device. 
     */
    virtual void logIterationStatistics() const = 0;
};


#endif
