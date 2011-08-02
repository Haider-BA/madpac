// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_PIC_DEMO2_REPOSITORIES_PICBatchJobRepository_FOR_SPACETREE_GRID_STD_STACK_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_PIC_DEMO2_REPOSITORIES_PICBatchJobRepository_FOR_SPACETREE_GRID_STD_STACK_IMPLEMENTATION_H_


#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryState.h"
#include "peano/applications/pic/demo2/SpacetreeGridVertex.h"
#include "peano/applications/pic/demo2/SpacetreeGridCell.h"
#include "peano/applications/pic/demo2/SpacetreeGridState.h"

#include "peano/kernel/spacetreegrid/Grid.h"
#include "peano/kernel/stacks/CellSTDStack.h"
#include "peano/kernel/stacks/VertexSTDStack.h"

#include "tarch/logging/Log.h"


 #include "peano/applications/pic/demo2/adapters/SpacetreeGrid2SetupExperiment.h" 
 #include "peano/applications/pic/demo2/adapters/SpacetreeGrid2SetupExperimentAndPlot.h" 



namespace peano { 
  namespace applications { 
    namespace pic { 
      namespace demo2 {
      namespace repositories {
        class PICBatchJobRepositoryForSpacetreeGridSTDStackImplementation;  
      }
}
}
}
}


class peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGridSTDStackImplementation: public peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;
    
    typedef peano::kernel::stacks::CellSTDStack<peano::applications::pic::demo2::SpacetreeGridCell>       CellStack;
    typedef peano::kernel::stacks::VertexSTDStack<peano::applications::pic::demo2::SpacetreeGridVertex>   VertexStack;

    CellStack    _cellStack;
    VertexStack  _vertexStack;
   peano::applications::pic::demo2::SpacetreeGridState          _solverState;

    peano::kernel::spacetreegrid::Grid<peano::applications::pic::demo2::SpacetreeGridVertex,peano::applications::pic::demo2::SpacetreeGridCell,peano::applications::pic::demo2::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetupExperiment> _gridWithSetupExperiment;
    peano::kernel::spacetreegrid::Grid<peano::applications::pic::demo2::SpacetreeGridVertex,peano::applications::pic::demo2::SpacetreeGridCell,peano::applications::pic::demo2::SpacetreeGridState,VertexStack,CellStack,adapters::SpacetreeGrid2SetupExperimentAndPlot> _gridWithSetupExperimentAndPlot;

   
    int _countSetupExperimentRuns;
    int _countSetupExperimentAndPlotRuns;

    double _measureSetupExperimentCPUTime;
    double _measureSetupExperimentAndPlotCPUTime;

    double _measureSetupExperimentCalendarTime;
    double _measureSetupExperimentAndPlotCalendarTime;

  
   peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState               _repositoryState;
   
  public:
    PICBatchJobRepositoryForSpacetreeGridSTDStackImplementation(
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
    PICBatchJobRepositoryForSpacetreeGridSTDStackImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual ~PICBatchJobRepositoryForSpacetreeGridSTDStackImplementation();

    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
      const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      int                                          domainLevel
    );
         
    virtual void terminate();
        
    virtual peano::applications::pic::demo2::State& getState();
    virtual peano::applications::pic::demo2::SpacetreeGridState& getSpacetreeGridState();
    
    virtual void iterate();

    #ifdef CCA
    virtual void logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const;
    #endif
    virtual void logIterationStatistics() const;
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::SpacetreeGridVertex, peano::applications::pic::demo2::SpacetreeGridCell> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::SpacetreeGridVertex, peano::applications::pic::demo2::SpacetreeGridCell> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::SpacetreeGridVertex, peano::applications::pic::demo2::SpacetreeGridCell>* createEmptyCheckpoint(); 

    virtual void switchToSetupExperiment();    
    virtual void switchToSetupExperimentAndPlot();    

    virtual bool isActiveAdapterSetupExperiment() const;
    virtual bool isActiveAdapterSetupExperimentAndPlot() const;

   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
