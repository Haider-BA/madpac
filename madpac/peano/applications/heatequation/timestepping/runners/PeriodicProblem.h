// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_RUNNERS_PERIODIC_PROBLEM_H_
#define PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_RUNNERS_PERIODIC_PROBLEM_H_


#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepository.h"
#include "tarch/logging/Log.h"


namespace peano {
  namespace applications {
    namespace heatequation {
      namespace timestepping {
        namespace runners {
          class PeriodicProblem;
        }
      }
    }
  }
}


class peano::applications::heatequation::timestepping::runners::PeriodicProblem {
  private:
    static tarch::logging::Log _log;

    peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepository& _repository;

    double getFirstShotsTime(double numberOfSnapshotsPerSequence, double numberOfSequences );

    static const int MaximumIterations;
  public:
    PeriodicProblem(
      peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepository& repository
    );

    void performOneExplicitEulerTimeStepAndPrintSolution(double timeStepSize);
    void explicitEuler(double timeStepSize, int numberOfSnapshotsPerSequence, int numberOfSequences, double timeStepMaxDifference);

    void performOneImplicitEulerTimeStepAndPrintSolution(double timeStepSize, double accuracy, double relaxationFactor);

    void implicitEulerWithJacobi(
      double timeStepSize,
      double timeStepMaxDifference,
      double accuracy,
      double relaxationFactor,
      int numberOfSnapshotsPerSequence,
      int numberOfSequences
    );

    void vCycle(
      double timeStepSize,
      double timeStepMaxDifference,
      double accuracy,
      double relaxationFactor,
      int    numberOfSnapshotsPerSequence,
      int    numberOfSequences,
      int    numberOfPreSmoothingSteps,
      int    numberOfPostSmoothingSteps
    );

    void oneVCycle(
      double timeStepSize,
      double relaxationFactor,
      int    numberOfPreSmoothingSteps,
      int    numberOfPostSmoothingSteps
    );

    void fmg(
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
    );

    void setupExperiment();
};

#endif
