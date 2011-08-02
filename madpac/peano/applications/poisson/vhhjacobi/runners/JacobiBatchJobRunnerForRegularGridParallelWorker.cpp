#include "peano/applications/poisson/vhhjacobi/runners/JacobiBatchJobRunnerForRegularGrid.h"


#ifdef Parallel
#include "peano/utils/Globals.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/regulargrid/parallel/messages/ForkMessage.h"
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "peano/applications/poisson/vhhjacobi/repositories/JacobiBatchJobRepositoryForRegularGrid.h"


int peano::applications::poisson::vhhjacobi::runners::JacobiBatchJobRunnerForRegularGrid::runAsClient(peano::applications::poisson::vhhjacobi::repositories::JacobiBatchJobRepositoryForRegularGrid& repository) {
  while ( tarch::parallel::NodePool::getInstance().waitForJob() ) {
    peano::kernel::regulargrid::parallel::messages::ForkMessage forkMessage;
    forkMessage.receive(tarch::parallel::NodePool::getInstance().getMasterNodeNumber(),tarch::parallel::NodePool::getInstance().getTagForForkMessages());
    repository.restart(
      forkMessage.getNumberOfGridPoints(),
      peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(forkMessage),
      forkMessage.getDomainOffset(),
      forkMessage.getNeighbourRanks()
    );

    while (repository.continueToIterate()) {
      repository.iterate();
    }

    // insert your postprocessing here
    // -------------------------------

    // -------------------------------

    repository.terminate();
  }
  return 0;
}
#endif
