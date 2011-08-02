// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_REPOSITORIES_PrototypeRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_
#define PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_REPOSITORIES_PrototypeRepository_FOR_REGULAR_GRID_STANDARD_IMPLEMENTATION_H_


#include "peano/applications/navierstokes/prototype2/repositories/PrototypeRepositoryForRegularGrid.h"

#include "peano/applications/navierstokes/prototype2/repositories/PrototypeRepositoryState.h"
#include "peano/applications/navierstokes/prototype2/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype2/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype2/RegularGridFluidStateEnhancedDivFreeEulerExplicit.h"

#include "peano/kernel/regulargrid/Grid.h"
#include "peano/kernel/regulargrid/GridContainer.h"

#include "tarch/logging/Log.h"





namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype2 {
      namespace repositories {
        class PrototypeRepositoryForRegularGridStandardImplementation;  
      }
}
}
}
}


class peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGridStandardImplementation: public peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryForRegularGrid {
  private:
    static tarch::logging::Log _log;
  
    peano::geometry::Geometry& _geometry;

    peano::kernel::regulargrid::GridContainer<peano::applications::navierstokes::prototype2::RegularGridFluidVertexEnhancedDivFreeEulerExplicit,peano::applications::navierstokes::prototype2::RegularGridFluidCellEnhancedDivFreeEulerExplicit>  _gridContainer;


   



  
   peano::applications::navierstokes::prototype2::RegularGridFluidStateEnhancedDivFreeEulerExplicit            _solverState;
   peano::applications::navierstokes::prototype2::repositories::PrototypeRepositoryState               _repositoryState;
   
  public:
    #ifdef Parallel
    PrototypeRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );
    #else
    PrototypeRepositoryForRegularGridStandardImplementation(
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
    PrototypeRepositoryForRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry
    );
    
    virtual void restart(
      const tarch::la::Vector<DIMENSIONS,int>&                     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&                  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&                  computationalDomainOffset,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
    );     
    virtual void terminate();
    
    
    virtual ~PrototypeRepositoryForRegularGridStandardImplementation();
    
    virtual peano::applications::navierstokes::prototype2::RegularGridFluidStateEnhancedDivFreeEulerExplicit& getState();
    
    virtual void iterate();
    virtual void logIterationStatistics() const;
    
    virtual void writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::RegularGridFluidCellEnhancedDivFreeEulerExplicit> * const checkpoint); 
    virtual void readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::RegularGridFluidCellEnhancedDivFreeEulerExplicit> const * const checkpoint );
    virtual peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::RegularGridFluidCellEnhancedDivFreeEulerExplicit>* createEmptyCheckpoint(); 



   
   #ifdef Parallel
   virtual bool continueToIterate();
   #endif
};


#endif
