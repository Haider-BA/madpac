#include "peano/integration/partitioncoupling/precice/SendDataToPrecice.h"


peano::integration::partitioncoupling::precice::SendDataToPrecice::SendDataToPrecice(
::precice::SolverInterface *cplInterface):
peano::integration::partitioncoupling::SendData(),
_cplInterface(cplInterface),
_dataIDForces(-1),
_meshIDWetSurface(-1){
  if (_cplInterface->hasData("Forces")) {
    _dataIDForces = _cplInterface->getDataID("Forces");
  }
  if (_cplInterface->hasMesh("WetSurface")) {
    _meshIDWetSurface = _cplInterface->getMeshID("WetSurface");
  }
}



void peano::integration::partitioncoupling::precice::SendDataToPrecice::sendForce(
  const tarch::la::Vector<DIMENSIONS,double> &position,
  const tarch::la::Vector<DIMENSIONS,double> &force
){
  assertion1(_meshIDWetSurface != -1, "Wet surface not initialised!");
  assertion1(_dataIDForces != -1, "Forces-ID not initialised!");
  int index = _cplInterface->setWritePosition ( _meshIDWetSurface, tarch::la::raw(position) );
  _cplInterface->writeVectorData ( _dataIDForces, index, tarch::la::raw(force) );
}
