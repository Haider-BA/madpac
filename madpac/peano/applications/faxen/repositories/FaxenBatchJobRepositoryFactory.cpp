#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryFactory.h"

#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryForRegularGridStandardImplementation.h"
#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryForSpacetreeGridArrayStackImplementation.h"
#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation.h"
#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation.h"
#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryForSpacetreeGridSTDStackImplementation.h"

#ifdef Parallel
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "tarch/parallel/NodePool.h"
#endif


peano::applications::faxen::repositories::FaxenBatchJobRepositoryFactory::FaxenBatchJobRepositoryFactory() {
  #ifdef Parallel
  peano::kernel::regulargrid::parallel::SetupPartitioner::initDatatypes();
  peano::applications::faxen::RegularGridState::initDatatype();
  peano::applications::faxen::RegularGridVertex::initDatatype();
  peano::applications::faxen::RegularGridVertex::initDatatype();

  if (peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::Datatype==0) {
    peano::applications::faxen::repositories::FaxenBatchJobRepositoryState::initDatatype();
  }
  #endif
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryFactory::~FaxenBatchJobRepositoryFactory() {
}


peano::applications::faxen::repositories::FaxenBatchJobRepositoryFactory& peano::applications::faxen::repositories::FaxenBatchJobRepositoryFactory::getInstance() {
  static peano::applications::faxen::repositories::FaxenBatchJobRepositoryFactory singleton;
  return singleton;
}

    
peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGrid* peano::applications::faxen::repositories::FaxenBatchJobRepositoryFactory::createRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
    peano::kernel::regulargrid::parallel::SetupPartitioner partition(
      numberOfGridPoints, tarch::parallel::Node::getInstance().getNumberOfNodes()
    );
    partition.reserveNodes();
    peano::kernel::regulargrid::parallel::messages::ForkMessage localDomain =
      partition.sendForkMessages(
        computationalDomainOffset,
        peano::kernel::regulargrid::getH( domainSize, numberOfGridPoints)
      );
    return new peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation(
      geometry,
      localDomain.getNumberOfGridPoints(),
      peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(localDomain),
      localDomain.getDomainOffset(),
      localDomain.getNeighbourRanks()
    );
  }
  else {
    return new peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation(geometry);
  }
  #else
  return new peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGridStandardImplementation(geometry, numberOfGridPoints, domainSize, computationalDomainOffset);
  #endif
}

    
peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGrid* 
peano::applications::faxen::repositories::FaxenBatchJobRepositoryFactory::createSpacetreeGridArrayStackImplementation(
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
    return new peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
  }
  else
  #endif
  return new peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
}    


peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGrid* 
peano::applications::faxen::repositories::FaxenBatchJobRepositoryFactory::createSpacetreeGridFileStackImplementation(
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
    return new peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation(
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
  return new peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridFileStackImplementation(
    geometry, domainSize, computationalDomainOffset,
    blockSize,
    numberOfBlocks,
    minFillThreshold,
    maxFillThreshold,
    tempFilePrefix    
  );
}   


peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGrid* 
peano::applications::faxen::repositories::FaxenBatchJobRepositoryFactory::createSpacetreeGridSTDDoubleStackImplementation(
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
    return new peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry,initialSize);
  }
  else
  #endif
  return new peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry, domainSize, computationalDomainOffset, initialSize);
}    


peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGrid* 
peano::applications::faxen::repositories::FaxenBatchJobRepositoryFactory::createSpacetreeGridSTDStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry, domainSize, computationalDomainOffset);
}
