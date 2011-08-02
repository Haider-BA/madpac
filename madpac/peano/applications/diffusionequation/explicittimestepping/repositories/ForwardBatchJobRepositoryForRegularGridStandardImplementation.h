// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_DIFFUSIONEQUATION_EXPLICITTIMESTEPPING_REPOSITORIES_ForwardBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_DIFFUSIONEQUATION_EXPLICITTIMESTEPPING_REPOSITORIES_ForwardBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_


#include "peano/applications/diffusionequation/explicittimestepping/repositories/ForwardBatchJobRepositoryForRegularGrid.h"

#include "peano/applications/diffusionequation/explicittimestepping/repositories/ForwardBatchJobRepositoryState.h"
#include "peano/applications/diffusionequation/explicittimestepping/RegularGridVertex.h"
#include "peano/applications/diffusionequation/explicittimestepping/RegularGridCell.h"
#include "peano/applications/diffusionequation/explicittimestepping/RegularGridState.h"

#include "peano/kernel/regulargrid/Grid.h"
#include "peano/kernel/regulargrid/GridContainer.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/diffusionequation/explicittimestepping/adapters/RegularGrid2SetupExperiment.h" 
 #include "peano/applications/diffusionequation/explicittimestepping/adapters/RegularGrid2SetupExperimentAndPlot.h" 
 #include "peano/applications/diffusionequation/explicittimestepping/adapters/RegularGrid2PerformExplitEulerTimeStep.h" 
 #include "peano/applications/diffusionequation/explicittimestepping/adapters/RegularGrid2PerformExplitEulerTimeStepAndPlot.h" 
 #include "peano/applications/diffusionequation/explicittimestepping/adapters/RegularGrid2PlotSolution.h" 
 #include "peano/applications/diffusionequation/explicittimestepping/adapters/RegularGrid2ApplyRefineDeleteCriterion.h" 



namespace peano { 
  namespace applications { 
    namespace diffusionequation { 
      namespace explicittimestepping {
      namespace repositories {
        class ForwardBatchJobRepositoryForRegularGridStandardImplementation;  
      }
}
}
}
}


class peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation: public peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;

    peano::kernel::regulargrid::GridContainer<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex,peano::applications::diffusionequation::explicittimestepping::RegularGridCell>  _gridContainer;

    peano::kernel::regulargrid::Grid<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex,peano::applications::diffusionequation::explicittimestepping::RegularGridCell,peano::applications::diffusionequation::explicittimestepping::RegularGridState,adapters::RegularGrid2SetupExperiment> _gridWithSetupExperiment;
    peano::kernel::regulargrid::Grid<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex,peano::applications::diffusionequation::explicittimestepping::RegularGridCell,peano::applications::diffusionequation::explicittimestepping::RegularGridState,adapters::RegularGrid2SetupExperimentAndPlot> _gridWithSetupExperimentAndPlot;
    peano::kernel::regulargrid::Grid<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex,peano::applications::diffusionequation::explicittimestepping::RegularGridCell,peano::applications::diffusionequation::explicittimestepping::RegularGridState,adapters::RegularGrid2PerformExplitEulerTimeStep> _gridWithPerformExplitEulerTimeStep;
    peano::kernel::regulargrid::Grid<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex,peano::applications::diffusionequation::explicittimestepping::RegularGridCell,peano::applications::diffusionequation::explicittimestepping::RegularGridState,adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot> _gridWithPerformExplitEulerTimeStepAndPlot;
    peano::kernel::regulargrid::Grid<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex,peano::applications::diffusionequation::explicittimestepping::RegularGridCell,peano::applications::diffusionequation::explicittimestepping::RegularGridState,adapters::RegularGrid2PlotSolution> _gridWithPlotSolution;
    peano::kernel::regulargrid::Grid<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex,peano::applications::diffusionequation::explicittimestepping::RegularGridCell,peano::applications::diffusionequation::explicittimestepping::RegularGridState,adapters::RegularGrid2ApplyRefineDeleteCriterion> _gridWithApplyRefineDeleteCriterion;

   
    int _countSetupExperimentRuns;
    int _countSetupExperimentAndPlotRuns;
    int _countPerformExplitEulerTimeStepRuns;
    int _countPerformExplitEulerTimeStepAndPlotRuns;
    int _countPlotSolutionRuns;
    int _countApplyRefineDeleteCriterionRuns;

    double _measureSetupExperimentCPUTime;
    double _measureSetupExperimentAndPlotCPUTime;
    double _measurePerformExplitEulerTimeStepCPUTime;
    double _measurePerformExplitEulerTimeStepAndPlotCPUTime;
    double _measurePlotSolutionCPUTime;
    double _measureApplyRefineDeleteCriterionCPUTime;

    double _measureSetupExperimentCalendarTime;
    double _measureSetupExperimentAndPlotCalendarTime;
    double _measurePerformExplitEulerTimeStepCalendarTime;
    double _measurePerformExplitEulerTimeStepAndPlotCalendarTime;
    double _measurePlotSolutionCalendarTime;
    double _measureApplyRefineDeleteCriterionCalendarTime;

  
   peano::applications::diffusionequation::explicittimestepping::RegularGridState            _solverState;
   peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState               _repositoryState;
   
  public:
    #ifdef Parallel
    ForwardBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );
    #else
    ForwardBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
    );
    #endif
    
    
    /**
     * Parallel Constructor
     *
     * Used in parallel mode only where the size of the domain is not known 
     * when the type of repository is determined.  
     */
    ForwardBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );     
    virtual void terminate();
    
    
    virtual ~ForwardBatchJobRepositoryForRegularGridStandardImplementation();
    
    virtual peano::applications::diffusionequation::explicittimestepping::State& getState();
	
    virtual void iterate( bool reduceState = true );
    
    virtual void logIterationStatistics() const;
    
    virtual peano::applications::diffusionequation::explicittimestepping::RegularGridState& getRegularGridState();
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex, peano::applications::diffusionequation::explicittimestepping::RegularGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex, peano::applications::diffusionequation::explicittimestepping::RegularGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex, peano::applications::diffusionequation::explicittimestepping::RegularGridCell>* createEmptyCheckpoint(); 

    virtual void switchToSetupExperiment();    
    virtual void switchToSetupExperimentAndPlot();    
    virtual void switchToPerformExplitEulerTimeStep();    
    virtual void switchToPerformExplitEulerTimeStepAndPlot();    
    virtual void switchToPlotSolution();    
    virtual void switchToApplyRefineDeleteCriterion();    

    virtual bool isActiveAdapterSetupExperiment() const;
    virtual bool isActiveAdapterSetupExperimentAndPlot() const;
    virtual bool isActiveAdapterPerformExplitEulerTimeStep() const;
    virtual bool isActiveAdapterPerformExplitEulerTimeStepAndPlot() const;
    virtual bool isActiveAdapterPlotSolution() const;
    virtual bool isActiveAdapterApplyRefineDeleteCriterion() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
