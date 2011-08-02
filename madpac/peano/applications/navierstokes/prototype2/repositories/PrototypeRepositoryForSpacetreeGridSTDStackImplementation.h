// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_REPOSITORIES_PrototypeRepository_FOR_SPACETREE_GRID_STD_STACK_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_REPOSITORIES_PrototypeRepository_FOR_SPACETREE_GRID_STD_STACK_IMPLEMENTATION_H_


#include "peano/applications/navierstokes/prototype2/repositories/PrototypeRepositoryForSpacetreeGrid.h"

#include "peano/applications/navierstokes/prototype2/repositories/PrototypeRepositoryState.h"
#include "peano/applications/navierstokes/prototype2/SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype2/SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype2/SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit.h"

#include "peano/kernel/spacetreegrid/Grid.h"
#include "peano/kernel/stacks/CellSTDStack.h"
#include "peano/kernel/stacks/VertexSTDStack.h"

#include "tarch/logging/Log.h"





namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype2 {
      namespace repositories {
        class PrototypeRepositoryForSpacetreeGridSTDStackImplementation;  
      }
}
}
}
}


class peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation: public peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForSpacetreeGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;
    
    typedef peano::kernel::stacks::CellSTDStack<peano::applications::navierstokes::prototype2::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit>       CellStack;
    typedef peano::kernel::stacks::VertexSTDStack<peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit>   VertexStack;

    CellStack    _cellStack;
    VertexStack  _vertexStack;
   peano::applications::navierstokes::prototype2::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit          _solverState;


   



  
   peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryState               _repositoryState;
   
  public:
    PrototypeRepositoryForSpacetreeGridSTDStackImplementation(
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
    PrototypeRepositoryForSpacetreeGridSTDStackImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual ~PrototypeRepositoryForSpacetreeGridSTDStackImplementation();

    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
      const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      int                                          domainLevel
    );
         
    virtual void terminate();
        
    virtual peano::applications::navierstokes::prototype2::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit& getState();
    
    virtual void iterate();
    virtual void logIterationStatistics() const;
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit>* createEmptyCheckpoint(); 



   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
