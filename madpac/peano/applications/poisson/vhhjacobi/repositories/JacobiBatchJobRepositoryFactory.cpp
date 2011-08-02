#include "peano/applications/poisson/vhhjacobi/repositories/JacobiBatchJobRepositoryFactory.h"

#include "peano/applications/poisson/vhhjacobi/repositories/JacobiBatchJobRepositoryForRegularGridStandardImplementation.h"


#ifdef Parallel
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "tarch/parallel/NodePool.h"
#endif


peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryFactory::JacobiBatchJobRepositoryFactory() {
  #ifdef Parallel
  peano::kernel::regulargrid::parallel::SetupPartitioner::initDatatypes();
  peano::applications::poisson::vhhjacobi::RegularGridState::initDatatype();
  peano::applications::poisson::vhhjacobi::RegularGridVertex::initDatatype();
  peano::applications::poisson::vhhjacobi::RegularGridVertex::initDatatype();

  if (peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryState::Datatype==0) {
    peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryState::initDatatype();
  }
  #endif
}


peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryFactory::~JacobiBatchJobRepositoryFactory() {
}


peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryFactory& peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryFactory::getInstance() {
  static peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryFactory singleton;
  return singleton;
}

    
peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryForRegularGrid* peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryFactory::createRegularGridStandardImplementation(
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
    return new peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation(
      geometry,
      localDomain.getNumberOfGridPoints(),
      peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(localDomain),
      localDomain.getDomainOffset(),
      localDomain.getNeighbourRanks()
    );
  }
  else {
    return new peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation(geometry);
  }
  #else
  return new peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation(geometry, numberOfGridPoints, domainSize, computationalDomainOffset);
  #endif
}

