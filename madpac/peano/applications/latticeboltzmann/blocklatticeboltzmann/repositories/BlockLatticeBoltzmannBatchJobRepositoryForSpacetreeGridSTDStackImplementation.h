// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_REPOSITORIES_BlockLatticeBoltzmannBatchJobRepository_FOR_SPACETREE_GRID_STD_STACK_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_REPOSITORIES_BlockLatticeBoltzmannBatchJobRepository_FOR_SPACETREE_GRID_STD_STACK_IMPLEMENTATION_H_


#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryState.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/SpacetreeGridBlockVertex.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/SpacetreeGridBlockCell.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/SpacetreeGridBlockState.h"

#include "peano/kernel/spacetreegrid/Grid.h"
#include "peano/kernel/stacks/CellSTDStack.h"
#include "peano/kernel/stacks/VertexSTDStack.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/SpacetreeGrid2RegularBlockSolverAdapter.h" 
 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/SpacetreeGrid2InitialiseSpacetreeGridAdapter.h" 
 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/SpacetreeGrid2BlockCCAOutputAdapter.h" 
 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/SpacetreeGrid2DynamicRefinementForSpacetreeGridAdapter.h" 
 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/SpacetreeGrid2BlockVTKOutputAdapter.h" 
 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/SpacetreeGrid2RegularBlockSolverAndVTKOutputAdapter.h" 



namespace peano { 
  namespace applications { 
    namespace latticeboltzmann { 
      namespace blocklatticeboltzmann {
      namespace repositories {
        class BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridSTDStackImplementation;  
      }
}
}
}
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridSTDStackImplementation: public peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;
    
    typedef peano::kernel::stacks::CellSTDStack<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell>       CellStack;
    typedef peano::kernel::stacks::VertexSTDStack<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex>   VertexStack;

    CellStack    _cellStack;
    VertexStack  _vertexStack;
   peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState          _solverState;

    peano::kernel::spacetreegrid::Grid<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex,peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell,peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2RegularBlockSolverAdapter> _gridWithRegularBlockSolverAdapter;
    peano::kernel::spacetreegrid::Grid<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex,peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell,peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2InitialiseSpacetreeGridAdapter> _gridWithInitialiseSpacetreeGridAdapter;
    peano::kernel::spacetreegrid::Grid<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex,peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell,peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2BlockCCAOutputAdapter> _gridWithBlockCCAOutputAdapter;
    peano::kernel::spacetreegrid::Grid<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex,peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell,peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2DynamicRefinementForSpacetreeGridAdapter> _gridWithDynamicRefinementForSpacetreeGridAdapter;
    peano::kernel::spacetreegrid::Grid<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex,peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell,peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2BlockVTKOutputAdapter> _gridWithBlockVTKOutputAdapter;
    peano::kernel::spacetreegrid::Grid<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex,peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell,peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState,VertexStack,CellStack,adapters::SpacetreeGrid2RegularBlockSolverAndVTKOutputAdapter> _gridWithRegularBlockSolverAndVTKOutputAdapter;

   
    int _countRegularBlockSolverAdapterRuns;
    int _countInitialiseSpacetreeGridAdapterRuns;
    int _countBlockCCAOutputAdapterRuns;
    int _countDynamicRefinementForSpacetreeGridAdapterRuns;
    int _countBlockVTKOutputAdapterRuns;
    int _countRegularBlockSolverAndVTKOutputAdapterRuns;

    double _measureRegularBlockSolverAdapterCPUTime;
    double _measureInitialiseSpacetreeGridAdapterCPUTime;
    double _measureBlockCCAOutputAdapterCPUTime;
    double _measureDynamicRefinementForSpacetreeGridAdapterCPUTime;
    double _measureBlockVTKOutputAdapterCPUTime;
    double _measureRegularBlockSolverAndVTKOutputAdapterCPUTime;

    double _measureRegularBlockSolverAdapterCalendarTime;
    double _measureInitialiseSpacetreeGridAdapterCalendarTime;
    double _measureBlockCCAOutputAdapterCalendarTime;
    double _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime;
    double _measureBlockVTKOutputAdapterCalendarTime;
    double _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime;

  
   peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryState               _repositoryState;
   
  public:
    BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridSTDStackImplementation(
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
    BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridSTDStackImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual ~BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridSTDStackImplementation();

    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
      const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      int                                          domainLevel
    );
         
    virtual void terminate();
        
    virtual peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockState& getState();
    virtual peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState& getSpacetreeGridState();
	
	virtual void iterate( bool reduceState );

    #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell>* createEmptyCheckpoint(); 

    virtual void switchToRegularBlockSolverAdapter();    
    virtual void switchToInitialiseSpacetreeGridAdapter();    
    virtual void switchToBlockCCAOutputAdapter();    
    virtual void switchToDynamicRefinementForSpacetreeGridAdapter();    
    virtual void switchToBlockVTKOutputAdapter();    
    virtual void switchToRegularBlockSolverAndVTKOutputAdapter();    

    virtual bool isActiveAdapterRegularBlockSolverAdapter() const;
    virtual bool isActiveAdapterInitialiseSpacetreeGridAdapter() const;
    virtual bool isActiveAdapterBlockCCAOutputAdapter() const;
    virtual bool isActiveAdapterDynamicRefinementForSpacetreeGridAdapter() const;
    virtual bool isActiveAdapterBlockVTKOutputAdapter() const;
    virtual bool isActiveAdapterRegularBlockSolverAndVTKOutputAdapter() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
