// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_DIFFUSIONEQUATION_EXPLICITTIMESTEPPINGREPOSITORIES_ForwardBatchJobRepository_FACTORY_H_ 
#define _PEANO_APPLICATIONS_DIFFUSIONEQUATION_EXPLICITTIMESTEPPINGREPOSITORIES_ForwardBatchJobRepository_FACTORY_H_


#include "peano/geometry/Geometry.h"
#include "tarch/la/Vector.h"
#include "peano/utils/Globals.h"


namespace peano { 
  namespace applications { 
    namespace diffusionequation { 
      namespace explicittimestepping {
      namespace repositories {
        class ForwardBatchJobRepositoryFactory;
        class ForwardBatchJobRepositoryForRegularGrid;
        class ForwardBatchJobRepositoryForSpacetreeGrid;
      } 
}
}
}
}



/**
 * Factory for the repositories.
 *
 * The factory is a singleton. Use getInstance() to get an instance of the class. 
 *
 * @author PeProt (Peano Prototyping) tool
 */
class peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryFactory {
  private:
    ForwardBatchJobRepositoryFactory();
  public:
    virtual ~ForwardBatchJobRepositoryFactory();
    
    static ForwardBatchJobRepositoryFactory& getInstance();
    
    /**
     * Create instance of repository. You are responsible to delete the instance 
     * in the end.
     *
     * @return New Repository.
     */
    ForwardBatchJobRepositoryForRegularGrid* createRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
    );
};


#endif
