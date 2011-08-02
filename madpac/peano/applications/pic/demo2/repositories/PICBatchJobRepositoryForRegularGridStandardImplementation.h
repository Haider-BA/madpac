// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_PIC_DEMO2_REPOSITORIES_PICBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_PIC_DEMO2_REPOSITORIES_PICBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_


#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryForRegularGrid.h"

#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryState.h"
#include "peano/applications/pic/demo2/RegularGridVertex.h"
#include "peano/applications/pic/demo2/RegularGridCell.h"
#include "peano/applications/pic/demo2/RegularGridState.h"

#include "peano/kernel/regulargrid/Grid.h"
#include "peano/kernel/regulargrid/GridContainer.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/pic/demo2/adapters/RegularGrid2SetupExperiment.h" 
 #include "peano/applications/pic/demo2/adapters/RegularGrid2SetupExperimentAndPlot.h" 



namespace peano { 
  namespace applications { 
    namespace pic { 
      namespace demo2 {
      namespace repositories {
        class PICBatchJobRepositoryForRegularGridStandardImplementation;  
      }
}
}
}
}


class peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation: public peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;

    peano::kernel::regulargrid::GridContainer<peano::applications::pic::demo2::RegularGridVertex,peano::applications::pic::demo2::RegularGridCell>  _gridContainer;

    peano::kernel::regulargrid::Grid<peano::applications::pic::demo2::RegularGridVertex,peano::applications::pic::demo2::RegularGridCell,peano::applications::pic::demo2::RegularGridState,adapters::RegularGrid2SetupExperiment> _gridWithSetupExperiment;
    peano::kernel::regulargrid::Grid<peano::applications::pic::demo2::RegularGridVertex,peano::applications::pic::demo2::RegularGridCell,peano::applications::pic::demo2::RegularGridState,adapters::RegularGrid2SetupExperimentAndPlot> _gridWithSetupExperimentAndPlot;

   
    int _countSetupExperimentRuns;
    int _countSetupExperimentAndPlotRuns;

    double _measureSetupExperimentCPUTime;
    double _measureSetupExperimentAndPlotCPUTime;

    double _measureSetupExperimentCalendarTime;
    double _measureSetupExperimentAndPlotCalendarTime;

  
   peano::applications::pic::demo2::RegularGridState            _solverState;
   peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState               _repositoryState;
   
  public:
    #ifdef Parallel
    PICBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );
    #else
    PICBatchJobRepositoryForRegularGridStandardImplementation(
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
    PICBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );     
    virtual void terminate();
    
    
    virtual ~PICBatchJobRepositoryForRegularGridStandardImplementation();
    
    virtual peano::applications::pic::demo2::State& getState();
    
    virtual void iterate();
    #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual peano::applications::pic::demo2::RegularGridState& getRegularGridState();
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::RegularGridVertex, peano::applications::pic::demo2::RegularGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::RegularGridVertex, peano::applications::pic::demo2::RegularGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::RegularGridVertex, peano::applications::pic::demo2::RegularGridCell>* createEmptyCheckpoint(); 

    virtual void switchToSetupExperiment();    
    virtual void switchToSetupExperimentAndPlot();    

    virtual bool isActiveAdapterSetupExperiment() const;
    virtual bool isActiveAdapterSetupExperimentAndPlot() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
