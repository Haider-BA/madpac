// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_TOOLBOX_TIME_STEPPER_H_
#define _PEANO_TOOLBOX_TIME_STEPPER_H_


#include "tarch/logging/Log.h"


namespace peano {
  namespace toolbox {
    namespace solver {
      class TimeStepper;
    }
  }
}


class peano::toolbox::solver::TimeStepper {
  private:
    static tarch::logging::Log _log;

    double  _time;
    double  _timeStepSize;
    double  _maxDifferenceFromTimeStepToTimeStepInMaxNorm;
    double  _maxDifferenceFromTimeStepToTimeStepInHNorm;
    double  _timeInBetweenTwoSnapshots;
    double  _nextSnapshotIsDue;
    int     _maximumNumberOfIterationsOfLinearEquationSystemSolver;
    bool    _writeSnapshot;
  public:
    /**
     * @param maxDifferenceFromTimeStepToTimeStepInMaxNorm           0.0 to switch it off
     * @param deltaInBetweenTwoSnapshots                             Pass a negative value if you are not interested in snapshot information, or 0 if you wanna have snapshots always.
     * @param maximumNumberOfIterationsOfLinearEquationSystemSolver  Set it to 0 if you are using an explicit scheme.
     */
    TimeStepper(
      double  initialTimeStepSize,
      double  maxDifferenceFromTimeStepToTimeStepInMaxNorm,
      double  maxDifferenceFromTimeStepToTimeStepInHNorm,
      double  deltaInBetweenTwoSnapshots,
      int     maximumNumberOfIterationsOfLinearEquationSystemSolver
    );

    double getTime() const;
    double getTimeStepSize() const;

    void switchToNextTimeStep();

    bool shallWriteSnapshot() const;
    void wroteSnapshot();

    /**
     * @param numberOfIterationsOfPreviousTimeStep Pass 0 if you are using an explicit scheme.
     */
    void computeNewTimeStepSize(
      double updateInHNorm,
      double updateInMaxNorm,
      int    numberOfIterationsOfPreviousTimeStep
    );
};


#endif
