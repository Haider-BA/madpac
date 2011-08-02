#include "peano/applications/diffusionequation/UserInterface.h"


peano::applications::diffusionequation::UserInterface::UserInterface(
  const std::string& experimentTitle,
  double             timeStepSize,
  int                numberOfSpacesPerColumn
):
   _numberOfSpacesPerColumn(numberOfSpacesPerColumn),
  _globalStencilUpdates(0.0) {
  writeHeader();
  logInfo(
    "UserInterface(...)",
    "|| "     << format(numberOfSpacesPerColumn ,experimentTitle) <<
    "|| dt="  << format(numberOfSpacesPerColumn-3, timeStepSize)
   );
  logInfo(
    "UserInterface(...)",
    "| " << format(numberOfSpacesPerColumn, "t" ) <<
    " | " << format(numberOfSpacesPerColumn, "dt" ) <<
    " | " << format(numberOfSpacesPerColumn, "|u|_max" ) <<
    " | " << format(numberOfSpacesPerColumn, "|u_global|_max" ) <<
    " | " << format(numberOfSpacesPerColumn, "|du|_max" ) <<
    " | " << format(numberOfSpacesPerColumn, "|u|_h" ) <<
    " | " << format(numberOfSpacesPerColumn, "|u_global|_h" ) <<
    " | " << format(numberOfSpacesPerColumn, "|du|_h" ) <<
    " | " << format(numberOfSpacesPerColumn, "mem [m]=MB") <<
    " | " << format(numberOfSpacesPerColumn, "#stencil" ) <<
    " | " << format(numberOfSpacesPerColumn, "#stencil_global") <<
    " | "
  );
}



peano::applications::diffusionequation::UserInterface::UserInterface(
  const std::string& experimentTitle,
  double             simulationTime,
  double             timeStepSize,
  double             relaxationFactor,
  double             stencilEvaluationsDoneSoFar,
  int                numberOfSpacesPerColumn
):
  _numberOfSpacesPerColumn(numberOfSpacesPerColumn),
  _globalStencilUpdates(stencilEvaluationsDoneSoFar) {
  logInfo(
    "UserInterface(...)",
    "|| "     << format(numberOfSpacesPerColumn ,experimentTitle) <<
    "|| t="   << format(numberOfSpacesPerColumn-2, simulationTime) <<
    "|| dt="  << format(numberOfSpacesPerColumn-3, timeStepSize) <<
    "|| omega=" << format(numberOfSpacesPerColumn-4, relaxationFactor)
   );
  logInfo(
    "UserInterface(...)",
    "| " << format(numberOfSpacesPerColumn, "|u|_max" ) <<
    " | " << format(numberOfSpacesPerColumn, "|u_global|_max" ) <<
    " | " << format(numberOfSpacesPerColumn-2, "|du|_max" ) <<
    " | " << format(numberOfSpacesPerColumn, "|u|_h" ) <<
    " | " << format(numberOfSpacesPerColumn, "|u_global|_h" ) <<
    " | " << format(numberOfSpacesPerColumn, "|du|_h" ) <<
    " | " << format(numberOfSpacesPerColumn, "mem [m]=MB") <<
    " | " << format(numberOfSpacesPerColumn, "#stencil" ) <<
    " | " << format(numberOfSpacesPerColumn, "#stencil_global") <<
    " | "
  );
}


void peano::applications::diffusionequation::UserInterface::printIterationInfoForImplicitTimeStepping(
  double solutionInMaximumNorm,
  double solutionInMaximumNormOfGlobalSimulation,
  double solutionUpdateInMaximumNorm,
  double solutionInHNorm,
  double solutionInHNormOfGlobalSimulation,
  double solutionUpdateInHNorm,
  double numberOfStencilUpdates
) {
  _globalStencilUpdates += numberOfStencilUpdates;
  logInfo(
    "printIterationInfo(...)",
    "| " << format(_numberOfSpacesPerColumn, solutionInMaximumNorm) <<
    " | " << format(_numberOfSpacesPerColumn, solutionInMaximumNormOfGlobalSimulation) <<
    " | " << format(_numberOfSpacesPerColumn, solutionUpdateInMaximumNorm) <<
    " | " << format(_numberOfSpacesPerColumn, solutionInHNorm) <<
    " | " << format(_numberOfSpacesPerColumn, solutionInHNormOfGlobalSimulation) <<
    " | " << format(_numberOfSpacesPerColumn, solutionUpdateInHNorm) <<
    " | " << format(_numberOfSpacesPerColumn, getMemoryUsageMB() ) <<
    " | " << format(_numberOfSpacesPerColumn, numberOfStencilUpdates) <<
    " | " << format(_numberOfSpacesPerColumn, _globalStencilUpdates ) <<
    " | "
  );
}


void peano::applications::diffusionequation::UserInterface::printIterationInfoForExplicitTimeStepping(
    double t,
    double dt,
    double solutionInMaximumNorm,
    double solutionInMaximumNormOfGlobalSimulation,
    double solutionUpdateInMaxNorm,
    double solutionInHNorm,
    double solutionInHNormOfGlobalSimulation,
    double solutionUpdateInHNorm,
    double numberOfStencilUpdates
) {
  _globalStencilUpdates += numberOfStencilUpdates;
  logInfo(
    "printIterationInfo(...)",
    "| " << format(_numberOfSpacesPerColumn, t) <<
    " | " << format(_numberOfSpacesPerColumn, dt) <<
    " | " << format(_numberOfSpacesPerColumn, solutionInMaximumNorm) <<
    " | " << format(_numberOfSpacesPerColumn, solutionInMaximumNormOfGlobalSimulation) <<
    " | " << format(_numberOfSpacesPerColumn, solutionUpdateInMaxNorm) <<
    " | " << format(_numberOfSpacesPerColumn, solutionInHNorm) <<
    " | " << format(_numberOfSpacesPerColumn, solutionInHNormOfGlobalSimulation) <<
    " | " << format(_numberOfSpacesPerColumn, solutionUpdateInHNorm) <<
    " | " << format(_numberOfSpacesPerColumn, getMemoryUsageMB() ) <<
    " | " << format(_numberOfSpacesPerColumn, numberOfStencilUpdates) <<
    " | " << format(_numberOfSpacesPerColumn, _globalStencilUpdates ) <<
    " | "
  );
}


double peano::applications::diffusionequation::UserInterface::getTotalStencilEvaluations() const {
  return _globalStencilUpdates;
}
