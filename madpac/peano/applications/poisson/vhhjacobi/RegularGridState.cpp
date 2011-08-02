#include "peano/applications/poisson/vhhjacobi/RegularGridState.h"

#include "peano/applications/poisson/vhhjacobi/RegularGridCell.h"
#include "peano/applications/poisson/vhhjacobi/RegularGridVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::poisson::vhhjacobi::RegularGridState::RegularGridState():
  Base() { 
  _stateData.setFileNumber(0);
}


peano::applications::poisson::vhhjacobi::RegularGridState::RegularGridState(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::poisson::vhhjacobi::RegularGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::vhhjacobi::RegularGridVertex, peano::applications::poisson::vhhjacobi::RegularGridCell>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::poisson::vhhjacobi::RegularGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::vhhjacobi::RegularGridVertex, peano::applications::poisson::vhhjacobi::RegularGridCell>& checkpoint ) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::poisson::vhhjacobi::RegularGridState::mergeWithWorkerState(const RegularGridState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif
 

int peano::applications::poisson::vhhjacobi::RegularGridState::getFilenameCounterAndIncrementIt() {
  _stateData.setFileNumber( _stateData.getFileNumber()+1 );
  return _stateData.getFileNumber()-1;
}
