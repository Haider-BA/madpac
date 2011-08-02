#include "peano/applications/puregrid/RegularGridState.h"

#include "peano/applications/puregrid/RegularGridCell.h"
#include "peano/applications/puregrid/RegularGridVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::puregrid::RegularGridState::RegularGridState():
  Base() { 
  // @todo Insert your code here
}


peano::applications::puregrid::RegularGridState::RegularGridState(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::puregrid::RegularGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::RegularGridVertex, peano::applications::puregrid::RegularGridCell>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::puregrid::RegularGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::RegularGridVertex, peano::applications::puregrid::RegularGridCell>& checkpoint ) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::puregrid::RegularGridState::mergeWithWorkerState(const RegularGridState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif
 
