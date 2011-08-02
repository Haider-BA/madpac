// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_TOOLBOX_SOLVER_MULTIGRID_H_
#define _PEANO_TOOLBOX_SOLVER_MULTIGRID_H_

#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/utils/Globals.h"


namespace peano{
  namespace toolbox{
    namespace solver{
       class Multigrid;
    }
  }
}

class peano::toolbox::solver::Multigrid{
  private:
    static tarch::logging::Log _log;

    int _numberOfStencilEvaluations;
  public:

    Multigrid();
    virtual ~Multigrid();

    /**
     * !!! Compute Transfer Contribution Weight for one Individual Fine Grid Vertex
     *     
     * If you wanna compute @f$ Pu_\mbox{coarse} @f$ or @f$ Ru_\mbox{fine} @f$ (for
     * example in a a touchVertex FirstTime() event) for one individual fine
     * grid vertex, you can do this in @f$ 2^d @f$ steps: For each coarse grid
     * vertex
     * - you either compute its contribution/weight to the fine grid value and
     *   scale it with the corresponding coarse grid vertex's value
     *   (prolongation) or
     * - you compute its contribution/weight for the fine grid vertex and
     *   scale it with the fine grid vertex's value (restriction)
     * then you add this value to the fine grid vertex or the corresponding
     * coarse grid value, respectively.
     *
     * To split it up into @f$ 2^d @f$ steps does make sense,
     * as the P stencil of each vertex might be different. This operation
     * implements how to get the weight between fine grid vertex and one
     * coarse grid vertex.
     *
     * @image html Multigrid.png
     *
     * !! Usage (compute Pu, i.e. prolongation, for one individual fine grid vertex)
     *
     * - Create temporary value. It is typically a double, and it represents
     *   the new fine grid value.
     * - Run over all @f$ 2^d @f$ (typically a dfor2 loop):
     *   - We will now compute the contribution of one coarse grid vertex to
     *     our fine grid vertex.
     *   - Take the coarse grid inter-grid transfer stencil. It is a
     *     @f$ 5^d @f$ vector.
     *   - Pass the stencil, the @f$ (0,1)^d @f$ position of the current
     *     coarse grid vertex relative to the current fine grid vertex, and the
     *     fine grid vertex position within the @f$ 4^d @f$ patch to this
     *     operation. You get a weight.
     *   - Multiply this weight with the coarse grid vertex's value that is to
     *     be interpolated.
     *   - Add the result to your temporary variable.
     * - The temporary variable now holds the contributions from all
     *   @f$ 2^d @f$ coarse grid values. Set it on the fine grid vertex.
     *
     * Usage:
     * \code
  double interpolatedValue = 0.0;
  dfor2(k) // run over the coarse grid vertices (0,0), (1,0), (0,1),
           // and (1,1) of this one coarse cell if d=2. If d!=2 it
           // does a couple of iterations more. k is an integer vector.
    tarch::la::Vector<FIVE_POWER_D,double> coarseGridStencil = coming from your coarse grid vertex k;
    double                                 coarseGridValue   = coming from your coarse grid vertex k;
    interpolatedValue +=
      coarseGridValue *
      _multigrid.computeContributionWeightOfInterGridTransfer(
        k,
        coarseGridStencil,
        fineGridPositionOfVertexWithinPatch
      );
  enddforx
  fineGridVertex.setXXX( interpolatedValue );
       \endcode
     *
     *
     * !! Usage (compute Ru, i.e. restriction, for one individual fine grid vertex)
     *
     * - Create temporary value. It is typically a double, and it represents
     *   the new fine grid value.
     * - Run over all @f$ 2^d @f$ (typically a dfor2 loop):
     *   - We will now compute the contribution of one coarse grid vertex to
     *     our fine grid vertex.
     *   - Take the coarse grid inter-grid transfer stencil. It is a
     *     @f$ 5^d @f$ vector.
     *   - Pass the stencil, the @f$ (0,1)^d @f$ position of the current
     *     coarse grid vertex relative to the current fine grid vertex, and the
     *     fine grid vertex position within the @f$ 4^d @f$ patch to this
     *     operation. You get a weight.
     *   - Multiply this weight with the fine grid vertex's value that is to
     *     be interpolated.
     *   - Add the result to the current coarse grid value.
     *
     * Usage:
     * \code
  dfor2(k) // run over the coarse grid vertices (0,0), (1,0), (0,1),
           // and (1,1) of this one coarse cell if d=2. If d!=2 it
           // does a couple of iterations more. k is an integer vector.
    tarch::la::Vector<FIVE_POWER_D,double> coarseGridStencil = coming from your coarse grid vertex k;
    double contributionToCurrentCoarseGridVertex =
      fineGridValue *
      _multigrid.computeContributionWeightOfInterGridTransfer(
        k,
        coarseGridStencil,
        fineGridPositionOfVertexWithinPatch
      );
  enddforx
       \endcode
     *
     *
     * The operation is not const as it has to update the internal counters.
     */
    double computeContributionWeightOfInterGridTransfer(
      const tarch::la::Vector<DIMENSIONS,int>&       currentCoarseGridVertex,
      const tarch::la::Vector<FIVE_POWER_D,double>&  currentCoarseGridVertexsProlongation,
      const tarch::la::Vector<DIMENSIONS,int>&       fineGridPositionOfVertex
    );

    void setup();

    void makeBlackboxTransferOperator(tarch::la::Vector<THREE_POWER_D,double> stencil);


    int getNumberOfStencilUpdates() const;
    void clearNumberOfStencilUpdates();

    /**
     * Compute position relative to one coarse grid vertex.
     *
     * @image html StencilRelativeToCoarseGrid.png
     *
     * @param coarseGridVertexPosition Index of current coarse grid vertex. It is a
     *        d-dimensional integer vector that holds only 0 and 1. (0,0) in
     *        d=2, e.g., is the bottom left vertex, (1,1) is the top right one.
     * @param fineGridVertexPosition Fine grid position of the fine grid
     *        vertex within a @f$ 4^d @f$ patch. It is an integer vector of
     *        length d that holds entries of @f$ \{ 0,1,2,3 \} @f$.
     * @param entryOfCoarseGridStencil Is an out parameter and afterwards
     *        contains a d-dimensional integer entry out of @f$ \{ 0,1,2,3,4 \} @f$
     *        that tells you for a 5-point stencil which entry affects the fine
     *        grid vertex.
     * @param coarseGridStencilInfluencesFineGridVertex Tells you whether the
     *        5-point stencil on the coarse grid influences the fine grid vertex
     *        at all. If the fine grid vertex, e.g., is (3,0) and the coarse grid
     *        vertex is (0,1), then this flag is false.
     */
    static void getPositionIn5PowDStencilRelativeToKthCoarseVertex(
      const tarch::la::Vector<DIMENSIONS,int>&       coarseGridVertexPosition,
      const tarch::la::Vector<DIMENSIONS,int>&       fineGridVertexPosition,
      tarch::la::Vector<DIMENSIONS,int>&             entryOfCoarseGridStencil,
      int&                                           indexOfCoarseGridStencil,
      bool&                                          coarseGridStencilInfluencesFineGridVertex
    );

    static int getPositionInCellInterGridTransferOperatorVector(
        const int coarseGridVertexNumber,
        const int positionInOperator);

    static int getPositionInCellStencilVector(
        const int coarseGridVertexNumber,
        const int positionInOperator);

    static void addValueToStencilEntry(
        tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double>& verticesStencils,
        const int index,
        double value);

    static void addValueToStencilEntry(
        tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double>& verticesStencils,
        const int vertexNumber,
        const int indexInStencil,
        double value);
};

#endif /* MULTIGRID_H_ */
