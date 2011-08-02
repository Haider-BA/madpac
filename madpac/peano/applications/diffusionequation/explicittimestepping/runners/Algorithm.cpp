#include "peano/applications/diffusionequation/explicittimestepping/runners/Algorithm.h"
#include "peano/applications/diffusionequation/UserInterface.h"
#include "peano/toolbox/solver/TimeStepper.h"
#include "peano/applications/diffusionequation/explicittimestepping/State.h"


void peano::applications::diffusionequation::explicittimestepping::runners::Algorithm::explicitEuler(
  peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepository&                  repository,
  const peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration&  configuration
) {
  peano::applications::diffusionequation::UserInterface userInterface(
    "Explicit Euler",
    configuration.getInitialTimeStepSize()
  );

  peano::toolbox::solver::TimeStepper timeStepper(
    configuration.getInitialTimeStepSize(),
    configuration.getTimeStepSizeMaxDifference(),
    configuration.getTimeStepSizeMaxDifference(),
    configuration.getSnapshotDelta(),0
  );

  repository.switchToSetupExperiment();
  repository.iterate();

  do {
    repository.getState().clearMeasurements();
    repository.getState().setTimeStepSize(timeStepper.getTimeStepSize());
    repository.getState().setNextTime(timeStepper.getTime());

    if (timeStepper.shallWriteSnapshot()) {
      repository.switchToPerformExplitEulerTimeStepAndPlot();
      timeStepper.wroteSnapshot();
    }
    else {
      repository.switchToPerformExplitEulerTimeStep();
    }

    repository.iterate();

    timeStepper.switchToNextTimeStep();
    timeStepper.computeNewTimeStepSize(
      repository.getState().getUpdateInHNorm(),
      repository.getState().getUpdateInMaxNorm(),
      0
    );

    userInterface.printIterationInfoForExplicitTimeStepping(
      timeStepper.getTime(),
      timeStepper.getTimeStepSize(),
      repository.getState().getUInMaxNorm(),
      repository.getState().getUGlobalInMaxNorm(),
      repository.getState().getUpdateInMaxNorm(),
      repository.getState().getUInHNorm(),
      repository.getState().getUGlobalInHNorm(),
      repository.getState().getUpdateInHNorm(),
      repository.getState().getNumberOfStencilUpdates()
    );
  } while (timeStepper.getTime()<configuration.getTotalTime());

 //  repository.switchToApplyRefineDeleteCriterion(); repository.iterate();
}
