/*
 * AbstractCalculatePPERHS.h
 *
 *  Created on: Jul 6, 2011
 *      Author: unterweg
 */

#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_ABSTRACTCALCULATEPPERHS_H_
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_ABSTRACTCALCULATEPPERHS_H_

#include "peano/applications/navierstokes/prototype1/FluidStateEnhancedDivFreeEulerExplicit.h"

#include "tarch/la/DynamicVector.h"

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {
          /**
           * Forward declaration
           */
          class AbstractCalculatePPERHS;
          /**
           * Forward declaration
           */
          class CalculatePPERHSEnhancedDivFree;
        }
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
  namespace kernel {
    namespace gridinterface {
      /**
       * Forward declaration
       */
      class VertexEnumerator;
    }
  }
}

class peano::applications::navierstokes::prototype1::fluidnumerics::AbstractCalculatePPERHS
{
  private:
    typedef RegularGridFluidVertexEnhancedDivFreeEulerExplicit Vertex;
    typedef RegularGridFluidCellEnhancedDivFreeEulerExplicit Cell;

  protected:
    /**
     * Type of element in use.
     */
    ElementType _elementType;

    /**
     * Holds the time step size tau.
     *
     * This is necessary in order to be able to compute
     * calculateCellPPERightHandSide() without having to
     * use tau as a parameter in every single call!
     */
    double _tau;

    /**
     * Holds the adjustment factor.
     *
     * This is necessary in order to be able to compute
     * calculateCellPPERightHandSide() without having to
     * use tau as a parameter in every single call!
     */
    double _adjustmentFactor;

    /**
     * Method for exporting the element type in use.
     */
    ElementType getElementType() const;

  public:
    /**
     * Friend declaration for test (to use addPressureBoundaryContributionToF()).
     */
    friend class CalculatePPERHSTest;

    /**
     * Constructor setting the element type.
     *
     * The optional parameters scenarioHasInflowPressureBoundaryCondition,
     * scenarioHasOutflowPressureBoundaryCondition, scenarioHasGravityPressureBoundaryCondition, inletPressure,
     * outletPressure are used in addPressureBoundaryContributionToF().
     * They are optional to avoid changes in already existing tests where no
     * pBC are used. Note that we use the dynamic pressure in all computations,
     * so we must not divide inletPressure or outletPressure by rho here to get
     * the correct "force" contribution (this division is done explicitly in
     * addPressureBoundaryContributionToF()).
     *
     * @param elementType      Desired element type (to be stored).
     * @param adjustmentFactor Adjustment factor (usually 1.0 (or 0.0)).
     */
    AbstractCalculatePPERHS(
      ElementType       elementType,
      const double      adjustmentFactor,
      double            tau
    );
    /**
     * Destructor (now virtual since base class). Deletes _computeDFactor.
     */
    virtual ~AbstractCalculatePPERHS();

    /**
     * Proxy for calculation of the right hand side of the PPE.
     *
     * @param vertex     Array of pointers of the corresponding cell vertices.
     * @param cell       Reference of current cell.
     * @param h          Vector of mesh sizes of current cell in each dimension.
     */
    void calculateCellPPERightHandSide(
        Vertex*                                               vertices,
        const peano::kernel::gridinterface::VertexEnumerator& enumerator,
        Cell&                                                 cell
    );


    /**
     * Overloaded method for redirecting calls to generic computation in
     * subclasses.
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
    ) = 0;
    //overloaded methods for other datatypes skipped here.


    /**
     * Proxy for calculation of div(u).
     *
     * @param vertex     Array of pointers of the corresponding cell vertices.
     * @param cell       Reference of current cell.
     * @param h          Vector of mesh sizes of current cell in each dimension.
     */
    void calculateCellDivergenceCorrectionRightHandSide(
        Vertex*                                               vertices,
        const peano::kernel::gridinterface::VertexEnumerator& enumerator,
        Cell&                                                 cell,
        const Vector&                                         h
    );



    /**
     * Proxy method for evaluation of cell divergence correction.
     *
     * @param h      Vector of mesh size.
     * @param u      Array of input velocities (set up by vertex before).
     * @param result Scalar result of divergence computation.
     */
    virtual void computeCellDivergence(
      const Vector&                           h,
      const tarch::la::DynamicVector<double>& u,
      double&                                 result
    ) = 0;
    
    /**
     * Proxy for the analytical derivative calculation of div(u)
     * for calculateAnalyticalJacobianEntries.
     *
     * This method represents a proxy that just depacks the vertex velocities
     * into a DynamicVector.
     *
     * @param h      Vector of mesh sizes of current cell in each dimension.
     * @param result Vector with d(div)/du derivative values (length depends
     *        on element type! computed in computeAnalyticalDivergenceValues()).
     */
    void calculateAnalyticalDivergenceValues(
      const Vector&                     h,
      tarch::la::DynamicVector<double>& result
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
    ) = 0;

    /**
     * This method sets _tau to a new Value (that has to be greater than zero).
     * This is necessary for variable time step size.
     *
     * @param newTau New time step size tau.
     */
    void setNewTimeStepSizeTau(const double newTau);

    double getTau();
};

#endif /* _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_ABSTRACTCALCULATEPPERHS_H_ */
