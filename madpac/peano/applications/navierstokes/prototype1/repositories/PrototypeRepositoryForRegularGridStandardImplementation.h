// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_REPOSITORIES_PrototypeRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_REPOSITORIES_PrototypeRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_


#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForRegularGrid.h"

#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryState.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidStateEnhancedDivFreeEulerExplicit.h"

#include "peano/kernel/regulargrid/Grid.h"
#include "peano/kernel/regulargrid/GridContainer.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2InitialiseScenario.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2MergeA.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2CalculateF.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2CalculatePPERHS.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2GaussSeidelForEnhancedDivFree.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2UpdateVelocity.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2PlotSolutionVTK.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2PlotRegularSolutionVTK.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2UpdateScenario.h" 



namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype1 {
      namespace repositories {
        class PrototypeRepositoryForRegularGridStandardImplementation;  
      }
}
}
}
}


class peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForRegularGridStandardImplementation: public peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForRegularGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;

    peano::kernel::regulargrid::GridContainer<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit>  _gridContainer;

    peano::kernel::regulargrid::Grid<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit,adapters::RegularGrid2InitialiseScenario> _gridWithInitialiseScenario;
    peano::kernel::regulargrid::Grid<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit,adapters::RegularGrid2MergeA> _gridWithMergeA;
    peano::kernel::regulargrid::Grid<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit,adapters::RegularGrid2CalculateF> _gridWithCalculateF;
    peano::kernel::regulargrid::Grid<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit,adapters::RegularGrid2CalculatePPERHS> _gridWithCalculatePPERHS;
    peano::kernel::regulargrid::Grid<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit,adapters::RegularGrid2GaussSeidelForEnhancedDivFree> _gridWithGaussSeidelForEnhancedDivFree;
    peano::kernel::regulargrid::Grid<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit,adapters::RegularGrid2UpdateVelocity> _gridWithUpdateVelocity;
    peano::kernel::regulargrid::Grid<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit,adapters::RegularGrid2PlotSolutionVTK> _gridWithPlotSolutionVTK;
    peano::kernel::regulargrid::Grid<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit,adapters::RegularGrid2PlotRegularSolutionVTK> _gridWithPlotRegularSolutionVTK;
    peano::kernel::regulargrid::Grid<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit,adapters::RegularGrid2UpdateScenario> _gridWithUpdateScenario;

   
    int _countInitialiseScenarioRuns;
    int _countMergeARuns;
    int _countCalculateFRuns;
    int _countCalculatePPERHSRuns;
    int _countGaussSeidelForEnhancedDivFreeRuns;
    int _countUpdateVelocityRuns;
    int _countPlotSolutionVTKRuns;
    int _countPlotRegularSolutionVTKRuns;
    int _countUpdateScenarioRuns;

    double _measureInitialiseScenarioCPUTime;
    double _measureMergeACPUTime;
    double _measureCalculateFCPUTime;
    double _measureCalculatePPERHSCPUTime;
    double _measureGaussSeidelForEnhancedDivFreeCPUTime;
    double _measureUpdateVelocityCPUTime;
    double _measurePlotSolutionVTKCPUTime;
    double _measurePlotRegularSolutionVTKCPUTime;
    double _measureUpdateScenarioCPUTime;

    double _measureInitialiseScenarioCalendarTime;
    double _measureMergeACalendarTime;
    double _measureCalculateFCalendarTime;
    double _measureCalculatePPERHSCalendarTime;
    double _measureGaussSeidelForEnhancedDivFreeCalendarTime;
    double _measureUpdateVelocityCalendarTime;
    double _measurePlotSolutionVTKCalendarTime;
    double _measurePlotRegularSolutionVTKCalendarTime;
    double _measureUpdateScenarioCalendarTime;

  
   peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit            _solverState;
   peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState               _repositoryState;
   
  public:
    #ifdef Parallel
    PrototypeRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );
    #else
    PrototypeRepositoryForRegularGridStandardImplementation(
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
    PrototypeRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );     
    virtual void terminate();
    
    
    virtual ~PrototypeRepositoryForRegularGridStandardImplementation();
    
    virtual peano::applications::navierstokes::prototype1::FluidStateEnhancedDivFreeEulerExplicit& getState();
	
    virtual void iterate( bool reduceState = true );
    
    #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit& getRegularGridState();
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit>* createEmptyCheckpoint(); 

    virtual void switchToInitialiseScenario();    
    virtual void switchToMergeA();    
    virtual void switchToCalculateF();    
    virtual void switchToCalculatePPERHS();    
    virtual void switchToGaussSeidelForEnhancedDivFree();    
    virtual void switchToUpdateVelocity();    
    virtual void switchToPlotSolutionVTK();    
    virtual void switchToPlotRegularSolutionVTK();    
    virtual void switchToUpdateScenario();    

    virtual bool isActiveAdapterInitialiseScenario() const;
    virtual bool isActiveAdapterMergeA() const;
    virtual bool isActiveAdapterCalculateF() const;
    virtual bool isActiveAdapterCalculatePPERHS() const;
    virtual bool isActiveAdapterGaussSeidelForEnhancedDivFree() const;
    virtual bool isActiveAdapterUpdateVelocity() const;
    virtual bool isActiveAdapterPlotSolutionVTK() const;
    virtual bool isActiveAdapterPlotRegularSolutionVTK() const;
    virtual bool isActiveAdapterUpdateScenario() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
