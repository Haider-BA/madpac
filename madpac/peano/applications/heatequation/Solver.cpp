#include "peano/applications/heatequation/Solver.h"
#include "tarch/Assertions.h"
#include "peano/toolbox/stencil/StencilFactory.h"
#include "tarch/multicore/Lock.h"


peano::applications::heatequation::Solver::Solver():
  _timeStepSize(0.0) {
  #ifdef Dim2
  _massMatrixWithoutHScaling =
    _elementMatrix.getElementWiseAssemblyMatrix(
      peano::toolbox::stencil::StencilFactory::stencilProduct(
        peano::toolbox::stencil::StencilFactory::get1DMassStencilWithoutHScaling(),
        peano::toolbox::stencil::StencilFactory::get1DMassStencilWithoutHScaling()
      )
    );
  #elif Dim3
  _massMatrixWithoutHScaling =
    _elementMatrix.getElementWiseAssemblyMatrix(
      peano::toolbox::stencil::StencilFactory::stencilProduct(
        peano::toolbox::stencil::StencilFactory::get1DMassStencilWithoutHScaling(),
        peano::toolbox::stencil::StencilFactory::get1DMassStencilWithoutHScaling(),
        peano::toolbox::stencil::StencilFactory::get1DMassStencilWithoutHScaling()
      )
    );
  #else
  #error Dimension not supported
  #endif
}


void peano::applications::heatequation::Solver::setTimeStepSize( double tau ) {
  assertion1( tau > 0.0, tau );
  _timeStepSize = tau;
}


double peano::applications::heatequation::Solver::getTimeStepSize() const {
  return _timeStepSize;
}


double peano::applications::heatequation::Solver::getNewTemperatureForExplicitEulerStep(
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  double                                       residual,
  const double &                               oldTemperature
) {
  const double cellVolume = tarch::la::volume(h);

  assertion1( _timeStepSize>0.0, _timeStepSize );
  assertion1( cellVolume>0.0, cellVolume );

  residual *= _timeStepSize / cellVolume;

  const double diagonalValue = 1.0;
  assertion1( _smoother.getOmega(), 1.0 );

  tarch::multicore::Lock  localLock(_normSemaphore);

  return _smoother.getNewValueOfJacobiStep(oldTemperature,residual,diagonalValue,cellVolume);
}


double peano::applications::heatequation::Solver::getNewTemperatureForImplicitEulerStep(
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  double                                       residual,
  const peano::toolbox::stencil::Stencil&      stencil,
  const double &                               newTemperatureSoFar
) {
  assertion1( _timeStepSize>0.0, _timeStepSize );
  assertion1( tarch::la::volume(h)>0.0, h );

  double diagonalElement = tarch::la::volume(h) * _elementMatrix.getDiagonalElement(_massMatrixWithoutHScaling) + _timeStepSize * _elementMatrix.getDiagonalElement(stencil);
  assertion( diagonalElement>0.0 );

  tarch::multicore::Lock  localLock(_normSemaphore);

  return _smoother.getNewValueOfJacobiStep(
    newTemperatureSoFar,
    residual,
    diagonalElement,
    tarch::la::volume(h)
  );
}


tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::Solver::computeResidualContributionForExplicitEulerStep(
  const tarch::la::Vector<TWO_POWER_D,double>&                      rhss,
  const tarch::la::Vector<TWO_POWER_D,double>&                      oldTemperatures,
  const tarch::la::Vector<DIMENSIONS,double>&                       h,
  const tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double>&  stencils
) const {
  tarch::la::Vector<TWO_POWER_D,double> residual;

  residual = _massMatrixWithoutHScaling * rhss * tarch::la::volume(h);
  peano::toolbox::stencil::ElementWiseAssemblyMatrix localStiffnessMatrix;
  localStiffnessMatrix = _elementMatrix.getElementWiseAssemblyMatrix(stencils);

  residual -= localStiffnessMatrix * oldTemperatures;

  return residual;
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::Solver::computeResidualContributionForImplicitEulerStepFromSolution(
  const tarch::la::Vector<TWO_POWER_D,double>&                      newTemperatures,
  const tarch::la::Vector<DIMENSIONS,double>&                       h,
  const tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double>&  stencils
) const {
  assertion1( _timeStepSize>0.0, _timeStepSize );

  tarch::la::Vector<TWO_POWER_D,double> residual;

  residual = _massMatrixWithoutHScaling * (newTemperatures) * (-tarch::la::volume(h));
  peano::toolbox::stencil::ElementWiseAssemblyMatrix localStiffnessMatrix;
  localStiffnessMatrix = _elementMatrix.getElementWiseAssemblyMatrix(stencils);

  residual -= localStiffnessMatrix * newTemperatures * _timeStepSize;

  return residual;
}


tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::Solver::computeResidualContributionForImplicitEulerStepFromRhs(
  const tarch::la::Vector<TWO_POWER_D,double>&                      rhss,
  const tarch::la::Vector<TWO_POWER_D,double>&                      oldTemperatures,
  const tarch::la::Vector<DIMENSIONS,double>&                       h
) const {
  assertion1( _timeStepSize>0.0, _timeStepSize );

  tarch::la::Vector<TWO_POWER_D,double> residual;

  residual = _massMatrixWithoutHScaling * (rhss * _timeStepSize + oldTemperatures ) * tarch::la::volume(h);

  return residual;
}


void peano::applications::heatequation::Solver::setOmega(double value) {
  _smoother.setOmega(value);
}


void peano::applications::heatequation::Solver::clearMeasurements() {
  _smoother.clearMeasurements();
}


double peano::applications::heatequation::Solver::getSolutionInMaximumNorm() const {
  return _smoother.getSolutionInMaximumNorm();
}


double peano::applications::heatequation::Solver::getSolutionInHNorm() const {
  return _smoother.getSolutionInHNorm();
}


double peano::applications::heatequation::Solver::getSolutionUpdateInMaximumNorm() const {
  return _smoother.getSolutionUpdateInMaximumNorm();
}


double peano::applications::heatequation::Solver::getSolutionUpdateInHNorm() const {
  return _smoother.getSolutionUpdateInHNorm();
}


double peano::applications::heatequation::Solver::getSolutionInMaximumNormOfGlobalSimulation() const {
  return _smoother.getSolutionInMaximumNormOfGlobalSimulation();
}


double peano::applications::heatequation::Solver::getSolutionInHNormOfGlobalSimulation() const {
  return _smoother.getSolutionInHNormOfGlobalSimulation();
}


int peano::applications::heatequation::Solver::getNumberOfStencilUpdates() const {
  return _smoother.getNumberOfStencilUpdates();
}
