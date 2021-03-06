// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_PUREGRID_REPOSITORIES_PuregridBatchJobRepository_FOR_SPACETREE_GRID_DYNAMIC_STACK_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_PUREGRID_REPOSITORIES_PuregridBatchJobRepository_FOR_SPACETREE_GRID_DYNAMIC_STACK_IMPLEMENTATION_H_


#include "peano/applications/puregrid/repositories/PuregridBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/applications/puregrid/repositories/PuregridBatchJobRepositoryState.h"
#include "peano/applications/puregrid/SpacetreeGridVertex.h"
#include "peano/applications/puregrid/SpacetreeGridCell.h"
#include "peano/applications/puregrid/SpacetreeGridState.h"

#include "peano/kernel/spacetreegrid/Grid.h"
#include "peano/kernel/stacks/CellDynamicStack.h"
#include "peano/kernel/stacks/VertexDynamicStack.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/puregrid/adapters/SpacetreeGrid2SetupGrid.h" 



namespace peano { 
  namespace applications { 
    namespace puregrid {
      namespace repositories {
        class PuregridBatchJobRepositoryForSpacetreeGridDynamicStackImplementation;  
      }
}
}
}


class peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGridDynamicStackImplementation: public peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForSpacetreeGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;
    
    typedef peano::kernel::stacks::CellDynamicStack<peano::applications::puregrid::SpacetreeGridCell>       CellStack;
    typedef peano::kernel::stacks::VertexDynamicStack<peano::applications::puregrid::SpacetreeGridVertex>   VertexStack;

    CellStack    _cellStack;
    VertexStack  _vertexStack;
   peano::applications::puregrid::SpacetreeGridState          _solverState;

    peano::kernel::spacetreegrid::Grid<peano::applications::puregrid::SpacetreeGridVertex,peano::applications::puregrid::SpacetreeGridCell,peano::applications::puregrid::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetupGrid> _gridWithSetupGrid;

   
    int _countSetupGridRuns;

    double _measureSetupGridCPUTime;

    double _measureSetupGridCalendarTime;

  
   peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState               _repositoryState;
   
  public:
    PuregridBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(
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
    PuregridBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual ~PuregridBatchJobRepositoryForSpacetreeGridDynamicStackImplementation();

    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
      const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      int                                          domainLevel
    );
         
    virtual void terminate();
        
    virtual peano::applications::puregrid::State& getState();
    virtual peano::applications::puregrid::SpacetreeGridState& getSpacetreeGridState();
    
    virtual void iterate();
	
	virtual void iterate( bool reduceState );

    #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell>* createEmptyCheckpoint(); 

    virtual void switchToSetupGrid();    

    virtual bool isActiveAdapterSetupGrid() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
