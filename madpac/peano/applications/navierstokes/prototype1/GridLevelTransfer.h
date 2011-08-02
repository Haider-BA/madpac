#ifndef _FLUID_GRIDLEVELTRANSFER_H_
#define _FLUID_GRIDLEVELTRANSFER_H_


#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
#include "tarch/logging/Log.h"
#include "tarch/la/Matrix.h"
#include "peano/applications/navierstokes/prototype1/SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit.h"

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
	  class GridLevelTransfer;
	  /**
	   * Forward declaration for friend declaration.
	   */
	  class GridLevelTransferTest;
	}}}}

/**
 * Class for calculating the fluid vertex data transfer of different grid levels.
 *
 * Typically, the two method classes interpolateXXX() and
 * restrictXXX() are of main interest.
 *
 * \warning At the moment, only the hanging nodes are considered for these
 *            operations. These are all lying on the edges of a cell. That is
 *            why we may use the interpolation/restriction for both d-linear
 *            and divergence-free elements.
 *
 * The interpolation/restriction is implemented separately for the different
 * variables (u,F etc.) sitting on a FluidVertex. This has the advantage
 * over a total interpolation of all at once that one sees everything that
 * happens directly in the adapters and that only the really needed work is done.
 *
 * The interpolation/restriction looks for hanging nodes and uses the lookup
 * table to get
 * the interpolation/restriction weights. A change for the interpolation/
 * restriction is, thus, easily possible by just adapting the lookup table
 * (_nodalTransferWeightsLookupTable). A equal trisection is assumed here!
 *
 * The former methods check2DHangingNodeInterpolation() and
 * check3DHangingNodeInterpolation() do not exist any longer since we moved the
 * corresponding tests into GridLevelTransferTest (unit test).
 *
 * @todo check performance of modular interpolation vs. direct weights!
 * @todo check different approach: avoid overloaded methods for different vertex
 *       dofs?
 */
class peano::applications::navierstokes::prototype1::GridLevelTransfer {
  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    /**
     * Lookup table for the nodal transfer weights (interpolation/restriction)
     * of the FOUR_POWER_D children nodes (with trisection) of a parent cell
     * (TWO_POWER_D corners).
     *
     * This matrix has dimensions FOUR_POWER_D times TWO_POWER_D. This
     * means 16x4 in 2D and 64x8 in 3D. Each line i holds the interpolation
     * weights of a local children node i with respect to the coarse parent
     * nodes (columns).
     *
     * This lookup table is set up in the constructor. The local numbering of
     * the corners in a cell is the usual peano style.
     *
     * @todo: Rauswerfen, sobald Umzug komplett!
     */
    tarch::la::Matrix<FOUR_POWER_D,NUMBER_OF_VERTICES_PER_ELEMENT,double> _nodalTransferWeightsLookupTable;

    tarch::la::Matrix<FOUR_POWER_D,NUMBER_OF_VERTICES_PER_ELEMENT,double> _divergenceFreeTransferWeightsBigPhiLookupTable;

    tarch::la::Matrix<FOUR_POWER_D,NUMBER_OF_VERTICES_PER_ELEMENT,double> _divergenceFreeTransferWeightsSmallPhiLookupTable;

    /**
     * Method to compute 2^i (since lookup tables from Globals.cpp are not yet
     * initialised).
     */
    static int myTwoPowI(const int i);

    /**
     * @todo: Rauswerfen, sobald Umzug komplett!
     */
    void initialiseLinearTransferWeights();

    /**
     * Initialises both lookup tables for the divergence-free interpolation of velocities between grid levels.
     * This is done once during the creation of the class to accelerate later-on accesses to the transfer weights,
     * which are done quite frequently.
     *
     * The tables are initialised with hard coded values created with the maple worksheet DivergenceFreeInterpolation.mw
     * in the repository.
     */
    void initialiseDivergenceFreeTransferWeights();

  public:
    /**
     * Friend declaration for test.
     */
    friend class GridLevelTransferTest;
    /**
     * Constructor setting the entries of the _nodalTransferWeightsLookupTable.
     *
     * It uses the dlinear interpolation on a unit square/cube with parent
     * values 1.0 or 0.0 (depending of the local corner index). The local
     * numbering of the corners in a cell is the usual peano style.
     *
     * The lookup table values are checked via the methods
     * check2DHangingNodeInterpolation() and check3DHangingNodeInterpolation().
     */
    GridLevelTransfer();

    /**
     * Destructor.
     */
    ~GridLevelTransfer();

    /**
     * Initialises the lookup table for the d-linear interpolation and restriction between grid levels.
     * This is done once during the creation of the class to accelerate later-on accesses to the transfer weights,
     * which are done quite frequently.
     */
    static tarch::la::Matrix<FOUR_POWER_D,NUMBER_OF_VERTICES_PER_ELEMENT,double> initialiseDLinearTransferWeights();

    /**
     * This method returns the weights of a single node identified via its
     * discrete position (IntVector) in the local subgrid.
     *
     * This method accesses the _nodalTransferWeightsLookupTable and returns
     * the corresponding (absolutely linearised index) row of the node.
     *
     * @param  discretePosition Integer Vector with the discrete local position
     *                          for each dimension.
     * @param  index            Index of parent node to interpolate data from.
     *
     *
     * @todo evtl. in array of tinyVectors umbauen? direkt eine Komponente
     *       extrahierbar!?
     * @todo evtl. dLinearize verwenden? Alternativ kann man auch die gesamte
     *       lookup table im konstruktor des jeweiligen Adapters ablegen, dann
     *       ist alles immer lokal... (unschoen)
     */
    double getNodalTransferWeightForOneDiscretePosition(
      const IntVector& discretePosition,
      const int        index
    );

    double getBigPhiForOneDiscretePosition(
      const IntVector& discretePosition,
      const int        index
    );

    double getSmallPhiForOneDiscretePosition(
      const IntVector& discretePosition,
      const int        index
    );

    #if defined(ComponentGrid)
    /**
     * This method does the dlinear interpolation of the velocities from
     * a father cell to a child cells. It is usually called in the fluid adapters.
     *
     * The interpolation looks for hanging nodes and uses the lookup table to get
     * the interpolation weights. A change for the restriction is, thus, easily
     * possible by just adapting the lookup table
     * (_nodalTransferWeightsLookupTable).
     *
     * This method is quite similar to interpolateF.
     *
     * @sa interpolateF()
     *
     * @param coarseGridVertices    Array of coarse grid vertices.
     * @param coarseGridFirstIndex  First index of coarse grid cell.
     * @param fineGridVertices      Array of fine grid vertices.
     *
     * @todo 3D fehlt noch
     * @todo fuer h(0)!=h(1) hier MOdifikation noetig!??
     */
//    void interpolateVelocities(
//      peano::fluid::FluidVertexWithPersistentCellNumber coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::FluidVertexWithPersistentCellNumber fineGridVertices[FOUR_POWER_D],
//      bool interpolatePersistent=false
//    );
//    #if defined(ComponentStaggeredPoisson)
//    void interpolateVelocities(
//      peano::fluid::MergeGridFluidAndPoissonVertex coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::MergeGridFluidAndPoissonVertex fineGridVertices[FOUR_POWER_D],
//      bool interpolatePersistent=false
//    );
//    #endif
//
//    void interpolateVelocities(
//      peano::fluid::GridFluidVertex4CrankNicholson coarseGridVertices[FOUR_POWER_D],
//      const int                             coarseGridFirstIndex,
//      peano::fluid::GridFluidVertex4CrankNicholson fineGridVertices[FOUR_POWER_D],
//      bool interpolatePersistent=false
//    );

    /**
     * This method restricts velocities on persistent non-refined fine nodes to
     * persistent refined father nodes (with factor 1.0).
     *
     * The necessary mapping from coarse indices to fine ones (with identical
     * coordinates) is:
|| coarse idx || fine idx
| 0 | 0
| 1 | 3
| 2 | 12
| 3 | 15
| 4 | 48
| 5 | 51
| 6 | 60
| 7 | 63
     *
     * This mapping is realised by using getLocalCellIndex(coarse idx) * 3.
     *
     * @param coarseGridVertices    Array of coarse grid vertices.
     * @param coarseGridFirstIndex  First index of coarse grid cell.
     * @param fineGridVertices      Array of fine grid vertices.
     */
//    void restrictVelocities(
//      peano::fluid::FluidVertexWithPersistentCellNumber coarseGridVertices[FOUR_POWER_D],
//      const int                                         coarseGridFirstIndex,
//      peano::fluid::FluidVertexWithPersistentCellNumber fineGridVertices[FOUR_POWER_D]
//    );
//    #if defined(ComponentStaggeredPoisson)
//    void restrictVelocities(
//      peano::fluid::MergeGridFluidAndPoissonVertex coarseGridVertices[FOUR_POWER_D],
//      const int                                    coarseGridFirstIndex,
//      peano::fluid::MergeGridFluidAndPoissonVertex fineGridVertices[FOUR_POWER_D]
//    );
//    #endif
//    void restrictVelocities(
//      peano::fluid::GridFluidVertex4CrankNicholson coarseGridVertices[FOUR_POWER_D],
//      const int                                    coarseGridFirstIndex,
//      peano::fluid::GridFluidVertex4CrankNicholson fineGridVertices[FOUR_POWER_D]
//    );

    /**
     * This method performs the d-linear interpolation of the velocity in one vertex
     * from its super-cell vertices. Thus it does a similar job like the method
     * interpolateVelocities but it only works on a single target vertex. Hence it
     * can be called from the CreatePersistentVertex event handler of an adapter where
     * only one vertex is known at a time.
     *
     * The getNodalTransferWeightForOneDiscretePosition method is used to retrieve the
     * weights for the super-cell vertices and therefore is also depending on the
     * lookup table _nodalTransferWeightsLookupTable.
     *
     * @sa interpolateVelocities()
     *
     * @param coarseGridVertices The four power d vertices of the coarser grid level.
     * @param coarseGridFirstIndex The index of the first vertex that is a father vertex
     * of the currently handled vertex.
     * @param fineGridVertex The currently handled vertex whose velocity is interpolated.
     * @param discretePositionFineVertex The discrete position of the current vertex in
     * the four power d array of its cell.
     *
     */
//    void interpolateVelocity(
//      peano::fluid::FluidVertexWithPersistentCellNumber coarseGridVertices[FOUR_POWER_D],
//      const int coarseGridFirstIndex,
//      peano::fluid::FluidVertexWithPersistentCellNumber& fineGridVertex,
//      const IntVector& discretePositionFineVertex
//    );
//
//    void interpolateVelocity(
//      peano::fluid::GridFluidVertex4CrankNicholson coarseGridVertices[FOUR_POWER_D],
//      const int coarseGridFirstIndex,
//      peano::fluid::GridFluidVertex4CrankNicholson& fineGridVertex,
//      const IntVector& discretePositionFineVertex
//    );
//
//    #if defined(ComponentStaggeredPoisson)
//    void interpolateVelocity(
//      peano::fluid::MergeGridFluidAndPoissonVertex coarseGridVertices[FOUR_POWER_D],
//      const int coarseGridFirstIndex,
//      peano::fluid::MergeGridFluidAndPoissonVertex& fineGridVertex,
//      const IntVector& discretePositionFineVertex
//    );
//    #endif

    /**
     * This method does the dlinear interpolation (inverse operation restriction
     * of F from a father to a child cell. It is usually called in the fluid
     * adapters.
     *
     * The interpolation looks for hanging nodes and uses the lookup table to get
     * the interpolation weights. A change for the interpolation is, thus, easily
     * possible by just adapting the lookup table
     * (_nodalTransferWeightsLookupTable).
     *
     * @sa restrictF()
     * @sa interpolateVelocities()
     *
     * @param coarseGridVertices    Array of coarse grid vertices.
     * @param coarseGridFirstIndex  First index of coarse grid cell.
     * @param fineGridVertices      Array of fine grid vertices.
     *
     * @todo 3D fehlt noch
     */
//    void interpolateF(
//      peano::fluid::FluidVertexWithPersistentCellNumber coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::FluidVertexWithPersistentCellNumber fineGridVertices[FOUR_POWER_D]
//    );
//    void interpolateF(
//      peano::fluid::GridFluidVertex4CrankNicholson coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::GridFluidVertex4CrankNicholson fineGridVertices[FOUR_POWER_D]
//    );
//    #if defined(ComponentStaggeredPoisson)
//    void interpolateF(
//      peano::fluid::MergeGridFluidAndPoissonVertex coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::MergeGridFluidAndPoissonVertex fineGridVertices[FOUR_POWER_D]
//    );
//    #endif
    /**
     * This method does the restriction (inverse operation of dlinear
     * interpolation) of F from child cells to a father cell. It is usually
     * called in the fluid adapters.
     *
     * The restriction looks for hanging nodes and uses the lookup table to get
     * the restriction weights. A change for the restriction is, thus, easily
     * possible by just adapting the lookup table
     * (_nodalTransferWeightsLookupTable).
     *
     * @sa interpolateF()
     *
     * @param coarseGridVertices    Array of coarse grid vertices.
     * @param coarseGridFirstIndex  First index of coarse grid cell.
     * @param fineGridVertices      Array of fine grid vertices.
     *
     * @todo 3D fehlt noch
     */
//    void restrictF(
//      peano::fluid::FluidVertexWithPersistentCellNumber coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::FluidVertexWithPersistentCellNumber fineGridVertices[FOUR_POWER_D]
//    );
//    #if defined(ComponentStaggeredPoisson)
//    void restrictF(
//      peano::fluid::MergeGridFluidAndPoissonVertex coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::MergeGridFluidAndPoissonVertex fineGridVertices[FOUR_POWER_D]
//    );
//    #endif
//    void restrictF(
//      peano::fluid::GridFluidVertex4CrankNicholson coarseGridVertices[FOUR_POWER_D],
//      const int                             coarseGridFirstIndex,
//      peano::fluid::GridFluidVertex4CrankNicholson fineGridVertices[FOUR_POWER_D]
//    );

    /**
     * This method does the restriction of the pressure gradient from child
     * cells to a father cell. It is usually called in the fluid adapters.
     *
     * The restriction looks for hanging nodes and uses the lookup table to get
     * the restriction weights. A change for the restriction is, thus, easily
     * possible by just adapting the lookup table
     * (_nodalTransferWeightsLookupTable).
     *
     * This method is very similar to restrictF() and restrictA().
     *
     * @sa restrictF()
     * @sa restrictA()
     *
     * @param coarseGridVertices    Array of coarse grid vertices.
     * @param coarseGridFirstIndex  First index of coarse grid cell.
     * @param fineGridVertices      Array of fine grid vertices.
     *
     * @todo 3D fehlt noch
     */
//    void restrictPressureGradient(
//      peano::fluid::FluidVertexWithPersistentCellNumber coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::FluidVertexWithPersistentCellNumber fineGridVertices[FOUR_POWER_D]
//    );
//    #if defined(ComponentStaggeredPoisson)
//    void restrictPressureGradient(
//      peano::fluid::MergeGridFluidAndPoissonVertex coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::MergeGridFluidAndPoissonVertex fineGridVertices[FOUR_POWER_D]
//    );
//    #endif
//    void restrictPressureGradient(
//      peano::fluid::GridFluidVertex4CrankNicholson coarseGridVertices[FOUR_POWER_D],
//      const int                             coarseGridFirstIndex,
//      peano::fluid::GridFluidVertex4CrankNicholson fineGridVertices[FOUR_POWER_D]
//    );

    /**
     * This method does the interpolation of A from a father cell to child cells.
     * It is usually called in the fluid adapters. The interpolation is done for
     * hanging nodes only! It is of the same kind as interpolateF().
     *
     * The interpolation looks for hanging nodes and uses the lookup table to get
     * the interpolation weights. A change for the interpolation is, thus, easily
     * possible by just adapting the lookup table
     * (_nodalTransferWeightsLookupTable).
     *
     * @sa interpolateF()
     * @sa restrictA()
     *
     * @param coarseGridVertices    Array of coarse grid vertices.
     * @param coarseGridFirstIndex  First index of coarse grid cell.
     * @param fineGridVertices      Array of fine grid vertices.
     *
     * @todo 3D fehlt noch
     */
//    void interpolateA(
//      peano::fluid::FluidVertexWithPersistentCellNumber coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::FluidVertexWithPersistentCellNumber fineGridVertices[FOUR_POWER_D]
//    );
//    void interpolateA(
//      peano::fluid::GridFluidVertex4CrankNicholson coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::GridFluidVertex4CrankNicholson fineGridVertices[FOUR_POWER_D]
//    );
//    #if defined(ComponentStaggeredPoisson)
//    void interpolateA(
//      peano::fluid::MergeGridFluidAndPoissonVertex coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::MergeGridFluidAndPoissonVertex fineGridVertices[FOUR_POWER_D]
//    );
//    #endif
    /**
     * This method does the restriction (inverse operation of dlinear
     * interpolation) of A from a child cell to a father cell. It is usually
     * called in the fluid adapters. The restriction is done for hanging nodes
     * only!
     *
     * The restriction looks for hanging nodes and uses the lookup table to get
     * the restriction weights. A change for the restriction is, thus, easily
     * possible by just adapting the lookup table
     * (_nodalTransferWeightsLookupTable).
     *
     * @sa restrictF()
     *
     * @param coarseGridVertices    Array of coarse grid vertices.
     * @param coarseGridFirstIndex  First index of coarse grid cell.
     * @param fineGridVertices      Array of fine grid vertices.
     *
     * @todo 3D fehlt noch
     */
//    void restrictA(
//      peano::fluid::FluidVertexWithPersistentCellNumber coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::FluidVertexWithPersistentCellNumber fineGridVertices[FOUR_POWER_D]
//    );
//    void restrictA(
//      peano::fluid::GridFluidVertex4CrankNicholson coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::GridFluidVertex4CrankNicholson fineGridVertices[FOUR_POWER_D]
//    );
//    #if defined(ComponentStaggeredPoisson)
//    void restrictA(
//      peano::fluid::MergeGridFluidAndPoissonVertex coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::MergeGridFluidAndPoissonVertex fineGridVertices[FOUR_POWER_D]
//    );
//    #endif

    /**
     * This method does the dlinear interpolation (inverse operation restriction
     * of F and u and A from a father to a child cell. It is usually called in
     * the fluid adapters.
     *
     * We implemented this method additionally to the single interpolations due
     * to performance aspects in the GridEventHandle2AssemblePPERHSAdapter where
     * these 3 interpolations have to be done in startStepsDown(). It does
     * exactly the same as the three single interpolations. We also implemented
     * a test for it.
     *
     * The interpolation looks for hanging nodes and uses the lookup table to get
     * the interpolation weights. A change for the interpolation is, thus, easily
     * possible by just adapting the lookup table
     * (_nodalTransferWeightsLookupTable).
     *
     * @sa interpolateF()
     * @sa interpolateVelocities()
     * @sa interpolateA()
     *
     * @param coarseGridVertices    Array of coarse grid vertices.
     * @param coarseGridFirstIndex  First index of coarse grid cell.
     * @param fineGridVertices      Array of fine grid vertices.
     *
     * @todo 3D fehlt noch
     */
//    void interpolateFAndVelocitiesAndA(
//      peano::fluid::FluidVertexWithPersistentCellNumber coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::FluidVertexWithPersistentCellNumber fineGridVertices[FOUR_POWER_D]
//    );
//    void interpolateFAndVelocitiesAndA(
//      peano::fluid::GridFluidVertex4CrankNicholson coarseGridVertices[FOUR_POWER_D],
//      const int                             coarseGridFirstIndex,
//      peano::fluid::GridFluidVertex4CrankNicholson fineGridVertices[FOUR_POWER_D]
//    );
//
//    #if defined(ComponentStaggeredPoisson)
//    void interpolateFAndVelocitiesAndA(
//      peano::fluid::MergeGridFluidAndPoissonVertex coarseGridVertices[FOUR_POWER_D],
//      const int                                  coarseGridFirstIndex,
//      peano::fluid::MergeGridFluidAndPoissonVertex fineGridVertices[FOUR_POWER_D]
//    );
//    #endif

    #endif // comp. grid

    /**
     * This method calculates the dlinear interpolation of scalar values for a
     * given position x in the current cell of width H with coordinates of first
     * (i.e. firstIndex) node fatherCellFirstPosition.
     *
     * The order of the entries in u corresponds to the local numbering of the
     * vertices on a cell (i.e. the usual peano numbering).
     *
     * The value array u is copied inside the function in order to assure that
     * u is not changed when calculating recursively on it (u is const!). This
     * assures that there are no problems when calling this method with the same
     * u (but different x).
     *
     * The method uses a double loop over the dimensions d (3 loop runs for 3D,
     * 2 loop runs for 2D) and the number of linear interpolations i in the
     * current coordinate direction (4 for x2 (3D), 2 for x1 (2D) and 1 for x0
     * (1D)). Both of these loops run in descending direction in order to assure
     * the compatibility for both 2D and 3D.
     *
     * The following tables visualises the linear interpolations and the saving
     * and different strides for the access:
|| Coord. dir. of 1D interp. || number of interp. || stride for 2. value || saving position
| x2 (3D only!) | 4=2^d | 4 | U[0],U[1],U[2],U[3]
| x1            | 2=2^d | 2 | U[0],U[1]
| x0            | 1=2^d | 1 | U[0]
     *
     * @param fatherCellFirstPosition Coordinate vector of firstIndex node of the
     *                                father cell.
     * @param H                       Voxel dimension of the father cell.
     * @param x                       Coordinate vector of query position.
     * @param u                       Array of corner values of 2^d father
     *                                corners.
     *
     * @return Interpolated scalar value u(x).
     */
    static double interpolateScalarDLinear(
      const Vector& fatherCellFirstPosition,
      const Vector& H,
      const Vector& x,
      const double u[TWO_POWER_D]
    );

    /**
     * This method is identical to interpolateScalarDLinear() except that it
     * works with vector values. See interpolateScalarDLinear() for details.
     *
     * @param fatherCellFirstPosition Coordinate vector of firstIndex node of the
     *                                father cell.
     * @param H                       Voxel dimension of the father cell.
     * @param x                       Coordinate vector of query position.
     * @param u                       Array of corner values of 2^d father
     *                                corners.
     *
     * @return Interpolated vector value u(x).
     */
    static Vector interpolateVectorDLinear(
      const Vector& fatherCellFirstPosition,
      const Vector& H,
      const Vector& x,
      const Vector u[TWO_POWER_D]
    );

    /**
     * This method calculates the interpolated value for a one dimensional linear
     * interpolation of scalar values. It is used successively for the dlinear
     * interpolation.
     *
     * The method calculates u_R * x/H + u_L (1-x/H).
     *
     * In order to check this routine in the corresponding tests, we made it
     * public.
     *
     * \warning the coordinate x has to be in local scaling. This means that
     *            x = x_glob - xLeftPoint has to be calculated outside!
     *            Therefore, an assertions checks 0<= x <=H.
     *
     * @param localCoordinate Local coordinate 0<= x <=H.
     * @param H               Length of the interpolation interval (H=x_R-x_L).
     * @param leftValue       Left parent value (u_L).
     * @param rightValue      Right parent value (u_R).
     *
     * @return Interpolated value.
     */
    static double interpolateScalar1DLinear(
      const double localCoordinate,
      const double H,
      const double leftValue,
      const double rightValue
    );

    /**
     * This method is identical to interpolateScalar1DLinear() except that it
     * works with vector values. See interpolateScalar1DLinear() for details.
     *
     * \warning the coordinate x has to be in local scaling. This means that
     *            x = x_glob - xLeftPoint has to be calculated outside!
     *            Therefore, an assertions checks 0<= x <=H.
     *
     * @param localCoordinate Local coordinate 0<= x <=H.
     * @param H               Length of the interpolation interval (H=x_R-x_L).
     * @param leftValue       Left parent value (u_L).
     * @param rightValue      Right parent value (u_R).
     *
     * @return Interpolated value.
     */
    static Vector interpolateVector1DLinear(
      const double localCoordinate,
      const double H,
      const Vector& leftValue,
      const Vector& rightValue
    );
};

#endif /*GRIDLEVELTRANSFER_H_*/
