#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_FLUIDNUMERICS_CALCULATE_F_DIV_FREE_H_
#define _PEANO_APPLICATIONS_NAVIERSTOKES_FLUIDNUMERICS_CALCULATE_F_DIV_FREE_H_

#include "tarch/logging/Log.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/ElementMatrices.h"
#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/AbstractCalculateF.h"
#include "tarch/la/Vector.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {
          class CalculateFDivFree;
        }
        /**
         * Forward declaration vertex class.
         */
        class RegularGridFluidVertexEnhancedDivFreeEulerExplicit;
      }
    }
  }
}


/**
 * Element matrix (4x4) for discretisation of x1-part of diffusion (Laplace-operator)
 * in divergence-free case.
 *
 * The same matrix is to be used for the x2-part. With this notation, we don't have
 * to save a 8x8 matrix with two large blocks of zeros (like in the bilinear case).
 *
 * \warning The factor eta/rho is NOT considered for the matrix! That has to be done
 *            when applying D1!
 *
 * \warning Due to the changed element numbers in comparison to quickfluid/stokes we
 *            recalculated the entries of D by maple (see FluidElementMatricesD in the
 *            section maple). The matrix is identical to the one without changes!
 *
 * The mapping is
 * Peano | quickfluid    Cartesian view (x left2right, y down2up) for Peano:
 * ------------------
 *  0    |   2                2 ----- 3
 *  1    |   3                |       |
 *  2    |   0                |       |
 *  3    |   1                0 ----- 1
 *
 * @todo check Eintraege!
 */
const double D1DivFreeElementMatrix_tmp[NUMBER_OF_VERTICES_PER_ELEMENT][NUMBER_OF_VERTICES_PER_ELEMENT] =
  {
    //quickfluid
    //MATRIX_D_BLANKE_X = 1/1.0*ETA/RHO * [
    //[  1.0, -0.5, -0.5,    0];
    //[ -0.5,  1.0,    0, -0.5];
    //[ -0.5,    0,  1.0, -0.5];
    //[    0, -0.5, -0.5,  1.0]

    //peano (without factor eta/rho): validated by maple!
    {  1.0, -0.5, -0.5,  0.0  },
    { -0.5,  1.0,  0.0, -0.5  },
    { -0.5,  0.0,  1.0, -0.5  },
    {  0.0, -0.5, -0.5,  1.0  }

  };
/**
 * Element matrix (64x8) for discretisation of convection
 * in bilinear case.
 *
 * For the bilinear case, large parts (one half) of this matrix is zero. Nevertheless,
 * we keep these zero blocks in order to get a computation scheme which is equally valid
 * for the div-free elements (Blanke).
 *
 * The structure of the 64x8 matrix is as following: each 8 rows describe a block Ti that
 * is used to calculate a temporary matrix (see quickfluid docu):
 * Ti=[u1;u2]'*C(i1:i8,:)  <-> (1x8)=(1x8)*(8x8)
 *
 * The first 4 blocks Ti are used to calculate F1 at the four vertices,
 * the second 4 blocks for F2:
 * F1=h*(T1;T2;T3;T4)*[u1;u2] <-> (4x1)=(4x8)*(8x1)
 *
 * \warning Due to the changed element numbers in comparison to quickfluid/stokes,
 * we have to recalculate the matrix. The maple file FluidElementMatrixC does this.
 * We have to emphasize that the new, valid entries are not the same as those obtained
 * by our first guess (just changing the rows/columns for the elements corresponding to
 * the renumbering)!
 *
 * Peano | quickfluid    Cartesian view (x left2right, y down2up) for Peano:
 * ------------------
 *  0    |   2                2 ----- 3
 *  1    |   3                |       |
 *  2    |   0                |       |
 *  3    |   1                0 ----- 1
 *
 */
//const double CBilinearElementMatrix_tmp[64][2*NUMBER_OF_VERTICES_PER_ELEMENT] = {
//{-6.0/72.0,  6.0/72.0,  -2.0/72.0,  2.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-3.0/72.0,  3.0/72.0,  -1.0/72.0,  1.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-2.0/72.0,  2.0/72.0,  -2.0/72.0,  2.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-1.0/72.0,  1.0/72.0,  -1.0/72.0,  1.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-6.0/72.0, -2.0/72.0,   6.0/72.0,  2.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-2.0/72.0, -2.0/72.0,   2.0/72.0,  2.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-3.0/72.0, -1.0/72.0,   3.0/72.0,  1.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-1.0/72.0, -1.0/72.0,   1.0/72.0,  1.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-3.0/72.0,  3.0/72.0,  -1.0/72.0,  1.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-6.0/72.0,  6.0/72.0,  -2.0/72.0,  2.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-1.0/72.0,  1.0/72.0,  -1.0/72.0,  1.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-2.0/72.0,  2.0/72.0,  -2.0/72.0,  2.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-2.0/72.0, -2.0/72.0,   2.0/72.0,  2.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-2.0/72.0, -6.0/72.0,   2.0/72.0,  6.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-1.0/72.0, -1.0/72.0,   1.0/72.0,  1.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-1.0/72.0, -3.0/72.0,   1.0/72.0,  3.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-2.0/72.0,  2.0/72.0,  -2.0/72.0,  2.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-1.0/72.0,  1.0/72.0,  -1.0/72.0,  1.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-2.0/72.0,  2.0/72.0,  -6.0/72.0,  6.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-1.0/72.0,  1.0/72.0,  -3.0/72.0,  3.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-3.0/72.0, -1.0/72.0,   3.0/72.0,  1.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-1.0/72.0, -1.0/72.0,   1.0/72.0,  1.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-6.0/72.0, -2.0/72.0,   6.0/72.0,  2.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-2.0/72.0, -2.0/72.0,   2.0/72.0,  2.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-1.0/72.0,  1.0/72.0,  -1.0/72.0,  1.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-2.0/72.0,  2.0/72.0,  -2.0/72.0,  2.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-1.0/72.0,  1.0/72.0,  -3.0/72.0,  3.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-2.0/72.0,  2.0/72.0,  -6.0/72.0,  6.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-1.0/72.0, -1.0/72.0,   1.0/72.0,  1.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-1.0/72.0, -3.0/72.0,   1.0/72.0,  3.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-2.0/72.0, -2.0/72.0,   2.0/72.0,  2.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{-2.0/72.0, -6.0/72.0,   2.0/72.0,  6.0/72.0,  0.0     ,   0.0     ,   0.0     ,  0.0     },
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -6.0/72.0,   6.0/72.0,  -2.0/72.0,  2.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -3.0/72.0,   3.0/72.0,  -1.0/72.0,  1.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -2.0/72.0,   2.0/72.0,  -2.0/72.0,  2.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -1.0/72.0,   1.0/72.0,  -1.0/72.0,  1.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -6.0/72.0,  -2.0/72.0,   6.0/72.0,  2.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -2.0/72.0,  -2.0/72.0,   2.0/72.0,  2.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -3.0/72.0,  -1.0/72.0,   3.0/72.0,  1.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -1.0/72.0,  -1.0/72.0,   1.0/72.0,  1.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -3.0/72.0,   3.0/72.0,  -1.0/72.0,  1.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -6.0/72.0,   6.0/72.0,  -2.0/72.0,  2.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -1.0/72.0,   1.0/72.0,  -1.0/72.0,  1.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -2.0/72.0,   2.0/72.0,  -2.0/72.0,  2.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -2.0/72.0,  -2.0/72.0,   2.0/72.0,  2.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -2.0/72.0,  -6.0/72.0,   2.0/72.0,  6.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -1.0/72.0,  -1.0/72.0,   1.0/72.0,  1.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -1.0/72.0,  -3.0/72.0,   1.0/72.0,  3.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -2.0/72.0,   2.0/72.0,  -2.0/72.0,  2.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -1.0/72.0,   1.0/72.0,  -1.0/72.0,  1.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -2.0/72.0,   2.0/72.0,  -6.0/72.0,  6.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -1.0/72.0,   1.0/72.0,  -3.0/72.0,  3.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -3.0/72.0,  -1.0/72.0,   3.0/72.0,  1.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -1.0/72.0,  -1.0/72.0,   1.0/72.0,  1.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -6.0/72.0,  -2.0/72.0,   6.0/72.0,  2.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -2.0/72.0,  -2.0/72.0,   2.0/72.0,  2.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -1.0/72.0,   1.0/72.0,  -1.0/72.0,  1.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -2.0/72.0,   2.0/72.0,  -2.0/72.0,  2.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -1.0/72.0,   1.0/72.0,  -3.0/72.0,  3.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -2.0/72.0,   2.0/72.0,  -6.0/72.0,  6.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -1.0/72.0,  -1.0/72.0,   1.0/72.0,  1.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -1.0/72.0,  -3.0/72.0,   1.0/72.0,  3.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -2.0/72.0,  -2.0/72.0,   2.0/72.0,  2.0/72.0},
//{ 0.0     ,  0.0     ,   0.0     ,  0.0     , -2.0/72.0,  -6.0/72.0,   2.0/72.0,  6.0/72.0}
//};


/**
 * \brief Class for calculation of convection/diffusion F with enhanced div-free
 *        elements.
 *
 * The class CalculateFEnhancedDivFreeTest is declared friend in order to easily
 * be able to check the element entries.
 *
 * @author Michael Lieb, Tobias Neckel
 */
class peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree: public peano::applications::navierstokes::prototype1::fluidnumerics::AbstractCalculateF {
private:
    /**
     * Holds string designing the d-linear elements.
     */
    static const std::string ELEMENT_TYPE;

    /**
     * Factor eta/rho for the diffusion term.
     *
     * This value is directly set in the constructor
     */
    double _DFactor;

    /**
     * Log device.
     */
    static tarch::logging::Log _log;

    /**
     * Routine for copying the element matrix values of ElementMatrices for the
     * dlinear case.
     *
     * If the element type is invalid, an assertion fail with message is given.
     *
     * It is overwritten in CalculateFEnhancedDivFreeDivFree for the corresponding element type.
     * @todo 64 in C noch weichmachen?
     */
    void copyMatricesDLinear();

    /**
     * Holds whether or not inflow pressure boundary conditions are used. This
     * flag is set in the constructor.
     */
    bool _scenarioHasInflowPressureBoundaryCondition;
    /**
     * Holds whether or not outflow pressure boundary conditions are used. This
     * flag is set in the constructor.
     */
    bool _scenarioHasOutflowPressureBoundaryCondition;
    /**
     * Inlet pressure for pressure boundary conditions. Is set in the
     * constructor.
     */
    double _inletPressure;
    /**
     * Outlet pressure for pressure boundary conditions. Is set in the
     * constructor.
     */
    double _outletPressure;

    /**
     * Density used for presssure boundary contributions (to get kinematic
     * pressure p/rho).
     */
    double _rho;
    /**
     * Gravity vector. Indicates the direction and value of the gravity.
     */
    Vector _gravityVector;



  protected:
    /**
     * Friend declaration for tests.
     */
    friend class CalculateFEnhancedDivFreeTest;

    /**
     * Instance of ElementMatrices for usage of getHFactorForM().
     */
    ElementMatrices _elementMatrices;

    /**
     * Element matrix for discrete diffusion terms (D).
     *
     *
     * The values for this matrix are set in copyMatricesDLinear().
     */
    tarch::la::Matrix <NUMBER_OF_VERTICES_PER_ELEMENT,NUMBER_OF_VERTICES_PER_ELEMENT,double> _DElementMatrix;

    /**
     * DLinear Computation
     *
     * The values for this matrix are copied from ElementMatrices.h in the
     * constructor.
     *
     * We use separate matrices in 2D and 3D.
     */
    double _CElementMatrix[NUMBER_OF_VERTICES_PER_ELEMENT*NUMBER_OF_VERTICES_PER_ELEMENT][NUMBER_OF_VERTICES_PER_ELEMENT][DIMENSIONS];

  public:
    /**
     * Constructor setting the element type and the factor eta/rho.
     *
     * @param computeDFactor       Pointer to ComputeDFactor (or derived).
     * @param computeGravityFactor Pointer to ComputeGravityFactor (or derived).
     * @param etaDividedByRho      Factor eta/rho for the diffusion term.
     * @param scenarioHasInflowPressureBoundaryConditions Flag for usage of
     *                             inflow pressure boundary conditions.
     * @param scenarioHasOutflowPressureBoundaryConditions Flag for usage of
     *                             outflow pressure boundary conditions.
     * @param inletPressure        Inlet pressure for pressure boundary
     *                             conditions.
     * @param outletPressure       Outlet pressure for pressure boundary
     *                             conditions.
     * @param rho                  Density, necessary for correct pressure
     *                             scaling in case of pressure boundary
     *                             conditions.
     * @param gravityVector        Vector indicating the direction and value of
     *                             the gravity.
     */
    CalculateFDivFree(
      const double          etaDividedByRho,
//      const bool            scenarioHasInflowPressureBoundaryCondition,
//      const bool            scenarioHasOutflowPressureBoundaryCondition,
//      const double          inletPressure,
//      const double          outletPressure,
      const double          rho
//      const Vector          gravityVector
    );

    /**
     * Destructor (now virtual since base class for turbulence).
     */
    virtual ~CalculateFDivFree();

    /**
     * Compute the gravity contribution to F.
     *
     * The method computes
     * @f$ - g \cdot \gamma \cdot \textnormal{_volumeOfTestFunction} \cdot h^d @f$. The
     * negative sign is due to the scaling of F (i.e. the additional negative
     * sign for the update of the velocity). @f$ \gamma @f$ is the additional
     * gravityFactor (usually 1.0, but may be different, for Boussinesq heat
     * equation, e.g.).
     *
     * @param h             Vector of mesh size.
     * @param result        Array of results (i.e. F).
     * @param gravityFactor Factor multiplied to gravity vector. Usually is 1.0
     *                      (but may be different, for Boussinesq heat equation,
     *                      e.g.). As each vertex has its own factor, the factor
     *                      is passed as DynamicVector.
     */
    void addGravityContribution(
      const Vector&                           h,
      tarch::la::DynamicVector<double>&       result,
      const tarch::la::DynamicVector<double>& gravityFactor
    ) const;

    /**
     * Overloaded method for generic computation of F.
     *
     * Currently, no different component matrices are supported here. We use the
     * first entry of the last array dimension of _DElementMatrix hard-coded!
     *
     * @param h      Vector of mesh size.
     * @param u      Array of input velocities; the first
     *               NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS entries are used.
     * @param result Array of results; the first
     *               NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS entries are used.
     * @param scalarTempData    Helper variable of same data type as input (to
     *                          be compatible).
     *
     * @todo: performance schoener machen (viele u und result Vektoren im Moment)
     */
    void computeFValues(
      const Vector&                           h,
      const tarch::la::DynamicVector<double>& u,
      tarch::la::DynamicVector<double>&       result,
      double&                                 scalarTempData
    ) const;

//		/**
//     * Templatised Method for evaluation of F values.
//     *
//     * Currently copy-paste from d-linear (TODO!).
//     *
//     * @param h      Vector of mesh size.
//     * @param u      Array of input velocities; the first
//     *               NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS entries are used.
//     * @param result Array of results; the first
//     *               NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS entries are used.
//     * @param scalarTempData    Helper variable of same data type as input (to
//     *                          be compatible).
//     * @param additionalDFactor additive factor (for turbulence computations).
//     */
//    template <class DataType, class DataTypeContainer>
//    void accumulateFGenericValues(
//      const Vector&            h,
//      const DataTypeContainer& u,
//      DataTypeContainer&       result,
//      DataType&                scalarTempData,
//      const double             additionalDFactor = 0.0
//    );

    /**
     * todo
     *
     * @param u         Vector of vertex velocities. Numbering corresponds to
     *                  the one used in the vertex DoF.
     * @param h         Vector of mesh sizes of current cell in each dimension
     * @param result              2D return-array.
     * @param additionalDFactor   Additional factor for diffusion (is added to _DFactor)
     *
     * @author Asli Okur, Tobias Neckel
     */
    void computeAnalyticalFEntries(
      const tarch::la::DynamicVector<double>& u,
      const Vector&                           h,
      tarch::la::DynamicMatrix<double>&       result,
      const double                            additionalDFactor
    );

    /**
     * Method to rotate dyn. vector (u0x, u0y, ..., uedge0, ..., uedge3) of
     * velocity or F values from Cartesian to 45 coordinate system (or
     * vice-versa).
     *
     * ATTENTION: the edge values cannot be correct because we only have 4 in
     * Cartesian mode but would need 8 for 45!
     */
    static tarch::la::DynamicVector<double> rotateCartesianTo45(const tarch::la::DynamicVector<double>& uCartesian);
};

#endif //_PEANO_APPLICATIONS_NAVIERSTOKES_FLUIDNUMERICS_CALCULATE_F_DIV_FREE_H_
