#include "peano/applications/faxen/runners/FaxenBatchJobRunnerForSpacetreeGrid.h"


#ifdef Parallel
#include "peano/utils/Globals.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/spacetreegrid/parallel/messages/ForkMessage.h"
#include "peano/kernel/spacetreegrid/parallel/SetupPartitioner.h"
#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryForSpacetreeGrid.h"


int peano::applications::faxen::runners::FaxenBatchJobRunnerForSpacetreeGrid::runAsClient(peano::applications::faxen::repositories::FaxenBatchJobRepositoryForSpacetreeGrid& repository) {
  while ( tarch::parallel::NodePool::getInstance().waitForJob() ) {
    peano::kernel::spacetreegrid::parallel::messages::ForkMessage forkMessage;
    forkMessage.receive(tarch::parallel::NodePool::getInstance().getMasterNodeNumber(),tarch::parallel::NodePool::getInstance().getTagForForkMessages());
    repository.restart(
      forkMessage.getNumberOfGridPoints(),
      peano::kernel::spacetreegrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(forkMessage),
      forkMessage.getDomainOffset(),
      forkMessage.getNeighbourRanks(),
      forkMessage.getTraversalOrderOfNeighbours()
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
