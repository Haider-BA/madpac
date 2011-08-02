#include "peano/integration/partitioncoupling/precice/PreciceSolverInterfaceManager.h"


peano::integration::partitioncoupling::precice::PreciceSolverInterfaceManager::
PreciceSolverInterfaceManager(const peano::geometry::precice::configurations::PreciceConfiguration& config):
peano::integration::partitioncoupling::CouplingManager(),
_interface(config.getPreciceSolverInterface()),
_timestepLimit(0.0){
  assertion(_interface != NULL);
}

peano::integration::partitioncoupling::precice::PreciceSolverInterfaceManager::~PreciceSolverInterfaceManager(){}


void peano::integration::partitioncoupling::precice::PreciceSolverInterfaceManager::
initialize(){
  _timestepLimit = _interface->initialize();
}


void peano::integration::partitioncoupling::precice::PreciceSolverInterfaceManager::finalize(){
  assertion(_interface!=NULL);
  _interface->finalize();
}


void peano::integration::partitioncoupling::precice::PreciceSolverInterfaceManager::advance(double timestep){
  assertion(_interface!=NULL);
  assertion1(tarch::la::smaller(timestep,_timestepLimit), "Current timestep exceeds timestep limit given by preCICE!");
  assertion1(_interface->isCouplingOngoing(), "Precice says that the coupling shall not be continued!");
  _timestepLimit = _interface->advance(timestep);
}
