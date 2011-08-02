#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryFactory.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridArrayStackImplementation.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridSTDStackImplementation.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridDynamicStackImplementation.h"

#ifdef Parallel
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "tarch/parallel/NodePool.h"
#endif


peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory::BlockLatticeBoltzmannBatchJobRepositoryFactory() {
  #ifdef Parallel
  peano::kernel::regulargrid::parallel::SetupPartitioner::initDatatypes();
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState::initDatatype();
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::initDatatype();
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::initDatatype();

  if (peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryState::Datatype==0) {
    peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryState::initDatatype();
  }
  #endif
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory::~BlockLatticeBoltzmannBatchJobRepositoryFactory() {
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory& peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory::getInstance() {
  static peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory singleton;
  return singleton;
}

    
peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGrid* peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory::createRegularGridStandardImplementation(
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
    return new peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation(
      geometry,
      localDomain.getNumberOfGridPoints(),
      peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(localDomain),
      localDomain.getDomainOffset(),
      localDomain.getNeighbourRanks()
    );
  }
  else {
    return new peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation(geometry);
  }
  #else
  return new peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation(geometry, numberOfGridPoints, domainSize, computationalDomainOffset);
  #endif
}

    
peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid* 
peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory::createSpacetreeGridArrayStackImplementation(
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
    return new peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
  }
  else
  #endif
  return new peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
}    


peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid* 
peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory::createSpacetreeGridFileStackImplementation(
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
    return new peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation(
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
  return new peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation(
    geometry, domainSize, computationalDomainOffset,
    blockSize,
    numberOfBlocks,
    minFillThreshold,
    maxFillThreshold,
    tempFilePrefix    
  );
}   


peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid* 
peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory::createSpacetreeGridSTDDoubleStackImplementation(
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
    return new peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry,initialSize);
  }
  else
  #endif
  return new peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry, domainSize, computationalDomainOffset, initialSize);
}    


peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid* 
peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory::createSpacetreeGridSTDStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry, domainSize, computationalDomainOffset);
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid* 
peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory::createSpacetreeGridDynamicStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry, domainSize, computationalDomainOffset);
}
