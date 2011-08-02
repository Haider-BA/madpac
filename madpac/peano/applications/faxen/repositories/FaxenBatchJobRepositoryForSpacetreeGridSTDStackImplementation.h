// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_FAXEN_REPOSITORIES_FaxenBatchJobRepository_FOR_SPACETREE_GRID_STD_STACK_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_FAXEN_REPOSITORIES_FaxenBatchJobRepository_FOR_SPACETREE_GRID_STD_STACK_IMPLEMENTATION_H_


#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryState.h"
#include "peano/applications/faxen/SpacetreeGridVertex.h"
#include "peano/applications/faxen/SpacetreeGridCell.h"
#include "peano/applications/faxen/SpacetreeGridState.h"

#include "peano/kernel/spacetreegrid/Grid.h"
#include "peano/kernel/stacks/CellSTDStack.h"
#include "peano/kernel/stacks/VertexSTDStack.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/faxen/adapters/SpacetreeGrid2Initialize.h" 
 #include "peano/applications/faxen/adapters/SpacetreeGrid2InitializeAndSetBoundary.h" 
 #include "peano/applications/faxen/adapters/SpacetreeGrid2PlotGrid.h" 
 #include "peano/applications/faxen/adapters/SpacetreeGrid2ControlTimeStep.h" 
 #include "peano/applications/faxen/adapters/SpacetreeGrid2SetVelocitiesBoundary.h" 
 #include "peano/applications/faxen/adapters/SpacetreeGrid2SetScenarioBoundary.h" 
 #include "peano/applications/faxen/adapters/SpacetreeGrid2ComputeVelocitiesDerivatives.h" 
 #include "peano/applications/faxen/adapters/SpacetreeGrid2ComputeRightHandSide.h" 
 #include "peano/applications/faxen/adapters/SpacetreeGrid2SetZeroPressureBoundary.h" 
 #include "peano/applications/faxen/adapters/SpacetreeGrid2SetPressureBoundary.h" 
 #include "peano/applications/faxen/adapters/SpacetreeGrid2SORStep.h" 
 #include "peano/applications/faxen/adapters/SpacetreeGrid2ComputeResidualNorm.h" 
 #include "peano/applications/faxen/adapters/SpacetreeGrid2ComputeVelocities.h" 
 #include "peano/applications/faxen/adapters/SpacetreeGrid2PlotSolution.h" 



namespace peano { 
  namespace applications { 
    namespace faxen {
      namespace repositories {
        class FaxenBatchJobRepositoryForSpacetreeGridSTDStackImplementation;  
      }
}
}
}


class peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridSTDStackImplementation: public peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;
    
    typedef peano::kernel::stacks::CellSTDStack<peano::applications::faxen::SpacetreeGridCell>       CellStack;
    typedef peano::kernel::stacks::VertexSTDStack<peano::applications::faxen::SpacetreeGridVertex>   VertexStack;

    CellStack    _cellStack;
    VertexStack  _vertexStack;
   peano::applications::faxen::SpacetreeGridState          _solverState;

    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2Initialize> _gridWithInitialize;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2InitializeAndSetBoundary> _gridWithInitializeAndSetBoundary;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2PlotGrid> _gridWithPlotGrid;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2ControlTimeStep> _gridWithControlTimeStep;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetVelocitiesBoundary> _gridWithSetVelocitiesBoundary;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetScenarioBoundary> _gridWithSetScenarioBoundary;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2ComputeVelocitiesDerivatives> _gridWithComputeVelocitiesDerivatives;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2ComputeRightHandSide> _gridWithComputeRightHandSide;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetZeroPressureBoundary> _gridWithSetZeroPressureBoundary;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetPressureBoundary> _gridWithSetPressureBoundary;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SORStep> _gridWithSORStep;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2ComputeResidualNorm> _gridWithComputeResidualNorm;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2ComputeVelocities> _gridWithComputeVelocities;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::SpacetreeGridVertex,peano::applications::faxen::SpacetreeGridCell,peano::applications::faxen::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2PlotSolution> _gridWithPlotSolution;

   
    int _countInitializeRuns;
    int _countInitializeAndSetBoundaryRuns;
    int _countPlotGridRuns;
    int _countControlTimeStepRuns;
    int _countSetVelocitiesBoundaryRuns;
    int _countSetScenarioBoundaryRuns;
    int _countComputeVelocitiesDerivativesRuns;
    int _countComputeRightHandSideRuns;
    int _countSetZeroPressureBoundaryRuns;
    int _countSetPressureBoundaryRuns;
    int _countSORStepRuns;
    int _countComputeResidualNormRuns;
    int _countComputeVelocitiesRuns;
    int _countPlotSolutionRuns;

    double _measureInitializeCPUTime;
    double _measureInitializeAndSetBoundaryCPUTime;
    double _measurePlotGridCPUTime;
    double _measureControlTimeStepCPUTime;
    double _measureSetVelocitiesBoundaryCPUTime;
    double _measureSetScenarioBoundaryCPUTime;
    double _measureComputeVelocitiesDerivativesCPUTime;
    double _measureComputeRightHandSideCPUTime;
    double _measureSetZeroPressureBoundaryCPUTime;
    double _measureSetPressureBoundaryCPUTime;
    double _measureSORStepCPUTime;
    double _measureComputeResidualNormCPUTime;
    double _measureComputeVelocitiesCPUTime;
    double _measurePlotSolutionCPUTime;

    double _measureInitializeCalendarTime;
    double _measureInitializeAndSetBoundaryCalendarTime;
    double _measurePlotGridCalendarTime;
    double _measureControlTimeStepCalendarTime;
    double _measureSetVelocitiesBoundaryCalendarTime;
    double _measureSetScenarioBoundaryCalendarTime;
    double _measureComputeVelocitiesDerivativesCalendarTime;
    double _measureComputeRightHandSideCalendarTime;
    double _measureSetZeroPressureBoundaryCalendarTime;
    double _measureSetPressureBoundaryCalendarTime;
    double _measureSORStepCalendarTime;
    double _measureComputeResidualNormCalendarTime;
    double _measureComputeVelocitiesCalendarTime;
    double _measurePlotSolutionCalendarTime;

  
   peano::applications::faxen::repositories::FaxenBatchJobRepositoryState               _repositoryState;
   
  public:
    FaxenBatchJobRepositoryForSpacetreeGridSTDStackImplementation(
      peano::geometry::Geometry&                   geometry,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
    );
    
    /**
     * Parallel Constructor
     *
     * Used in parallel mode only where the size of the domain is not known 
     * when the type of repository is determined.  
     */
    FaxenBatchJobRepositoryForSpacetreeGridSTDStackImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual ~FaxenBatchJobRepositoryForSpacetreeGridSTDStackImplementation();

    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
      const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      int                                          domainLevel
    );
         
    virtual void terminate();
        
    virtual peano::applications::faxen::SpacetreeGridState& getState();
    
    virtual void iterate();

    #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::SpacetreeGridVertex, peano::applications::faxen::SpacetreeGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::SpacetreeGridVertex, peano::applications::faxen::SpacetreeGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::SpacetreeGridVertex, peano::applications::faxen::SpacetreeGridCell>* createEmptyCheckpoint(); 

    virtual void switchToInitialize();    
    virtual void switchToInitializeAndSetBoundary();    
    virtual void switchToPlotGrid();    
    virtual void switchToControlTimeStep();    
    virtual void switchToSetVelocitiesBoundary();    
    virtual void switchToSetScenarioBoundary();    
    virtual void switchToComputeVelocitiesDerivatives();    
    virtual void switchToComputeRightHandSide();    
    virtual void switchToSetZeroPressureBoundary();    
    virtual void switchToSetPressureBoundary();    
    virtual void switchToSORStep();    
    virtual void switchToComputeResidualNorm();    
    virtual void switchToComputeVelocities();    
    virtual void switchToPlotSolution();    

    virtual bool isActiveAdapterInitialize() const;
    virtual bool isActiveAdapterInitializeAndSetBoundary() const;
    virtual bool isActiveAdapterPlotGrid() const;
    virtual bool isActiveAdapterControlTimeStep() const;
    virtual bool isActiveAdapterSetVelocitiesBoundary() const;
    virtual bool isActiveAdapterSetScenarioBoundary() const;
    virtual bool isActiveAdapterComputeVelocitiesDerivatives() const;
    virtual bool isActiveAdapterComputeRightHandSide() const;
    virtual bool isActiveAdapterSetZeroPressureBoundary() const;
    virtual bool isActiveAdapterSetPressureBoundary() const;
    virtual bool isActiveAdapterSORStep() const;
    virtual bool isActiveAdapterComputeResidualNorm() const;
    virtual bool isActiveAdapterComputeVelocities() const;
    virtual bool isActiveAdapterPlotSolution() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
