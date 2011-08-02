#include "peano/applications/shallowwater/runners/ShallowWaterBatchJobRunnerForRegularGrid.h"


#ifdef Parallel
#include "peano/utils/Globals.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/regulargrid/parallel/messages/ForkMessage.h"
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "peano/applications/puregrid/repositories/TestRepositoryForRegularGrid.h"
#include "peano/applications/shallowwater/repositories/ShallowWaterBatchJobRepositoryForRegularGrid.h"


int peano::applications::shallowwater::runners::ShallowWaterBatchJobRunnerForRegularGrid::runAsClient(peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGrid& repository) {
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
