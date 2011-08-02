// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_PUREGRID_REPOSITORIES_GridConstructionMovieBatchJobRepository_FOR_SPACETREE_GRID_ARRAY_STACK_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_PUREGRID_REPOSITORIES_GridConstructionMovieBatchJobRepository_FOR_SPACETREE_GRID_ARRAY_STACK_IMPLEMENTATION_H_


#include "peano/applications/puregrid/repositories/GridConstructionMovieBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/applications/puregrid/repositories/GridConstructionMovieBatchJobRepositoryState.h"
#include "peano/applications/puregrid/SpacetreeGridVertex.h"
#include "peano/applications/puregrid/SpacetreeGridCell.h"
#include "peano/applications/puregrid/SpacetreeGridState.h"

#include "peano/kernel/spacetreegrid/Grid.h"
#include "peano/kernel/stacks/CellArrayStack.h"
#include "peano/kernel/stacks/VertexArrayStack.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/puregrid/adapters/SpacetreeGrid2PerformOneRefinement.h" 
 #include "peano/applications/puregrid/adapters/SpacetreeGrid2PerformOneRefinementWithoutGridSnapshot.h" 



namespace peano { 
  namespace applications { 
    namespace puregrid {
      namespace repositories {
        class GridConstructionMovieBatchJobRepositoryForSpacetreeGridArrayStackImplementation;  
      }
}
}
}


class peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridArrayStackImplementation: public peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;
    
    typedef peano::kernel::stacks::CellArrayStack<peano::applications::puregrid::SpacetreeGridCell>       CellStack;
    typedef peano::kernel::stacks::VertexArrayStack<peano::applications::puregrid::SpacetreeGridVertex>   VertexStack;

    CellStack    _cellStack;
    VertexStack  _vertexStack;
   peano::applications::puregrid::SpacetreeGridState          _solverState;

    peano::kernel::spacetreegrid::Grid<peano::applications::puregrid::SpacetreeGridVertex,peano::applications::puregrid::SpacetreeGridCell,peano::applications::puregrid::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2PerformOneRefinement> _gridWithPerformOneRefinement;
    peano::kernel::spacetreegrid::Grid<peano::applications::puregrid::SpacetreeGridVertex,peano::applications::puregrid::SpacetreeGridCell,peano::applications::puregrid::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2PerformOneRefinementWithoutGridSnapshot> _gridWithPerformOneRefinementWithoutGridSnapshot;

   
    int _countPerformOneRefinementRuns;
    int _countPerformOneRefinementWithoutGridSnapshotRuns;

    double _measurePerformOneRefinementCPUTime;
    double _measurePerformOneRefinementWithoutGridSnapshotCPUTime;

    double _measurePerformOneRefinementCalendarTime;
    double _measurePerformOneRefinementWithoutGridSnapshotCalendarTime;

  
   peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState               _repositoryState;
   
  public:
    GridConstructionMovieBatchJobRepositoryForSpacetreeGridArrayStackImplementation(
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
    GridConstructionMovieBatchJobRepositoryForSpacetreeGridArrayStackImplementation(
      peano::geometry::Geometry&                   geometry,
      int                                          maximumSizeOfCellInOutStack,
      int                                          maximumSizeOfVertexInOutStack,
      int                                          maximumSizeOfVertexTemporaryStack
    );
    
    virtual ~GridConstructionMovieBatchJobRepositoryForSpacetreeGridArrayStackImplementation();

    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
      const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      int                                          domainLevel
    );
         
    virtual void terminate();
        
    virtual peano::applications::puregrid::State& getState();
    
    virtual void iterate();
	
	virtual void iterate( bool communicateState );
    
	#ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell>* createEmptyCheckpoint(); 

    virtual void switchToPerformOneRefinement();    
    virtual void switchToPerformOneRefinementWithoutGridSnapshot();    

    virtual bool isActiveAdapterPerformOneRefinement() const;
    virtual bool isActiveAdapterPerformOneRefinementWithoutGridSnapshot() const;

  
    virtual peano::applications::puregrid::SpacetreeGridState& getSpacetreeGridState();
   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
