#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_CALCULATE_PPE_RHS_H_
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_CALCULATE_PPE_RHS_H_

#include "peano/applications/navierstokes/prototype1/fluidnumerics/AbstractCalculatePPERHS.h"

#include "peano/utils/Globals.h"
#include "tarch/la/Vector.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/ElementMatrices.h"


namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {
          class CalculatePPERHSDlinear;
        }
      }
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
class peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSDlinear : public peano::applications::navierstokes::prototype1::fluidnumerics::AbstractCalculatePPERHS {
private:

  typedef peano::applications::navierstokes::prototype1::ElementType ElementType;
  /**
   * Instance of ElementMatrices for usage of getHFactorForM().
   */
  ElementMatrices _elementMatrices;

public:
  /**
   * Constructor.
   *
   * @param elementType      Desired element type.
   * @param adjustmentFactor Adjustment factor (usually 1.0 (or 0.0)).
   */
  CalculatePPERHSDlinear(
      const double      adjustmentFactor,
      double            tau
  );
  /**
   * Standard destructor.
   */
  virtual ~CalculatePPERHSDlinear();

  /**
   * Overloaded method for computing PPE rhs.
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
   * Overloaded proxy for computeCellDivergenceGenericValues().
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

#endif //_PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_CALCULATE_PPE_RHS_H_
