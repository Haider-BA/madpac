#include "peano/applications/pic/demo2/RegularGridState.h"

#include "peano/applications/pic/demo2/RegularGridCell.h"
#include "peano/applications/pic/demo2/RegularGridVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::pic::demo2::RegularGridState::RegularGridState():
  Base() { 
  // @todo Insert your code here
}


peano::applications::pic::demo2::RegularGridState::RegularGridState(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::pic::demo2::RegularGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::RegularGridVertex, peano::applications::pic::demo2::RegularGridCell>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::pic::demo2::RegularGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::RegularGridVertex, peano::applications::pic::demo2::RegularGridCell>& checkpoint ) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::pic::demo2::RegularGridState::mergeWithWorkerState(const RegularGridState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif
 
