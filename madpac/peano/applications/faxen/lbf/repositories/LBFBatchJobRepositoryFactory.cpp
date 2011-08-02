#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryFactory.h"

#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryForRegularGridStandardImplementation.h"
#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryForSpacetreeGridArrayStackImplementation.h"
#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryForSpacetreeGridFileStackImplementation.h"
#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation.h"
#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryForSpacetreeGridSTDStackImplementation.h"
#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryForSpacetreeGridDynamicStackImplementation.h"

#ifdef Parallel
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "tarch/parallel/NodePool.h"
#endif


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryFactory::LBFBatchJobRepositoryFactory() {
  #ifdef Parallel
  peano::kernel::regulargrid::parallel::SetupPartitioner::initDatatypes();
  peano::applications::faxen::lbf::RegularGridBlockState::initDatatype();
  peano::applications::faxen::lbf::RegularGridBlockVertex::initDatatype();
  peano::applications::faxen::lbf::RegularGridBlockVertex::initDatatype();

  if (peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::Datatype==0) {
    peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryState::initDatatype();
  }
  #endif
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryFactory::~LBFBatchJobRepositoryFactory() {
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryFactory& peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryFactory::getInstance() {
  static peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryFactory singleton;
  return singleton;
}

    
peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid* peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryFactory::createRegularGridStandardImplementation(
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
    return new peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation(
      geometry,
      localDomain.getNumberOfGridPoints(),
      peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(localDomain),
      localDomain.getDomainOffset(),
      localDomain.getNeighbourRanks()
    );
  }
  else {
    return new peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation(geometry);
  }
  #else
  return new peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGridStandardImplementation(geometry, numberOfGridPoints, domainSize, computationalDomainOffset);
  #endif
}

    
peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGrid* 
peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryFactory::createSpacetreeGridArrayStackImplementation(
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
    return new peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
  }
  else
  #endif
  return new peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
}    


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGrid* 
peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryFactory::createSpacetreeGridFileStackImplementation(
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
    return new peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGridFileStackImplementation(
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
  return new peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGridFileStackImplementation(
    geometry, domainSize, computationalDomainOffset,
    blockSize,
    numberOfBlocks,
    minFillThreshold,
    maxFillThreshold,
    tempFilePrefix    
  );
}   


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGrid* 
peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryFactory::createSpacetreeGridSTDDoubleStackImplementation(
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
    return new peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry,initialSize);
  }
  else
  #endif
  return new peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry, domainSize, computationalDomainOffset, initialSize);
}    


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGrid* 
peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryFactory::createSpacetreeGridSTDStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry, domainSize, computationalDomainOffset);
}


peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGrid* 
peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryFactory::createSpacetreeGridDynamicStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry, domainSize, computationalDomainOffset);
}
