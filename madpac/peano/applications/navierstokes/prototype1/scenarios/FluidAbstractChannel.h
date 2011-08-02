#ifndef _SCENARIO_FLUID_ABSTRACT_CHANNEL_H_
#define _SCENARIO_FLUID_ABSTRACT_CHANNEL_H_

#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"
#include "tarch/logging/Log.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidScenario.h"

//#if !defined(ComponentFluid)
// #error Problem!!!
//#endif

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace scenarios {
          class FluidAbstractChannel;
          namespace configuration {
            /**
             * Forward declaration.
             */
            class FluidScenarioConfiguration;
          }  // namespace configuration

        }}}}}

/**
 * Represents the abstract base class for all channel-like scenarios. Currently,
 * such scenarios are FluidObstacleInChannel, FluidObstacleInTube,
 * FluidObstacleInDriftRatchet, and FluidStep.
 *
 * For the overall reasoning behind the scenarios see either ScenarioFactory
 * (describes the workflow) or PoissonScenario. The latter one describes some
 * design principles of a scenario.
 *
 * The member variables such as _inflowType, _meanInletVelocity, and
 * _inletPressure are now centrally hold and checked in this abstract base class
 * instead of each derived subclass.
 *
 * As the methods isDirichletNode() and getVelocityForBoundaryNode() are the
 * same for all channel-like scenarios that inherit from this class, we put the
 * implementation herein. If one needs a special variant (such as in
 * FluidObstacleInAllDirichletChannel), one has to implement it in that scenario.
 *
 * @see FluidScenario
 *
 * @author Tobias Neckel
 */
class peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel: public peano::applications::navierstokes::prototype1::scenarios::FluidScenario {
public:
  /**
   * Attribute holding the string for no profile: "NONE"
   *
   * Used in checkFluidScenarioConfig().
   */
  static const std::string VELOCITY_PROFILE_NONE;
  /**
   * Attribute holding the string for parabola profile: "parabola"
   *
   * Used in checkFluidScenarioConfig().
   */
  static const std::string VELOCITY_PROFILE_PARABOLA;
  /**
   * Attribute holding the string for no profile: "const"
   *
   * Used in checkFluidScenarioConfig().
   */
  static const std::string VELOCITY_PROFILE_CONST;

private:
  /**
   * Logging device.
   */
  static tarch::logging::Log _log;
  /**
   * Bool for storing the validity of the scenario.
   *
   * This value is set via the method checkFluidScenarioConfig() directly
   * in the constructor. _isValid is used for the return method isValid().
   *
   * For the usual constructor, _isValid is initiated with true. In the test
   * constructor (for test case use only!), it is initiated with false.
   */
  bool _isValid;

  /**
   * Routine for check of the scenario configuration. This routine is called
   * in the constructor and it only exists in order to have a treatable survey
   * of the constructor calls.
   *
   * Currently, only a warning is given if the inlet and outlet pressure are
   * equal (no flow!).
   *
   * @return Flag telling whether scenario is well configured (true) or not
   *         (false).
   */
  bool checkFluidScenarioConfig();

  /**
   * This method has to be overwritten in case of non-horizontal velocity-vector.
   */
  virtual Vector computeConstVelocityProfile() const;

protected:
  /**
   * \brief Holds whether or not this scenario shall init the velocity with
   *        the specified inlet profile (parabola, e.g.).
   *
   * This attribute is now protected instead of private, as we need it in the
   * derived class FluidObstacleInChannelWithSlipWalls for the method
   * getVelocityForBoundaryNode().
   */
  bool _useVelocityInWholeChannelForInitialisation;

  /**
   * \brief Holds the type of the initial velocity at inner nodes (NONE,
   *        parabola, or const).
   *
   * The string is permitted to have the following values:
   * - NONE: No initial velocity is set (i.e. zero values everywhere inside).
   * - parabola: The parabolic profile shall be used (with corr. mean value).
   * - const:    A constant profile (with corr. value) shall be used.
   *
   * This data is checked in checkFluidScenarioConfig().
   */
  std::string _velocityProfile;

  /**
   * Enumeration for inflow type.
   */
  enum InflowType {
    /**
     * A velocity inflow profile has to be used.
     */
    INFLOW_VELOCITY_PROFILE,
    /**
     * A pressure difference (eventually time dependent) is specified.
     */
    INFLOW_PRESSURE,
    /**
     * Type of inflow is not specified.
     */
    INFLOW_UNDEF
  };

  /**
   * Inflow type used to distinguish pressure and velocity boundary conditions.
   */
  InflowType _inflowType;

  /**
   * Enumeration for outflow type.
   */
  enum OutflowType {
    /**
     * A velocity outflow profile has to be used.
     */
    OUTFLOW_VELOCITY_PROFILE,
    /**
     * Outflow profile with zero pressure (so that it will be ignored in
     * CalculateF)
     */
    OUTFLOW_PRESSURE_EQUALS_ZERO,
    /**
     * A pressure outflow is specified.
     */
    OUTFLOW_PRESSURE,
    /**
     * Type of outflow is not specified.
     */
    OUTFLOW_UNDEF
  };

  /**
   * Outflow type.
   */
  OutflowType _outflowType;

  /**
   * The value of this attribute describes the mean velocity value.
   *
   * This is used for inlet and/or initial velocity.
   */
  double _meanVelocity;

  /**
   * The value of this attribute is only valid if _inflowType is set
   * INFLOW_PRESSURE.
   */
  double _inletPressure;
  /**
   * The value of this attribute is only valid if _outflowType is set
   * OUTFLOW_PRESSURE.
   */
  double _outletPressure;

  /**
   * Offset of inlet. The meaning may be different for each derived scenario.
   *
   * The value is set in the constructor.
   */
  Vector _inletOffset;

  /**
   * Holds the information about usage periodic boundary conditions. Set in
   * the constructor.
   */
  bool _periodicBoundaryConditionsInUse;

  /**
   * Method for computing the velocity profile.
   *
   * We just switch between the following setups:
|| profile || effect
| VELOCITY_PROFILE_NONE     | return zero
| VELOCITY_PROFILE_PARABOLA | call computeParabolicVelocityProfile() of derived class
| VELOCITY_PROFILE_CONST    | return _meanVelocity
   *
   * Please note that the channel flow direction is hard-coded to be x here!
   *
   * @param x Point coordinate.
   *
   * @return velocity vector at point x.
   */
  Vector computeVelocityProfile(
      const Vector&   x
  ) const;

  /**
   * This abstract method has to be implemented for every channel-like
   * scenario for computing the parabolic velocity profile for a given node.
   *
   * This method is used in computeVelocityProfile().
   *
   * @param x    Vector of coordinates of vertex.
   * @param node Fluid vertex data of vertex.
   */
  virtual Vector computeParabolicVelocityProfile(
      const Vector&   x
  ) const = 0;

  /**
   * Test case constructor for Dirichlet inlet (mean inlet velocity). Has to
   * be used for test cases only!
   *
   * The flag _isValid is not set to false any longer (in order to prevent
   * calls from the simulation to this constructor), but set to true, since
   * the integration tests use TrivialgridFluidSimulationAdapter::parseGeometry()
   * which has an assertion on the validity of the scenario (which is
   * important).
   *
   * The optional flag parameter useInletVelocityInWholeChannel has been
   * introduced in order to set up (test) channels without having to modify
   * existent tests.
   *
   * @param meanInletVelocity Desired mean inlet velocity for test case.
   * @param inletOffset       Desired inlet offset for the test case.
   * @param useInletVelocityInWholeChannel (Optional) Flag to use inlet vel.
   *                                       in whole channel for init.
   * @param velocityProfile   (Optional) desired velocity profile. Necessary
   *                          for useful tests for slip-wall-channel.
   *
   */
  FluidAbstractChannel(
      const double      meanInletVelocity,
      const Vector&     inletOffset,
      const bool        useInletVelocityInWholeChannel = false,
      const std::string velocityProfile = VELOCITY_PROFILE_PARABOLA
  );
  /**
   * Test case constructor for Neumann inlet (inlet/outlet pressure). Has to
   * be used for test cases only!
   *
   * The flag _isValid is not set to false any longer (in order to prevent
   * calls from the simulation to this constructor), but set to true, since
   * the integration tests use TrivialgridFluidSimulationAdapter::parseGeometry()
   * which has an assertion on the validity of the scenario (which is
   * important).
   *
   * The parameters useInletVelocityInWholeChannel and meanInitVelocity have
   * been introduced in order to set up (test) channels with init velocities.
   * They are optional to avoid to modify existent tests.
   *
   * @param pInlet      Desired inlet pressure for test case.
   * @param pOUtlet     Desired outlet pressure for test case.
   * @param inletOffset Desired inlet offset for the test case.
   *  @param useInletVelocityInWholeChannel (Optional) Flag to use inlet vel.
   *                                       in whole channel for init.
   * @param meanInitVelocity (Optional) Mean velocity for init in fluid.
   * @param usePeriodicBoundaryConditions (Optional) flag for usage of
   *                                      periodic boundary conditions.
   */
  FluidAbstractChannel(
      const double  pInlet,
      const double  pOutlet,
      const Vector& inletOffset,
      const bool    useInletVelocityInWholeChannel = false,
      const double  meanInitVelocity = 0.0,
      const bool    usePeriodicBoundaryConditions = false
  );

  //todo f�r eine seite geschinwidgkeit, andere seite druck construtor fehlt .. test, ...
#ifdef ComponentSteering
  /**
   * constructor needed for boost
   */
  FluidAbstractChannel();
#endif

public:
  /**
   * Constructor. Initiates inflow settings from the given fluid config.
   *
   * This corresponds to the pop semantic.
   *
   * Furthermore, for a velocity inflow condition the mean inlet, and for
   * pressure boundary conditions the pressure (and optionally the mean init
   * velocity) have to be known. All these
   * values are read from the scenario configuration object.
   *
   * The type of inflow is detected from the following configurations:
|| uMean || pIn || pOut || periodic || resulting inflow type
| x | - | - | - | Dirichlet velocity inlet
| - | x | x | - | Neumann pressure inlet (without init velocity, without periodic)
| - | x | x | x | Neumann pressure inlet (without init velocity, with periodic)
| x | x | x | - | Neumann pressure inlet (with init velocity uMean-parabola, without periodic)
| x | x | x | x | Neumann pressure inlet (with init velocity uMean-parabola, with periodic)
   *
   * Note that the periodic boundary conditions are only valid if you use the
   * pressure boundary conditions, since there is no meaning for periodic and
   * Dirichlet at the same time
   *
   * Any other combination is not valid!
   *
   * @param fluidConfiguration Fluid configuration for getting inflow settings.
   */
  FluidAbstractChannel(const configuration::FluidScenarioConfiguration&  fluidScenarioConfiguration);

  /**
   * Standard destructor.
   */
  virtual ~FluidAbstractChannel();


  /**
   * This method returns the zero velocity for outer nodes.
   * Default implementation for all inheriting child classes; may be
   * overwritten.
   *
   * The method will be called in scenario adapters such as, e.g.,
   * TrivialgridGeometryHandle2FluidScenarioAdapter.
   *
   * @param x Position of the node for which this method is called.
   *
   * @return 0.0.
   */
  virtual Vector getVelocityForOuterNode(const Vector& x) const;
  /**
   * \brief This method returns if a given boundary node at
   *        position x and boundary number uniqueBoundaryNumber is a mixed
   *        Dirichlet/Neumann node or not.
   *
   * This method is necessary since the introduction of the mixed nodes.
   * Default implementation for all inheriting child classes; may be
   * overwritten.
   *
   * @param uniqueBoundaryNumber Boundary number of the current node. Has to be
   *                             determined by a previous call of getUniqueBoundaryNumber()
   *                             in the corresponding adapter!
   *
   * @return if node is mixed Dirichlet/Neumann (always false here!).
   */
  virtual bool isNodeMixedDirichletNeumannNode(
      const int     uniqueBoundaryNumber
  ) const;
  /**
   * This method returns zero as usual initial pressure for inner cells.
   * Default implementation for all inheriting child classes; may be
   * overwritten.
   *
   * Now time dependency is possible here, of course, since we compute the
   * pressure in the time loop!
   *
   * @return 0.0
   */
  virtual double getInitPressureForInnerCell() const;
  /**
   * This method returns zero as usual pressure for outer cells.
   * Default implementation for all inheriting child classes; may be
   * overwritten.
   *
   * Time dependency is possible here.
   *
   * @return 0.0
   */
  virtual double getPressureForOuterCell() const;


  /**
   * This method returns the default velocity for boundary nodes.
   *
   * If init velocity in whole channel is desired, a switch statement on the
   * different node types is done. There are three large groups of cases:
   * - the ones such as inflow which get the init velocity from
   *   computeVelocityProfile(),
   * - the ones such as wall which get zero,
   * - the ones for slip walls with computeVelocityProfile() part in their
   *   free direction. Slip corners are not yet supported.
   *
   * Otherwise, we have to check if we are on a Dirichlet inflow node (and
   * then return computeVelocityProfile()). In any other case,
   * Vector(0.0) is returned.
   *
   * The method will be called in scenario adapters such as, e.g.,
   * TrivialgridGeometryHandle2FluidScenarioAdapter.
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
   *
   * @todo obstacle velocity waere hier einzubauen!
   * @todo support slip corners
   */
  virtual Vector getVelocityForBoundaryNode(
      const Vector& x,
      const int     uniqueBoundaryNumber,
      const bool    isDirichletNode
  ) const;

  /**
   * This method returns the default zero velocity for inner nodes.
   *
   * Since we want to be able to use either zero or the inlet parabola on the
   * complete domain, we have to (re)implement this method (standard zero
   * return from base class not sufficient).
   *
   * If the flag _useInletVelocityInWholeChannel is true, we use
   * computeParabolicVelocityProfile() for the init velocity; otherwise zero.
   *
   * The method will be called in scenario adapters such as, e.g.,
   * TrivialgridGeometryHandle2FluidScenarioAdapter.
   *
   * @param x Position of the node for which this method is called.
   *
   * @return 0.0 or computeParabolicVelocityProfile() (dependent on init decision).
   */
  virtual Vector getInitVelocityForInnerNode(const Vector& x) const;

  /**
   * This method returns true for Dirichlet nodes and false for Neumann ones.
   *
   * The concrete value depends on the uniqueBoundaryNumber and may be
   * different when we use pressure boundary conditions instead of usual
   * velocity inlet ones, e.g.
   *
   * @param uniqueBoundaryNumber Boundary number of the current node. Has to be
   *                             determined by a previous call of getUniqueBoundaryNumber()
   *                             in the corresponding adapter!
   *
   * @return true (Dirichlet) or false (Neumann), depending on uniqueBoundaryNumber.
   */
  virtual bool isNodeDirichletNode(
      const int     uniqueBoundaryNumber
  ) const;

  /**
   * \brief This method returns if a given boundary node at
   *        position x and boundary number uniqueBoundaryNumber is a periodic
   *        boundary node or not.
   *
   * This method overwrites the one of the base class since we may have
   * periodic nodes when periodicity is switched on and we are on an inflow or
   * outflow node.
   *
   * @param uniqueBoundaryNumber Boundary number of the current node. Has to be
   *                             determined by a previous call of getUniqueBoundaryNumber()
   *                             in the corresponding adapter!
   *
   * @return if node is periodic or not.
   */
  virtual bool isNodePeriodicNode(
      const int     uniqueBoundaryNumber
  ) const;

  /**
   * Method for checking the validity of the scenario. This method should be
   * used in order to check the correct configuration done in the constructor.
   *
   * This method is returning the flag _isValid AND FluidScenario::isValid().
   *
   * This method is called by most of the derived scenarios in order to check
   * the validity (of _Re, _eta, _rho coming from the base class FluidScenario,
   * and of _inflowType, _meanInletVelocity, and _inletPressure).
   */
  virtual bool isValid() const;

  /**
   * This routine writes its fluid scenario data on the given output stream.
   *
   * Note that this method calls the base class method toString() in order to
   * write fluid scenario data of the base class also to the string. This is
   * the reason why this method is virtual (and may be called directly from
   * FluidScenario).
   *
   * @param out Stream to write to.
   */
  virtual void toString( std::ostream& out ) const;

  /**
   * This method is used instead of the one of FluidScenario since we might
   * use inflow pressure boundary conditions in a channel scenario.
   *
   * @return if inflow pressure boundary condition is used.
   */
  virtual bool isInflowPressureBoundaryConditionUsed() const;
  /**
   * This method is used instead of the one of FluidScenario since we might
   * use outflow pressure boundary conditions in a channel scenario.
   *
   * @return if outflow pressure boundary condition is used.
   */
  virtual bool isOutflowPressureBoundaryConditionUsed() const;

  /**
   * This method returns _inletPressure.
   */
  virtual double getInletPressure() const;
  /**
   * This method returns _inletPressure.
   */
  virtual double getOutletPressure() const;

  /**
   * This method returns _periodicBoundaryConditionsInUse. It overwrites the
   * method of the base class FluidScenario (which always returns false).
   */
  virtual bool arePeriodicBoundaryConditionsInUse() const;
};

#endif
