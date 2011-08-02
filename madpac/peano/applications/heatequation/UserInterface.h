// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_HEATEQUATION_USER_INTERFACE_H_
#define _PEANO_APPLICATIONS_HEATEQUATION_USER_INTERFACE_H_


#include "peano/UserInterface.h"


namespace peano {
  namespace applications {
    namespace heatequation {
      class UserInterface;
    }
  }
}


class peano::applications::heatequation::UserInterface: public peano::UserInterface {
  private:
    int    _numberOfSpacesPerColumn;

    double _globalStencilUpdates;
  public:
    /**
     * For implicit Euler where one header per time step is written
     */
    UserInterface(
      const std::string& experimentTitle,
      double             simulationTime,
      double             timeStepSize,
      double             relaxationFactor,
      double             stencilEvaluationsDoneSoFar = 0.0,
      int                numberOfSpacesPerColumn = 12
    );

    /**
     * For explicit Euler where one header for the whole simulation is sufficient
     */
    UserInterface(
      const std::string& experimentTitle,
      double             timeStepSize,
      int                numberOfSpacesPerColumn = 14
    );

    /**
     * For explicit Euler
     */
    void printIterationInfoForExplicitTimeStepping(
      double t,
      double dt,
      double solutionInMaximumNorm,
      double solutionInMaximumNormOfGlobalSimulation,
      double solutionUpdateInMaximumNorm,
      double solutionInHNorm,
      double solutionInHNormOfGlobalSimulation,
      double solutionUpdateInHNorm,
      double numberOfStencilUpdates
    );

    /**
     * For implicit Euler
     */
    void printIterationInfoForImplicitTimeStepping(
      double solutionInMaximumNorm,
      double solutionInMaximumNormOfGlobalSimulation,
      double solutionUpdateInMaximumNorm,
      double solutionInHNorm,
      double solutionInHNormOfGlobalSimulation,
      double solutionUpdateInHNorm,
      double numberOfStencilUpdates
    );

    double getTotalStencilEvaluations() const;
};


#endif

