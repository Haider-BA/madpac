// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_DIFFUSION_EQUATION_EXPLICITTIMESTEPPING_State_H_
#define _PEANO_APPLICATIONS_DIFFUSION_EQUATION_EXPLICITTIMESTEPPING_State_H_


#include "peano/kernel/spacetreegrid/State.h"

#include "peano/applications/diffusionequation/explicittimestepping/records/SpacetreeGridState.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


namespace peano { 
  namespace applications { 
    namespace diffusionequation {
      namespace explicittimestepping { 
        class State;
      }
    }
  }
}


class peano::applications::diffusionequation::explicittimestepping::State {
  public:
    /**
     * Empty Destructor
     */
    virtual ~State() {};

    virtual void setTimeStepSize(double value) = 0;
    virtual double getTimeStepSize() const = 0;

    virtual void setNextTime(double time) = 0;
    virtual double getTime() const = 0;
    virtual int getTimeStep() const = 0;

    /**
     * This value has two semantics: If we do solve a linear equation system,
     * it defines how big the difference from one iterate to the next iterate
     * has been in the corresponding norm. If we do perform a time step (no
     * matter whether it is an explicit or implicit Euler), the value returns
     * the difference of the old to the new step.
     */
    virtual double getUpdateInMaxNorm() const = 0;

    /**
     * This value has two semantics: If we do solve a linear equation system,
     * it defines how big the difference from one iterate to the next iterate
     * has been in the corresponding norm. If we do perform a time step (no
     * matter whether it is an explicit or implicit Euler), the value returns
     * the difference of the old to the new step.
     */
    virtual double getUpdateInHNorm() const = 0;

    virtual double getUInHNorm() const = 0;
    virtual double getUInMaxNorm() const = 0;

    virtual double getUGlobalInHNorm() const = 0;
    virtual double getUGlobalInMaxNorm() const = 0;

    virtual double getNumberOfStencilUpdates() const = 0;

    virtual void clearMeasurements() = 0;

    virtual std::string toString() const = 0;
};


#endif
