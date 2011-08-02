// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_PIC_DEMO_REPOSITORIES_PICBatchJobRepository_FOR_SPACETREE_GRID_STD_DOUBLE_STACK_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_PIC_DEMO_REPOSITORIES_PICBatchJobRepository_FOR_SPACETREE_GRID_STD_DOUBLE_STACK_IMPLEMENTATION_H_


#include "peano/applications/pic/demo/repositories/PICBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/applications/pic/demo/repositories/PICBatchJobRepositoryState.h"
#include "peano/applications/pic/demo/SpacetreeGridVertex.h"
#include "peano/applications/pic/demo/SpacetreeGridCell.h"
#include "peano/applications/pic/demo/SpacetreeGridState.h"

#include "peano/kernel/spacetreegrid/Grid.h"
#include "peano/kernel/stacks/CellSTDDoubleStack.h"
#include "peano/kernel/stacks/VertexSTDDoubleStack.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/pic/demo/adapters/SpacetreeGrid2SetupExperiment.h" 
 #include "peano/applications/pic/demo/adapters/SpacetreeGrid2SetupExperimentAndPlot.h" 



namespace peano { 
  namespace applications { 
    namespace pic { 
      namespace demo {
      namespace repositories {
        class PICBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation;  
      }
}
}
}
}


class peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation: public peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;
    
    typedef peano::kernel::stacks::CellSTDDoubleStack<peano::applications::pic::demo::SpacetreeGridCell>       CellStack;
    typedef peano::kernel::stacks::VertexSTDDoubleStack<peano::applications::pic::demo::SpacetreeGridVertex>   VertexStack;

    CellStack    _cellStack;
    VertexStack  _vertexStack;
   peano::applications::pic::demo::SpacetreeGridState          _solverState;

    peano::kernel::spacetreegrid::Grid<peano::applications::pic::demo::SpacetreeGridVertex,peano::applications::pic::demo::SpacetreeGridCell,peano::applications::pic::demo::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetupExperiment> _gridWithSetupExperiment;
    peano::kernel::spacetreegrid::Grid<peano::applications::pic::demo::SpacetreeGridVertex,peano::applications::pic::demo::SpacetreeGridCell,peano::applications::pic::demo::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetupExperimentAndPlot> _gridWithSetupExperimentAndPlot;

   
    int _countSetupExperimentRuns;
    int _countSetupExperimentAndPlotRuns;

    double _measureSetupExperimentCPUTime;
    double _measureSetupExperimentAndPlotCPUTime;

    double _measureSetupExperimentCalendarTime;
    double _measureSetupExperimentAndPlotCalendarTime;

  
   peano::applications::pic::demo::repositories::PICBatchJobRepositoryState               _repositoryState;
   
  public:
    PICBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(
      peano::geometry::Geometry&                   geometry,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
      int                                          initialStackSize
    );
    
    /**
     * Parallel Constructor
     *
     * Used in parallel mode only where the size of the domain is not known 
     * when the type of repository is determined.  
     */
    PICBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(
      peano::geometry::Geometry&                   geometry,
      int                                          initialStackSize
    );
    
    virtual ~PICBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation();

    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
      const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      int                                          domainLevel
    );
         
    virtual void terminate();
        
    virtual peano::applications::pic::demo::State& getState();
    virtual peano::applications::pic::demo::SpacetreeGridState& getSpacetreeGridState();
    
    virtual void iterate();
    #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo::SpacetreeGridVertex, peano::applications::pic::demo::SpacetreeGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo::SpacetreeGridVertex, peano::applications::pic::demo::SpacetreeGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo::SpacetreeGridVertex, peano::applications::pic::demo::SpacetreeGridCell>* createEmptyCheckpoint(); 

    virtual void switchToSetupExperiment();    
    virtual void switchToSetupExperimentAndPlot();    

    virtual bool isActiveAdapterSetupExperiment() const;
    virtual bool isActiveAdapterSetupExperimentAndPlot() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
