// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_REPOSITORIES_TimeSteppingBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_REPOSITORIES_TimeSteppingBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_


#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryForRegularGrid.h"

#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryState.h"
#include "peano/applications/heatequation/timestepping/RegularGridSingleStepVertex.h"
#include "peano/applications/heatequation/timestepping/RegularGridCell.h"
#include "peano/applications/heatequation/timestepping/RegularGridState.h"

#include "peano/kernel/regulargrid/Grid.h"
#include "peano/kernel/regulargrid/GridContainer.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2SetupExperiment.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2SetupExperimentAndPlot.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2PerformExplitEulerTimeStep.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2PerformImplicitTimeStep.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2PerformImplicitTimeStepAndPlot.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2ComputeImplicitSolutionWithJacobi.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2PerformExplitEulerTimeStepAndPlot.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2PlotSolution.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2PlotGrid.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2Smooth.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2Coarse.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2Prolong.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2ApplyRefineDeleteCriterion.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2SetupOneLevelOfExperiment.h" 
 #include "peano/applications/heatequation/timestepping/adapters/RegularGrid2ProbeSolution.h" 



namespace peano { 
  namespace applications { 
    namespace heatequation { 
      namespace timestepping {
      namespace repositories {
        class TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation;  
      }
}
}
}
}


class peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation: public peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;

    peano::kernel::regulargrid::GridContainer<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell>  _gridContainer;

    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2SetupExperiment> _gridWithSetupExperiment;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2SetupExperimentAndPlot> _gridWithSetupExperimentAndPlot;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2PerformExplitEulerTimeStep> _gridWithPerformExplitEulerTimeStep;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2PerformImplicitTimeStep> _gridWithPerformImplicitTimeStep;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2PerformImplicitTimeStepAndPlot> _gridWithPerformImplicitTimeStepAndPlot;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2ComputeImplicitSolutionWithJacobi> _gridWithComputeImplicitSolutionWithJacobi;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot> _gridWithPerformExplitEulerTimeStepAndPlot;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2PlotSolution> _gridWithPlotSolution;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2PlotGrid> _gridWithPlotGrid;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2Smooth> _gridWithSmooth;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2Coarse> _gridWithCoarse;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2Prolong> _gridWithProlong;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2ApplyRefineDeleteCriterion> _gridWithApplyRefineDeleteCriterion;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2SetupOneLevelOfExperiment> _gridWithSetupOneLevelOfExperiment;
    peano::kernel::regulargrid::Grid<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex,peano::applications::heatequation::timestepping::RegularGridCell,peano::applications::heatequation::timestepping::RegularGridState,adapters::RegularGrid2ProbeSolution> _gridWithProbeSolution;

   
    int _countSetupExperimentRuns;
    int _countSetupExperimentAndPlotRuns;
    int _countPerformExplitEulerTimeStepRuns;
    int _countPerformImplicitTimeStepRuns;
    int _countPerformImplicitTimeStepAndPlotRuns;
    int _countComputeImplicitSolutionWithJacobiRuns;
    int _countPerformExplitEulerTimeStepAndPlotRuns;
    int _countPlotSolutionRuns;
    int _countPlotGridRuns;
    int _countSmoothRuns;
    int _countCoarseRuns;
    int _countProlongRuns;
    int _countApplyRefineDeleteCriterionRuns;
    int _countSetupOneLevelOfExperimentRuns;
    int _countProbeSolutionRuns;

    double _measureSetupExperimentCPUTime;
    double _measureSetupExperimentAndPlotCPUTime;
    double _measurePerformExplitEulerTimeStepCPUTime;
    double _measurePerformImplicitTimeStepCPUTime;
    double _measurePerformImplicitTimeStepAndPlotCPUTime;
    double _measureComputeImplicitSolutionWithJacobiCPUTime;
    double _measurePerformExplitEulerTimeStepAndPlotCPUTime;
    double _measurePlotSolutionCPUTime;
    double _measurePlotGridCPUTime;
    double _measureSmoothCPUTime;
    double _measureCoarseCPUTime;
    double _measureProlongCPUTime;
    double _measureApplyRefineDeleteCriterionCPUTime;
    double _measureSetupOneLevelOfExperimentCPUTime;
    double _measureProbeSolutionCPUTime;

    double _measureSetupExperimentCalendarTime;
    double _measureSetupExperimentAndPlotCalendarTime;
    double _measurePerformExplitEulerTimeStepCalendarTime;
    double _measurePerformImplicitTimeStepCalendarTime;
    double _measurePerformImplicitTimeStepAndPlotCalendarTime;
    double _measureComputeImplicitSolutionWithJacobiCalendarTime;
    double _measurePerformExplitEulerTimeStepAndPlotCalendarTime;
    double _measurePlotSolutionCalendarTime;
    double _measurePlotGridCalendarTime;
    double _measureSmoothCalendarTime;
    double _measureCoarseCalendarTime;
    double _measureProlongCalendarTime;
    double _measureApplyRefineDeleteCriterionCalendarTime;
    double _measureSetupOneLevelOfExperimentCalendarTime;
    double _measureProbeSolutionCalendarTime;

  
   peano::applications::heatequation::timestepping::RegularGridState            _solverState;
   peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState               _repositoryState;
   
  public:
    #ifdef Parallel
    TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );
    #else
    TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation(
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
    TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );     
    virtual void terminate();
    
    
    virtual ~TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation();
    
    virtual peano::applications::heatequation::timestepping::State& getState();
    
    virtual void iterate();
	
	virtual void iterate( bool reduceState );
    
	#ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual peano::applications::heatequation::timestepping::RegularGridState& getRegularGridState();
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex, peano::applications::heatequation::timestepping::RegularGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex, peano::applications::heatequation::timestepping::RegularGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex, peano::applications::heatequation::timestepping::RegularGridCell>* createEmptyCheckpoint(); 

    virtual void switchToSetupExperiment();    
    virtual void switchToSetupExperimentAndPlot();    
    virtual void switchToPerformExplitEulerTimeStep();    
    virtual void switchToPerformImplicitTimeStep();    
    virtual void switchToPerformImplicitTimeStepAndPlot();    
    virtual void switchToComputeImplicitSolutionWithJacobi();    
    virtual void switchToPerformExplitEulerTimeStepAndPlot();    
    virtual void switchToPlotSolution();    
    virtual void switchToPlotGrid();    
    virtual void switchToSmooth();    
    virtual void switchToCoarse();    
    virtual void switchToProlong();    
    virtual void switchToApplyRefineDeleteCriterion();    
    virtual void switchToSetupOneLevelOfExperiment();    
    virtual void switchToProbeSolution();    

    virtual bool isActiveAdapterSetupExperiment() const;
    virtual bool isActiveAdapterSetupExperimentAndPlot() const;
    virtual bool isActiveAdapterPerformExplitEulerTimeStep() const;
    virtual bool isActiveAdapterPerformImplicitTimeStep() const;
    virtual bool isActiveAdapterPerformImplicitTimeStepAndPlot() const;
    virtual bool isActiveAdapterComputeImplicitSolutionWithJacobi() const;
    virtual bool isActiveAdapterPerformExplitEulerTimeStepAndPlot() const;
    virtual bool isActiveAdapterPlotSolution() const;
    virtual bool isActiveAdapterPlotGrid() const;
    virtual bool isActiveAdapterSmooth() const;
    virtual bool isActiveAdapterCoarse() const;
    virtual bool isActiveAdapterProlong() const;
    virtual bool isActiveAdapterApplyRefineDeleteCriterion() const;
    virtual bool isActiveAdapterSetupOneLevelOfExperiment() const;
    virtual bool isActiveAdapterProbeSolution() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
