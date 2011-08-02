// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_TOOLBOX_SURPLUS_CALCULATOR_H_
#define _PEANO_TOOLBOX_SURPLUS_CALCULATOR_H_


#include "tarch/logging/Log.h"
#include "peano/toolbox/stencil/ElementMatrix.h"
#include <limits>


namespace peano {
  namespace toolbox {
    namespace solver {
      class SurplusCalculator;
    }
  }
}



/**
 * Encapsulates Smoothness-Based Refinement and Coarsening
 *
 * To use this class, you have to do the following operations:
 *
 * - Add your dof a double vector of size dimensions:
\code
  discard parallelise double linearSurplus[DIMENSIONS];
\endcode
 *   This attribute typically is a discard attribute.
 * - Make your PDE-solver/adapter hold an instance of
 *   this class.
 * - Adopt your adapter accordingly:
 *   - beginIteration(): call the clear operation of this class and set the
 *   - touchVertexFirstTime(): clear the surplus values of your vertex
 *   - touchVertexLastTime(): Include the following statements: \code
  @todo See heatequation/timestepping
\endcode
 *
 *
 * @author Tobias Weinzierl
 * @version $Revision: 1.28 $
 */
class peano::toolbox::solver::SurplusCalculator {
  public:
    enum Action {
      Refine, Delete, NoAction
    };

    static std::string toString( const Action& action );
  private:
    static tarch::logging::Log _log;

    struct Bin {
      int     _numberOfEntries;
      Action  _associatedAction;
    };

    stencil::ElementWiseAssemblyMatrix _elementMatrix[DIMENSIONS];

    double _refinementThreshold;
    double _deleteThreshold;

    Bin*   _bins;

    int    _numberOfBins;
    int    _totalNumberOfSurplusEvaluations;
    int    _maxNumberOfRefinements;
    double _surplusMaximumOnFineGrid;

    double _minimumMeshSize;
    double _maximumMeshSize;
  public:
    SurplusCalculator(
      double refinementThreshold,
      double deleteThreshold,
      double minimumMeshSize,
      double maximumMeshSize,
      int    numberOfBins = 10,
      int    maxNumberOfRefinements = std::numeric_limits<int>::max()
    );
    ~SurplusCalculator();

    /**
     * Is typically called by beginIteration()
     */
    void clearMeasurements();

    /**
     * To be called by each enterCell operation.
     */
    tarch::la::Vector<TWO_POWER_D_TIMES_D,double> getNewLinearSurplus(
      const tarch::la::Vector<TWO_POWER_D,double>&          u,
      const tarch::la::Vector<TWO_POWER_D_TIMES_D,double>&  linearSurplusSoFar
    ) const;

    Action analyse(
      const tarch::la::Vector<DIMENSIONS,double>&   linearSurplus,
      double                                        residual,
      bool                                          isRefined,
      const tarch::la::Vector<DIMENSIONS,double>&   h
    );

    /**
     *
     * This operation is to be invoked by the touchVertexLastTime().
     *
     * !!! Avoid Coarsening of More Than One Level
     *
     * If the vertex that is analyses is refined, i.e. it is refined before we
     * store it away, we set the refinement flag of the @f$ 2^d @f$ coarser
     * vertices to 'do under no circumstances coarse the grid here'.
     *
     * @todo An image/illustration here would be nice
     */
    tarch::la::Vector<TWO_POWER_D_TIMES_D,double> getLinearSurplusContributionFromFineGrid(
      const tarch::la::Vector<DIMENSIONS,double>&  linearSurplusOfFineGridVertex,
      bool                                         fineGridVertexIsUnrefined
    ) const;

    void setMinMaxMeshWidth( double minimumMeshSize, double maximumMeshSize );

    double getMaximumMeshWidth() const;
};


#endif
