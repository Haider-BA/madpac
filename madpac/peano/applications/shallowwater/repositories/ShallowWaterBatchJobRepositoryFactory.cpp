#include "peano/applications/shallowwater/repositories/ShallowWaterBatchJobRepositoryFactory.h"

#include "peano/applications/shallowwater/repositories/ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation.h"


#ifdef Parallel
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "tarch/parallel/NodePool.h"
#endif


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryFactory::ShallowWaterBatchJobRepositoryFactory() {
  #ifdef Parallel
  peano::kernel::regulargrid::parallel::SetupPartitioner::initDatatypes();
  peano::applications::shallowwater::RegularGridState::initDatatype();
  peano::applications::shallowwater::RegularGridVertex::initDatatype();
  peano::applications::shallowwater::RegularGridVertex::initDatatype();

  if (peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::Datatype==0) {
    peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryState::initDatatype();
  }
  #endif
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryFactory::~ShallowWaterBatchJobRepositoryFactory() {
}


peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryFactory& peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryFactory::getInstance() {
  static peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryFactory singleton;
  return singleton;
}

    
peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGrid* peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryFactory::createRegularGridStandardImplementation(
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
    return new peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation(
      geometry,
      localDomain.getNumberOfGridPoints(),
      peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(localDomain),
      localDomain.getDomainOffset(),
      localDomain.getNeighbourRanks()
    );
  }
  else {
    return new peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation(geometry);
  }
  #else
  return new peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation(geometry, numberOfGridPoints, domainSize, computationalDomainOffset);
  #endif
}

