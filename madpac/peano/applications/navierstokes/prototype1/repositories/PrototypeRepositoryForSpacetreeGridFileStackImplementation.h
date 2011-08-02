// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_REPOSITORIES_PrototypeRepository_FOR_SPACETREE_GRID_FILE_STACK_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_REPOSITORIES_PrototypeRepository_FOR_SPACETREE_GRID_FILE_STACK_IMPLEMENTATION_H_


#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForSpacetreeGrid.h"

#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryState.h"
#include "peano/applications/navierstokes/prototype1/SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit.h"

#include "peano/kernel/spacetreegrid/Grid.h"
#include "peano/kernel/stacks/CellFileStack.h"
#include "peano/kernel/stacks/VertexFileStack.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/navierstokes/prototype1/adapters/SpacetreeGrid2InitialiseScenario.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/SpacetreeGrid2MergeA.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/SpacetreeGrid2CalculateF.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/SpacetreeGrid2CalculatePPERHS.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/SpacetreeGrid2GaussSeidelForEnhancedDivFree.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/SpacetreeGrid2UpdateVelocity.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/SpacetreeGrid2PlotSolutionVTK.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/SpacetreeGrid2PlotRegularSolutionVTK.h" 
 #include "peano/applications/navierstokes/prototype1/adapters/SpacetreeGrid2UpdateScenario.h" 



namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype1 {
      namespace repositories {
        class PrototypeRepositoryForSpacetreeGridFileStackImplementation;  
      }
}
}
}
}


class peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridFileStackImplementation: public peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;
    
    typedef peano::kernel::stacks::CellFileStack<peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit>       CellStack;
    typedef peano::kernel::stacks::VertexFileStack<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit>   VertexStack;

    CellStack    _cellStack;
    VertexStack  _vertexStack;
   peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit          _solverState;

    peano::kernel::spacetreegrid::Grid<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit,VertexStack,CellStack,adapters::SpacetreeGrid2InitialiseScenario> _gridWithInitialiseScenario;
    peano::kernel::spacetreegrid::Grid<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit,VertexStack,CellStack,adapters::SpacetreeGrid2MergeA> _gridWithMergeA;
    peano::kernel::spacetreegrid::Grid<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit,VertexStack,CellStack,adapters::SpacetreeGrid2CalculateF> _gridWithCalculateF;
    peano::kernel::spacetreegrid::Grid<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit,VertexStack,CellStack,adapters::SpacetreeGrid2CalculatePPERHS> _gridWithCalculatePPERHS;
    peano::kernel::spacetreegrid::Grid<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit,VertexStack,CellStack,adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree> _gridWithGaussSeidelForEnhancedDivFree;
    peano::kernel::spacetreegrid::Grid<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit,VertexStack,CellStack,adapters::SpacetreeGrid2UpdateVelocity> _gridWithUpdateVelocity;
    peano::kernel::spacetreegrid::Grid<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit,VertexStack,CellStack,adapters::SpacetreeGrid2PlotSolutionVTK> _gridWithPlotSolutionVTK;
    peano::kernel::spacetreegrid::Grid<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit,VertexStack,CellStack,adapters::SpacetreeGrid2PlotRegularSolutionVTK> _gridWithPlotRegularSolutionVTK;
    peano::kernel::spacetreegrid::Grid<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit,VertexStack,CellStack,adapters::SpacetreeGrid2UpdateScenario> _gridWithUpdateScenario;

   
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

  
   peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState               _repositoryState;
   
  public:
    PrototypeRepositoryForSpacetreeGridFileStackImplementation(
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
    PrototypeRepositoryForSpacetreeGridFileStackImplementation(
      peano::geometry::Geometry&                   geometry,
      int                                          blockSize,
      int                                          numberOfBlocks,
      int                                          minFillThreshold,
      int                                          maxFillThreshold,
      const std::string&                           tempFilePrefix    
    );
    
    virtual ~PrototypeRepositoryForSpacetreeGridFileStackImplementation();

    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
      const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      int                                          domainLevel
    );
         
    virtual void terminate();
        
    virtual peano::applications::navierstokes::prototype1::FluidStateEnhancedDivFreeEulerExplicit& getState();
    virtual peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit& getSpacetreeGridState();
    
    virtual void iterate( bool reduceState = true );
    
	  #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit>* createEmptyCheckpoint(); 

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
