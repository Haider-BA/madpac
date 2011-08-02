#ifndef _SCENARIO_FLUID_SCENARIO_H_
#define _SCENARIO_FLUID_SCENARIO_H_

#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
#include "tarch/logging/Log.h"

#include "peano/applications/navierstokes/prototype1/records/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/ManualRefinementBox.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/ManualRefinementTube.h"

#include <vector>

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace scenarios {
	  class FluidScenario;
	  /**
	   * Forward declaration for reference.
	   */
	  namespace configuration {
	        class FluidScenarioConfiguration;
          }  // namespace configuration

}}}}}


/**
 * Represents the basic abstract class for all fluid scenarios. For the overall
 * reasoning behind the scenarios see either ScenarioFactory (describes the
 * workflow) or PoissonScenario. The latter one describes some design principles
 * of a scenario.
 *
 * The member variables _Re, _eta and _rho are now centrally hold and checked in
 * this abstract base class instead of each derived subclass.
 *
 * We changed the overall interface for calls from the adapters (such as
 * TrivialgridGeometryHandle2FluidScenarioAdapter). To avoid knowledge about the
 * dofs, we now use simple getter to transfer all necessary data to the
 * adapter (that has the dof knowledge and sets the data there).
 * Therefore, the following methods exist:
 * - getInitVelocityForInnerNode()
 * - getVelocityForOuterNode()
 * - getVelocityForBoundaryNode()
 * - getInitPressureForInnerCell()
 * - getPressureForOuterCell()
 *
 * @see PoissonScenario
 *
 * @author Tobias Neckel, Tobias Weinzierl, Michael Lieb
 */
class peano::applications::navierstokes::prototype1::scenarios::FluidScenario {

  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;
    typedef peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit FluidVertexDoF;



    /**
     * Bool for storing the validity of the scenario.
     *
     * This value is set via the method checkFluidScenarioConfig() directly
     * in the constructor. _isValid is used for the return method isValid().
     *
     * In the constructor, _isValid is initiated with true.
     *
     * This flag is necessary in order to be able to test if the configuration
     * possesses some needed attributes.
     */
    bool _isValid;

//    /**
//     * Vector of manual refinement boxes. May be empty if not specified.
//     */
//    std::vector<ManualRefinementBox> _manualRefinementBoxes;
//    /**
//     * Vector of manual refinement tubes. May be empty if not specified. Only
//     * used in 3D.
//     */
//    std::vector<ManualRefinementTube> _manualRefinementTubes;

    /**
     * This method checks the fluid settings for Re, eta and rho.
     *
     * It is, besides isValid(), the only real method (non-abstract) in this
     * base class, since nearly all derivated classes use this method (except
     * circle flow) indirectly by getting the result via isValid().
     *
     * @return Flag telling whether scenario is well configured (true) or not
     *         (false).
     */
    bool checkFluidScenarioConfig();


  protected:
    /**
     * Reynolds number of the chosen flow scenario.
     *
     * This number is the desired one and serves as check variable.
     * The real Reynolds number is calculated and compared to Re.
     */
    double _Re;

    /**
     * Reynolds number of second phase in multi-phase flow of the chosen flow scenario.
     *
     * This number is the desired one and serves as check variable.
     * The real Reynolds number is calculated and compared to Re.
     */
    double _RePhase2;

    /**
     * Dynamical viscosity eta.
     */
    double _eta;

    /**
     * Dynamical viscosity eta of second phase in multi-phase flow.
     * Equals _eta in case of single-phase flow.
     */
    double _etaPhase2;

    /**
     * Density rho.
     */
    double _rho;

    /**
     * Density rho of second phase in multi-phase flow.
     * Equals _rho in case of single-phase flow.
     */
    double _rhoPhase2;

    /**
     * Surface tension sigma between the two phases in multi-phase flow.
     */
    double _sigma;

    /**
     * Phase interface width in multiples of the cell diagonal length for
     * multi-phase flow.
     */
    double _phaseInterfaceWidth;

    /**
      * Indicates if the scenario is a multi-phase scenario. That is the case if
      * RePhase2, etaPhase2, rhoPhase2 have all been specified in the configuration.
      */
    bool _isMultiPhase;

    /**
      * Indicates wheter the scenario uses moving geometry.
      */
    bool _useMovingGeometry;

    /**
     * Stores the value of the gravity vector.
     */
    Vector _gravityVector;

    /**
     * Test case constructor. Initiates _Re=_eta=_rho=1. Has to be used for test
     * cases only!
     *
     * The flag _isValid is not set to false any longer (in order to prevent
     * calls from the simulation to this constructor), but set to true, since
     * the integration tests use TrivialgridFluidSimulationAdapter::parseGeometry()
     * which has an assertion on the validity of the scenario (which is
     * important). All derived classes use the isValid() of this class in order
     * to check validity!
     */
    FluidScenario();

  public:
    /**
     * Constructor. Initiates (_Re, _eta, _rho) from the given fluid config.
     * Initiates (_RePhase2, _etaPhase2, _rhoPhase2) from the given fluid config
     * if a second phase is specified.
     *
     * This corresponds to the pop semantic.
     *
     * @param fluidConfiguration Fluid configuration for getting Re, eta, rho.
     */
    FluidScenario(const configuration::FluidScenarioConfiguration&  fluidConfiguration);

    /**
     * Standard destructor.
     */
    virtual ~FluidScenario();

    /*
     * This method should be used in multi-phase integration test cases only !
     *
     * Modifies the scenario to a multi-phase scenario after beeing created
     * with the default constructor (Multi-phase tests cannot just use default
     * rhos, etas,... ) . In addition to the multi-phase properties the flag
     * _isMultiPhase is automatically set.
     *
     * @param Density of phase 2.
     * @param Viscosity of phase 2.
     * @param Surface tension coefficient sigma.
     * @param With of phase-interface as a multiple of the cell-diagonal.
     */
    void setupMultiPhase(
      const double rhoPhase2,
      const double etaPhase2,
      const double sigma,
      const double phaseInterfaceWidth
    );

    /**
     * The coordinate x of the current node has been included since  different
     * boundary numbers might be used on the same geometric boundary part depending
     * on the position of the node (e.g. for an inlet offset of the channel).
     *
     * @param numberOfBoundaries Number of intersected boundaries for the current
     *                           position (with h), often equal to one.
     * @param boundaryNumber     Array of the corresponding boundary numbers (often
     *                           only one entry!).
     * @param x                  Coordinate of the current node. This has been
     *                           necessary for correct boundary numbers on parts
     *                           of geometric boundaries.
     */
    virtual int getUniqueBoundaryNumber(
      int           numberOfBoundaries,
      int           boundaryNumber[],
      const Vector& x
    ) const = 0;

    /**
     * Abstract method.
     */
    virtual Vector getInitVelocityForInnerNode(const Vector& x) const = 0;
    /**
     * Abstract method.
     */
    virtual Vector getVelocityForOuterNode(const Vector& x) const = 0;
    /**
     * This (abstract) method returns the default velocity for boundary nodes for the
     * corresponding scenario. Dirichlet or Neumann nodes are NOT distinguished
     * outside, but this method is called for both!
     *
     * The method will be called in scenario adapters such as, e.g.,
     * TrivialgridGeometryHandle2FluidScenarioAdapter.
     *
     * The usage of the additional bool isDirichletNode avoids an additional
     * call of isNodeDirichletNode() inside a concrete scenario, and allows
     * for a one-location implementation of the algorithms for boundary handling
     * (see FluidObstacleInChannel, e.g.).
     *
     * Note that in this method, you may implement time dependent boundary
     * conditions (but has to be called in a different adapter/method than
     * createDegreeOfFreedom since dofs possibly already exist).
     *
     * @param x Position of the node for which this method is called.
     * @param uniqueBoundaryNumber Boundary number of the current node. Has to be
     *                             determined by a previous call of getUniqueBoundaryNumber()
     *                             in the corresponding adapter!
     * @param isDirichletNode      Bool whether node is Dirichlet or not.
     *
     * @return Vector of boundary scenario velocity at position x.
     */
    virtual Vector getVelocityForBoundaryNode(
      const Vector& x,
      const int     uniqueBoundaryNumber,
      const bool    isDirichletNode
    ) const = 0;
    /**
     * \brief This (abstract) method returns if a given boundary node at
     *        position x and boundary number uniqueBoundaryNumber is a Dirichlet
     *        or not.
     *
     * Usually, Neumann boundary nodes (in terms of the velocity) are the only
     * other type of boundary nodes in the concrete scenario. One exception is
     * a mixed Dir/Neumann boundary node for slip walls.
     *
     * @param uniqueBoundaryNumber Boundary number of the current node. Has to be
     *                             determined by a previous call of getUniqueBoundaryNumber()
     *                             in the corresponding adapter!
     *
     * @return Dirichlet (true) or other (false, i.e. Neumann/periodic).
     */
    virtual bool isNodeDirichletNode(
      const int     uniqueBoundaryNumber
    ) const = 0;

    /**
     * Abstract method.
     */
    virtual bool isNodeMixedDirichletNeumannNode(
      const int     uniqueBoundaryNumber
    ) const = 0;

    /**
     * Abstract method.
     */
    virtual bool isNodePeriodicNode(
      const int     uniqueBoundaryNumber
    ) const = 0;

    /**
     * Abstract method.
     */
    virtual double getInitPressureForInnerCell() const = 0;
    /**
     * Abstract method.
     */
    virtual double getPressureForOuterCell() const = 0;

    /**
     * Method for returning the flag _isValid. This method should be used
     * in order to check the correct configuration done in the constructor.
     *
     * This method is called by most of the derived scenarios in order to check
     * the validity (of _Re, _eta, _rho from the base class, e.g.).
     */
    virtual bool isValid() const;

    /**
     * This routine writes the basic fluid scenario data on the given output
     * stream.
     *
     * Note that this method is called from outside (e.g. in
     * TrivialgridFluidRunner), no matter what kind of derived object the
     * current scenario is. This is the reason why this method is virtual.
     *
     * @param out Stream to write to.
     */
    virtual void toString( std::ostream& out ) const;

    /**
     * This method exports a string containing the info of the scenario. We use
     * the overloaded method toString(out) which contains also data from child
     * classes.
     */
    std::string toString() const;

    /**
     * This method returns the identifier of the current scenario instance. All
     * abstract classes have to have it as zero.
     *
     * @return String containing the identifier of the current scenario instance.
     */
    virtual std::string getIdentifier() const = 0;

    /**
     * Getter for _eta (to export to FluidSimulation, e.g.).
     *
     * Has to be virtual to support decoratable (heat scenario).
     */
    virtual double getViscosityEta() const;
    /**
     * Getter for _etaPhase (to export to FluidSimulation, e.g.).
     *
     * Has to be virtual to support decoratable (heat scenario).
     */
    virtual double getViscosityEtaPhase2() const;
    /**
     * Getter for _rho (to export to FluidSimulation, e.g.).
     *
     * Has to be virtual to support decoratable (heat scenario).
     */
    virtual double getDensityRho() const;
    /**
     * Getter for _rhoPhase2 (to export to FluidSimulation, e.g.).
     *
     * Has to be virtual to support decoratable (heat scenario).
     */
    virtual double getDensityRhoPhase2() const;

    /**
     * Getter for _sigma (to export to FluidSimulation, e.g.).
     *
     * Has to be virtual to support decoratable (heat scenario).
     */
    virtual double getSurfaceTensionSigma() const;

    /**
     * Getter for _phaseInterfaceWidth (to export to FluidSimulation, e.g.).
     *
     * Has to be virtual to support decoratable (heat scenario).
     */
    virtual double getPhaseInterfaceWidth() const;

    /**
     * Method for returning the flag _isMultiPhase.
     *
     * Has to be virtual to support decoratable (heat scenario).
     */
    virtual bool isMultiPhase() const;

    /**
     * Method for returning the flag _useMovingGeometry.
     *
     * Has to be virtual to support decoratable (heat scenario).
     */
    virtual bool usesMovingGeometry() const;

    /**
     * @return gravity vector specified in the configuration file.
     *
     * Has to be virtual to support decoratable (heat scenario).
     */
    virtual Vector getGravityVector() const;

    /**
     * This method returns false. Whenever a scenario (e.g. the
     * FluidAbstractChannel) needs to implement inflow pressure boundary
     * conditions, this method has to be implemented to return the correct
     * answer.
     *
     * @return false.
     */
    virtual bool isInflowPressureBoundaryConditionUsed() const;
    /**
     * This method returns false. Whenever a scenario (e.g. the
     * FluidAbstractChannel) needs to implement outflow pressure boundary
     * conditions, this method has to be implemented to return the correct
     * answer.
     *
     * @return false.
     */
    virtual bool isOutflowPressureBoundaryConditionUsed() const;

    /**
     * This method returns false. Whenever a scenario (e.g. the
     * FluidAbstractChannel) needs to implement gravity pressure boundary
     * conditions, this method has to be implemented to return the correct
     * answer.
     *
     * @return false.
     */
    bool isGravityPressureBoundaryConditionUsed() const ;

    /**
     * This method returns zero. It is called for the calculateF adapter in
     * order to get data for F-computation.
     *
     * \see FluidAbstractChannel.
     */
    virtual double getInletPressure() const = 0;
    /**
     * This method returns zero. It is called for the calculateF adapter in
     * order to get data for F-computation.
     *
     * \see FluidAbstractChannel.
     */
    virtual double getOutletPressure() const = 0;

    /**
     * Method for exporting the usage of periodic boundary conditions.
     *
     * Every concrete scenario that needs a real decision/answer instead of mere
     * false, needs to implement this method itself (as done for
     * FluidObstacleInChannel or FluidObstacleInTurbulentChannel).
     *
     * This method is needed in the adaption of a scenario in adaptSolver(), e.g.
     *
     * @return false
     */
    virtual bool arePeriodicBoundaryConditionsInUse() const = 0;

    /**
     * Method for deciding wheter or not to refine due to internal (manual) box.
     *
     * We run over all boxes in _manualRefinementBoxes and check whether h is
     * greater than the minimum mesh width specified (refine) or not (no refine
     * for that box).
     *
     * @param x     Position of the current vertex that asks for refinement.
     * @param h     Resolution of the current vertex that asks for refinement.
     * @param axis  Direction of refinement.
     */
    bool refine(
      const Vector& x,
      const Vector& h,
      const int     axis
    );

    #ifdef ComponentSteering
    /**
     * This method is used to synchronize to instances of the same scenario
     * in the steering context
     */
    virtual void synchronize( peano::applications::navierstokes::prototype1::scenarios::FluidScenario *scenario);
    #endif
};

/**
 * Output operator of FluidScenario.
 *
 * It calls the operation toString() of the corresponding instance of a fluid
 * scenario. This means of course that also the corresponding version of
 * toString() is used (this is what we want).
 *
 * @param out           Output stream reference to which the operator should write.
 * @param fluidScenario Scenario reference which shall be put to output stream out.
 *
 * @return The output stream reference out (input parameter!).
 */
std::ostream& operator<<(std::ostream& out,
    const peano::applications::navierstokes::prototype1::scenarios::FluidScenario& fluidScenario);


#endif
