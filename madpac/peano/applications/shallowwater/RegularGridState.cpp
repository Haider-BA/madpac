#include "peano/applications/shallowwater/RegularGridState.h"

#include "peano/applications/shallowwater/RegularGridCell.h"
#include "peano/applications/shallowwater/RegularGridVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::shallowwater::RegularGridState::RegularGridState():
  Base() { 
  _stateData.setTimestep(0);
}


peano::applications::shallowwater::RegularGridState::RegularGridState(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::shallowwater::RegularGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::shallowwater::RegularGridVertex, peano::applications::shallowwater::RegularGridCell>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::shallowwater::RegularGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::shallowwater::RegularGridVertex, peano::applications::shallowwater::RegularGridCell>& checkpoint ) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::shallowwater::RegularGridState::mergeWithWorkerState(const RegularGridState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif

int peano::applications::shallowwater::RegularGridState::getTimeStep() {
  return _stateData.getTimestep();
}

void peano::applications::shallowwater::RegularGridState::incrementTimeStep() {
  _stateData.setTimestep( _stateData.getTimestep() + 1 );
}
