#include "peano/applications/diffusionequation/explicittimestepping/repositories/ForwardBatchJobRepositoryFactory.h"

#include "peano/applications/diffusionequation/explicittimestepping/repositories/ForwardBatchJobRepositoryForRegularGridStandardImplementation.h"


#ifdef Parallel
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "tarch/parallel/NodePool.h"
#endif


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryFactory::ForwardBatchJobRepositoryFactory() {
  #ifdef Parallel
  peano::kernel::regulargrid::parallel::SetupPartitioner::initDatatypes();
  peano::applications::diffusionequation::explicittimestepping::RegularGridState::initDatatype();
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::initDatatype();
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::initDatatype();

  if (peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::Datatype==0) {
    peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryState::initDatatype();
  }
  #endif
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryFactory::~ForwardBatchJobRepositoryFactory() {
}


peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryFactory& peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryFactory::getInstance() {
  static peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryFactory singleton;
  return singleton;
}

    
peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGrid* peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryFactory::createRegularGridStandardImplementation(
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
    return new peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation(
      geometry,
      localDomain.getNumberOfGridPoints(),
      peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(localDomain),
      localDomain.getDomainOffset(),
      localDomain.getNeighbourRanks()
    );
  }
  else {
    return new peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation(geometry);
  }
  #else
  return new peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation(geometry, numberOfGridPoints, domainSize, computationalDomainOffset);
  #endif
}

