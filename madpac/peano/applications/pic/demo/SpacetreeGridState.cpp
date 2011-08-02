#include "peano/applications/pic/demo/SpacetreeGridState.h"

#include "peano/applications/pic/demo/SpacetreeGridCell.h"
#include "peano/applications/pic/demo/SpacetreeGridVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::pic::demo::SpacetreeGridState::SpacetreeGridState():
  Base() { 
  // @todo Insert your code here
}


peano::applications::pic::demo::SpacetreeGridState::SpacetreeGridState(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::pic::demo::SpacetreeGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo::SpacetreeGridVertex, peano::applications::pic::demo::SpacetreeGridCell>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::pic::demo::SpacetreeGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo::SpacetreeGridVertex, peano::applications::pic::demo::SpacetreeGridCell>& checkpoint ) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::pic::demo::SpacetreeGridState::mergeWithWorkerState(const SpacetreeGridState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif
 
