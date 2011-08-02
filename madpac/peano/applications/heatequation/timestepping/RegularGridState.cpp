#include "peano/applications/heatequation/timestepping/RegularGridState.h"

#include "peano/applications/heatequation/timestepping/RegularGridCell.h"
#include "peano/applications/heatequation/timestepping/RegularGridSingleStepVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


tarch::logging::Log peano::applications::heatequation::timestepping::RegularGridState::_log( "peano::applications::heatequation::timestepping::RegularGridState" );


peano::applications::heatequation::timestepping::RegularGridState::RegularGridState():
  Base() { 
  _stateData.setTimeStepSize(0.0);
  _stateData.setTimeStep(0);
  _stateData.setTime(0.0);
}


peano::applications::heatequation::timestepping::RegularGridState::RegularGridState(const Base::PersistentState& argument):
  Base(argument) {
}


void peano::applications::heatequation::timestepping::RegularGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex, peano::applications::heatequation::timestepping::RegularGridCell>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::heatequation::timestepping::RegularGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex, peano::applications::heatequation::timestepping::RegularGridCell>& checkpoint ) {
  // @todo Insert your code here
}


int peano::applications::heatequation::timestepping::RegularGridState::getTimeStep() const {
  return _stateData.getTimeStep();
}


void peano::applications::heatequation::timestepping::RegularGridState::setTimeStepSize(double value) {
  assertion( value > 0.0 );
  _stateData.setTimeStepSize(value);
}


void peano::applications::heatequation::timestepping::RegularGridState::setNextTime(double value) {
  assertion( _stateData.getTimeStepSize()>0.0 );
  _stateData.setTimeStep( _stateData.getTimeStep()+1 );
  _stateData.setTime( value );
}


double peano::applications::heatequation::timestepping::RegularGridState::getTimeStepSize() const {
  return _stateData.getTimeStepSize();
}


#ifdef Parallel
void peano::applications::heatequation::timestepping::RegularGridState::mergeWithWorkerState(const RegularGridState& workerState) {
  logTraceInWith2Arguments( "mergeWithWorkerState(RegularGridState)", toString(), workerState.toString() );

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

  logTraceOutWith2Arguments( "mergeWithWorkerState(RegularGridState)", toString(), workerState.toString() );
}
#endif
 

bool peano::applications::heatequation::timestepping::RegularGridState::isRelativeUpdateBelowThreshold( double updateInMaxNorm, double updateInHNorm ) const {
  if (_stateData.getUGlobalH()==0.0 || _stateData.getUGlobalMax()==0.0 ) return false;

  return
       (_stateData.getUpdateUH()/_stateData.getUGlobalH()     < updateInHNorm)
    && (_stateData.getUpdateUMax()/_stateData.getUGlobalMax() < updateInMaxNorm);
}


double peano::applications::heatequation::timestepping::RegularGridState::getTime() const {
  return _stateData.getTime();
}


void peano::applications::heatequation::timestepping::RegularGridState::setUMeasurements(
  double updateInMaxNorm,
  double updateInHNorm
) {
  _stateData.setUpdateUH(updateInHNorm);
  _stateData.setUpdateUMax(updateInMaxNorm);
}


void peano::applications::heatequation::timestepping::RegularGridState::setUMeasurements(
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


double peano::applications::heatequation::timestepping::RegularGridState::getRelaxationFactor() const {
  return _stateData.getOmega();
}


void peano::applications::heatequation::timestepping::RegularGridState::setRelaxationFactor( double relaxationFactor ) {
  _stateData.setOmega( relaxationFactor );
}


void peano::applications::heatequation::timestepping::RegularGridState::moveActiveLevelToCoarserGrid() {
}


void peano::applications::heatequation::timestepping::RegularGridState::moveActiveLevelToFinerGrid() {
}


bool peano::applications::heatequation::timestepping::RegularGridState::isActiveLevelFinestLevel() const {
  return true;
}


bool peano::applications::heatequation::timestepping::RegularGridState::isActiveLevelCoarsestLevel() const {
  return true;
}


double peano::applications::heatequation::timestepping::RegularGridState::getUInMaxNorm() const {
  return _stateData.getUMax();
}


double peano::applications::heatequation::timestepping::RegularGridState::getUGlobalInMaxNorm() const {
  return _stateData.getUGlobalMax();
}


double peano::applications::heatequation::timestepping::RegularGridState::getUpdateInMaxNorm() const {
  return _stateData.getUpdateUMax();
}


double peano::applications::heatequation::timestepping::RegularGridState::getUInHNorm() const {
  return _stateData.getUH();
}


double peano::applications::heatequation::timestepping::RegularGridState::getUGlobalInHNorm() const {
  return _stateData.getUGlobalH();
}


double peano::applications::heatequation::timestepping::RegularGridState::getUpdateInHNorm() const {
  return _stateData.getUpdateUH();
}


double peano::applications::heatequation::timestepping::RegularGridState::getNumberOfStencilUpdates() const {
  return _stateData.getNumberOfStencilUpdates();
}


void peano::applications::heatequation::timestepping::RegularGridState::incNumberOfStencilUpdates(double value) {
  assertion1(value==0.0 || value>=1.0, value);
  _stateData.setNumberOfStencilUpdates(_stateData.getNumberOfStencilUpdates()+value);
}


void peano::applications::heatequation::timestepping::RegularGridState::clearMeasurements() {
  _stateData.setNumberOfStencilUpdates(0.0);
}


std::string peano::applications::heatequation::timestepping::RegularGridState::toString() const {
  return _stateData.toString();
}
