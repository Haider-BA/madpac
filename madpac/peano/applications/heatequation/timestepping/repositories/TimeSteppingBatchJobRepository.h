// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_REPOSITORIES_TimeSteppingBatchJobRepository_H_
#define PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_REPOSITORIES_TimeSteppingBatchJobRepository_H_


#include <string>

#if defined(CCA)
#include "peano/integration/cca/ports/grid/Statistics.h"
#endif


namespace peano { 
  namespace applications { 
    namespace heatequation { 
      namespace timestepping {
      namespace repositories {
        class TimeSteppingBatchJobRepository;  
      }
      /**
       * Forward declaration.
       */
      class State;
}
}
}
}


class peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepository {
  public:
    virtual ~TimeSteppingBatchJobRepository() {}
    
    /**
     * Iterate with current active event handle.
     */
    virtual void iterate() = 0;

    /**
	 * Iterate with current active event handle.
	 * @oaram reduceState Desides if the state should be reduced after each iteration.
	 */
	virtual void iterate( bool reduceState ) = 0;

    virtual peano::applications::heatequation::timestepping::State& getState() = 0;

    /**
     * Switch to another event handle.
     */
     virtual void switchToSetupExperiment() = 0;    
     virtual void switchToSetupExperimentAndPlot() = 0;    
     virtual void switchToPerformExplitEulerTimeStep() = 0;    
     virtual void switchToPerformImplicitTimeStep() = 0;    
     virtual void switchToPerformImplicitTimeStepAndPlot() = 0;    
     virtual void switchToComputeImplicitSolutionWithJacobi() = 0;    
     virtual void switchToPerformExplitEulerTimeStepAndPlot() = 0;    
     virtual void switchToPlotSolution() = 0;    
     virtual void switchToPlotGrid() = 0;    
     virtual void switchToSmooth() = 0;    
     virtual void switchToCoarse() = 0;    
     virtual void switchToProlong() = 0;    
     virtual void switchToApplyRefineDeleteCriterion() = 0;    
     virtual void switchToSetupOneLevelOfExperiment() = 0;    
     virtual void switchToProbeSolution() = 0;    

     virtual bool isActiveAdapterSetupExperiment() const = 0;
     virtual bool isActiveAdapterSetupExperimentAndPlot() const = 0;
     virtual bool isActiveAdapterPerformExplitEulerTimeStep() const = 0;
     virtual bool isActiveAdapterPerformImplicitTimeStep() const = 0;
     virtual bool isActiveAdapterPerformImplicitTimeStepAndPlot() const = 0;
     virtual bool isActiveAdapterComputeImplicitSolutionWithJacobi() const = 0;
     virtual bool isActiveAdapterPerformExplitEulerTimeStepAndPlot() const = 0;
     virtual bool isActiveAdapterPlotSolution() const = 0;
     virtual bool isActiveAdapterPlotGrid() const = 0;
     virtual bool isActiveAdapterSmooth() const = 0;
     virtual bool isActiveAdapterCoarse() const = 0;
     virtual bool isActiveAdapterProlong() const = 0;
     virtual bool isActiveAdapterApplyRefineDeleteCriterion() const = 0;
     virtual bool isActiveAdapterSetupOneLevelOfExperiment() const = 0;
     virtual bool isActiveAdapterProbeSolution() const = 0;

    
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
