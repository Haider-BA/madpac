#include "peano/applications/heatequation/timestepping/runners/TimeSteppingBatchJobRunnerForSpacetreeGrid.h"


#ifdef Parallel
#include "peano/utils/Globals.h"
#include "tarch/parallel/NodePool.h"
//#include "peano/kernel/spacetreegrid/parallel/messages/ForkMessage.h"
//#include "peano/kernel/spacetreegrid/parallel/SetupPartitioner.h"
#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryForSpacetreeGrid.h"


int peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForSpacetreeGrid::runAsClient(peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGrid& repository) {
//  while ( tarch::parallel::NodePool::getInstance().waitForJob() ) {
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
//    // insert your postprocessing here
//    // -------------------------------
//
//    // -------------------------------
//
//    repository.terminate();
//  }
  return 0;
}
#endif
