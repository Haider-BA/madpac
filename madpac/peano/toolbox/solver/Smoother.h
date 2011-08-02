// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_TOOLBOX_SOLVER_SMOOTHER_H_
#define _PEANO_TOOLBOX_SOLVER_SMOOTHER_H_


#include "peano/utils/Globals.h"
#include "tarch/la/Vector.h"


namespace peano{
  namespace toolbox{
    namespace solver{
      class Smoother;
    }
  }
}


/**
 * Class for the different smoothers we provide for matrix-free methods.
 */
class peano::toolbox::solver::Smoother {
  protected:
    double _omega;

    /**
     * Norm of the solution in maximum norm.
     */
    double                                             _normOfSolutionMax;

    /**
     * Norm of the solution in h-norm (i.e. L2 if we use equidistant meshes).
     */
    double                                             _normOfSolutionH;

    /**
     * Norm of the solution in maximum norm.
     */
    double                                             _maximumOfNormOfMaxSolutionSoFar;

    /**
     * Norm of the solution in h-norm (i.e. L2 if we use equidistant meshes).
     */
    double                                             _maximumOfNormOfHSolutionSoFar;

   /**
    * Norm of solution update in max norm.
    */
    double                                             _measureUpdateUInMaxNorm;

    /**
     * Norm of solution update in h norm.
     */
    double                                             _measureUpdateUInHNorm;

    int                                                _numberOfStencilUpdates;

    void updateSoFarFields();
  public:
    Smoother();
    Smoother(double newOmega);
    virtual ~Smoother();

    void updateUpdateFields(
      double update,
      double hVolume
    );

    /**
     *
     * !!! Thread Safety
     *
     * This operation is not thread safe. If you use the spacetree and if you
     * trigger this operation within touchVertexLastTime(), there's no need to
     * make the implementation thread-safe as the access to the output stack
     * already is serialised. However, if you use the regular grid, you have
     * to make the whole stuff thread safe.
     *
     * @param hVolume Is the volume of the cells adjacent to the unknown's
     *                vertex. If you set it to 1, the h norm equals the
     *                Eukledian norm (see getSolutionInHNorm()).
     */
    double getNewValueOfJacobiStep(
      double u,
      double residual,
      double diag,
      double hVolume = 1.0
    );

    /**
     * Omega is the relaxation factor
     */
    double getOmega();

    /**
     * Omega is the relaxation factor
     */
    void setOmega(double value);

    /**
     * The solver internally tracks different norms of the solution and of the
     * solution update. For this, you have to call clearMeasurements at the
     * begin of the iteration. At the end of the traversal, you then can read
     * the global values.
     *
     * Before the operation clears all the fields, it copies them to the so-far
     * fields. These fields are important for time-dependent problems where the
     * norms of the solutions have to be tracked
     */
    void clearMeasurements();

    double getSolutionInMaximumNorm() const;
    double getSolutionInHNorm() const;

    double getSolutionUpdateInMaximumNorm() const;
    double getSolutionUpdateInHNorm() const;

    double getSolutionInMaximumNormOfGlobalSimulation() const;
    double getSolutionInHNormOfGlobalSimulation() const;

    int getNumberOfStencilUpdates() const;
};

#endif
