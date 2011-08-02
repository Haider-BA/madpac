#ifndef _SCENARIO_FLUID_OBSTACLE_IN_CHANNEL_H_
#define _SCENARIO_FLUID_OBSTACLE_IN_CHANNEL_H_

#include "peano/applications/navierstokes/prototype1/scenarios/FluidAbstractChannel.h"
#include "tarch/logging/Log.h"

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace scenarios {
	  class FluidObstacleInChannel;

	  namespace configuration {
	        /**
	           * Forward declaration.
	           */
	          class FluidScenarioConfiguration;

          }  // namespace configuration

        }}}}}


/**
 * The cylinder channel. A rectangle box-like geometry with walls up and down
 * (and front and back in 3D), an inlet on the left and an outlet (Neumann) on
 * the right hand side and an obstacle (e.g. clyinder) sitting somewhere in the
 * channel.
 *
 * Please note that for a turbulent channel flow between two plates, one needs
 * to use FluidObstacleInTurbulentChannel in order to get the channel walls
 * right!
 *
 * This scenario uses isDirichletNode() and getVelocityForBoundaryNode() from
 * its base class (since this is currently the same for a channel-like setups).
 *
 * Please note, that the cyliner channel scenario is also valid for a channel
 * without a cylinder. The scenario represents the following mappings:
 *
|| Boundary number || Type                 || Description
|  0               |  Dirichlet / Neumann  |  Inflow condition
|  DIMENSIONS      |  Neumann              |  Outflow condition
|  1 <= ... < 2*DIMENSIONS  |  Dirichlet   |  Channel wall
|  2*DIMENSIONS <= ... <= 19 |  Dirichlet   |  Obstacle (19 is sufficient for 2D/3D sphere or box)
|  20 <= ...                |  - (ignored) |  Dummy fluid box in PeGSI workaround channel? Has to be adapted!
 *
 * See the following image for a survey of the boundary numbers of the box:
 *
 * @image html ../geometry/geometry_Hexahedron_boundaryNumbers.gif
 *
 * @author Tobias Neckel, Tobias Weinzierl
 *
 * @todo check PeGSI workaround channel: Nummern von 10 auf 20 geandert!
 */
class peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel: public peano::applications::navierstokes::prototype1::scenarios::FluidAbstractChannel {
  private:

    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    /**
     * Bool for storing the validity of the scenario.
     *
     * This value is set via the method checkFluidScenarioSetting() directly
     * in the constructor. _isValid is used for the return method isValid().
     */
    bool _isValid;

    /**
     * Vector specifying the dimensions of the inlet of the channel (typically
     * only height at the left hand side).
     */
    Vector _inletDimensions;

    /**
     * Routine for check of the scenario setting. This routine is called in
     * the constructor and it only exists in order to have a treatable survey
     * of the constructor calls.
     *
     * Currently, this method only checks the flow direction via the value of
     * "ATTRIBUTE_INLET_DIMENSION"(0). If this value is not equal to zero, there
     * may be a possible misuse by trying to set the flow to another direction.
     * The velocity profile and the mean inlet velocity are now checked in the
     * base class FluidAbstractChannel and not in this class any longer.
     *
     * @return Flag telling whether scenario is well configured (true) or not
     *         (false).
     */
    bool checkFluidScenarioSetting();

    /**
     * \brief This method implements the computation of the parabolic velocity
     *        for this scenario.
     *
     * The non-zero output is restricted to positions y (and z in 3D) in [0;H]
     * (and [0;W], resp.).
     *
     * For inflow boundary in 2D, the inlet velocity is computed by
     * @f$ u(y) = 6\bar{u} \cdot \frac{y(H-y)}{H^2} @f$ with @f$ \bar{u} @f$
     * being the mean inlet velocity, y the x(1)-coordinate (translated by the
     * inlet offset x1),and @f$ H @f$ the inlet height.
     *
     * For the 3D case, the inlet velocity is computed by
     * @f$ u(y,z) = 36\bar{u} \cdot \frac{y(H-y)\cdot z(W-z)}{H^2 W^2} @f$ with
     * @f$ \bar{u} @f$ being the mean inlet velocity, y and z the
     * x(1)-/x(2)-coordinate (translated by the inlet offsets x1 and x2),and
     * @f$ H @f$ the inlet height (y-direction) and @f$ W @f$
     * the inlet witdh (z-direction). The factor 36 is due to 16*9/4 for 2D
     * inlet quadrature with biquadratic.
     *
     * These two definitions are consistent with the 1995-DFG-benchmark setup
     * (note that there u_max is used instead of the mean inlet velocity which
     * corresponds to different factors in front).
     *
     * See the following image for a visualisation how this setup looks like for
     * a squared channel inlet:
     *
     * @image html ./integration-tests/scenario_tests_channel3DInletVelocity.png
     *
     * This method is indirectly tested in
     * TrivialgridGeometryHandle2FluidScenarioAdapterTestChannel.
     *
     * @param x    Vector of coordinates of vertex.
     * @param node Fluid vertex data of vertex.
     */
    virtual Vector computeParabolicVelocityProfile(
      const Vector&   x
    ) const;

    /**
     * Method for computing if the inflow inlet is smaller (resulting in Wall
     * instead of inlet).
     *
     * @param x Vector for position checking.
     *
     * @return Whether or not inlet is smaller resulting in Wall instead.
     */
    bool isInletSmallerResultingInWall(const Vector& x) const;

  public:
    /**
     * Identifier of this scenario.
     */
    const static std::string IDENTIFIER;

    /**
     * Constructor setting up the scenario. To be able to set the right boundary
     * conditions, the channel has to know the inlet dimensions of the channel.
     * Furthermore, for a velocity inflow condition, the mean inlet, for
     * pressure boundary conditions the pressure has to be known. All these
     * values are read from the scenario configuration object. By specifying
     * either a mean inlet or (exclusive or!) a pressure value, the type of
     * inflow is selected.
     *
     * In this constructor, we first check if all the variables necessary for
     * the direct initialisation really exist in the config file. This has to be
     * done on this level (and not in checkFluidScenarioSetting(), because
     * we need the configuration handle to perform this action.
     *
     * The first component of the Vectors _inletDimensions and _inletOffset always
     * has to be ignored since we assume the inlet always on the left part of
     * the channel.
     *
     * The second component of the inletOffset-Vector is used for coordinate
     * information to calculate the velocity values for the specified mean
     * inlet velocity.
     *
     * The coordinate information for the inlet of the channel
     * (_inletOffset) is equally read from the configuration.
     *
     * @param fluidConfiguration The configuration of the scenario.
     */
    FluidObstacleInChannel(
      const configuration::FluidScenarioConfiguration&  fluidConfiguration
    );

    /**
     * Channel with Dirichlet inflow. Only the geometric information is hold
     * with this adapter (Dimensions, position). No fluid properties are set
     * at all. This constructor has to be used for test cases only!
     *
     * This constructor with push instead of pop semantics should only be used
     * for test cases and not for real program runs. It imitates the
     * configuration stuff by using the two input vectors inletDimensions and
     * inletOffset.
     *
     * The first component of the Vectors _inletDimensions and _inletOffset
     * always has to be ignored since we assume the inlet always on the left
     * part of the channel.
     *
     * The second component of the inletOffset-Vector is used for coordinate
     * information to calculate the velocity values for the specified mean
     * inlet velocity.
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
     * At the moment, this constructor is used for example in
     * TrivialgridGeometryHandle2FluidScenarioAdapterTestChannel.
     *
     * @param inletDimensions Length (x, is ignored!), height (y) and width (z) of the
     *                        channel inlet.
     * @param inletOffset Offset (coordinate translation of origin) of the channel inlet.
     *                          Used to specify translation. Usually (0.0,0.0).
     * @param meanInletVelocity Mean inlet velocity value for parabolic profile.
     * @param useInletVelocityInWholeChannel (Optional) Flag to use inlet vel.
     *                                       in whole channel for init.
     */
    FluidObstacleInChannel(
      const Vector&  inletDimensions,
      const Vector&  inletOffset,
      const double   meanInletVelocity,
      const bool     useInletVelocityInWholeChannel = false
    );
    /**
     * Channel with Neumann inflow. Only the geometric information is hold
     * with this adapter (Dimensions, position). No fluid properties are set
     * at all. This constructor has to be used for test cases only!
     *
     * This constructor is used in the same manner than the one for Dirichlet
     * inflow (the one with meanInletVelocity as third parameter), except that
     * we set up pressure boundary conditions for a Neumann inflow (pInlet /
     * pOutlet).
     *
     * The parameters useInletVelocityInWholeChannel and meanInitVelocity have
     * been introduced in order to set up (test) channels with init velocities.
     * They are optional to avoid to modify existent tests.
     *
     * At the moment, this constructor is used for example in
     * IntegrationTestChannel.
     *
     * @param inletDimensions Length (x, is ignored!), height (y) and width (z) of the
     *                        channel inlet.
     * @param inletOffset     Offset (coordinate translation of origin) of the channel inlet.
     *                        Used to specify translation. Usually (0.0,0.0).
     * @param pInlet          Inlet pressure for Neumann inflow setup.
     * @param pOutlet         Outlet pressure for Neumann inflow setup.
     * @param useInletVelocityInWholeChannel (Optional) Flag to use inlet vel.
     *                                       in whole channel for init.
     * @param meanInitVelocity (Optional) Mean velocity for init in fluid.
     * @param usePeriodicBoundaryConditions (Optional) flag for usage of
     *                                      periodic boundary conditions.
     */
    FluidObstacleInChannel(
      const Vector&  inletDimensions,
      const Vector&  inletOffset,
      const double   pInlet,
      const double   pOutlet,
      const bool     useInletVelocityInWholeChannel = false,
      const double   meanInitVelocity = 0.0,
      const bool     usePeriodicBoundaryConditions = false
    );

    /**
     * Destructor.
     */
    virtual ~FluidObstacleInChannel();

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
     * This method returns the unique boundary number for a single boundary point.
     *
     * The order of the return statements defines the overweighing at corners of
     * the channel box. At corners, the walls always overweigh and thus their
     * return is the first in the sequence!
     *
     * Possible topology missmatches are excluded (junction of an obstacle with
     * inflow, junction of inflow and outflow). The junction of obstacle with
     * wall is ignored since otherwise we get major problems with the peano grid
     * (root cell etc.).
     *
     * The coordinate x of the current node has been included since  different
     * boundary numbers might be used on the same geometric boundary part depending
     * on the position of the node (e.g. for an inlet offset of the channel).
     * Thus, a possible inflow is afterwards checked for compatibility with the
     * _inletOffset and eventually reset to WALL.
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
      int   numberOfBoundaries,
      int   boundaryNumber[],
      const Vector& x
    ) const;

    /**
     * Method for checking the validity. This method should be used in order to
     * check the correct configuration done in the constructor.
     *
     * This method is returning the flag _isValid AND FluidAbstractChannel::isValid().
     */
    virtual bool isValid() const;

    /**
     * This method returns the identifier of the current scenario instance.
     *
     * @return String containing the identifier of the current scenario instance.
     */
    virtual std::string getIdentifier() const;

};

#endif
