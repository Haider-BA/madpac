#include "peano/applications/pic/demo/repositories/PICBatchJobRepositoryFactory.h"

#include "peano/applications/pic/demo/repositories/PICBatchJobRepositoryForSpacetreeGridArrayStackImplementation.h"
#include "peano/applications/pic/demo/repositories/PICBatchJobRepositoryForSpacetreeGridFileStackImplementation.h"
#include "peano/applications/pic/demo/repositories/PICBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation.h"
#include "peano/applications/pic/demo/repositories/PICBatchJobRepositoryForSpacetreeGridSTDStackImplementation.h"
#include "peano/applications/pic/demo/repositories/PICBatchJobRepositoryForSpacetreeGridDynamicStackImplementation.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#endif


peano::applications::pic::demo::repositories::PICBatchJobRepositoryFactory::PICBatchJobRepositoryFactory() {
  #ifdef Parallel
  if (peano::applications::pic::demo::repositories::PICBatchJobRepositoryState::Datatype==0) {
    peano::applications::pic::demo::repositories::PICBatchJobRepositoryState::initDatatype();
  }
  #endif
}


peano::applications::pic::demo::repositories::PICBatchJobRepositoryFactory::~PICBatchJobRepositoryFactory() {
}


peano::applications::pic::demo::repositories::PICBatchJobRepositoryFactory& peano::applications::pic::demo::repositories::PICBatchJobRepositoryFactory::getInstance() {
  static peano::applications::pic::demo::repositories::PICBatchJobRepositoryFactory singleton;
  return singleton;
}

    
peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGrid* 
peano::applications::pic::demo::repositories::PICBatchJobRepositoryFactory::createSpacetreeGridArrayStackImplementation(
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
    return new peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
  }
  else
  #endif
  return new peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
}    


peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGrid* 
peano::applications::pic::demo::repositories::PICBatchJobRepositoryFactory::createSpacetreeGridFileStackImplementation(
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
    return new peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridFileStackImplementation(
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
  return new peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridFileStackImplementation(
    geometry, domainSize, computationalDomainOffset,
    blockSize,
    numberOfBlocks,
    minFillThreshold,
    maxFillThreshold,
    tempFilePrefix    
  );
}   


peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGrid* 
peano::applications::pic::demo::repositories::PICBatchJobRepositoryFactory::createSpacetreeGridSTDDoubleStackImplementation(
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
    return new peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry,initialSize);
  }
  else
  #endif
  return new peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry, domainSize, computationalDomainOffset, initialSize);
}    


peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGrid* 
peano::applications::pic::demo::repositories::PICBatchJobRepositoryFactory::createSpacetreeGridSTDStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry, domainSize, computationalDomainOffset);
}



peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGrid* 
peano::applications::pic::demo::repositories::PICBatchJobRepositoryFactory::createSpacetreeGridDynamicStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry, domainSize, computationalDomainOffset);
}
