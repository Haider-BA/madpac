#include "peano/applications/poisson/multigrid/runners/MultigridBatchJobRunnerForSpacetreeGrid.h"


#ifdef Parallel
#include "peano/utils/Globals.h"
#include "tarch/parallel/NodePool.h"
// t.b.d.
//#include "peano/kernel/spacetreegrid/parallel/messages/ForkMessage.h"
//#include "peano/kernel/spacetreegrid/parallel/SetupPartitioner.h"
#include "peano/applications/poisson/multigrid/repositories/MultigridBatchJobRepositoryForSpacetreeGrid.h"


int peano::applications::poisson::multigrid::runners::MultigridBatchJobRunnerForSpacetreeGrid::runAsClient(peano::applications::poisson::multigrid::repositories::MultigridBatchJobRepositoryForSpacetreeGrid& repository) {
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
