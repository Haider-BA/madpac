#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryFactory.h"

#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation.h"
#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryForSpacetreeGridArrayStackImplementation.h"
#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryForSpacetreeGridFileStackImplementation.h"
#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation.h"
#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryForSpacetreeGridSTDStackImplementation.h"
#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation.h"

#ifdef Parallel
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "tarch/parallel/NodePool.h"
#endif


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory::TimeSteppingBatchJobRepositoryFactory() {
  #ifdef Parallel
  peano::kernel::regulargrid::parallel::SetupPartitioner::initDatatypes();
  peano::applications::heatequation::timestepping::RegularGridState::initDatatype();
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::initDatatype();
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::initDatatype();

  if (peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::Datatype==0) {
    peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryState::initDatatype();
  }
  #endif
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory::~TimeSteppingBatchJobRepositoryFactory() {
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory& peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory::getInstance() {
  static peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory singleton;
  return singleton;
}

    
peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGrid* peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory::createRegularGridStandardImplementation(
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
    return new peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation(
      geometry,
      localDomain.getNumberOfGridPoints(),
      peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(localDomain),
      localDomain.getDomainOffset(),
      localDomain.getNeighbourRanks()
    );
  }
  else {
    return new peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation(geometry);
  }
  #else
  return new peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation(geometry, numberOfGridPoints, domainSize, computationalDomainOffset);
  #endif
}

    
peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGrid* 
peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory::createSpacetreeGridArrayStackImplementation(
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
    return new peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
  }
  else
  #endif
  return new peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridArrayStackImplementation(geometry, domainSize, computationalDomainOffset,maxCellStackSize,maxVertexStackSize,maxTemporaryVertexStackSize);
}    


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGrid* 
peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory::createSpacetreeGridFileStackImplementation(
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
    return new peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridFileStackImplementation(
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
  return new peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridFileStackImplementation(
    geometry, domainSize, computationalDomainOffset,
    blockSize,
    numberOfBlocks,
    minFillThreshold,
    maxFillThreshold,
    tempFilePrefix    
  );
}   


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGrid* 
peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory::createSpacetreeGridSTDDoubleStackImplementation(
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
    return new peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry,initialSize);
  }
  else
  #endif
  return new peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(geometry, domainSize, computationalDomainOffset, initialSize);
}    


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGrid* 
peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory::createSpacetreeGridSTDStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridSTDStackImplementation(geometry, domainSize, computationalDomainOffset);
}


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGrid* 
peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory::createSpacetreeGridDynamicStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
) {
  #ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()) {
      tarch::parallel::NodePool::getInstance().waitForAllNodesToBecomeIdle();
  }
    
  if (!tarch::parallel::Node::getInstance().isMasterProcess()) {
    return new peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry);
  }
  else
  #endif
  return new peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(geometry, domainSize, computationalDomainOffset);
}
