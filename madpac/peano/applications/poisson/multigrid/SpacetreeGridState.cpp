#include "peano/applications/poisson/multigrid/SpacetreeGridState.h"

#include "peano/applications/poisson/multigrid/SpacetreeGridCell.h"
#include "peano/applications/poisson/multigrid/SpacetreeGridVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::poisson::multigrid::SpacetreeGridState::SpacetreeGridState():
  Base() { 
  // @todo Insert your code here
}


peano::applications::poisson::multigrid::SpacetreeGridState::SpacetreeGridState(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::poisson::multigrid::SpacetreeGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::multigrid::SpacetreeGridVertex, peano::applications::poisson::multigrid::SpacetreeGridCell>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::poisson::multigrid::SpacetreeGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::multigrid::SpacetreeGridVertex, peano::applications::poisson::multigrid::SpacetreeGridCell>& checkpoint ) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::poisson::multigrid::SpacetreeGridState::mergeWithWorkerState(const SpacetreeGridState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif
 
