#include "peano/applications/puregrid/repositories/GridConstructionMovieBatchJobRepositoryFactory.h"

#include "peano/applications/puregrid/repositories/GridConstructionMovieBatchJobRepositoryForSpacetreeGridArrayStackImplementation.h"
#include "peano/applications/puregrid/repositories/GridConstructionMovieBatchJobRepositoryForSpacetreeGridFileStackImplementation.h"
#include "peano/applications/puregrid/repositories/GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation.h"
#include "peano/applications/puregrid/repositories/GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDStackImplementation.h"
#include "peano/applications/puregrid/repositories/GridConstructionMovieBatchJobRepositoryForSpacetreeGridDynamicStackImplementation.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#endif


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryFactory::GridConstructionMovieBatchJobRepositoryFactory() {
  #ifdef Parallel
  if (peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::Datatype==0) {
    peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryState::initDatatype();
  }
  #endif
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryFactory::~GridConstructionMovieBatchJobRepositoryFactory() {
}


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryFactory& peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryFactory::getInstance() {
  static peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryFactory singleton;
  return singleton;
}

    
peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGrid* 
peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryFactory::createSpacetreeGridArrayStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  int                                          maxCellStackSize,    
  int                                          maxVertexStackSize,    
  int                                          maxTemporaryVertexStackSize    
) {
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
  }
  else
  #endif
  return new peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
}    


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGrid* 
peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryFactory::createSpacetreeGridFileStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  int                                          blockSize,
  int                                          numberOfBlocks,
  int                                          minFillThreshold,
  int                                          maxFillThreshold,
  const std::string&                           tempFilePrefix    
 ) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridFileStackImplementation(
      geometry,
      blockSize,
      numberOfBlocks,
      minFillThreshold,
      maxFillThreshold,
      tempFilePrefix    
    );
  }
  else
  #endif
  return new peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridFileStackImplementation(
    geometry, domainSize, computationalDomainOffset,
    blockSize,
    numberOfBlocks,
    minFillThreshold,
    maxFillThreshold,
    tempFilePrefix    
  );
}   


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGrid* 
peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryFactory::createSpacetreeGridSTDDoubleStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  int                                          initialSize    
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry,initialSize);
  }
  else
  #endif
  return new peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry, domainSize, computationalDomainOffset, initialSize);
}    


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGrid* 
peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryFactory::createSpacetreeGridSTDStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry, domainSize, computationalDomainOffset);
}



peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGrid* 
peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryFactory::createSpacetreeGridDynamicStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry, domainSize, computationalDomainOffset);
}
