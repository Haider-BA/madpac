// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_DIFFUSION_EQUATION_SOLVER_H_
#define _PEANO_APPLICATIONS_DIFFUSION_EQUATION_SOLVER_H_


#include "peano/toolbox/solver/Smoother.h"
#include "peano/toolbox/stencil/Stencil.h"
#include "peano/toolbox/stencil/ElementMatrix.h"
#include "tarch/multicore/BooleanSemaphore.h"


namespace peano {
  namespace applications {
    namespace diffusionequation {
      class Solver;
    }
  }
}


/**
 *
 *
 * !!! Explicit Euler
 *
 * Steps:
 *
 * - beginIteration(): Inform solver about time step size (and remember the
 *   mesh width if you are on the regular grid)
 * - touchVertexFirstTime(): Invoke a clearResidual() call.
 * - handleCell(): Accumulate residual according to
 *   computeResidualContributionForExplicitEulerStep().
 * - touchVertexLastTime(): Call getNewTemperatureForExplicitEulerStep() and
 *   set temperature accordingly. Afterwards, invoke
 *   copyTemperatureToOldTemperature().
 */
class peano::applications::diffusionequation::Solver {
  private:
    /**
     * Whenever the smoother updates the norm fields, that has to be
     * thread-safe!
     */
    tarch::multicore::BooleanSemaphore _normSemaphore;

    double _timeStepSize;

    peano::toolbox::stencil::ElementWiseAssemblyMatrix _massMatrixWithoutHScaling;

    peano::toolbox::stencil::ElementMatrix             _elementMatrix;

  protected:
    peano::toolbox::solver::Smoother                   _smoother;

  public:
    Solver();

    void setTimeStepSize( double tau );
    double getTimeStepSize() const;

    /**
     * Call this
     *
     * - only for inner points and
     * - with the residual computed with the residual computing method from
     *   the explicit Euler.
     *
     * !!! Rationale
     *
     * Method is not const as it updates internal counters/measurements.
     */
    double getNewTemperatureForExplicitEulerStep(
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      double                                       residual,
      const double &                               oldTemperature
    );

    double getNewTemperatureForImplicitEulerStep(
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      double                                       residual,
      const peano::toolbox::stencil::Stencil&      stencil,
      const double &                               newTemperatureSoFar
    );

    /**
     * Please add the result to your residual
     */
    tarch::la::Vector<TWO_POWER_D,double> computeResidualContributionForExplicitEulerStep(
      const tarch::la::Vector<TWO_POWER_D,double>&                      rhss,
      const tarch::la::Vector<TWO_POWER_D,double>&                      oldTemperatures,
      const tarch::la::Vector<DIMENSIONS,double>&                       h,
      const tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double>&  stencils
    ) const;


    /**
     * Computes the cell contribution to the residual for the fine grid, i.e.
     * for the residual
     * @f$ - M(h^d) u(t+\tau ) - \tau A u(t+\tau )@f$
     */
    tarch::la::Vector<TWO_POWER_D,double> computeResidualContributionForImplicitEulerStepFromSolution(
      const tarch::la::Vector<TWO_POWER_D,double>&                      newTemperatures,
      const tarch::la::Vector<DIMENSIONS,double>&                       h,
      const tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double>&  stencils
    ) const;

    /**
     * Computes the cell contribution to the residual for the fine grid, i.e.
     * for the residual
     * @f$ M(h^d) \cdot ( \tau rhss + u(t))@f$
     * This residual computation works only for the fine grid.
     */
    tarch::la::Vector<TWO_POWER_D,double> computeResidualContributionForImplicitEulerStepFromRhs(
      const tarch::la::Vector<TWO_POWER_D,double>&                      rhss,
      const tarch::la::Vector<TWO_POWER_D,double>&                      oldTemperatures,
      const tarch::la::Vector<DIMENSIONS,double>&                       h
    ) const;

    /**
     * Delegate to smoother.
     */
    void clearMeasurements();

    /**
     * Delegate to smoother.
     */
    double getSolutionInMaximumNorm() const;

    /**
     * Delegate to smoother.
     */
    double getSolutionInHNorm() const;

    /**
     * Delegate to smoother. Note that this operation has a twofold semantics
     * depending on the algorithm's state. See State for a detailed
     * description.
     */
    double getSolutionUpdateInMaximumNorm() const;

    /**
     * Delegate to smoother. Note that this operation has a twofold semantics
     * depending on the algorithm's state. See State for a detailed
     * description.
     */
    double getSolutionUpdateInHNorm() const;

    /**
     * Delegate to smoother.
     */
    double getSolutionInMaximumNormOfGlobalSimulation() const;

    /**
     * Delegate to smoother.
     */
    double getSolutionInHNormOfGlobalSimulation() const;

    /**
     * Delegate to smoother.
     */
    int getNumberOfStencilUpdates() const;

    /**
     * Delegate to smoother.
     */
    void setOmega(double value);
};


#endif

