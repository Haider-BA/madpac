#include "peano/applications/faxen/SpacetreeGridState.h"

#include "peano/applications/faxen/SpacetreeGridCell.h"
#include "peano/applications/faxen/SpacetreeGridVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::faxen::SpacetreeGridState::SpacetreeGridState():
  Base() { 
  // @todo Insert your code here
}


peano::applications::faxen::SpacetreeGridState::SpacetreeGridState(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::faxen::SpacetreeGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::SpacetreeGridVertex, peano::applications::faxen::SpacetreeGridCell>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::faxen::SpacetreeGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::SpacetreeGridVertex, peano::applications::faxen::SpacetreeGridCell>& checkpoint ) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::faxen::SpacetreeGridState::mergeWithWorkerState(const SpacetreeGridState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif
 
