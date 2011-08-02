#include "peano/applications/heatequation/timestepping/runners/PeriodicProblem.h"
#include "peano/applications/heatequation/timestepping/State.h"

#include "peano/applications/heatequation/UserInterface.h"

#include "peano/kernel/datatraversal/autotuning/Oracle.h"

#include "peano/toolbox/solver/TimeStepper.h"


tarch::logging::Log peano::applications::heatequation::timestepping::runners::PeriodicProblem::_log( "peano::applications::heatequation::timestepping::runners::PeriodicProblem" );


const int peano::applications::heatequation::timestepping::runners::PeriodicProblem::MaximumIterations(200);


peano::applications::heatequation::timestepping::runners::PeriodicProblem::PeriodicProblem(
  peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepository& repository
):
  _repository(repository) {
}


void peano::applications::heatequation::timestepping::runners::PeriodicProblem::performOneExplicitEulerTimeStepAndPrintSolution(double timeStepSize) {
  _repository.getState().setTimeStepSize(timeStepSize);
  _repository.switchToPerformExplitEulerTimeStep();
  _repository.iterate();
  _repository.switchToPlotSolution();
  _repository.iterate();
}


void peano::applications::heatequation::timestepping::runners::PeriodicProblem::performOneImplicitEulerTimeStepAndPrintSolution(double timeStepSize, double accuracy, double relaxationFactor) {
  _repository.getState().setTimeStepSize(timeStepSize);
  _repository.getState().setRelaxationFactor( relaxationFactor );
  _repository.switchToComputeImplicitSolutionWithJacobi();

  peano::applications::heatequation::UserInterface userInterface(
    "Jacobi",
    _repository.getState().getTimeStepSize() * _repository.getState().getTimeStep(),
    timeStepSize,
    relaxationFactor
  );

  do {
    _repository.iterate();

    userInterface.printIterationInfoForImplicitTimeStepping(
      _repository.getState().getUInMaxNorm(),
      _repository.getState().getUGlobalInMaxNorm(),
      _repository.getState().getUpdateInMaxNorm(),
      _repository.getState().getUInHNorm(),
      _repository.getState().getUGlobalInHNorm(),
      _repository.getState().getUpdateInHNorm(),
      _repository.getState().getNumberOfStencilUpdates()
    );
  } while ((!_repository.getState().isRelativeUpdateBelowThreshold(accuracy,accuracy)));

  _repository.switchToPerformImplicitTimeStepAndPlot();
  _repository.iterate();
}


double peano::applications::heatequation::timestepping::runners::PeriodicProblem::getFirstShotsTime(double numberOfSnapshotsPerSequence, double numberOfSequences ) {
  if (numberOfSnapshotsPerSequence>0 && numberOfSequences==0) {
    return  0.0;
  }
  else if (numberOfSnapshotsPerSequence>0) {
    return 1.0/static_cast<double>(numberOfSnapshotsPerSequence);
  }

  return std::numeric_limits<double>::max();
}


void peano::applications::heatequation::timestepping::runners::PeriodicProblem::explicitEuler(
  double timeStepSize,
  int    numberOfSnapshotsPerSequence,
  int    numberOfSequences,
  double timeStepMaxDifference
) {
  peano::applications::heatequation::UserInterface userInterface(
    "Explicit Euler",
    timeStepSize
  );

  peano::toolbox::solver::TimeStepper timeStepper(timeStepSize,timeStepMaxDifference,timeStepMaxDifference,getFirstShotsTime(numberOfSnapshotsPerSequence, numberOfSequences),0);

  do {
    _repository.getState().clearMeasurements();
    _repository.getState().setTimeStepSize(timeStepper.getTimeStepSize());
    _repository.getState().setNextTime(timeStepper.getTime());

    if (timeStepper.shallWriteSnapshot()) {
      _repository.switchToPerformExplitEulerTimeStepAndPlot();
      timeStepper.wroteSnapshot();
    }
    else {
      _repository.switchToPerformExplitEulerTimeStep();
    }

    _repository.iterate();

    timeStepper.switchToNextTimeStep();
    timeStepper.computeNewTimeStepSize(
      _repository.getState().getUpdateInHNorm(),
      _repository.getState().getUpdateInMaxNorm(),
      0
    );

    userInterface.printIterationInfoForExplicitTimeStepping(
      timeStepper.getTime(),
      timeStepper.getTimeStepSize(),
      _repository.getState().getUInMaxNorm(),
      _repository.getState().getUGlobalInMaxNorm(),
      _repository.getState().getUpdateInMaxNorm(),
      _repository.getState().getUInHNorm(),
      _repository.getState().getUGlobalInHNorm(),
      _repository.getState().getUpdateInHNorm(),
      _repository.getState().getNumberOfStencilUpdates()
    );
  } while (timeStepper.getTime()<1.0*numberOfSequences);
}


void peano::applications::heatequation::timestepping::runners::PeriodicProblem::implicitEulerWithJacobi(
  double timeStepSize,
  double timeStepMaxDifference,
  double accuracy,
  double relaxationFactor,
  int    numberOfSnapshotsPerSequence,
  int    numberOfSequences
) {
  double totalEffort          = 0.0;

  peano::toolbox::solver::TimeStepper timeStepper(timeStepSize,timeStepMaxDifference,timeStepMaxDifference,getFirstShotsTime(numberOfSnapshotsPerSequence, numberOfSequences),MaximumIterations);

  do {
    _repository.getState().setTimeStepSize(timeStepper.getTimeStepSize());
    _repository.getState().setNextTime(timeStepper.getTime());
    _repository.getState().setRelaxationFactor( relaxationFactor );

    peano::applications::heatequation::UserInterface userInterface(
      "Jacobi",
      _repository.getState().getTime(),
      timeStepSize,
      relaxationFactor
    );

    int numberOfIterationSteps = 0;
    _repository.switchToComputeImplicitSolutionWithJacobi();
    do {
      _repository.getState().clearMeasurements();
      _repository.iterate();

      peano::kernel::datatraversal::autotuning::Oracle::getInstance().plotStatistics();

      numberOfIterationSteps++;
      userInterface.printIterationInfoForImplicitTimeStepping(
        _repository.getState().getUInMaxNorm(),
        _repository.getState().getUGlobalInMaxNorm(),
        _repository.getState().getUpdateInMaxNorm(),
        _repository.getState().getUInHNorm(),
        _repository.getState().getUGlobalInHNorm(),
        _repository.getState().getUpdateInHNorm(),
        _repository.getState().getNumberOfStencilUpdates()
      );
      totalEffort += _repository.getState().getNumberOfStencilUpdates();
    } while (
      (!_repository.getState().isRelativeUpdateBelowThreshold(accuracy,accuracy)) &&
      numberOfIterationSteps < MaximumIterations
    );

    _repository.switchToApplyRefineDeleteCriterion();
    _repository.iterate();

    if ( timeStepper.shallWriteSnapshot() ) {
      _repository.switchToPerformImplicitTimeStepAndPlot();
      timeStepper.wroteSnapshot();
    }
    else {
      _repository.switchToPerformImplicitTimeStep();
    }

    _repository.iterate();
    logInfo( "implicitEulerWithJacobi(...)", "used " << numberOfIterationSteps << " iteration step(s); update_h=" << _repository.getState().getUpdateInHNorm() << ", update_max=" << _repository.getState().getUpdateInMaxNorm() );

    timeStepper.switchToNextTimeStep();
    timeStepper.computeNewTimeStepSize(
      _repository.getState().getUpdateInHNorm(),
      _repository.getState().getUpdateInMaxNorm(),
      numberOfIterationSteps
    );
  } while (_repository.getState().getTime()<1.0*numberOfSequences);

  logInfo( "implicitEulerWithJacobi(...)", "total effors: " << totalEffort << " stencil update(s)" );
}




void peano::applications::heatequation::timestepping::runners::PeriodicProblem::oneVCycle(
  double timeStepSize,
  double relaxationFactor,
  int    numberOfPreSmoothingSteps,
  int    numberOfPostSmoothingSteps
) {
  _repository.getState().setRelaxationFactor( relaxationFactor );
  _repository.getState().setTimeStepSize(timeStepSize);
  _repository.getState().clearMeasurements();

  while (!_repository.getState().isActiveLevelCoarsestLevel()) {
    _repository.switchToSmooth();
    for (int i=0; i<numberOfPreSmoothingSteps; i++) {
      logDebug( "oneVCycle(...)", "pre-smoothing step; state=" << _repository.getState().toString() );
      _repository.iterate();
    }
    _repository.switchToCoarse();
    logDebug( "oneVCycle(...)", "ascend; state=" << _repository.getState().toString() );
    _repository.iterate();
  }

  logDebug( "oneVCycle(...)", "solver is on the coarsest level; state=" << _repository.getState().toString() );

  while (!_repository.getState().isActiveLevelFinestLevel()) {
    _repository.switchToProlong();
    logDebug( "oneVCycle(...)", "descend & post-smoothing; state=" << _repository.getState().toString() );
    _repository.iterate();
    _repository.switchToSmooth();
    for (int i=0; i<numberOfPostSmoothingSteps-1; i++) {
      logDebug( "oneVCycle(...)", "post-smoothing step; state=" << _repository.getState().toString() );
      _repository.iterate();
    }
  }
}


void peano::applications::heatequation::timestepping::runners::PeriodicProblem::vCycle(
  double timeStepSize,
  double timeStepMaxDifference,
  double accuracy,
  double relaxationFactor,
  int    numberOfSnapshotsPerSequence,
  int    numberOfSequences,
  int    numberOfPreSmoothingSteps,
  int    numberOfPostSmoothingSteps
) {
  logTraceInWith8Arguments( "vCycle(...)", timeStepSize, timeStepMaxDifference, accuracy, relaxationFactor, numberOfSnapshotsPerSequence, numberOfSequences, numberOfPreSmoothingSteps, numberOfPostSmoothingSteps );

  double totalEffort          = 0.0;

  peano::toolbox::solver::TimeStepper timeStepper(timeStepSize,timeStepMaxDifference,timeStepMaxDifference,getFirstShotsTime(numberOfSnapshotsPerSequence, numberOfSequences),MaximumIterations);

  do {
    _repository.getState().setTimeStepSize(timeStepper.getTimeStepSize());
    _repository.getState().setNextTime(timeStepper.getTime());
    _repository.getState().setRelaxationFactor( relaxationFactor );

    std::ostringstream experimentName;
    experimentName << "V(" << numberOfPreSmoothingSteps << "/" << numberOfPostSmoothingSteps << ")";
    peano::applications::heatequation::UserInterface userInterface(
      experimentName.str(),
      _repository.getState().getTime(),
      timeStepSize,
      relaxationFactor
    );

    int numberOfVCycles = 0;
    do {
      oneVCycle(timeStepSize,relaxationFactor,numberOfPreSmoothingSteps,numberOfPostSmoothingSteps);
      numberOfVCycles++;
      userInterface.printIterationInfoForImplicitTimeStepping(
        _repository.getState().getUInMaxNorm(),
        _repository.getState().getUGlobalInMaxNorm(),
        _repository.getState().getUpdateInMaxNorm(),
        _repository.getState().getUInHNorm(),
        _repository.getState().getUGlobalInHNorm(),
        _repository.getState().getUpdateInHNorm(),
        _repository.getState().getNumberOfStencilUpdates()
      );
      totalEffort += _repository.getState().getNumberOfStencilUpdates();
    } while (
      (!_repository.getState().isRelativeUpdateBelowThreshold(accuracy,accuracy)) &&
      numberOfVCycles < MaximumIterations
    );

    _repository.switchToApplyRefineDeleteCriterion();
    _repository.iterate();

    if ( timeStepper.shallWriteSnapshot() ) {
      _repository.switchToPerformImplicitTimeStepAndPlot();
      timeStepper.wroteSnapshot();
    }
    else {
      _repository.switchToPerformImplicitTimeStep();
    }

    _repository.iterate();
    logInfo( "vCycle(...)", "used " << numberOfVCycles << " V(" << numberOfPreSmoothingSteps << "/" << numberOfPostSmoothingSteps << ")-cycle(s)" );

    timeStepper.switchToNextTimeStep();
    timeStepper.computeNewTimeStepSize(
      _repository.getState().getUpdateInHNorm(),
      _repository.getState().getUpdateInMaxNorm(),
      numberOfVCycles
    );
  } while (_repository.getState().getTime()<1.0*numberOfSequences);

  logInfo( "vCycle(...)", "total effors: " << totalEffort << " stencil update(s)" );
  logTraceOut( "vCycle(...)" );
}


void peano::applications::heatequation::timestepping::runners::PeriodicProblem::setupExperiment() {
  _repository.switchToSetupExperimentAndPlot();
  _repository.iterate();
}


void peano::applications::heatequation::timestepping::runners::PeriodicProblem::fmg(
  double timeStepSize,
  double timeStepMaxDifference,
  double accuracy,
  double relaxationFactor,
  int    numberOfSnapshotsPerSequence,
  int    numberOfSequences,
  int    numberOfPreSmoothingSteps,
  int    numberOfPostSmoothingSteps,
  double refinementPercentage,
  double deletePercentage
) {
  double totalEffort          = 0.0;

  peano::toolbox::solver::TimeStepper timeStepper(timeStepSize,timeStepMaxDifference,timeStepMaxDifference,getFirstShotsTime(numberOfSnapshotsPerSequence, numberOfSequences),MaximumIterations);

  do {
    _repository.getState().setTimeStepSize(timeStepper.getTimeStepSize());
    _repository.getState().setNextTime(timeStepper.getTime());
    _repository.getState().setRelaxationFactor( relaxationFactor );

    std::ostringstream experimentName;
    experimentName << "FMG(" << numberOfPreSmoothingSteps << "/" << numberOfPostSmoothingSteps << ")";
    peano::applications::heatequation::UserInterface userInterface(
      experimentName.str(),
      _repository.getState().getTime(),
      timeStepSize,
      relaxationFactor
    );

    int numberOfVCycles = 0;
    do {
      oneVCycle(timeStepSize,relaxationFactor,numberOfPreSmoothingSteps,numberOfPostSmoothingSteps);
      numberOfVCycles++;
      userInterface.printIterationInfoForImplicitTimeStepping(
        _repository.getState().getUInMaxNorm(),
        _repository.getState().getUGlobalInMaxNorm(),
        _repository.getState().getUpdateInMaxNorm(),
        _repository.getState().getUInHNorm(),
        _repository.getState().getUGlobalInHNorm(),
        _repository.getState().getUpdateInHNorm(),
        _repository.getState().getNumberOfStencilUpdates()
      );
      totalEffort += _repository.getState().getNumberOfStencilUpdates();
      _repository.switchToApplyRefineDeleteCriterion();
      _repository.iterate();
    } while (
      (!_repository.getState().isRelativeUpdateBelowThreshold(accuracy,accuracy)) &&
      numberOfVCycles < MaximumIterations
    );

    if ( timeStepper.shallWriteSnapshot() ) {
      _repository.switchToPerformImplicitTimeStepAndPlot();
      timeStepper.wroteSnapshot();
    }
    else {
      _repository.switchToPerformImplicitTimeStep();
    }

    _repository.iterate();

    logInfo( "fmg(...)", "used " << numberOfVCycles << " V(" << numberOfPreSmoothingSteps << "/" << numberOfPostSmoothingSteps << ")-cycle(s)" );

    if (timeStepper.shallWriteSnapshot()) {
      _repository.switchToPerformImplicitTimeStepAndPlot();
      timeStepper.wroteSnapshot();
    }
    else {
      _repository.switchToPerformImplicitTimeStep();
    }

    _repository.iterate();
    timeStepper.switchToNextTimeStep();
    timeStepper.computeNewTimeStepSize(
      _repository.getState().getUpdateInHNorm(),
      _repository.getState().getUpdateInMaxNorm(),
      numberOfVCycles
    );
  } while (_repository.getState().getTime()<1.0*numberOfSequences);

  logInfo( "fmg(...)", "total effors: " << totalEffort << " stencil update(s)" );
}
