#include "peano/applications/pic/demo2/SpacetreeGridState.h"

#include "peano/applications/pic/demo2/SpacetreeGridCell.h"
#include "peano/applications/pic/demo2/SpacetreeGridVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::pic::demo2::SpacetreeGridState::SpacetreeGridState():
  Base() { 
  // @todo Insert your code here
}


peano::applications::pic::demo2::SpacetreeGridState::SpacetreeGridState(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::pic::demo2::SpacetreeGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::SpacetreeGridVertex, peano::applications::pic::demo2::SpacetreeGridCell>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::pic::demo2::SpacetreeGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::SpacetreeGridVertex, peano::applications::pic::demo2::SpacetreeGridCell>& checkpoint ) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::pic::demo2::SpacetreeGridState::mergeWithWorkerState(const SpacetreeGridState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif
 
