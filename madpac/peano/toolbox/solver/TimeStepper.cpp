#include "peano/toolbox/solver/TimeStepper.h"
#include "tarch/Assertions.h"
#include <limits>


tarch::logging::Log peano::toolbox::solver::TimeStepper::_log( "peano::toolbox::solver::TimeStepper" );


peano::toolbox::solver::TimeStepper::TimeStepper(
  double  initialTimeStepSize,
  double  maxDifferenceFromTimeStepToTimeStepInMaxNorm,
  double  maxDifferenceFromTimeStepToTimeStepInHNorm,
  double  deltaInBetweenTwoSnapshots,
  int     maximumNumberOfIterationsOfLinearEquationSystemSolver
):
  _time(0.0),
  _timeStepSize( initialTimeStepSize ),
  _maxDifferenceFromTimeStepToTimeStepInMaxNorm( maxDifferenceFromTimeStepToTimeStepInMaxNorm ),
  _maxDifferenceFromTimeStepToTimeStepInHNorm( maxDifferenceFromTimeStepToTimeStepInHNorm ),
  _timeInBetweenTwoSnapshots(deltaInBetweenTwoSnapshots),
  _nextSnapshotIsDue(deltaInBetweenTwoSnapshots==0 ? std::numeric_limits<double>::max() : 0.0),
  _maximumNumberOfIterationsOfLinearEquationSystemSolver( maximumNumberOfIterationsOfLinearEquationSystemSolver ) {
  assertion1( _timeStepSize>0.0, _timeStepSize );
  assertion1( _maximumNumberOfIterationsOfLinearEquationSystemSolver>=0, _maximumNumberOfIterationsOfLinearEquationSystemSolver );
}


double peano::toolbox::solver::TimeStepper::getTime() const {
  return _time;
}

double peano::toolbox::solver::TimeStepper::getTimeStepSize() const {
  return _timeStepSize;
}

void peano::toolbox::solver::TimeStepper::switchToNextTimeStep() {
  _time += _timeStepSize;
}


bool peano::toolbox::solver::TimeStepper::shallWriteSnapshot() const {
  return (_time > _nextSnapshotIsDue);
}


void peano::toolbox::solver::TimeStepper::wroteSnapshot() {
  if (_timeInBetweenTwoSnapshots==0.0) {
    _nextSnapshotIsDue = std::numeric_limits<double>::max();
  };

  while (_nextSnapshotIsDue<=_time) {
    _nextSnapshotIsDue += _timeInBetweenTwoSnapshots;
  }
}


void peano::toolbox::solver::TimeStepper::computeNewTimeStepSize(
  double updateInHNorm,
  double updateInMaxNorm,
  int    numberOfIterationsOfPreviousTimeStep
) {
  assertion2(
    (_maximumNumberOfIterationsOfLinearEquationSystemSolver==0  && numberOfIterationsOfPreviousTimeStep==0 ) ||
    ( _maximumNumberOfIterationsOfLinearEquationSystemSolver>0  && numberOfIterationsOfPreviousTimeStep>0 ),
    _maximumNumberOfIterationsOfLinearEquationSystemSolver,
    numberOfIterationsOfPreviousTimeStep
  );
  assertion(updateInHNorm>=0.0);
  assertion(updateInMaxNorm>=0.0);
  assertion(numberOfIterationsOfPreviousTimeStep>=0);

  if (_maxDifferenceFromTimeStepToTimeStepInMaxNorm==0.0) return;
  if (_maxDifferenceFromTimeStepToTimeStepInHNorm==0.0)   return;
  if (updateInHNorm==0.0)                                 return;
  if (updateInMaxNorm==0.0)                               return;

  if (numberOfIterationsOfPreviousTimeStep>_maximumNumberOfIterationsOfLinearEquationSystemSolver-1 && _maximumNumberOfIterationsOfLinearEquationSystemSolver>0) {
    logInfo( "getNewTimeStepSize(...)", "solution did not converge in the time step before, so reduce time step size" );
    _timeStepSize /= 3.0;
    return;
  }

  const double timeStepExtrapolationFactor = 9.0;
  bool hasToReduceTimeStepDueToHNorm    = updateInHNorm   > _maxDifferenceFromTimeStepToTimeStepInHNorm;
  bool hasToReduceTimeStepDueToMaxNorm  = updateInMaxNorm > _maxDifferenceFromTimeStepToTimeStepInMaxNorm;
  bool couldCoarseTimeStepDueToHNorm    = updateInHNorm*timeStepExtrapolationFactor   < _maxDifferenceFromTimeStepToTimeStepInHNorm;
  bool couldCoarseTimeStepDueToMaxNorm  = updateInMaxNorm*timeStepExtrapolationFactor < _maxDifferenceFromTimeStepToTimeStepInMaxNorm;

  if (hasToReduceTimeStepDueToHNorm || hasToReduceTimeStepDueToMaxNorm) {
    logInfo( "getNewTimeStepSize(...)", "solution update of (max=" << updateInMaxNorm << ", h=" << updateInHNorm << ") is bigger than threshold (max=" << _maxDifferenceFromTimeStepToTimeStepInMaxNorm << ",h=" << _maxDifferenceFromTimeStepToTimeStepInHNorm << "), so we reduce time step size" );
    _timeStepSize /= 3.0;
    return;
  }

  if (couldCoarseTimeStepDueToHNorm && couldCoarseTimeStepDueToMaxNorm && !hasToReduceTimeStepDueToHNorm && !hasToReduceTimeStepDueToMaxNorm) {
    logInfo( "getNewTimeStepSize(...)", "solution update of (max=" << updateInMaxNorm << ", h=" << updateInHNorm << ") is smaller than threshold (max=" << _maxDifferenceFromTimeStepToTimeStepInMaxNorm << ",h=" << _maxDifferenceFromTimeStepToTimeStepInHNorm << "), so we increase time step size" );
    _timeStepSize *= 3.0;
    return;
  }
}
