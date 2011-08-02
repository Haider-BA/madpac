// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_FAXEN_REPOSITORIES_FaxenBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_FAXEN_REPOSITORIES_FaxenBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_


#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryForRegularGrid.h"

#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryState.h"
#include "peano/applications/faxen/RegularGridVertex.h"
#include "peano/applications/faxen/RegularGridCell.h"
#include "peano/applications/faxen/RegularGridState.h"

#include "peano/kernel/regulargrid/Grid.h"
#include "peano/kernel/regulargrid/GridContainer.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/faxen/adapters/RegularGrid2Initialize.h" 
 #include "peano/applications/faxen/adapters/RegularGrid2InitializeAndSetBoundary.h" 
 #include "peano/applications/faxen/adapters/RegularGrid2PlotGrid.h" 
 #include "peano/applications/faxen/adapters/RegularGrid2ControlTimeStep.h" 
 #include "peano/applications/faxen/adapters/RegularGrid2SetVelocitiesBoundary.h" 
 #include "peano/applications/faxen/adapters/RegularGrid2SetScenarioBoundary.h" 
 #include "peano/applications/faxen/adapters/RegularGrid2ComputeVelocitiesDerivatives.h" 
 #include "peano/applications/faxen/adapters/RegularGrid2ComputeRightHandSide.h" 
 #include "peano/applications/faxen/adapters/RegularGrid2SetZeroPressureBoundary.h" 
 #include "peano/applications/faxen/adapters/RegularGrid2SetPressureBoundary.h" 
 #include "peano/applications/faxen/adapters/RegularGrid2SORStep.h" 
 #include "peano/applications/faxen/adapters/RegularGrid2ComputeResidualNorm.h" 
 #include "peano/applications/faxen/adapters/RegularGrid2ComputeVelocities.h" 
 #include "peano/applications/faxen/adapters/RegularGrid2PlotSolution.h" 



namespace peano { 
  namespace applications { 
    namespace faxen {
      namespace repositories {
        class FaxenBatchJobRepositoryForRegularGridStandardImplementation;  
      }
}
}
}


class peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation: public peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;

    peano::kernel::regulargrid::GridContainer<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell>  _gridContainer;

    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2Initialize> _gridWithInitialize;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2InitializeAndSetBoundary> _gridWithInitializeAndSetBoundary;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2PlotGrid> _gridWithPlotGrid;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2ControlTimeStep> _gridWithControlTimeStep;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2SetVelocitiesBoundary> _gridWithSetVelocitiesBoundary;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2SetScenarioBoundary> _gridWithSetScenarioBoundary;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2ComputeVelocitiesDerivatives> _gridWithComputeVelocitiesDerivatives;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2ComputeRightHandSide> _gridWithComputeRightHandSide;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2SetZeroPressureBoundary> _gridWithSetZeroPressureBoundary;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2SetPressureBoundary> _gridWithSetPressureBoundary;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2SORStep> _gridWithSORStep;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2ComputeResidualNorm> _gridWithComputeResidualNorm;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2ComputeVelocities> _gridWithComputeVelocities;
    peano::kernel::regulargrid::Grid<peano::applications::faxen::RegularGridVertex,peano::applications::faxen::RegularGridCell,peano::applications::faxen::RegularGridState,adapters::RegularGrid2PlotSolution> _gridWithPlotSolution;

   
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

  
   peano::applications::faxen::RegularGridState            _solverState;
   peano::applications::faxen::repositories::FaxenBatchJobRepositoryState               _repositoryState;
   
  public:
    #ifdef Parallel
    FaxenBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );
    #else
    FaxenBatchJobRepositoryForRegularGridStandardImplementation(
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
    FaxenBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );     
    virtual void terminate();
    
    
    virtual ~FaxenBatchJobRepositoryForRegularGridStandardImplementation();
    
    virtual peano::applications::faxen::RegularGridState& getState();
    
    virtual void iterate();
    #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::RegularGridVertex, peano::applications::faxen::RegularGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::RegularGridVertex, peano::applications::faxen::RegularGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::RegularGridVertex, peano::applications::faxen::RegularGridCell>* createEmptyCheckpoint(); 

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
