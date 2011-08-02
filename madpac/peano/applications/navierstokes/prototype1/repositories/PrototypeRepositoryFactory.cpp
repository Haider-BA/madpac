#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryFactory.h"

#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForRegularGridStandardImplementation.h"
#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForSpacetreeGridArrayStackImplementation.h"
#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForSpacetreeGridFileStackImplementation.h"
#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForSpacetreeGridSTDDoubleStackImplementation.h"
#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForSpacetreeGridSTDStackImplementation.h"
#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForSpacetreeGridDynamicStackImplementation.h"

#ifdef Parallel
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "tarch/parallel/NodePool.h"
#endif


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory::PrototypeRepositoryFactory() {
  #ifdef Parallel
  peano::kernel::regulargrid::parallel::SetupPartitioner::initDatatypes();
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit::initDatatype();
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype();
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype();

  if (peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::Datatype==0) {
    peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryState::initDatatype();
  }
  #endif
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory::~PrototypeRepositoryFactory() {
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory& peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory::getInstance() {
  static peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory singleton;
  return singleton;
}

    
peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForRegularGrid* peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory::createRegularGridStandardImplementation(
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
    return new peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForRegularGridStandardImplementation(
      geometry,
      localDomain.getNumberOfGridPoints(),
      peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(localDomain),
      localDomain.getDomainOffset(),
      localDomain.getNeighbourRanks()
    );
  }
  else {
    return new peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForRegularGridStandardImplementation(geometry);
  }
  #else
  return new peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForRegularGridStandardImplementation(geometry, numberOfGridPoints, domainSize, computationalDomainOffset);
  #endif
}

    
peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGrid* 
peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory::createSpacetreeGridArrayStackImplementation(
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
    return new peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
  }
  else
  #endif
  return new peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
}    


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGrid* 
peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory::createSpacetreeGridFileStackImplementation(
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
    return new peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridFileStackImplementation(
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
  return new peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridFileStackImplementation(
    geometry, domainSize, computationalDomainOffset,
    blockSize,
    numberOfBlocks,
    minFillThreshold,
    maxFillThreshold,
    tempFilePrefix    
  );
}   


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGrid* 
peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory::createSpacetreeGridSTDDoubleStackImplementation(
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
    return new peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry,initialSize);
  }
  else
  #endif
  return new peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry, domainSize, computationalDomainOffset, initialSize);
}    


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGrid* 
peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory::createSpacetreeGridSTDStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridSTDStackImplementation(geometry, domainSize, computationalDomainOffset);
}


peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGrid* 
peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory::createSpacetreeGridDynamicStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForSpacetreeGridDynamicStackImplementation(geometry, domainSize, computationalDomainOffset);
}
