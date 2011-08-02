// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_PUREGRID_REPOSITORIES_PuregridBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_PUREGRID_REPOSITORIES_PuregridBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_


#include "peano/applications/puregrid/repositories/PuregridBatchJobRepositoryForRegularGrid.h"

#include "peano/applications/puregrid/repositories/PuregridBatchJobRepositoryState.h"
#include "peano/applications/puregrid/RegularGridVertex.h"
#include "peano/applications/puregrid/RegularGridCell.h"
#include "peano/applications/puregrid/RegularGridState.h"

#include "peano/kernel/regulargrid/Grid.h"
#include "peano/kernel/regulargrid/GridContainer.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/puregrid/adapters/RegularGrid2SetupGrid.h" 



namespace peano { 
  namespace applications { 
    namespace puregrid {
      namespace repositories {
        class PuregridBatchJobRepositoryForRegularGridStandardImplementation;  
      }
}
}
}


class peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation: public peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;

    peano::kernel::regulargrid::GridContainer<peano::applications::puregrid::RegularGridVertex,peano::applications::puregrid::RegularGridCell>  _gridContainer;

    peano::kernel::regulargrid::Grid<peano::applications::puregrid::RegularGridVertex,peano::applications::puregrid::RegularGridCell,peano::applications::puregrid::RegularGridState,adapters::RegularGrid2SetupGrid> _gridWithSetupGrid;

   
    int _countSetupGridRuns;

    double _measureSetupGridCPUTime;

    double _measureSetupGridCalendarTime;

  
   peano::applications::puregrid::RegularGridState            _solverState;
   peano::applications::puregrid::repositories::PuregridBatchJobRepositoryState               _repositoryState;
   
  public:
    #ifdef Parallel
    PuregridBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );
    #else
    PuregridBatchJobRepositoryForRegularGridStandardImplementation(
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
    PuregridBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );     
    virtual void terminate();
    
    
    virtual ~PuregridBatchJobRepositoryForRegularGridStandardImplementation();
    
    virtual peano::applications::puregrid::State& getState();
    
    virtual void iterate();
	
	virtual void iterate( bool reduceState );
    
	#ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual peano::applications::puregrid::RegularGridState& getRegularGridState();
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::RegularGridVertex, peano::applications::puregrid::RegularGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::RegularGridVertex, peano::applications::puregrid::RegularGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::RegularGridVertex, peano::applications::puregrid::RegularGridCell>* createEmptyCheckpoint(); 

    virtual void switchToSetupGrid();    

    virtual bool isActiveAdapterSetupGrid() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
