#include "peano/applications/heatequation/timestepping/SpacetreeGridState.h"

#include "peano/applications/heatequation/timestepping/SpacetreeGridCell.h"
#include "peano/applications/heatequation/timestepping/SpacetreeGridSingleStepVertex.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::heatequation::timestepping::SpacetreeGridState::SpacetreeGridState():
  Base() { 
  _stateData.setTimeStepSize(0.0);
  _stateData.setTimeStep(0);
  _stateData.setTime(0.0);
  _stateData.setUGlobalH(0.0);
  _stateData.setUGlobalMax(0.0);
}


peano::applications::heatequation::timestepping::SpacetreeGridState::SpacetreeGridState(const Base::PersistentState& argument):
  Base(argument) {
}


void peano::applications::heatequation::timestepping::SpacetreeGridState::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex, peano::applications::heatequation::timestepping::SpacetreeGridCell>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::heatequation::timestepping::SpacetreeGridState::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex, peano::applications::heatequation::timestepping::SpacetreeGridCell>& checkpoint ) {
  // @todo Insert your code here
}


int peano::applications::heatequation::timestepping::SpacetreeGridState::getTimeStep() const {
  return _stateData.getTimeStep();
}


void peano::applications::heatequation::timestepping::SpacetreeGridState::setTimeStepSize(double value) {
  assertion( value > 0.0 );
  _stateData.setTimeStepSize(value);
}


void peano::applications::heatequation::timestepping::SpacetreeGridState::setNextTime(double value) {
  assertion1( _stateData.getTimeStepSize()>0.0, _stateData.getTimeStepSize() );
  _stateData.setTimeStep( _stateData.getTimeStep()+1 );
  _stateData.setTime( value );
}


double peano::applications::heatequation::timestepping::SpacetreeGridState::getTimeStepSize() const {
  return _stateData.getTimeStepSize();
}


#ifdef Parallel
void peano::applications::heatequation::timestepping::SpacetreeGridState::mergeWithWorkerState(const SpacetreeGridState& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif


bool peano::applications::heatequation::timestepping::SpacetreeGridState::isRelativeUpdateBelowThreshold( double updateInMaxNorm, double updateInHNorm ) const {
  if (_stateData.getUGlobalH()==0.0 || _stateData.getUGlobalMax()==0.0 ) return false;

  bool result = (_stateData.getUpdateUH()/_stateData.getUGlobalH()     < updateInHNorm)
        && (_stateData.getUpdateUMax()/_stateData.getUGlobalMax() < updateInMaxNorm);

  assertionMsg( false, "not implemented yet ");

/*
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

  */
  return result;
}


void peano::applications::heatequation::timestepping::SpacetreeGridState::setRelaxationFactor( double relaxationFactor ) {
  _stateData.setOmega( relaxationFactor );
}


void peano::applications::heatequation::timestepping::SpacetreeGridState::setMinMaxAllowedMeshSize( double minimalMeshSize, double maximalMeshSize ) {
  assertion( minimalMeshSize<=maximalMeshSize );

  _stateData.setMinimalAllowedMeshSize( minimalMeshSize );
  _stateData.setMaximalAllowedMeshSize( maximalMeshSize );
}


double peano::applications::heatequation::timestepping::SpacetreeGridState::getMaximalAllowedMeshSize() const {
  return _stateData.getMaximalAllowedMeshSize();
}


double peano::applications::heatequation::timestepping::SpacetreeGridState::getTime() const {
  return _stateData.getTime();
}


double peano::applications::heatequation::timestepping::SpacetreeGridState::getMinimalAllowedMeshSize() const {
  return _stateData.getMinimalAllowedMeshSize();
}


double peano::applications::heatequation::timestepping::SpacetreeGridState::getRelaxationFactor() const {
  return _stateData.getOmega();
}


void peano::applications::heatequation::timestepping::SpacetreeGridState::setUMeasurements(
  double updateInMaxNorm,
  double updateInHNorm
) {
  _stateData.setUpdateUH(updateInHNorm);
  _stateData.setUpdateUMax(updateInMaxNorm);
}


void peano::applications::heatequation::timestepping::SpacetreeGridState::setUMeasurements(
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

  assertion(uGlobalInHNorm>=0.0);
  assertion(uGlobalInMaxNorm>=0.0);

  if ( uGlobalInHNorm>_stateData.getUGlobalH() ) {
    _stateData.setUGlobalH(uGlobalInHNorm);
  }
  if ( uGlobalInMaxNorm>_stateData.getUGlobalMax() ) {
    _stateData.setUGlobalMax(uGlobalInMaxNorm);
  }
}


void peano::applications::heatequation::timestepping::SpacetreeGridState::makeFinestLevelTheActiveLevel() {
  _stateData.setActiveLevel( _stateData.getMaxLevel() );
}


int peano::applications::heatequation::timestepping::SpacetreeGridState::getActiveLevel() const {
  return _stateData.getActiveLevel();
}


void peano::applications::heatequation::timestepping::SpacetreeGridState::moveActiveLevelToCoarserGrid() {
  _stateData.setActiveLevel(_stateData.getActiveLevel()-1);
  assertion(_stateData.getActiveLevel()>=1);
}


void peano::applications::heatequation::timestepping::SpacetreeGridState::moveActiveLevelToFinerGrid() {
  _stateData.setActiveLevel(_stateData.getActiveLevel()+1);
  assertion(_stateData.getActiveLevel()<=_stateData.getMaxLevel());
}


bool peano::applications::heatequation::timestepping::SpacetreeGridState::isActiveLevelFinestLevel() const {
  return _stateData.getActiveLevel()==_stateData.getMaxLevel();
}


bool peano::applications::heatequation::timestepping::SpacetreeGridState::isActiveLevelCoarsestLevel() const {
  return _stateData.getActiveLevel()<=1;
}


double peano::applications::heatequation::timestepping::SpacetreeGridState::getUInMaxNorm() const {
  return _stateData.getUMax();
}


double peano::applications::heatequation::timestepping::SpacetreeGridState::getUGlobalInMaxNorm() const {
  return _stateData.getUGlobalMax();
}


double peano::applications::heatequation::timestepping::SpacetreeGridState::getUpdateInMaxNorm() const {
  return _stateData.getUpdateUMax();
}


double peano::applications::heatequation::timestepping::SpacetreeGridState::getUInHNorm() const {
  return _stateData.getUH();
}


double peano::applications::heatequation::timestepping::SpacetreeGridState::getUGlobalInHNorm() const {
  return _stateData.getUGlobalH();
}


double peano::applications::heatequation::timestepping::SpacetreeGridState::getUpdateInHNorm() const {
  return _stateData.getUpdateUH();
}


double peano::applications::heatequation::timestepping::SpacetreeGridState::getNumberOfStencilUpdates() const {
  return _stateData.getNumberOfStencilUpdates();
}


void peano::applications::heatequation::timestepping::SpacetreeGridState::incNumberOfStencilUpdates(double value) {
  assertion1(value==0.0 || value>=1.0, value);
  _stateData.setNumberOfStencilUpdates(_stateData.getNumberOfStencilUpdates()+value);
}


void peano::applications::heatequation::timestepping::SpacetreeGridState::clearMeasurements() {
  _stateData.setNumberOfStencilUpdates(0.0);
}


std::string peano::applications::heatequation::timestepping::SpacetreeGridState::toString() const {
  return _stateData.toString();
}
