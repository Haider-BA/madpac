#include "peano/applications/poisson/multigrid/repositories/MultigridBatchJobRepositoryFactory.h"

#include "peano/applications/poisson/multigrid/repositories/MultigridBatchJobRepositoryForSpacetreeGridArrayStackImplementation.h"
#include "peano/applications/poisson/multigrid/repositories/MultigridBatchJobRepositoryForSpacetreeGridFileStackImplementation.h"
#include "peano/applications/poisson/multigrid/repositories/MultigridBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation.h"
#include "peano/applications/poisson/multigrid/repositories/MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation.h"
#include "peano/applications/poisson/multigrid/repositories/MultigridBatchJobRepositoryForSpacetreeGridDynamicStackImplementation.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#endif


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryFactory::MultigridBatchJobRepositoryFactory() {
  #ifdef Parallel
  if (peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::Datatype==0) {
    peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryState::initDatatype();
  }
  #endif
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryFactory::~MultigridBatchJobRepositoryFactory() {
}


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryFactory& peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryFactory::getInstance() {
  static peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryFactory singleton;
  return singleton;
}

    
peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGrid* 
peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryFactory::createSpacetreeGridArrayStackImplementation(
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
    return new peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
  }
  else
  #endif
  return new peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
}    


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGrid* 
peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryFactory::createSpacetreeGridFileStackImplementation(
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
    return new peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridFileStackImplementation(
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
  return new peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridFileStackImplementation(
    geometry, domainSize, computationalDomainOffset,
    blockSize,
    numberOfBlocks,
    minFillThreshold,
    maxFillThreshold,
    tempFilePrefix    
  );
}   


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGrid* 
peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryFactory::createSpacetreeGridSTDDoubleStackImplementation(
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
    return new peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry,initialSize);
  }
  else
  #endif
  return new peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry, domainSize, computationalDomainOffset, initialSize);
}    


peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGrid* 
peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryFactory::createSpacetreeGridSTDStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry, domainSize, computationalDomainOffset);
}



peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGrid* 
peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryFactory::createSpacetreeGridDynamicStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry, domainSize, computationalDomainOffset);
}
