// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_POISSON_MULTIGRID_REPOSITORIES_MultigridBatchJobRepository_FOR_SPACETREE_GRID_FILE_STACK_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_POISSON_MULTIGRID_REPOSITORIES_MultigridBatchJobRepository_FOR_SPACETREE_GRID_FILE_STACK_IMPLEMENTATION_H_


#include "peano/applications/poisson/multigrid/repositories/MultigridBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/applications/poisson/multigrid/repositories/MultigridBatchJobRepositoryState.h"
#include "peano/applications/poisson/multigrid/SpacetreeGridVertex.h"
#include "peano/applications/poisson/multigrid/SpacetreeGridCell.h"
#include "peano/applications/poisson/multigrid/SpacetreeGridState.h"

#include "peano/kernel/spacetreegrid/Grid.h"
#include "peano/kernel/stacks/CellFileStack.h"
#include "peano/kernel/stacks/VertexFileStack.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/poisson/multigrid/adapters/SpacetreeGrid2SetupExperiment.h" 
 #include "peano/applications/poisson/multigrid/adapters/SpacetreeGrid2SetupExperimentAndPlotGrid.h" 
 #include "peano/applications/poisson/multigrid/adapters/SpacetreeGrid2SetupExperimentAndPlotStartSolution.h" 
 #include "peano/applications/poisson/multigrid/adapters/SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator.h" 
 #include "peano/applications/poisson/multigrid/adapters/SpacetreeGrid2PlotSolution.h" 



namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace multigrid {
      namespace repositories {
        class MultigridBatchJobRepositoryForSpacetreeGridFileStackImplementation;  
      }
}
}
}
}


class peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridFileStackImplementation: public peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;
    
    typedef peano::kernel::stacks::CellFileStack<peano::applications::poisson::multigrid::SpacetreeGridCell>       CellStack;
    typedef peano::kernel::stacks::VertexFileStack<peano::applications::poisson::multigrid::SpacetreeGridVertex>   VertexStack;

    CellStack    _cellStack;
    VertexStack  _vertexStack;
   peano::applications::poisson::multigrid::SpacetreeGridState          _solverState;

    peano::kernel::spacetreegrid::Grid<peano::applications::poisson::multigrid::SpacetreeGridVertex,peano::applications::poisson::multigrid::SpacetreeGridCell,peano::applications::poisson::multigrid::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetupExperiment> _gridWithSetupExperiment;
    peano::kernel::spacetreegrid::Grid<peano::applications::poisson::multigrid::SpacetreeGridVertex,peano::applications::poisson::multigrid::SpacetreeGridCell,peano::applications::poisson::multigrid::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetupExperimentAndPlotGrid> _gridWithSetupExperimentAndPlotGrid;
    peano::kernel::spacetreegrid::Grid<peano::applications::poisson::multigrid::SpacetreeGridVertex,peano::applications::poisson::multigrid::SpacetreeGridCell,peano::applications::poisson::multigrid::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetupExperimentAndPlotStartSolution> _gridWithSetupExperimentAndPlotStartSolution;
    peano::kernel::spacetreegrid::Grid<peano::applications::poisson::multigrid::SpacetreeGridVertex,peano::applications::poisson::multigrid::SpacetreeGridCell,peano::applications::poisson::multigrid::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator> _gridWithSmoothAndComputeGalerkinCoarseGridOperator;
    peano::kernel::spacetreegrid::Grid<peano::applications::poisson::multigrid::SpacetreeGridVertex,peano::applications::poisson::multigrid::SpacetreeGridCell,peano::applications::poisson::multigrid::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2PlotSolution> _gridWithPlotSolution;

   
    int _countSetupExperimentRuns;
    int _countSetupExperimentAndPlotGridRuns;
    int _countSetupExperimentAndPlotStartSolutionRuns;
    int _countSmoothAndComputeGalerkinCoarseGridOperatorRuns;
    int _countPlotSolutionRuns;

    double _measureSetupExperimentCPUTime;
    double _measureSetupExperimentAndPlotGridCPUTime;
    double _measureSetupExperimentAndPlotStartSolutionCPUTime;
    double _measureSmoothAndComputeGalerkinCoarseGridOperatorCPUTime;
    double _measurePlotSolutionCPUTime;

    double _measureSetupExperimentCalendarTime;
    double _measureSetupExperimentAndPlotGridCalendarTime;
    double _measureSetupExperimentAndPlotStartSolutionCalendarTime;
    double _measureSmoothAndComputeGalerkinCoarseGridOperatorCalendarTime;
    double _measurePlotSolutionCalendarTime;

  
   peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState               _repositoryState;
   
  public:
    MultigridBatchJobRepositoryForSpacetreeGridFileStackImplementation(
      peano::geometry::Geometry&                   geometry,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
      int                                          blockSize,
      int                                          numberOfBlocks,
      int                                          minFillThreshold,
      int                                          maxFillThreshold,
      const std::string&                           tempFilePrefix    
    );
    
    /**
     * Parallel Constructor
     *
     * Used in parallel mode only where the size of the domain is not known 
     * when the type of repository is determined.  
     */
    MultigridBatchJobRepositoryForSpacetreeGridFileStackImplementation(
      peano::geometry::Geometry&                   geometry,
      int                                          blockSize,
      int                                          numberOfBlocks,
      int                                          minFillThreshold,
      int                                          maxFillThreshold,
      const std::string&                           tempFilePrefix    
    );
    
    virtual ~MultigridBatchJobRepositoryForSpacetreeGridFileStackImplementation();

    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
      const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      int                                          domainLevel
    );
         
    virtual void terminate();
        
    virtual peano::applications::poisson::multigrid::State& getState();
    virtual peano::applications::poisson::multigrid::SpacetreeGridState& getSpacetreeGridState();
    
    virtual void iterate();
	
	virtual void iterate( bool reduceState );
    
	#ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::multigrid::SpacetreeGridVertex, peano::applications::poisson::multigrid::SpacetreeGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::multigrid::SpacetreeGridVertex, peano::applications::poisson::multigrid::SpacetreeGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::multigrid::SpacetreeGridVertex, peano::applications::poisson::multigrid::SpacetreeGridCell>* createEmptyCheckpoint(); 

    virtual void switchToSetupExperiment();    
    virtual void switchToSetupExperimentAndPlotGrid();    
    virtual void switchToSetupExperimentAndPlotStartSolution();    
    virtual void switchToSmoothAndComputeGalerkinCoarseGridOperator();    
    virtual void switchToPlotSolution();    

    virtual bool isActiveAdapterSetupExperiment() const;
    virtual bool isActiveAdapterSetupExperimentAndPlotGrid() const;
    virtual bool isActiveAdapterSetupExperimentAndPlotStartSolution() const;
    virtual bool isActiveAdapterSmoothAndComputeGalerkinCoarseGridOperator() const;
    virtual bool isActiveAdapterPlotSolution() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
