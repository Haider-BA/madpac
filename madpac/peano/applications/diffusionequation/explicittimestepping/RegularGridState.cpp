#include "peano/applications/diffusionequation/explicittimestepping/RegularGridState.h"

#include "peano/applications/diffusionequation/explicittimestepping/RegularGridCell.h"
#include "peano/applications/diffusionequation/explicittimestepping/RegularGridVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::diffusionequation::explicittimestepping::RegularGridState::RegularGridState():
  Base() { 
  _stateData.setTimeStepSize(0.0);
  _stateData.setTimeStep(-1);
  _stateData.setTime(0.0);
}


peano::applications::diffusionequation::explicittimestepping::RegularGridState::RegularGridState(const Base::PersistentState& argument):
  Base(argument) {
}


void peano::applications::diffusionequation::explicittimestepping::RegularGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex, peano::applications::diffusionequation::explicittimestepping::RegularGridCell>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::diffusionequation::explicittimestepping::RegularGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex, peano::applications::diffusionequation::explicittimestepping::RegularGridCell>& checkpoint ) {
  // @todo Insert your code here
}


int peano::applications::diffusionequation::explicittimestepping::RegularGridState::getTimeStep() const {
  return _stateData.getTimeStep();
}


void peano::applications::diffusionequation::explicittimestepping::RegularGridState::setTimeStepSize(double value) {
  assertion( value > 0.0 );
  _stateData.setTimeStepSize(value);
}


void peano::applications::diffusionequation::explicittimestepping::RegularGridState::setNextTime(double value) {
  assertion( _stateData.getTimeStepSize()>0.0 );
  _stateData.setTimeStep( _stateData.getTimeStep()+1 );
  _stateData.setTime( value );
}


double peano::applications::diffusionequation::explicittimestepping::RegularGridState::getTimeStepSize() const {
  return _stateData.getTimeStepSize();
}


#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::RegularGridState::mergeWithWorkerState(const RegularGridState& workerState) {
  Base::mergeWithWorkerState(workerState);

  if (_stateData.getUpdateUH()<workerState._stateData.getUpdateUH()) {
    _stateData.setUpdateUH( workerState._stateData.getUpdateUH() );
  }
  if (_stateData.getUpdateUMax()<workerState._stateData.getUpdateUMax()) {
    _stateData.setUpdateUMax( workerState._stateData.getUpdateUMax() );
  }
  if (_stateData.getUH()<workerState._stateData.getUH()) {
    _stateData.setUH( workerState._stateData.getUH() );
  }
  if (_stateData.getUMax()<workerState._stateData.getUMax()) {
    _stateData.setUMax( workerState._stateData.getUMax() );
  }
  if (_stateData.getUGlobalH()<workerState._stateData.getUGlobalH()) {
    _stateData.setUGlobalH( workerState._stateData.getUGlobalH() );
  }
  if (_stateData.getUGlobalMax()<workerState._stateData.getUGlobalMax()) {
    _stateData.setUGlobalMax( workerState._stateData.getUGlobalMax() );
  }
  _stateData.setNumberOfStencilUpdates( _stateData.getNumberOfStencilUpdates() + workerState._stateData.getNumberOfStencilUpdates() );
}
#endif


double peano::applications::diffusionequation::explicittimestepping::RegularGridState::getTime() const {
  return _stateData.getTime();
}


void peano::applications::diffusionequation::explicittimestepping::RegularGridState::setUMeasurements(
  double uInMaxNorm,
  double uGlobalInMaxNorm,
  double updateInMaxNorm,
  double uInHNorm,
  double uGlobalInHNorm,
  double updateInHNorm
) {
  _stateData.setUpdateUH(updateInHNorm);
  _stateData.setUpdateUMax(updateInMaxNorm);
  _stateData.setUH(uInHNorm);
  _stateData.setUMax(uInMaxNorm);
  _stateData.setUGlobalH(uGlobalInHNorm);
  _stateData.setUGlobalMax(uGlobalInMaxNorm);
}


double peano::applications::diffusionequation::explicittimestepping::RegularGridState::getUInMaxNorm() const {
  return _stateData.getUMax();
}


double peano::applications::diffusionequation::explicittimestepping::RegularGridState::getUGlobalInMaxNorm() const {
  return _stateData.getUGlobalMax();
}


double peano::applications::diffusionequation::explicittimestepping::RegularGridState::getUpdateInMaxNorm() const {
  return _stateData.getUpdateUMax();
}


double peano::applications::diffusionequation::explicittimestepping::RegularGridState::getUInHNorm() const {
  return _stateData.getUH();
}


double peano::applications::diffusionequation::explicittimestepping::RegularGridState::getUGlobalInHNorm() const {
  return _stateData.getUGlobalH();
}


double peano::applications::diffusionequation::explicittimestepping::RegularGridState::getUpdateInHNorm() const {
  return _stateData.getUpdateUH();
}


double peano::applications::diffusionequation::explicittimestepping::RegularGridState::getNumberOfStencilUpdates() const {
  return _stateData.getNumberOfStencilUpdates();
}


void peano::applications::diffusionequation::explicittimestepping::RegularGridState::incNumberOfStencilUpdates(double value) {
  assertion1(value==0.0 || value>=1.0, value);
  _stateData.setNumberOfStencilUpdates(_stateData.getNumberOfStencilUpdates()+value);
}


void peano::applications::diffusionequation::explicittimestepping::RegularGridState::clearMeasurements() {
  _stateData.setNumberOfStencilUpdates(0.0);
}


std::string peano::applications::diffusionequation::explicittimestepping::RegularGridState::toString() const {
  return _stateData.toString();
}
