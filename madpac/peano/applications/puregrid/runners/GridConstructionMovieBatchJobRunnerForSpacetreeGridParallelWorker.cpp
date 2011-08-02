#include "peano/applications/puregrid/runners/GridConstructionMovieBatchJobRunnerForSpacetreeGrid.h"


#ifdef Parallel
#include "peano/utils/Globals.h"
#include "tarch/parallel/NodePool.h"
// t.b.d.
//#include "peano/kernel/spacetreegrid/parallel/messages/ForkMessage.h"
//#include "peano/kernel/spacetreegrid/parallel/SetupPartitioner.h"
#include "peano/applications/puregrid/repositories/GridConstructionMovieBatchJobRepositoryForSpacetreeGrid.h"


int peano::applications::puregrid::runners::GridConstructionMovieBatchJobRunnerForSpacetreeGrid::runAsClient(peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGrid& repository) {
  while ( tarch::parallel::NodePool::getInstance().waitForJob() ) {
    assertionMsg( false, "not implemented yet" );
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
