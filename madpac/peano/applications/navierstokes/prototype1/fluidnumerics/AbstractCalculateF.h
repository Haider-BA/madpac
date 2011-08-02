#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_ABSTRACT_CALCULATE_F_H_
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_ABSTRACT_CALCULATE_F_H_

#include "tarch/logging/Log.h"
#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
//#include "fluid/FluidGlobals.h"
//
//#include "fluid/ComputeDFactor.h"
//#include "fluid/ComputeGravityFactor.h"

#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/FluidStateEnhancedDivFreeEulerExplicit.h"

#include "peano/applications/navierstokes/prototype1/fluidnumerics/tests/CalculateFTest.h"

#ifdef ComponentPrecice
#include "precice/PreciceHandle.h"
#endif

#include <string>

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {
          class AbstractCalculateF;
        }
      }
    }
  }
}


/**
 * Abstract Class for calculation of convection/diffusion F.
 *
 * The new design in order to support different types of elements can be seen
 * from the following image:
 *
 * @image html UMLClassDiagram_CalculateF.png
 *
 * @author Tobias Neckel
 */
class peano::applications::navierstokes::prototype1::fluidnumerics::AbstractCalculateF {
  private:
    typedef RegularGridFluidVertexEnhancedDivFreeEulerExplicit Vertex;
    typedef peano::applications::navierstokes::prototype1::ElementType ElementType;

    /**
     * Log device.
     */
    static tarch::logging::Log _log;

//    /**
//     * Pointer to ComputeDFactor (or LESComputeDFactor in turbulent case) for
//     * computation of additional D factor.
//     */
//    ComputeDFactor* _computeDFactor;
//
//    /**
//     * Pointer to ComputeGravityFactor (or ComputeHeatGravityFactor in chemical
//     * case) for computation of the gravity factor.
//     */
//    ComputeGravityFactor* _computeGravityFactor;

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
     * Holds whether or not pressure boundary conditions are used. This
     * flag is set in the constructor.
     */
    bool _scenarioHasGravityPressureBoundaryCondition;
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
     * Used in multiphase simulations to define the indices of surface tension
     * values read from the preCICE.
     */
    int _cellCounter;

    /**
     * Type of element in use.
     * @todo Wieder rausschmeissen wenn Vertextypen getrennt werden.
     */
    ElementType _elementType;

    /**
     * This method encapsulates the loop over all nodes for the additional
     * pressure contributions.
     * It is called in the methods
     * - addPressureBoundaryContributionToF
     * - addGravityPressureBoundaryContributionToF
     * avoiding code duplication.
     *
     * @param vertices             Array of vertices.
     * @param vertexIndex          Array of corresponding cell vertex indices.
     * @param inletPressureFactor  Factor that is applied to an inlet boundary
     *                             node.
     * @param outletPressureFactor Factor that is applied to an outlet boundary
     *                             node.
     */
    void addPressureBoundaryContributionToFLoop(
      RegularGridFluidVertexEnhancedDivFreeEulerExplicit*   vertices,
      const peano::kernel::gridinterface::VertexEnumerator& enumerator,
      const double  inletPressureFactor,
      const double  outletPressureFactor
    ) const;

  public:
    /**
     * Method that adds the hydrostatic pressure to appropriate boundary nodes
     * (e.g. when there is a boundary pressure at the outflow).
     *
     * For performance reasons we did not merge this method into
     * addPressureBoundaryContributionToF. When only only the inflow velocity
     * is specified and NO outlet pressure, the outlet pressure boundary
     * condition is zero and _scenarioHasOutflowPressureBoundaryCondition is
     * false, so that the loop in addPressureBoundaryContributionToFLoop is not
     * called, avoiding these computations on every cell!
     * Nevertheless the gravity dependent pressure has to be added to the
     * 0-pressure and therefore this method has to be called.
     *
     *
     * @param vertex      Array of vertices.
     * @param vertexIndex Array of corresponding cell vertex indices.
     * @param position    Coordinate of lower left corner of the cell (used for gravity cell center).
     * @param h           Vector of mesh sizes of current cell in each dimension.
     * @param phase       Phase indicator for multi-phase flow (between 0 and 1).
     *                    Defaults to 0 for single-phase flow.
     */
    void addGravityPressureBoundaryContributionToF(
      RegularGridFluidVertexEnhancedDivFreeEulerExplicit*   vertices,
      const peano::kernel::gridinterface::VertexEnumerator& enumerator
    ) const;

    /**
     * \brief Routine for accumulation of pressure boundary condition (pBC)
     *        contributions to F.
     *
     * The reset of the F values is done in the adapter when a vertex is touched
     * for the first time. So we just add additional values to F (to the
     * possibly existing ones from a call to accumulateFValues()).
     *
     * The pBC contribution have to be considered in this cell-wise manner since
     * we need to integrate over one edge of a cell and therefore need the mesh
     * size h.
     *
     * ATTENTION: we compute hard-coded contributions to the x-axis flow only.
     *            Therefore, we put assertions whenever one tries to call it in
     *            another way.
     * ATTENTION: The inlet/outlet pressure is used in dynamic form here
     *            (without any division by rho). The division is done
     *            explicitly here in this method!
     *
     * The formula for the computation of the corresponding contribution on the
     * inlet and outlet is the following (for 2D):
     * \f{eqnarray*}
     *    -p_\textnormal{in} \int_{\Gamma_{\textnormal{in}}^e} \mathbf{n} \cdot
     *    \left( \begin{array}{c}
     *       \Phi_i^x \\
     *       \Phi_i^y
     *    \end{array} \right) \ da
     *    & = &
     *    -p_\textnormal{in} \int_{\Gamma_{\textnormal{in}}^e} - \Phi_i^x \ da  \ = \ p_\textnormal{in}\frac{h}{2},
     *    \\
     *    -p_\textnormal{out} \int_{\Gamma_{\textnormal{out}}^e} \mathbf{n} \cdot
     *    \left( \begin{array}{c}
     *      \Phi_i^x \\
     *      \Phi_i^y
     *    \end{array} \right) \ da
     *    & = &
     *    -p_\textnormal{out} \int_{\Gamma_{\textnormal{out}}^e} \Phi_i^x \ da \ = \ -p_\textnormal{out}\frac{h}{2}.
     * \f}
     * Here, we assume the inlet on the left and outlet on the right hand side
     * of a channel-like setup flowing in x-direction. In addition, the
     * integrated formula is of course only valid for our (current) choice of
     * elements that are (bi-)linear on an edge (face). In 3D, factor \f$h/2 \f$
     * changes into \f$ h^2/4 \f$ which is implemented dimension recursively.
     * We need to switch signs in the above formulas since the corresponding
     * contribution is on the right hand side of the momentum equations
     * (different to the convection and diffusion contributions already in F).
     *
     * See the following image for a survey of the situtation:
     * @image html fluid_AbstractCalculateF_NeumannBoundaryElement.png
     *
     * For non-square grid cells (such as used in mesh stretching), \f$h \f$ or
     * \f$ h^2 \f$ will be computed with the correct way using \f$ h_y \f$ (and
     * \f$ h_z \f$).
     *
     * @param vertex      Array of vertices.
     * @param vertexIndex Array of corresponding cell vertex indices.
     * @param position    Coordinate of lower left corner of the cell (used for gravity cell center).
     * @param h           Vector of mesh sizes of current cell in each dimension.
     * @param phase       Phase indicator for multi-phase flow (between 0 and 1).
     *                    Defaults to 0 for single-phase flow.
     *
     * @todo Achtung: bei body forces hier change noetig oder neue Funktion!
     * @todo Achtung: VZ hard-coded; wenn flow-axis anders ist, hier nachzuziehen!
     */
    void addPressureBoundaryContributionToF(
      RegularGridFluidVertexEnhancedDivFreeEulerExplicit*   vertices,
      const peano::kernel::gridinterface::VertexEnumerator& enumerator
    ) const;


    /**
     * Is called on begin of a grid iteration.
     *
     * Sets the cell counter, used in multiphase simulations, to zero.
     */
    void init();

  protected:
    /**
     * Viscosity used in factor
     * (eta) for the diffusion term
     *
     * This value is directly set in the constructor.
     */
    double _eta;

    /**
     * Density used in factor
     * (rho) for the convection term, factor (rho) for the external force terms
     * and for presssure boundary contributions (to get pressure p).
     *
     * This value is directly set in the constructor.
     */
    double _rho;
//    /**
//     * Density of second phase (if a second phase is present) used in factor
//     * (rho) for the convection term, factor (rho) for the external force terms
//     * and for presssure boundary contributions (to get pressure p).
//     *
//     * This value is directly set in the constructor, it is equal to _rho for
//     * single phase flows.
//     */
//    double _rhoPhase2;

//    /**
//     * Viscosity of second phase (if a second phase is present) used in factor
//     * (eta) for the diffusion term
//     *
//     * This value is directly set in the constructor, it is equal to _eta for
//     * single phase flows.
//     */
//    double _etaPhase2;
    /**
     * Gravity vector. Indicates the direction and value of the gravity.
     */
    Vector _gravityVector;

    #ifdef ComponentPrecice
    /**
     * Handle to Precice.
     *
     * Needed in multiphase simulations for the calculation of the surface tension
     * (Querying for phase interface vertices in a cell).
     */
    peano::precice::PreciceHandle* _hPrecice;
    /**
     * Surface tension coefficient for the interface between phase 1 and phase 2.
     * Used in factor (sigma) for the surface tension term.
     *
     * This value is set directly in the constructor, it is zero for single phase
     * flows and for multiphase flows without surface tension.
     */
    double _sigma;
    #endif

  public:
    /**
     * Friend declaration for test (to use addPressureBoundaryContributionToF()).
     */
    friend class peano::applications::navierstokes::prototype1::fluidnumerics::tests::CalculateFTest;

    /**
     * Constructor setting the element type and the factors eta and rho.
     *
     * The optional parameters scenarioHasInflowPressureBoundaryCondition,
     * scenarioHasOutflowPressureBoundaryCondition, inletPressure,
     * outletPressure, and rho are used in addPressureBoundaryContributionToF().
     * They are optional to avoid changes in already existing tests where no
     * pBC are used. Note that we use the dynamic pressure in all computations,
     * so we must not divide inletPressure or outletPressure by rho here to get
     * the correct "force" contribution (this division is done explicitly in
     * addPressureBoundaryContributionToF()).
     *
     * @param computeDFactor       Pointer to ComputeDFactor (or derived).
     * @param computeGravityFactor Pointer to ComputeGravityFactor (or derived).
     * @param elementType          Desired element type ("d-linear" or
     *                             "div-free").
     * @param rho                 Density, necessary for calculation of DFactor
     *                            (eta/rho) and correct pressure scaling in case
     *                            of pressure boundary conditions.
     * @param rhoPhase2           Density of second phase (if present),
     *                            necessary for calculation of DFactor
     *                            (eta/rho) and correct pressure scaling in case
     *                            of pressure boundary conditions.
     *                            In case of standard single phase flow, this
     *                            value should be set equal to rho.
     * @param eta                 Viscosity, necessary for calculation of
     *                            DFactor (eta/rho).
     * @param etaPhase2           Viscosity, necessary for calculation of
     *                            DFactor (eta/rho).
     *                            In case of standard single phase flow, this
     *                            value should be set equal to eta.
     * @param scenarioHasInflowPressureBoundaryCondition Flag for usage of
     *                             inflow pressure boundary conditions.
     * @param scenarioHasOutflowPressureBoundaryCondition Flag for usage of
     *                             outflow pressure boundary conditions.
     * @param inletPressure       Inlet pressure for pressure boundary
     *                            conditions.
     * @param outletPressure      Outlet pressure for pressure boundary
     *                            conditions.
     * @param gravityVector       Vector indicating the direction and value of
     *                            the gravity.
     * @param hPrecice            Handle to Precice.
     *                            Can safely be set to NULL, if sigma is 0.0 .
     * @param sigma               Surface tension coefficient for the interface
     *                            between phase 1 and phase 2.
     *                            In case of standard single phase flow, this
     *                            value should be set to zero.
     */
//    AbstractCalculateF(
//      const std::string     elementType,
//      const double          rho,
//      const double          rhoPhase2,
//      const double          eta,
//      const double          etaPhase2,
//      const bool            scenarioHasInflowPressureBoundaryCondition,
//      const bool            scenarioHasOutflowPressureBoundaryCondition,
//      const bool            scenarioHasGravityPressureBoundaryCondition,
//      const double          inletPressure,
//      const double          outletPressure,
//      const Vector          gravityVector
//    );


    AbstractCalculateF(
        const ElementType elementType,
        const double          etaDividedByRho,
        const double          rho
    );

    /**
     * Destructor (now virtual since base class). Deletes _computeDFactor.
     */
    virtual ~AbstractCalculateF();

    /**
     * Method for computing F. This is now just a proxy method for setting up
     * the velocity input and F output array and calling
     * computeFValues(). Furthermore, addPressureBoundaryContribution() is also
     * called directly in here and not externally from the adapters any more.
     *
     * Note that depending on the version of the grid, the array of vertices is
     * a different one (total array of all vertices in trivialgrid vs.
     * serialised 4x4 array in the adaptive case). This is no problem, as the
     * array of indices holds the valid indices in both cases (set up by the
     * trivialgrid or the adaptive grid adapters).
     *
     * The phase indicator value indicates the phase of a cell with a number
     * between 0 and 1 (first and second phase). It is calculated in the
     * adapters and is used for linearly interpolating rho and eta per cell.
     * In case of single-phase flow, phase will always be 0.
     *
     * @param vertex      Array of vertices.
     * @param vertexIndex Array of corresponding cell vertex indices.
     * @param h           Vector of mesh sizes of current cell in each dimension.
     * @param position    Position vector ("lower left" corner of cell).
     * @param phase       Phase indicator for multi-phase flow (between 0 and 1).
     *                    Defaults to 0 for single-phase flow.
     * @param nearPhaseInterface Indicates whether current cell is near a phase
     *                    interface and could be affected by surface tension
     *                    Defaults to false for single-phase flow.
     */
    void accumulateFValues(
      peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit*    vertices,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    ) const;

    /**
     * Proxy method to access _computeDFactor.computeAdditionalDFactor().
     * Is used in the computation of the Jacobian-matrix.
     *
     * @param vertexVelocities Array of velocities on vertices (first all x, than all y etc.).
     * @param h                Mesh size.
     * @param position         Position vector ("lower left" corner of cell).
     *
     * @return zero.
     */
//    virtual double computeAdditionalDFactor(
//      const tarch::la::DynamicVector<double> vertexVelocities,
//      const Vector&                          h,
//      const Vector&                          position
//    );

    /**
     * Compute the gravity contribution to F.
     *
     * As this corresponds to a scaled integral over the test function, it
     * depends on the specific element chosen.
     *
     * Note that different to computeFValues(), this method does not need to
     * be specialised/put in generic form for the Jacobian computation, as no
     * velocity DoF is involved!
     *
     * @param h             Vector of mesh size.
     * @param result        Array of results (i.e. F).
     * @param gravityFactor Factor multiplied to gravity vector. Usually is 1.0
     *                      (but may be different, for Boussinesq heat equation,
     *                      e.g.). As each vertex has its own factor, the factor
     *                      is passed as DynamicVector.
     * @param phase Phase indicator for multi-phase flow (between 0 and 1).
     *              Defaults to 0 for single-phase flow.
     *
     */
    virtual void addGravityContribution(
      const Vector&                           h,
      tarch::la::DynamicVector<double>&       result,
      const tarch::la::DynamicVector<double>& gravityFactor
    ) const = 0;

    #ifdef ComponentPrecice
    /**
     * Compute the surface tension contribution to F for multiphase flow.
     *
     * The surface tension force is first transferred from the phase interface
     * to the cell centers using a kernel function and then on to the cell
     * vertices.
     *
     * The method first queries Precice for all phase interface vertices whose
     * kernel support may overlap the cell center. For each found vertex the
     * surface tension vector is retrieved from precice and the kernel is
     * evaluated to calculate the contribution to the current cell center.
     * This contribution is then handed to
     * addSurfaceTensionContributionPerVector() to be distributed to the cell
     * vertices using a weighting respecting the elements that are currently in
     * use.
     *
     * Note: The length of the surface tension vector v that is retrieved from
     * Precice already corresponds to the volume of the desired force, i.e. the
     * force distribution function is a dirac-delta-function with value v at
     * the surface vertex position (zero everywhere else). This force
     * vector is computed in Precice as a (DIMENSIONS-1)-dimensional integral
     * over the phase-interface. This ensures the conservation of the force
     * volume.
     *
     * See also addSurfaceTensionContributionPerVertex(),
     *          evaluateSurfaceTensionKernel().
     *
     * @param h             Vector of mesh size.
     * @param position      Position vector ("lower left" corner of cell).
     * @param result        Array of results (i.e. F).
     */
    void addSurfaceTensionContribution (
      const Vector&                       h,
      const Vector&                       position,
      tarch::la::DynamicVector<double>&   result,
      const tarch::la::DynamicVector<double>& gravityFactor
    ) const;

    /**
     * The kernel function @f$ f @f$ used for the tranfer of the surface tension
     * force from the phase interface onto the grid.
     *
     * The kernel is centered at 0 and has a total support of 3h
     * (=1.5h in every direction). In order to conserve the volume of the force,
     * this kernel satisfies the property
     *
     * @f$ \forall \alpha \in \mathbb{R} : \sum_i f(i+\alpha) = 1  @f$,
     *
     * which extends to arbitrary dimensions when a standard tensor product
     * construction is used.
     *
     * @param h    Vector of mesh size, used to normalize dist.
     * @param dist Point for which kernel should be evalutated
     *             (relative distance to kernel center)
     */
    double evaluateSurfaceTensionKernel(const Vector& h, const Vector& dist ) const;

    /**
     * Compute the surface tension contribution to F.
     *
     * As this corresponds to a scaled integral over the test function, it
     * depends on the specific element chosen.
     *
     * The computation is analogous to the gravity force computation, except for
     * the fact that curvatureVector ( @f$ = f @f$ ) already corresponds to a
     * volume, i.e. doesn't need to be multiplied by @f$ h^d @f$.
     *
     * See also addGravityContribution().
     * See also addSurfaceTensionContribution().
     *
     * @param h               Vector of mesh size.
     * @param result          Array of results (i.e. F).
     * @param gravityFactor   Factor multiplied to gravity vector. Usually is 1.0
     *                        (but may be different, for Boussinesq heat equation,
     *                        e.g.). As each vertex has its own factor, the factor
     *                        is passed as DynamicVector.
     * @param curvatureVector Surface tension force volume.
     */
    virtual void addSurfaceTensionContributionPerVector (
        const Vector&                           h,
        tarch::la::DynamicVector<double>&       result,
        const tarch::la::DynamicVector<double>& gravityFactor,
        const Vector&                           curvatureVector
    ) const = 0;
    #endif // ComponentPrecice

    /**
     * Overloaded method for redirecting calls to generic computation in
     * subclasses.
     *
     * @param h      Vector of mesh size.
     * @param u      Array of input velocities; the first
     *               NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS entries are used.
     * @param result Array of results; the first
     *               NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS entries are used.
     * @param scalarTempData    Helper variable of same data type as input (to
     *                          be compatible).
     * @param phase Phase indicator for multi-phase flow (between 0 and 1).
     *              Defaults to 0 for single-phase flow.
     * @param additionalDFactor additive factor (for turbulence computations).
     */
//    virtual void computeFValues(
//      const Vector&                           h,
//      const tarch::la::DynamicVector<double>& u,
//      tarch::la::DynamicVector<double>&       result,
//      double&                                 scalarTempData,
//      const double                            phase,
//      const double                            additionalDFactor
//    ) = 0;

    /**
     * Overloaded method for redirecting calls to generic computation in
     * subclasses.
     *
     * @param h      Vector of mesh size.
     * @param u      Array of input velocities; the first
     *               NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS entries are used.
     * @param result Array of results; the first
     *               NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS entries are used.
     * @param scalarTempData    Helper variable of same data type as input (to
     *                          be compatible).
     * @param phase Phase indicator for multi-phase flow (between 0 and 1).
     *              Defaults to 0 for single-phase flow.
     */
    virtual void computeFValues(
      const Vector&                           h,
      const tarch::la::DynamicVector<double>& u,
      tarch::la::DynamicVector<double>&       result,
      double&                                 scalarTempData
    ) const =0;

    /**
     * Method for the analytical derivative calculation of F
     * for calculateAnalyticalJacobianEntries.
     *
     * This method represents a proxy that just depacks the vertex velocities
     * into a DynamicVector.
     *
     * @param vertices    Array of the vertices.
     * @param vertexIndex Array of corresponding cell vertex indices.
     * @param h           Vector of mesh sizes of current cell in each dimension.
     * @param result              2D return-array
     * @param phase Phase indicator for multi-phase flow (between 0 and 1).
     *              Defaults to 0 for single-phase flow.
     * @param additionalDFactor   (optional) Additional factor for diffusion (is added to _DFactor)
     */
//    virtual void calculateAnalyticalFEntries(
//      const tarch::la::DynamicVector<double>& u,
//      const Vector&                     h,
//      tarch::la::DynamicMatrix<double>& result,
//      const double                      additionalDFactor = 0.0
//    ) = 0;

//    /**
//     * Method for the analytical derivative calculation of F
//     * for calculateAnalyticalJacobianEntries.
//     *
//     * It returns a pointer to a 2D array, which has the size of
//     * 8*8 for 2D and 24*24 for 3D. (NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS)
//     *
//     * The code is the same for 2D and 3D.
//     * First we initialize the return array with zeroes.
//     * The actual calculation happens in 4 loops, where we put all the steps together to
//     * avoid more loops.
//     *
//     * The first two lines are for convection calculations, the last one for adding
//     * the diffusion.
//     *
//     * This method supports mesh stretching in trivialgrid.
//     *
//     * @param u         Vector of vertex velocities. Numbering corresponds to
//     *                  the one used in the vertex DoF.
//     * @param h         Vector of mesh sizes of current cell in each dimension
//     * @param result              2D return-array.
//     * @param phase Phase indicator for multi-phase flow (between 0 and 1).
//     *              Defaults to 0 for single-phase flow.
//     * @param additionalDFactor   Additional factor for diffusion (is added to _DFactor)
//     *
//     * @author Asli Okur, Tobias Neckel
//     */
//    virtual void computeAnalyticalFEntries(
//      const tarch::la::DynamicVector<double>& u,
//      const Vector&                           h,
//      tarch::la::DynamicMatrix<double>&       result,
//      const double                            additionalDFactor
//    ) = 0;
//
//    /**
//     * Method to set new inlet and outlet pressure for time dependent setups.
//     *
//     * Note that we use the dynamic pressure in all computations, so we must not
//     * divide inletPressure or outletPressure by rho here to get the correct
//     * "force" contribution (this division is done explicitly in
//     * addPressureBoundaryContributionToF()).
//     *
//     * @param newInletPressure  New pressure at inlet.
//     * @param newOutletPressure New pressure at outlet.
//     */
//    virtual void setNewPressureData(
//      const double newInletPressure,
//      const double newOutletPressure
//    ) =0;

    /**
     * Proxy for calling setDeltaNu on _computeDFactor.
     */
    void setDeltaNuOnComputeDFactor(const double newValue);

    /**
     * Returns the type of element in use.
     * @todo Wieder rausschmeissen wenn Vertextypen getrennt werden.
     */
    ElementType getElementType() const;
};

#endif //_PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_ABSTRACT_CALCULATE_F_H_
