#include "peano/applications/poisson/jacobitutorial/repositories/JacobiBatchJobRepositoryFactory.h"

#include "peano/applications/poisson/jacobitutorial/repositories/JacobiBatchJobRepositoryForRegularGridStandardImplementation.h"


#ifdef Parallel
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "tarch/parallel/NodePool.h"
#endif


peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryFactory::JacobiBatchJobRepositoryFactory() {
  #ifdef Parallel
  peano::kernel::regulargrid::parallel::SetupPartitioner::initDatatypes();
  peano::applications::poisson::jacobitutorial::RegularGridState::initDatatype();
  peano::applications::poisson::jacobitutorial::RegularGridVertex::initDatatype();
  peano::applications::poisson::jacobitutorial::RegularGridVertex::initDatatype();

  if (peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryState::Datatype==0) {
    peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryState::initDatatype();
  }
  #endif
}


peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryFactory::~JacobiBatchJobRepositoryFactory() {
}


peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryFactory& peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryFactory::getInstance() {
  static peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryFactory singleton;
  return singleton;
}

    
peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGrid* peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryFactory::createRegularGridStandardImplementation(
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
    return new peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation(
      geometry,
      localDomain.getNumberOfGridPoints(),
      peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(localDomain),
      localDomain.getDomainOffset(),
      localDomain.getNeighbourRanks()
    );
  }
  else {
    return new peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation(geometry);
  }
  #else
  return new peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation(geometry, numberOfGridPoints, domainSize, computationalDomainOffset);
  #endif
}

