// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_POISSON_VHHJACOBIREPOSITORIES_JacobiBatchJobRepository_FACTORY_H_ 
#define _PEANO_APPLICATIONS_POISSON_VHHJACOBIREPOSITORIES_JacobiBatchJobRepository_FACTORY_H_


#include "peano/geometry/Geometry.h"
#include "tarch/la/Vector.h"
#include "peano/utils/Globals.h"


namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace vhhjacobi {
      namespace repositories {
        class JacobiBatchJobRepositoryFactory;
        class JacobiBatchJobRepositoryForRegularGrid;
        class JacobiBatchJobRepositoryForSpacetreeGrid;
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
class peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryFactory {
  private:
    JacobiBatchJobRepositoryFactory();
  public:
    virtual ~JacobiBatchJobRepositoryFactory();
    
    static JacobiBatchJobRepositoryFactory& getInstance();
    
    /**
     * Create instance of repository. You are responsible to delete the instance 
     * in the end.
     *
     * @return New Repository.
     */
    JacobiBatchJobRepositoryForRegularGrid* createRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
    );
};


#endif
