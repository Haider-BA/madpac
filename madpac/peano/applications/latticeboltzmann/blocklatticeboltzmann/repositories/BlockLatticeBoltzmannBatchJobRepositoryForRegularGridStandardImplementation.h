// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_REPOSITORIES_BlockLatticeBoltzmannBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_REPOSITORIES_BlockLatticeBoltzmannBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_


#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForRegularGrid.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryState.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockVertex.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockCell.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockState.h"

#include "peano/kernel/regulargrid/Grid.h"
#include "peano/kernel/regulargrid/GridContainer.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/RegularGrid2RegularBlockSolverAdapter.h" 
 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/RegularGrid2InitialiseSpacetreeGridAdapter.h" 
 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/RegularGrid2BlockCCAOutputAdapter.h" 
 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/RegularGrid2DynamicRefinementForSpacetreeGridAdapter.h" 
 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/RegularGrid2BlockVTKOutputAdapter.h" 
 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/RegularGrid2RegularBlockSolverAndVTKOutputAdapter.h" 



namespace peano { 
  namespace applications { 
    namespace latticeboltzmann { 
      namespace blocklatticeboltzmann {
      namespace repositories {
        class BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation;  
      }
}
}
}
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation: public peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;

    peano::kernel::regulargrid::GridContainer<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex,peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell>  _gridContainer;

    peano::kernel::regulargrid::Grid<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex,peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell,peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState,adapters::RegularGrid2RegularBlockSolverAdapter> _gridWithRegularBlockSolverAdapter;
    peano::kernel::regulargrid::Grid<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex,peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell,peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState,adapters::RegularGrid2InitialiseSpacetreeGridAdapter> _gridWithInitialiseSpacetreeGridAdapter;
    peano::kernel::regulargrid::Grid<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex,peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell,peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState,adapters::RegularGrid2BlockCCAOutputAdapter> _gridWithBlockCCAOutputAdapter;
    peano::kernel::regulargrid::Grid<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex,peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell,peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState,adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter> _gridWithDynamicRefinementForSpacetreeGridAdapter;
    peano::kernel::regulargrid::Grid<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex,peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell,peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState,adapters::RegularGrid2BlockVTKOutputAdapter> _gridWithBlockVTKOutputAdapter;
    peano::kernel::regulargrid::Grid<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex,peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell,peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState,adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter> _gridWithRegularBlockSolverAndVTKOutputAdapter;

   
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

  
   peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState            _solverState;
   peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryState               _repositoryState;
   
  public:
    #ifdef Parallel
    BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );
    #else
    BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation(
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
    BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );     
    virtual void terminate();
    
    
    virtual ~BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation();
    
    virtual peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockState& getState();
	
    virtual void iterate( bool reduceState = true );
    
    #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState& getRegularGridState();
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell>* createEmptyCheckpoint(); 

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
