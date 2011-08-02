// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_FAXEN_LBF_REPOSITORIES_LBFBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_FAXEN_LBF_REPOSITORIES_LBFBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_


#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryForRegularGrid.h"

#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryState.h"
#include "peano/applications/faxen/lbf/RegularGridBlockVertex.h"
#include "peano/applications/faxen/lbf/RegularGridBlockCell.h"
#include "peano/applications/faxen/lbf/RegularGridBlockState.h"

#include "peano/kernel/regulargrid/Grid.h"
#include "peano/kernel/regulargrid/GridContainer.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/faxen/lbf/adapters/RegularGrid2Initialize.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2InitializeAndSetBoundary.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2PlotGrid.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2ControlTimeStep.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2SetVelocitiesBoundary.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2SetScenarioBoundary.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2ComputeVelocitiesDerivatives.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2ComputeRightHandSide.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2SetZeroPressureBoundary.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2SetPressureBoundary.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2SORStep.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2ComputeResidualNorm.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2ComputeVelocities.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2PlotSolution.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2MoveParticles.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2SwitchFromLB2NSE.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2ExtractDataNSE2LB.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2CorrectDensityAndComputeEqPDF4LB.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2RegularBlockSolverAdapter.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2InitialiseSpacetreeGridAdapter.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2BlockCCAOutputAdapter.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2DynamicRefinementForSpacetreeGridAdapter.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2BlockVTKOutputAdapter.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2RegularBlockSolverAndVTKOutputAdapter.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2TraceNSEData.h" 
 #include "peano/applications/faxen/lbf/adapters/RegularGrid2TraceLBData.h" 



namespace peano { 
  namespace applications { 
    namespace faxen { 
      namespace lbf {
      namespace repositories {
        class LBFBatchJobRepositoryForRegularGridStandardImplementation;  
      }
}
}
}
}


class peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation: public peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;

    peano::kernel::regulargrid::GridContainer<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell>  _gridContainer;

    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2Initialize> _gridWithInitialize;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2InitializeAndSetBoundary> _gridWithInitializeAndSetBoundary;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2PlotGrid> _gridWithPlotGrid;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2ControlTimeStep> _gridWithControlTimeStep;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2SetVelocitiesBoundary> _gridWithSetVelocitiesBoundary;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2SetScenarioBoundary> _gridWithSetScenarioBoundary;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2ComputeVelocitiesDerivatives> _gridWithComputeVelocitiesDerivatives;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2ComputeRightHandSide> _gridWithComputeRightHandSide;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2SetZeroPressureBoundary> _gridWithSetZeroPressureBoundary;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2SetPressureBoundary> _gridWithSetPressureBoundary;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2SORStep> _gridWithSORStep;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2ComputeResidualNorm> _gridWithComputeResidualNorm;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2ComputeVelocities> _gridWithComputeVelocities;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2PlotSolution> _gridWithPlotSolution;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2MoveParticles> _gridWithMoveParticles;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2SwitchFromLB2NSE> _gridWithSwitchFromLB2NSE;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2ExtractDataNSE2LB> _gridWithExtractDataNSE2LB;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB> _gridWithCorrectDensityAndComputeEqPDF4LB;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2RegularBlockSolverAdapter> _gridWithRegularBlockSolverAdapter;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2InitialiseSpacetreeGridAdapter> _gridWithInitialiseSpacetreeGridAdapter;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2BlockCCAOutputAdapter> _gridWithBlockCCAOutputAdapter;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter> _gridWithDynamicRefinementForSpacetreeGridAdapter;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2BlockVTKOutputAdapter> _gridWithBlockVTKOutputAdapter;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter> _gridWithRegularBlockSolverAndVTKOutputAdapter;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2TraceNSEData> _gridWithTraceNSEData;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::lbf::RegularGridBlockVertex,peano::applications::faxen::lbf::RegularGridBlockCell,peano::applications::faxen::lbf::RegularGridBlockState,adapters::RegularGrid2TraceLBData> _gridWithTraceLBData;

   
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

  
   peano::applications::faxen::lbf::RegularGridBlockState            _solverState;
   peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState               _repositoryState;
   
  public:
    #ifdef Parallel
    LBFBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );
    #else
    LBFBatchJobRepositoryForRegularGridStandardImplementation(
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
    LBFBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );     
    virtual void terminate();
    
    
    virtual ~LBFBatchJobRepositoryForRegularGridStandardImplementation();
    
    virtual peano::applications::faxen::lbf::BlockState& getState();
	
    virtual void iterate( bool reduceState = true );
    
    #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual peano::applications::faxen::lbf::RegularGridBlockState& getRegularGridState();
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::RegularGridBlockVertex, peano::applications::faxen::lbf::RegularGridBlockCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::RegularGridBlockVertex, peano::applications::faxen::lbf::RegularGridBlockCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::RegularGridBlockVertex, peano::applications::faxen::lbf::RegularGridBlockCell>* createEmptyCheckpoint(); 

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