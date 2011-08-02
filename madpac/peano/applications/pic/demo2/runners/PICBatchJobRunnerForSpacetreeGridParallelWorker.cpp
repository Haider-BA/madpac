#include "peano/applications/pic/demo2/runners/PICBatchJobRunnerForSpacetreeGrid.h"


#ifdef Parallel
#include "peano/utils/Globals.h"
#include "tarch/parallel/NodePool.h"
// @todo
//#include "peano/kernel/spacetreegrid/parallel/messages/ForkMessage.h"
//#include "peano/kernel/spacetreegrid/parallel/SetupPartitioner.h"
#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryForSpacetreeGrid.h"


int peano::applications::pic::demo2::runners::PICBatchJobRunnerForSpacetreeGrid::runAsClient(peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForSpacetreeGrid& repository) {
  while ( tarch::parallel::NodePool::getInstance().waitForJob() ) {
//    peano::kernel::spacetreegrid::parallel::messages::ForkMessage forkMessage;
//    forkMessage.receive(tarch::parallel::NodePool::getInstance().getMasterNodeNumber(),tarch::parallel::NodePool::getInstance().getTagForForkMessages());
//    repository.restart(
//      forkMessage.getNumberOfGridPoints(),
//      peano::kernel::spacetreegrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage(forkMessage),
//      forkMessage.getDomainOffset(),
//      forkMessage.getNeighbourRanks(),
//      forkMessage.getTraversalOrderOfNeighbours()
//    );
//
//    while (repository.continueToIterate()) {
//      repository.iterate();
//    }

    // insert your postprocessing here
    // -------------------------------

    // -------------------------------

    repository.terminate();
  }
  return 0;
}
#endif
