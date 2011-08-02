#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_CALCULATE_INVERSE_A_H_
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_CALCULATE_INVERSE_A_H_

#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {
          /**
           * Forward declaration
           */
          class CalculateInverseA;
        }  // namespace fluidnumericsa
        /**
         * Forward declaration
         */
        class RegularGridFluidVertexEnhancedDivFreeEulerExplicit;
      }
    }
  }
  namespace kernel {
    namespace gridinterface {
      /**
       * Forward declaration
       */
      class VertexEnumerator;
    }
  }
}

/**
 * Class for Inverse of lumped mass matrix A.
 *
 * The values of A are accumulated by accumulateAValues() on each cell.
 * The real inversion is done by getInverseA() of the class Vertex (template)
 * which directly returns the inverted A-value.
 *
 * We recently added support for non-uniform mesh size vectors (necessary for
 * mesh stretching, e.g.).
 *
 * @author Tobias Neckel
 */
class peano::applications::navierstokes::prototype1::fluidnumerics::CalculateInverseA {
  private:
    /**
     * Density rho.
     */
    double _rho;

    /**
     * Density rho of second phase in multi-phase flow.
     */
    double _rhoPhase2;

  public:
  /**
   * Standard constructor.
   *
   * @param rho                 Density
   * @param rhoPhase2           Density of second phase (if present),
   *                            In case of standard single phase flow, this
   *                            value should be set equal to rho.
   */
  CalculateInverseA( double rho, double rhoPhase2 );

  /**
   * Virtual destructor.
   */
  virtual ~CalculateInverseA();

  /**
   * Routine for accumulation of values of the lumped mass matrix A.
   *
   * Note that we changed the computation to a dimension-independent form.
   * We add to each vertex the following amount:
   * \f{eqnarray*}
   * 2D &:& h(0)*h(1) / 4.0 \\
   * 3D &:& h(0)*h(1)*h(2) / 8.0
   * \f}
   *
   *
   * @param vertex Array of pointers of the corresponding cell vertices.
   * @param h      Vector of mesh sizes of current cell in each dimension.
   * @param phase Phase indicator for multi-phase flow (between 0 and 1).
   *              Defaults to 0 for single-phase flow.
   */
  void accumulateAValues(
    peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit*   vertices,
    const peano::kernel::gridinterface::VertexEnumerator& enumerator
    );
};

#endif //_PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_CALCULATE_INVERSE_A_H_
