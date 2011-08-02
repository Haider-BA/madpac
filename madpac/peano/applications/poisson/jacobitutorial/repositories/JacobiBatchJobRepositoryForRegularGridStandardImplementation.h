// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_POISSON_JACOBITUTORIAL_REPOSITORIES_JacobiBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_POISSON_JACOBITUTORIAL_REPOSITORIES_JacobiBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_


#include "peano/applications/poisson/jacobitutorial/repositories/JacobiBatchJobRepositoryForRegularGrid.h"

#include "peano/applications/poisson/jacobitutorial/repositories/JacobiBatchJobRepositoryState.h"
#include "peano/applications/poisson/jacobitutorial/RegularGridVertex.h"
#include "peano/applications/poisson/jacobitutorial/RegularGridCell.h"
#include "peano/applications/poisson/jacobitutorial/RegularGridState.h"

#include "peano/kernel/regulargrid/Grid.h"
#include "peano/kernel/regulargrid/GridContainer.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/poisson/jacobitutorial/adapters/RegularGrid2SetupExperiment.h" 
 #include "peano/applications/poisson/jacobitutorial/adapters/RegularGrid2SetupExperimentAndPlotGrid.h" 
 #include "peano/applications/poisson/jacobitutorial/adapters/RegularGrid2SetupExperimentAndPlotStartSolution.h" 
 #include "peano/applications/poisson/jacobitutorial/adapters/RegularGrid2JacobiStep.h" 
 #include "peano/applications/poisson/jacobitutorial/adapters/RegularGrid2JacobiStepAndPlotSolution.h" 
 #include "peano/applications/poisson/jacobitutorial/adapters/RegularGrid2PlotSolution.h" 



namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace jacobitutorial {
      namespace repositories {
        class JacobiBatchJobRepositoryForRegularGridStandardImplementation;  
      }
}
}
}
}


class peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation: public peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;

    peano::kernel::regulargrid::GridContainer<peano::applications::poisson::jacobitutorial::RegularGridVertex,peano::applications::poisson::jacobitutorial::RegularGridCell>  _gridContainer;

    peano::kernel::regulargrid::Grid<peano::applications::poisson::jacobitutorial::RegularGridVertex,peano::applications::poisson::jacobitutorial::RegularGridCell,peano::applications::poisson::jacobitutorial::RegularGridState,adapters::RegularGrid2SetupExperiment> _gridWithSetupExperiment;
    peano::kernel::regulargrid::Grid<peano::applications::poisson::jacobitutorial::RegularGridVertex,peano::applications::poisson::jacobitutorial::RegularGridCell,peano::applications::poisson::jacobitutorial::RegularGridState,adapters::RegularGrid2SetupExperimentAndPlotGrid> _gridWithSetupExperimentAndPlotGrid;
    peano::kernel::regulargrid::Grid<peano::applications::poisson::jacobitutorial::RegularGridVertex,peano::applications::poisson::jacobitutorial::RegularGridCell,peano::applications::poisson::jacobitutorial::RegularGridState,adapters::RegularGrid2SetupExperimentAndPlotStartSolution> _gridWithSetupExperimentAndPlotStartSolution;
    peano::kernel::regulargrid::Grid<peano::applications::poisson::jacobitutorial::RegularGridVertex,peano::applications::poisson::jacobitutorial::RegularGridCell,peano::applications::poisson::jacobitutorial::RegularGridState,adapters::RegularGrid2JacobiStep> _gridWithJacobiStep;
    peano::kernel::regulargrid::Grid<peano::applications::poisson::jacobitutorial::RegularGridVertex,peano::applications::poisson::jacobitutorial::RegularGridCell,peano::applications::poisson::jacobitutorial::RegularGridState,adapters::RegularGrid2JacobiStepAndPlotSolution> _gridWithJacobiStepAndPlotSolution;
    peano::kernel::regulargrid::Grid<peano::applications::poisson::jacobitutorial::RegularGridVertex,peano::applications::poisson::jacobitutorial::RegularGridCell,peano::applications::poisson::jacobitutorial::RegularGridState,adapters::RegularGrid2PlotSolution> _gridWithPlotSolution;

   
    int _countSetupExperimentRuns;
    int _countSetupExperimentAndPlotGridRuns;
    int _countSetupExperimentAndPlotStartSolutionRuns;
    int _countJacobiStepRuns;
    int _countJacobiStepAndPlotSolutionRuns;
    int _countPlotSolutionRuns;

    double _measureSetupExperimentCPUTime;
    double _measureSetupExperimentAndPlotGridCPUTime;
    double _measureSetupExperimentAndPlotStartSolutionCPUTime;
    double _measureJacobiStepCPUTime;
    double _measureJacobiStepAndPlotSolutionCPUTime;
    double _measurePlotSolutionCPUTime;

    double _measureSetupExperimentCalendarTime;
    double _measureSetupExperimentAndPlotGridCalendarTime;
    double _measureSetupExperimentAndPlotStartSolutionCalendarTime;
    double _measureJacobiStepCalendarTime;
    double _measureJacobiStepAndPlotSolutionCalendarTime;
    double _measurePlotSolutionCalendarTime;

  
   peano::applications::poisson::jacobitutorial::RegularGridState            _solverState;
   peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryState               _repositoryState;
   
  public:
    #ifdef Parallel
    JacobiBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );
    #else
    JacobiBatchJobRepositoryForRegularGridStandardImplementation(
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
    JacobiBatchJobRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );     
    virtual void terminate();
    
    
    virtual ~JacobiBatchJobRepositoryForRegularGridStandardImplementation();
    
    virtual peano::applications::poisson::jacobitutorial::State& getState();
    
    virtual void iterate();
	
	virtual void iterate( bool reduceState );
    
	#ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual peano::applications::poisson::jacobitutorial::RegularGridState& getRegularGridState();
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::jacobitutorial::RegularGridVertex, peano::applications::poisson::jacobitutorial::RegularGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::jacobitutorial::RegularGridVertex, peano::applications::poisson::jacobitutorial::RegularGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::jacobitutorial::RegularGridVertex, peano::applications::poisson::jacobitutorial::RegularGridCell>* createEmptyCheckpoint(); 

    virtual void switchToSetupExperiment();    
    virtual void switchToSetupExperimentAndPlotGrid();    
    virtual void switchToSetupExperimentAndPlotStartSolution();    
    virtual void switchToJacobiStep();    
    virtual void switchToJacobiStepAndPlotSolution();    
    virtual void switchToPlotSolution();    

    virtual bool isActiveAdapterSetupExperiment() const;
    virtual bool isActiveAdapterSetupExperimentAndPlotGrid() const;
    virtual bool isActiveAdapterSetupExperimentAndPlotStartSolution() const;
    virtual bool isActiveAdapterJacobiStep() const;
    virtual bool isActiveAdapterJacobiStepAndPlotSolution() const;
    virtual bool isActiveAdapterPlotSolution() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
