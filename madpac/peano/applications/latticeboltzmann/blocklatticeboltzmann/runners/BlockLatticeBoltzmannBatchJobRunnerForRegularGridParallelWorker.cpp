#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/runners/BlockLatticeBoltzmannBatchJobRunnerForRegularGrid.h"


#ifdef Parallel
#include "peano/utils/Globals.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/regulargrid/parallel/messages/ForkMessage.h"
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForRegularGrid.h"


int peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForRegularGrid::runAsClient(peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGrid& repository) {
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

      // advance boundary data
      if (repository.isActiveAdapterRegularBlockSolverAdapter() ||
          repository.isActiveAdapterRegularBlockSolverAndVTKOutputAdapter()){
        scenario::latticeboltzmann::blocklatticeboltzmann::services::
        ReceiveBoundaryDataService::getInstance().advance(repository.getRegularGridState().getDt());
      }
    }

    // insert your postprocessing here
    // -------------------------------

    // -------------------------------

    repository.terminate();
  }
  return 0;
}
#endif
