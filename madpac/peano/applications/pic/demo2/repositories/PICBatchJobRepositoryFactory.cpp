#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryFactory.h"

#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryForRegularGridStandardImplementation.h"
#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryForSpacetreeGridArrayStackImplementation.h"
#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryForSpacetreeGridFileStackImplementation.h"
#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation.h"
#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryForSpacetreeGridSTDStackImplementation.h"
#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryForSpacetreeGridDynamicStackImplementation.h"

#ifdef Parallel
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "tarch/parallel/NodePool.h"
#endif


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryFactory::PICBatchJobRepositoryFactory() {
  #ifdef Parallel
  peano::kernel::regulargrid::parallel::SetupPartitioner::initDatatypes();
  peano::applications::pic::demo2::RegularGridState::initDatatype();
  peano::applications::pic::demo2::RegularGridVertex::initDatatype();
  peano::applications::pic::demo2::RegularGridVertex::initDatatype();

  if (peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::Datatype==0) {
    peano::applications::pic::demo2::repositories::PICBatchJobRepositoryState::initDatatype();
  }
  #endif
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryFactory::~PICBatchJobRepositoryFactory() {
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryFactory& peano::applications::pic::demo2::repositories::PICBatchJobRepositoryFactory::getInstance() {
  static peano::applications::pic::demo2::repositories::PICBatchJobRepositoryFactory singleton;
  return singleton;
}

    
peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGrid* peano::applications::pic::demo2::repositories::PICBatchJobRepositoryFactory::createRegularGridStandardImplementation(
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
    return new peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation(
      geometry,
      localDomain.getNumberOfGridPoints(),
      peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(localDomain),
      localDomain.getDomainOffset(),
      localDomain.getNeighbourRanks()
    );
  }
  else {
    return new peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation(geometry);
  }
  #else
  return new peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation(geometry, numberOfGridPoints, domainSize, computationalDomainOffset);
  #endif
}

    
peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGrid* 
peano::applications::pic::demo2::repositories::PICBatchJobRepositoryFactory::createSpacetreeGridArrayStackImplementation(
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
    return new peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
  }
  else
  #endif
  return new peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
}    


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGrid* 
peano::applications::pic::demo2::repositories::PICBatchJobRepositoryFactory::createSpacetreeGridFileStackImplementation(
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
    return new peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGridFileStackImplementation(
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
  return new peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGridFileStackImplementation(
    geometry, domainSize, computationalDomainOffset,
    blockSize,
    numberOfBlocks,
    minFillThreshold,
    maxFillThreshold,
    tempFilePrefix    
  );
}   


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGrid* 
peano::applications::pic::demo2::repositories::PICBatchJobRepositoryFactory::createSpacetreeGridSTDDoubleStackImplementation(
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
    return new peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry,initialSize);
  }
  else
  #endif
  return new peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry, domainSize, computationalDomainOffset, initialSize);
}    


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGrid* 
peano::applications::pic::demo2::repositories::PICBatchJobRepositoryFactory::createSpacetreeGridSTDStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry, domainSize, computationalDomainOffset);
}


peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGrid* 
peano::applications::pic::demo2::repositories::PICBatchJobRepositoryFactory::createSpacetreeGridDynamicStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry, domainSize, computationalDomainOffset);
}
