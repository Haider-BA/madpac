#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_CALCULATE_PPE_RHS_ENHANCED_DIV_FREE_H_
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_CALCULATE_PPE_RHS_ENHANCED_DIV_FREE_H_

#include "peano/applications/navierstokes/prototype1/fluidnumerics/ElementMatrices.h"

#include "peano/applications/navierstokes/prototype1/fluidnumerics/AbstractCalculatePPERHS.h"

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {
          /**
           * Forward declaration
           */
          class CalculatePPERHSEnhancedDivFree;
          /**
           * Forward declaration
           */
          class RegularGridFluidVertexEnhancedDivFreeEulerExplicit;
          /**
           * Forward declaration
           */
          class RegularGridFluidCellEnhancedDivFreeEulerExplicit;
        }
      }
    }
  }
}

namespace peano {
  namespace kernel {
    namespace gridinterface {
      class VertexEnumerator;
    }
  }
}

/**
 * \brief Class for computation of the right hand side of the pressure Poisson
 *        equation (PPE).
 *
 * We recently added support for non-uniform mesh size vectors (necessary for
 * mesh stretching, e.g.). This implies the new attribute _elementMatrices.
 *
 * The new design in order to support different types of elements can be seen
 * from the following image:
 *
 * @image html UMLClassDiagram_CalculatePPERHS.png
 *
 * @author Tobias Neckel
 */
class peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSEnhancedDivFree : public AbstractCalculatePPERHS  {
  private:
  /**
   * Instance of ElementMatrices for usage of getHFactorForM().
   */
  ElementMatrices _elementMatrices;

  public:
  /**
   * Constructor setting the adjustmentFactor.
   *
   * @param adjustmentFactor
   */
  CalculatePPERHSEnhancedDivFree(
      const double adjustmentFactor,
      double            tau
  );
  /**
   * Standard destructor.
   */
  virtual ~CalculatePPERHSEnhancedDivFree();

  /**
   * Overloaded method for computing PPE rhs.
   *
   * Note that we now use the ("correct") of invA instead of a fixed 1/h^2.
   * This is necessary in order to support the "usual" PETSc variant as well
   * as adaptive stuff with contributions of hanging nodes. This means that
   * a corresponding factor of 2 has to be used consistently in gradP setting
   * of your iterative solver (i.e. no invA usage for gradP scaling)!
   *
   * @param h        Vector of mesh size.
   * @param u        Array of input velocities.
   * @param F        Array of input F.
   * @param inverseA Array of input inverse A values.
   * @param result   Resulting divergence value.
   */
  virtual void computePPERHSValues(
      const Vector&                           h,
      const tarch::la::DynamicVector<double>& u,
      const tarch::la::DynamicVector<double>& F,
      const tarch::la::DynamicVector<double>& inverseA,
      double&                                 result
  );
  //overloaded methods for other datatypes skipped here.

  /**
   * Overloaded method for evaluation of cell divergence correction.
   *
   * @param h      Vector of mesh size.
   * @param u      Array of input velocities (set up by vertex before).
   * @param result Scalar result of divergence computation.
   */
  virtual void computeCellDivergence(
      const Vector&                           h,
      const tarch::la::DynamicVector<double>& u,
      double&                                 result
  );


  /**
   * This method implements the analytical derivative d(div)/du (ddiv_du).
   * Is called in calculateAnalyticalCellDivergence().
   *
   * @param h Vector of mesh sizes of current cell.
   * @param result Resulting 1D return-array for ddiv_du.
   */
  virtual void computeAnalyticalDivergenceValues(
      const Vector&                     h,
      tarch::la::DynamicVector<double>& result
  );
};


#endif //_PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_CALCULATE_PPE_RHS_ENHANCED_DIV_FREE_H_
