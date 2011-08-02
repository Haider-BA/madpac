// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_POISSON_VHHJACOBI_REPOSITORIES_JacobiBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_POISSON_VHHJACOBI_REPOSITORIES_JacobiBatchJobRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_


#include "peano/applications/poisson/vhhjacobi/repositories/JacobiBatchJobRepositoryForRegularGrid.h"

#include "peano/applications/poisson/vhhjacobi/repositories/JacobiBatchJobRepositoryState.h"
#include "peano/applications/poisson/vhhjacobi/RegularGridVertex.h"
#include "peano/applications/poisson/vhhjacobi/RegularGridCell.h"
#include "peano/applications/poisson/vhhjacobi/RegularGridState.h"

#include "peano/kernel/regulargrid/Grid.h"
#include "peano/kernel/regulargrid/GridContainer.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/poisson/vhhjacobi/adapters/RegularGrid2SetupExperiment.h" 
 #include "peano/applications/poisson/vhhjacobi/adapters/RegularGrid2JacobiStep.h" 
 #include "peano/applications/poisson/vhhjacobi/adapters/RegularGrid2JacobiStepAndPlotSolution.h" 
 #include "peano/applications/poisson/vhhjacobi/adapters/RegularGrid2PlotSolution.h" 



namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace vhhjacobi {
      namespace repositories {
        class JacobiBatchJobRepositoryForRegularGridStandardImplementation;  
      }
}
}
}
}


class peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation: public peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryForRegularGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;

    peano::kernel::regulargrid::GridContainer<peano::applications::poisson::vhhjacobi::RegularGridVertex,peano::applications::poisson::vhhjacobi::RegularGridCell>  _gridContainer;

    peano::kernel::regulargrid::Grid<peano::applications::poisson::vhhjacobi::RegularGridVertex,peano::applications::poisson::vhhjacobi::RegularGridCell,peano::applications::poisson::vhhjacobi::RegularGridState,adapters::RegularGrid2SetupExperiment> _gridWithSetupExperiment;
    peano::kernel::regulargrid::Grid<peano::applications::poisson::vhhjacobi::RegularGridVertex,peano::applications::poisson::vhhjacobi::RegularGridCell,peano::applications::poisson::vhhjacobi::RegularGridState,adapters::RegularGrid2JacobiStep> _gridWithJacobiStep;
    peano::kernel::regulargrid::Grid<peano::applications::poisson::vhhjacobi::RegularGridVertex,peano::applications::poisson::vhhjacobi::RegularGridCell,peano::applications::poisson::vhhjacobi::RegularGridState,adapters::RegularGrid2JacobiStepAndPlotSolution> _gridWithJacobiStepAndPlotSolution;
    peano::kernel::regulargrid::Grid<peano::applications::poisson::vhhjacobi::RegularGridVertex,peano::applications::poisson::vhhjacobi::RegularGridCell,peano::applications::poisson::vhhjacobi::RegularGridState,adapters::RegularGrid2PlotSolution> _gridWithPlotSolution;

   
    int _countSetupExperimentRuns;
    int _countJacobiStepRuns;
    int _countJacobiStepAndPlotSolutionRuns;
    int _countPlotSolutionRuns;

    double _measureSetupExperimentCPUTime;
    double _measureJacobiStepCPUTime;
    double _measureJacobiStepAndPlotSolutionCPUTime;
    double _measurePlotSolutionCPUTime;

    double _measureSetupExperimentCalendarTime;
    double _measureJacobiStepCalendarTime;
    double _measureJacobiStepAndPlotSolutionCalendarTime;
    double _measurePlotSolutionCalendarTime;

  
   peano::applications::poisson::vhhjacobi::RegularGridState            _solverState;
   peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryState               _repositoryState;
   
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
    
    virtual peano::applications::poisson::vhhjacobi::State& getState();
    
    virtual void iterate();
	
	virtual void iterate( bool reduceState );
    
	#ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual peano::applications::poisson::vhhjacobi::RegularGridState& getRegularGridState();
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::vhhjacobi::RegularGridVertex, peano::applications::poisson::vhhjacobi::RegularGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::vhhjacobi::RegularGridVertex, peano::applications::poisson::vhhjacobi::RegularGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::vhhjacobi::RegularGridVertex, peano::applications::poisson::vhhjacobi::RegularGridCell>* createEmptyCheckpoint(); 

    virtual void switchToSetupExperiment();    
    virtual void switchToJacobiStep();    
    virtual void switchToJacobiStepAndPlotSolution();    
    virtual void switchToPlotSolution();    

    virtual bool isActiveAdapterSetupExperiment() const;
    virtual bool isActiveAdapterJacobiStep() const;
    virtual bool isActiveAdapterJacobiStepAndPlotSolution() const;
    virtual bool isActiveAdapterPlotSolution() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
