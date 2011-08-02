#include "peano/applications/puregrid/SpacetreeGridState.h"

#include "peano/applications/puregrid/SpacetreeGridCell.h"
#include "peano/applications/puregrid/SpacetreeGridVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::puregrid::SpacetreeGridState::SpacetreeGridState():
  Base() { 
  // @todo Insert your code here
}


peano::applications::puregrid::SpacetreeGridState::SpacetreeGridState(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::puregrid::SpacetreeGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::puregrid::SpacetreeGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell>& checkpoint ) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::puregrid::SpacetreeGridState::mergeWithWorkerState(const SpacetreeGridState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif
 

void peano::applications::puregrid::SpacetreeGridState::setMaximumNumberOfRefinements(int value) {
  _stateData.setMaxRefinementsPerIteration(value);
}


int peano::applications::puregrid::SpacetreeGridState::getMaximumNumberOfRefinements() const {
  return _stateData.getMaxRefinementsPerIteration();
}
