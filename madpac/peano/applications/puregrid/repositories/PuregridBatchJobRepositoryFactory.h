// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_PUREGRIDREPOSITORIES_PuregridBatchJobRepository_FACTORY_H_ 
#define _PEANO_APPLICATIONS_PUREGRIDREPOSITORIES_PuregridBatchJobRepository_FACTORY_H_


#include "peano/geometry/Geometry.h"
#include "tarch/la/Vector.h"
#include "peano/utils/Globals.h"


namespace peano { 
  namespace applications { 
    namespace puregrid {
      namespace repositories {
        class PuregridBatchJobRepositoryFactory;
        class PuregridBatchJobRepositoryForRegularGrid;
        class PuregridBatchJobRepositoryForSpacetreeGrid;
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
class peano::applications::puregrid::repositories::PuregridBatchJobRepositoryFactory {
  private:
    PuregridBatchJobRepositoryFactory();
  public:
    virtual ~PuregridBatchJobRepositoryFactory();
    
    static PuregridBatchJobRepositoryFactory& getInstance();
    
    /**
     * Create instance of repository. You are responsible to delete the instance 
     * in the end.
     *
     * @return New Repository.
     */
    PuregridBatchJobRepositoryForRegularGrid* createRegularGridStandardImplementation(
      peano::geometry::Geometry&                   geometry,
      const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
    );
    
    /**
     * Create instance of repository. You are responsible to delete the instance 
     * in the end.
     *
     * @return New Repository.
     */
    PuregridBatchJobRepositoryForSpacetreeGrid* createSpacetreeGridArrayStackImplementation(
      peano::geometry::Geometry&                   geometry,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
      int                                          maxCellStackSize,    
      int                                          maxVertexStackSize,    
      int                                          maxTemporaryVertexStackSize    
    );    
    
    /**
     * Create instance of repository. You are responsible to delete the instance 
     * in the end.
     *
     * @return New Repository.
     */
    PuregridBatchJobRepositoryForSpacetreeGrid* createSpacetreeGridFileStackImplementation(
      peano::geometry::Geometry&                   geometry,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
      int                                          blockSize,
      int                                          numberOfBlocks,
      int                                          minFillThreshold,
      int                                          maxFillThreshold,
      const std::string&                           tempFilePrefix    
    );    
    
    /**
     * Create instance of repository. You are responsible to delete the instance 
     * in the end.
     *
     * @return New Repository.
     */
    PuregridBatchJobRepositoryForSpacetreeGrid* createSpacetreeGridSTDDoubleStackImplementation(
      peano::geometry::Geometry&                   geometry,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
      int                                          initialSize    
    );    
    
    /**
     * Create instance of repository. You are responsible to delete the instance 
     * in the end.
     *
     * @return New Repository.
     */
    PuregridBatchJobRepositoryForSpacetreeGrid* createSpacetreeGridSTDStackImplementation(
      peano::geometry::Geometry&                   geometry,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
    );    

    
    /**
     * Create instance of repository. You are responsible to delete the instance 
     * in the end.
     *
     * @return New Repository.
     */
    PuregridBatchJobRepositoryForSpacetreeGrid* createSpacetreeGridDynamicStackImplementation(
      peano::geometry::Geometry&                   geometry,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
    );    
};


#endif
