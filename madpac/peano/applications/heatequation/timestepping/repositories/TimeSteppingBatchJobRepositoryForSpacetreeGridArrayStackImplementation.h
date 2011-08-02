// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_REPOSITORIES_TimeSteppingBatchJobRepository_FOR_SPACETREE_GRID_ARRAY_STACK_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_REPOSITORIES_TimeSteppingBatchJobRepository_FOR_SPACETREE_GRID_ARRAY_STACK_IMPLEMENTATION_H_


#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryState.h"
#include "peano/applications/heatequation/timestepping/SpacetreeGridSingleStepVertex.h"
#include "peano/applications/heatequation/timestepping/SpacetreeGridCell.h"
#include "peano/applications/heatequation/timestepping/SpacetreeGridState.h"

#include "peano/kernel/spacetreegrid/Grid.h"
#include "peano/kernel/stacks/CellArrayStack.h"
#include "peano/kernel/stacks/VertexArrayStack.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2SetupExperiment.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2SetupExperimentAndPlot.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2PerformExplitEulerTimeStep.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2PerformImplicitTimeStep.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2PerformImplicitTimeStepAndPlot.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2ComputeImplicitSolutionWithJacobi.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2PerformExplitEulerTimeStepAndPlot.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2PlotSolution.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2PlotGrid.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2Smooth.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2Coarse.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2Prolong.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2ApplyRefineDeleteCriterion.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2SetupOneLevelOfExperiment.h" 
 #include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2ProbeSolution.h" 



namespace peano { 
  namespace applications { 
    namespace heatequation { 
      namespace timestepping {
      namespace repositories {
        class TimeSteppingBatchJobRepositoryForSpacetreeGridArrayStackImplementation;  
      }
}
}
}
}


class peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridArrayStackImplementation: public peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;
    
    typedef peano::kernel::stacks::CellArrayStack<peano::applications::heatequation::timestepping::SpacetreeGridCell>       CellStack;
    typedef peano::kernel::stacks::VertexArrayStack<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex>   VertexStack;

    CellStack    _cellStack;
    VertexStack  _vertexStack;
   peano::applications::heatequation::timestepping::SpacetreeGridState          _solverState;

    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetupExperiment> _gridWithSetupExperiment;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetupExperimentAndPlot> _gridWithSetupExperimentAndPlot;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2PerformExplitEulerTimeStep> _gridWithPerformExplitEulerTimeStep;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2PerformImplicitTimeStep> _gridWithPerformImplicitTimeStep;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2PerformImplicitTimeStepAndPlot> _gridWithPerformImplicitTimeStepAndPlot;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2ComputeImplicitSolutionWithJacobi> _gridWithComputeImplicitSolutionWithJacobi;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2PerformExplitEulerTimeStepAndPlot> _gridWithPerformExplitEulerTimeStepAndPlot;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2PlotSolution> _gridWithPlotSolution;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2PlotGrid> _gridWithPlotGrid;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2Smooth> _gridWithSmooth;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2Coarse> _gridWithCoarse;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2Prolong> _gridWithProlong;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2ApplyRefineDeleteCriterion> _gridWithApplyRefineDeleteCriterion;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetupOneLevelOfExperiment> _gridWithSetupOneLevelOfExperiment;
    peano::kernel::spacetreegrid::Grid<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex,peano::applications::heatequation::timestepping::SpacetreeGridCell,peano::applications::heatequation::timestepping::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2ProbeSolution> _gridWithProbeSolution;

   
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

  
   peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState               _repositoryState;
   
  public:
    TimeSteppingBatchJobRepositoryForSpacetreeGridArrayStackImplementation(
      peano::geometry::Geometry&                   geometry,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
      int                                          maximumSizeOfCellInOutStack,
      int                                          maximumSizeOfVertexInOutStack,
      int                                          maximumSizeOfVertexTemporaryStack
    );
    
    /**
     * Parallel Constructor
     *
     * Used in parallel mode only where the size of the domain is not known 
     * when the type of repository is determined.  
     */
    TimeSteppingBatchJobRepositoryForSpacetreeGridArrayStackImplementation(
      peano::geometry::Geometry&                   geometry,
      int                                          maximumSizeOfCellInOutStack,
      int                                          maximumSizeOfVertexInOutStack,
      int                                          maximumSizeOfVertexTemporaryStack
    );
    
    virtual ~TimeSteppingBatchJobRepositoryForSpacetreeGridArrayStackImplementation();

    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
      const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      int                                          domainLevel
    );
         
    virtual void terminate();
        
    virtual peano::applications::heatequation::timestepping::State& getState();
    
    virtual void iterate();
	
	virtual void iterate( bool communicateState );
    
	#ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex, peano::applications::heatequation::timestepping::SpacetreeGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex, peano::applications::heatequation::timestepping::SpacetreeGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex, peano::applications::heatequation::timestepping::SpacetreeGridCell>* createEmptyCheckpoint(); 

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

  
    virtual peano::applications::heatequation::timestepping::SpacetreeGridState& getSpacetreeGridState();
   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
