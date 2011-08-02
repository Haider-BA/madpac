// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_FAXEN_LBF_REPOSITORIES_LBFBatchJobRepository_FOR_SPACETREE_GRID_FILE_STACK_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_FAXEN_LBF_REPOSITORIES_LBFBatchJobRepository_FOR_SPACETREE_GRID_FILE_STACK_IMPLEMENTATION_H_


#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryState.h"
#include "peano/applications/faxen/lbf/SpacetreeGridBlockVertex.h"
#include "peano/applications/faxen/lbf/SpacetreeGridBlockCell.h"
#include "peano/applications/faxen/lbf/SpacetreeGridBlockState.h"

#include "peano/kernel/spacetreegrid/Grid.h"
#include "peano/kernel/stacks/CellFileStack.h"
#include "peano/kernel/stacks/VertexFileStack.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2Initialize.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2InitializeAndSetBoundary.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2PlotGrid.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2ControlTimeStep.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2SetVelocitiesBoundary.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2SetScenarioBoundary.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2ComputeVelocitiesDerivatives.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2ComputeRightHandSide.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2SetZeroPressureBoundary.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2SetPressureBoundary.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2SORStep.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2ComputeResidualNorm.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2ComputeVelocities.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2PlotSolution.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2MoveParticles.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2SwitchFromLB2NSE.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2ExtractDataNSE2LB.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2CorrectDensityAndComputeEqPDF4LB.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2RegularBlockSolverAdapter.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2InitialiseSpacetreeGridAdapter.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2BlockCCAOutputAdapter.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2DynamicRefinementForSpacetreeGridAdapter.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2BlockVTKOutputAdapter.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2RegularBlockSolverAndVTKOutputAdapter.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2TraceNSEData.h" 
 #include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2TraceLBData.h" 



namespace peano { 
  namespace applications { 
    namespace faxen { 
      namespace lbf {
      namespace repositories {
        class LBFBatchJobRepositoryForSpacetreeGridFileStackImplementation;  
      }
}
}
}
}


class peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGridFileStackImplementation: public peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;
    
    typedef peano::kernel::stacks::CellFileStack<peano::applications::faxen::lbf::SpacetreeGridBlockCell>       CellStack;
    typedef peano::kernel::stacks::VertexFileStack<peano::applications::faxen::lbf::SpacetreeGridBlockVertex>   VertexStack;

    CellStack    _cellStack;
    VertexStack  _vertexStack;
   peano::applications::faxen::lbf::SpacetreeGridBlockState          _solverState;

    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2Initialize> _gridWithInitialize;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2InitializeAndSetBoundary> _gridWithInitializeAndSetBoundary;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2PlotGrid> _gridWithPlotGrid;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2ControlTimeStep> _gridWithControlTimeStep;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2SetVelocitiesBoundary> _gridWithSetVelocitiesBoundary;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2SetScenarioBoundary> _gridWithSetScenarioBoundary;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2ComputeVelocitiesDerivatives> _gridWithComputeVelocitiesDerivatives;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2ComputeRightHandSide> _gridWithComputeRightHandSide;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2SetZeroPressureBoundary> _gridWithSetZeroPressureBoundary;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2SetPressureBoundary> _gridWithSetPressureBoundary;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2SORStep> _gridWithSORStep;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2ComputeResidualNorm> _gridWithComputeResidualNorm;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2ComputeVelocities> _gridWithComputeVelocities;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2PlotSolution> _gridWithPlotSolution;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2MoveParticles> _gridWithMoveParticles;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2SwitchFromLB2NSE> _gridWithSwitchFromLB2NSE;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2ExtractDataNSE2LB> _gridWithExtractDataNSE2LB;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2CorrectDensityAndComputeEqPDF4LB> _gridWithCorrectDensityAndComputeEqPDF4LB;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2RegularBlockSolverAdapter> _gridWithRegularBlockSolverAdapter;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2InitialiseSpacetreeGridAdapter> _gridWithInitialiseSpacetreeGridAdapter;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2BlockCCAOutputAdapter> _gridWithBlockCCAOutputAdapter;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2DynamicRefinementForSpacetreeGridAdapter> _gridWithDynamicRefinementForSpacetreeGridAdapter;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2BlockVTKOutputAdapter> _gridWithBlockVTKOutputAdapter;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2RegularBlockSolverAndVTKOutputAdapter> _gridWithRegularBlockSolverAndVTKOutputAdapter;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2TraceNSEData> _gridWithTraceNSEData;
    peano::kernel::spacetreegrid::Grid<peano::applications::faxen::lbf::SpacetreeGridBlockVertex,peano::applications::faxen::lbf::SpacetreeGridBlockCell,peano::applications::faxen::lbf::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2TraceLBData> _gridWithTraceLBData;

   
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
    int _countMoveParticlesRuns;
    int _countSwitchFromLB2NSERuns;
    int _countExtractDataNSE2LBRuns;
    int _countCorrectDensityAndComputeEqPDF4LBRuns;
    int _countRegularBlockSolverAdapterRuns;
    int _countInitialiseSpacetreeGridAdapterRuns;
    int _countBlockCCAOutputAdapterRuns;
    int _countDynamicRefinementForSpacetreeGridAdapterRuns;
    int _countBlockVTKOutputAdapterRuns;
    int _countRegularBlockSolverAndVTKOutputAdapterRuns;
    int _countTraceNSEDataRuns;
    int _countTraceLBDataRuns;

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
    double _measureMoveParticlesCPUTime;
    double _measureSwitchFromLB2NSECPUTime;
    double _measureExtractDataNSE2LBCPUTime;
    double _measureCorrectDensityAndComputeEqPDF4LBCPUTime;
    double _measureRegularBlockSolverAdapterCPUTime;
    double _measureInitialiseSpacetreeGridAdapterCPUTime;
    double _measureBlockCCAOutputAdapterCPUTime;
    double _measureDynamicRefinementForSpacetreeGridAdapterCPUTime;
    double _measureBlockVTKOutputAdapterCPUTime;
    double _measureRegularBlockSolverAndVTKOutputAdapterCPUTime;
    double _measureTraceNSEDataCPUTime;
    double _measureTraceLBDataCPUTime;

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
    double _measureMoveParticlesCalendarTime;
    double _measureSwitchFromLB2NSECalendarTime;
    double _measureExtractDataNSE2LBCalendarTime;
    double _measureCorrectDensityAndComputeEqPDF4LBCalendarTime;
    double _measureRegularBlockSolverAdapterCalendarTime;
    double _measureInitialiseSpacetreeGridAdapterCalendarTime;
    double _measureBlockCCAOutputAdapterCalendarTime;
    double _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime;
    double _measureBlockVTKOutputAdapterCalendarTime;
    double _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime;
    double _measureTraceNSEDataCalendarTime;
    double _measureTraceLBDataCalendarTime;

  
   peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState               _repositoryState;
   
  public:
    LBFBatchJobRepositoryForSpacetreeGridFileStackImplementation(
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
    LBFBatchJobRepositoryForSpacetreeGridFileStackImplementation(
      peano::geometry::Geometry&                   geometry,
      int                                          blockSize,
      int                                          numberOfBlocks,
      int                                          minFillThreshold,
      int                                          maxFillThreshold,
      const std::string&                           tempFilePrefix    
    );
    
    virtual ~LBFBatchJobRepositoryForSpacetreeGridFileStackImplementation();

    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
      const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      int                                          domainLevel
    );
         
    virtual void terminate();
        
    virtual peano::applications::faxen::lbf::BlockState& getState();
    virtual peano::applications::faxen::lbf::SpacetreeGridBlockState& getSpacetreeGridState();
    
    virtual void iterate( bool reduceState = true );
    
	  #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::SpacetreeGridBlockVertex, peano::applications::faxen::lbf::SpacetreeGridBlockCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::SpacetreeGridBlockVertex, peano::applications::faxen::lbf::SpacetreeGridBlockCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::SpacetreeGridBlockVertex, peano::applications::faxen::lbf::SpacetreeGridBlockCell>* createEmptyCheckpoint(); 

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
    virtual void switchToMoveParticles();    
    virtual void switchToSwitchFromLB2NSE();    
    virtual void switchToExtractDataNSE2LB();    
    virtual void switchToCorrectDensityAndComputeEqPDF4LB();    
    virtual void switchToRegularBlockSolverAdapter();    
    virtual void switchToInitialiseSpacetreeGridAdapter();    
    virtual void switchToBlockCCAOutputAdapter();    
    virtual void switchToDynamicRefinementForSpacetreeGridAdapter();    
    virtual void switchToBlockVTKOutputAdapter();    
    virtual void switchToRegularBlockSolverAndVTKOutputAdapter();    
    virtual void switchToTraceNSEData();    
    virtual void switchToTraceLBData();    

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
    virtual bool isActiveAdapterMoveParticles() const;
    virtual bool isActiveAdapterSwitchFromLB2NSE() const;
    virtual bool isActiveAdapterExtractDataNSE2LB() const;
    virtual bool isActiveAdapterCorrectDensityAndComputeEqPDF4LB() const;
    virtual bool isActiveAdapterRegularBlockSolverAdapter() const;
    virtual bool isActiveAdapterInitialiseSpacetreeGridAdapter() const;
    virtual bool isActiveAdapterBlockCCAOutputAdapter() const;
    virtual bool isActiveAdapterDynamicRefinementForSpacetreeGridAdapter() const;
    virtual bool isActiveAdapterBlockVTKOutputAdapter() const;
    virtual bool isActiveAdapterRegularBlockSolverAndVTKOutputAdapter() const;
    virtual bool isActiveAdapterTraceNSEData() const;
    virtual bool isActiveAdapterTraceLBData() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
