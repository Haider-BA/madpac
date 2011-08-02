#include "peano/integration/partitioncoupling/precice/ReceiveDataFromPrecice.h"


peano::integration::partitioncoupling::precice::ReceiveDataFromPrecice::
ReceiveDataFromPrecice(::precice::SolverInterface *cplInterface):
peano::integration::partitioncoupling::ReceiveData(),
_cplInterface(cplInterface),
_dataIDVelocities(-1),
_dataIDVelocityDeltas(-1),
_meshIDWetSurface(-1)
{
  if (_cplInterface->hasData("Velocities")) {
    _dataIDVelocities = _cplInterface->getDataID("Velocities");
    assertion(_dataIDVelocities != -1);
  }
  if (_cplInterface->hasData("VelocityDeltas")) {
    _dataIDVelocityDeltas = _cplInterface->getDataID("VelocityDeltas");
  }
  if (_cplInterface->hasMesh("WetSurface")) {
    _meshIDWetSurface = _cplInterface->getMeshID("WetSurface");
    assertion(_meshIDWetSurface != -1);
  }
}


tarch::la::Vector<DIMENSIONS,double>
peano::integration::partitioncoupling::precice::ReceiveDataFromPrecice::getVelocity
(const tarch::la::Vector<DIMENSIONS,double> &position)
{
  assertion1(_meshIDWetSurface != -1, "Wet surface not initialised!");
  assertion1(_dataIDVelocities != -1, "Velocities-ID not initialised!");
  tarch::la::Vector<DIMENSIONS,double> velocity(0.0);

  int index = _cplInterface->setReadPosition ( _meshIDWetSurface, tarch::la::raw(position) );
  _cplInterface->readVectorData ( _dataIDVelocities, index, tarch::la::raw(velocity) );
  return velocity;
}


tarch::la::Vector<DIMENSIONS,double>
peano::integration::partitioncoupling::precice::ReceiveDataFromPrecice::getVelocityDelta
(const tarch::la::Vector<DIMENSIONS,double> &position)
{
  assertion1(_meshIDWetSurface != -1, "Wet surface not initialised!");
  assertion1(_dataIDVelocityDeltas != -1, "Velocity-Delta-ID not initialised!");
  tarch::la::Vector<DIMENSIONS,double> velocityDelta(0.0);

  int index = _cplInterface->setReadPosition ( _meshIDWetSurface, tarch::la::raw(position) );
  _cplInterface->readVectorData (_dataIDVelocityDeltas, index, tarch::la::raw(velocityDelta) );
  return velocityDelta;
}
