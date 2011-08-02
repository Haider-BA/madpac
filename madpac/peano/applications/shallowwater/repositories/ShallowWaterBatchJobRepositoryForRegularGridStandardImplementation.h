// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_SHALLOWWATER_REPOSITORIES_ShallowWaterBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_SHALLOWWATER_REPOSITORIES_ShallowWaterBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_


#include "peano/applications/shallowwater/repositories/ShallowWaterBatchJobRepositoryForRegularGrid.h"

#include "peano/applications/shallowwater/repositories/ShallowWaterBatchJobRepositoryState.h"
#include "peano/applications/shallowwater/RegularGridVertex.h"
#include "peano/applications/shallowwater/RegularGridCell.h"
#include "peano/applications/shallowwater/RegularGridState.h"

#include "peano/kernel/regulargrid/Grid.h"
#include "peano/kernel/regulargrid/GridContainer.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/shallowwater/adapters/RegularGrid2SetupExperiment.h" 
 #include "peano/applications/shallowwater/adapters/RegularGrid2SetupExperimentAndPlotGrid.h" 
 #include "peano/applications/shallowwater/adapters/RegularGrid2SetupExperimentAndPlotStartSolution.h" 
 #include "peano/applications/shallowwater/adapters/RegularGrid2GodunovMethod.h" 
 #include "peano/applications/shallowwater/adapters/RegularGrid2GodunovMethodAndPlotSolution.h" 
 #include "peano/applications/shallowwater/adapters/RegularGrid2PlotSolution.h" 



namespace peano { 
  namespace applications { 
    namespace shallowwater {
      namespace repositories {
        class ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation;  
      }
}
}
}


class peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation: public peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;

    peano::kernel::regulargrid::GridContainer<peano::applications::shallowwater::RegularGridVertex,peano::applications::shallowwater::RegularGridCell>  _gridContainer;

    peano::kernel::regulargrid::Grid<peano::applications::shallowwater::RegularGridVertex,peano::applications::shallowwater::RegularGridCell,peano::applications::shallowwater::RegularGridState,adapters::RegularGrid2SetupExperiment> _gridWithSetupExperiment;
    peano::kernel::regulargrid::Grid<peano::applications::shallowwater::RegularGridVertex,peano::applications::shallowwater::RegularGridCell,peano::applications::shallowwater::RegularGridState,adapters::RegularGrid2SetupExperimentAndPlotGrid> _gridWithSetupExperimentAndPlotGrid;
    peano::kernel::regulargrid::Grid<peano::applications::shallowwater::RegularGridVertex,peano::applications::shallowwater::RegularGridCell,peano::applications::shallowwater::RegularGridState,adapters::RegularGrid2SetupExperimentAndPlotStartSolution> _gridWithSetupExperimentAndPlotStartSolution;
    peano::kernel::regulargrid::Grid<peano::applications::shallowwater::RegularGridVertex,peano::applications::shallowwater::RegularGridCell,peano::applications::shallowwater::RegularGridState,adapters::RegularGrid2GodunovMethod> _gridWithGodunovMethod;
    peano::kernel::regulargrid::Grid<peano::applications::shallowwater::RegularGridVertex,peano::applications::shallowwater::RegularGridCell,peano::applications::shallowwater::RegularGridState,adapters::RegularGrid2GodunovMethodAndPlotSolution> _gridWithGodunovMethodAndPlotSolution;
    peano::kernel::regulargrid::Grid<peano::applications::shallowwater::RegularGridVertex,peano::applications::shallowwater::RegularGridCell,peano::applications::shallowwater::RegularGridState,adapters::RegularGrid2PlotSolution> _gridWithPlotSolution;

   
    int _countSetupExperimentRuns;
    int _countSetupExperimentAndPlotGridRuns;
    int _countSetupExperimentAndPlotStartSolutionRuns;
    int _countGodunovMethodRuns;
    int _countGodunovMethodAndPlotSolutionRuns;
    int _countPlotSolutionRuns;

    double _measureSetupExperimentCPUTime;
    double _measureSetupExperimentAndPlotGridCPUTime;
    double _measureSetupExperimentAndPlotStartSolutionCPUTime;
    double _measureGodunovMethodCPUTime;
    double _measureGodunovMethodAndPlotSolutionCPUTime;
    double _measurePlotSolutionCPUTime;

    double _measureSetupExperimentCalendarTime;
    double _measureSetupExperimentAndPlotGridCalendarTime;
    double _measureSetupExperimentAndPlotStartSolutionCalendarTime;
    double _measureGodunovMethodCalendarTime;
    double _measureGodunovMethodAndPlotSolutionCalendarTime;
    double _measurePlotSolutionCalendarTime;

  
   peano::applications::shallowwater::RegularGridState            _solverState;
   peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState               _repositoryState;
   
  public:
    #ifdef Parallel
    ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );
    #else
    ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation(
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
    ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );     
    virtual void terminate();
    
    
    virtual ~ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation();
    
    virtual peano::applications::shallowwater::State& getState();
    
    virtual void iterate();
    #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual peano::applications::shallowwater::RegularGridState& getRegularGridState();
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::shallowwater::RegularGridVertex, peano::applications::shallowwater::RegularGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::shallowwater::RegularGridVertex, peano::applications::shallowwater::RegularGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::shallowwater::RegularGridVertex, peano::applications::shallowwater::RegularGridCell>* createEmptyCheckpoint(); 

    virtual void switchToSetupExperiment();    
    virtual void switchToSetupExperimentAndPlotGrid();    
    virtual void switchToSetupExperimentAndPlotStartSolution();    
    virtual void switchToGodunovMethod();    
    virtual void switchToGodunovMethodAndPlotSolution();    
    virtual void switchToPlotSolution();    

    virtual bool isActiveAdapterSetupExperiment() const;
    virtual bool isActiveAdapterSetupExperimentAndPlotGrid() const;
    virtual bool isActiveAdapterSetupExperimentAndPlotStartSolution() const;
    virtual bool isActiveAdapterGodunovMethod() const;
    virtual bool isActiveAdapterGodunovMethodAndPlotSolution() const;
    virtual bool isActiveAdapterPlotSolution() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
