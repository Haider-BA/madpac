#include "peano/toolbox/solver/Smoother.h"
#include "tarch/Assertions.h"


peano::toolbox::solver::Smoother::Smoother():
  _omega(1.0),
  _normOfSolutionMax(0.0),
  _normOfSolutionH(0.0),
  _maximumOfNormOfMaxSolutionSoFar(0.0),
  _maximumOfNormOfHSolutionSoFar(0.0),
  _measureUpdateUInMaxNorm(0.0),
  _measureUpdateUInHNorm(0.0),
  _numberOfStencilUpdates(0.0) {
}


peano::toolbox::solver::Smoother::Smoother(double newOmega):
  _omega(newOmega) {
}


peano::toolbox::solver::Smoother::~Smoother() {
}


void peano::toolbox::solver::Smoother::updateUpdateFields(
  double update,
  double hVolume
) {
  if (std::abs(update)>_measureUpdateUInMaxNorm) {
    _measureUpdateUInMaxNorm = std::abs(update);
  }
  if (std::abs(update)*hVolume>_measureUpdateUInHNorm) {
    _measureUpdateUInHNorm = std::abs(update)*hVolume;
  }
}


double peano::toolbox::solver::Smoother::getNewValueOfJacobiStep(double u, double residual, double diag, double hVolume) {
  assertion( _omega!=0.0 );
  assertion( diag!=0.0 );

  double update   = _omega*residual/diag;
  double result = u + update;

  updateUpdateFields( update, hVolume );

  if (std::abs(result)>_normOfSolutionMax) {
    _normOfSolutionMax = std::abs(result);
  }
  if (std::abs(result)*hVolume>_normOfSolutionH) {
    _normOfSolutionH = std::abs(result)*hVolume;
  }

  _numberOfStencilUpdates++;

  return result;
}


double peano::toolbox::solver::Smoother::getOmega() {
  return _omega;
}

void peano::toolbox::solver::Smoother::setOmega(double value){
  assertion( value>0.0 );
  assertion( value<2.0 );
  _omega = value;
}


void peano::toolbox::solver::Smoother::updateSoFarFields() {
  if (_normOfSolutionMax>_maximumOfNormOfMaxSolutionSoFar) {
    _maximumOfNormOfMaxSolutionSoFar = _normOfSolutionMax;
  }
  if (_normOfSolutionH>_maximumOfNormOfHSolutionSoFar) {
    _maximumOfNormOfHSolutionSoFar = _normOfSolutionH;
  }
}


void peano::toolbox::solver::Smoother::clearMeasurements() {
  updateSoFarFields();

  _normOfSolutionMax       = 0.0;
  _normOfSolutionH         = 0.0;
  _measureUpdateUInMaxNorm = 0.0;
  _measureUpdateUInHNorm   = 0.0;
  _numberOfStencilUpdates  = 0;
}


double peano::toolbox::solver::Smoother::getSolutionInMaximumNorm() const {
  return _normOfSolutionMax;
}


double peano::toolbox::solver::Smoother::getSolutionInHNorm() const {
  return _normOfSolutionH;
}


double peano::toolbox::solver::Smoother::getSolutionUpdateInMaximumNorm() const {
  return _measureUpdateUInMaxNorm;
}


double peano::toolbox::solver::Smoother::getSolutionUpdateInHNorm() const {
  return _measureUpdateUInHNorm;
}


double peano::toolbox::solver::Smoother::getSolutionInMaximumNormOfGlobalSimulation() const {
  return _maximumOfNormOfMaxSolutionSoFar;
}


double peano::toolbox::solver::Smoother::getSolutionInHNormOfGlobalSimulation() const {
  return _maximumOfNormOfHSolutionSoFar;
}


int peano::toolbox::solver::Smoother::getNumberOfStencilUpdates() const {
  return _numberOfStencilUpdates;
}
