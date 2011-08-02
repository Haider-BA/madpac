#include "peano/applications/pic/demo/runners/PICBatchJobRunnerForSpacetreeGrid.h"


#ifdef Parallel
#include "peano/utils/Globals.h"
#include "tarch/parallel/NodePool.h"
/// t.b.d.
//#include "peano/kernel/spacetreegrid/parallel/messages/ForkMessage.h"
//#include "peano/kernel/spacetreegrid/parallel/SetupPartitioner.h"
#include "peano/applications/pic/demo/repositories/PICBatchJobRepositoryForSpacetreeGrid.h"


int peano::applications::pic::demo::runners::PICBatchJobRunnerForSpacetreeGrid::runAsClient(peano::applications::pic::demo::repositories::PICBatchJobRepositoryForSpacetreeGrid& repository) {
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
//
    // insert your postprocessing here
    // -------------------------------

    // -------------------------------

    repository.terminate();
  }
  return 0;
}
#endif
