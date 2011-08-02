#include "peano/applications/poisson/jacobitutorial/RegularGridState.h"

/**
 * If we don't include this type, the checkpoint definition would be incomplete.
 */
#include "peano/applications/poisson/jacobitutorial/RegularGridVertex.h"

/**
 * If we don't include this type, the checkpoint definition would be incomplete.
 */
#include "peano/applications/poisson/jacobitutorial/RegularGridCell.h"



peano::applications::poisson::jacobitutorial::RegularGridState::RegularGridState():
  Base() { 
  _stateData.setFileNumber(0);
  _stateData.setOmega(0.8);
}


peano::applications::poisson::jacobitutorial::RegularGridState::RegularGridState(const Base::PersistentState& argument):
  Base(argument) {
}


double peano::applications::poisson::jacobitutorial::RegularGridState::getRelaxationFactor() const {
  return _stateData.getOmega();
}


void peano::applications::poisson::jacobitutorial::RegularGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::jacobitutorial::RegularGridVertex, peano::applications::poisson::jacobitutorial::RegularGridCell>& checkpoint ) const {
  checkpoint.storeValueAsDouble( "state.omega", _stateData.getOmega() );
  checkpoint.storeValueAsInt( "state.filename-counter", _stateData.getFileNumber() );
}


void peano::applications::poisson::jacobitutorial::RegularGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::jacobitutorial::RegularGridVertex, peano::applications::poisson::jacobitutorial::RegularGridCell>& checkpoint ) {
  double newOmega =
    checkpoint.getValueAsDouble( "state.omega" );
  assertionNumericalEquals(newOmega,_stateData.getOmega());

  _stateData.setOmega(newOmega);

  _stateData.setFileNumber( checkpoint.getValueAsInt( "state.filename-counter" ));
}


int peano::applications::poisson::jacobitutorial::RegularGridState::getFilenameCounterAndIncrementIt() {
  _stateData.setFileNumber( _stateData.getFileNumber()+1 );
  return _stateData.getFileNumber()-1;
}


#ifdef Parallel
void peano::applications::poisson::jacobitutorial::RegularGridState::mergeWithWorkerState(const RegularGridState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif

