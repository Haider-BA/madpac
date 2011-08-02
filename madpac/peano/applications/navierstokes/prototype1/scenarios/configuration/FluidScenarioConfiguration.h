#ifndef _FLUID_SCENARIO_FLUID_CONFIGURATION_H_
#define _FLUID_SCENARIO_FLUID_CONFIGURATION_H_

#include "tarch/irr/XML.h"
#include "tarch/logging/Log.h"
#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/configuration/RefinementBoxConfiguration.h"
//#include "peano/applications/navierstokes/prototype1/scenarios/configuration/RefinementTubeConfiguration.h"
//#include "solver-toolbox/configuration/RefinementCriterionConfiguration.h"
#include "peano/applications/navierstokes/prototype1/scenarios/TimeDependentBoundaryData.h"

#include <string>
#include <vector>
#include <climits>

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace scenarios {
          namespace configuration {
            class FluidScenarioConfiguration;
          }  // namespace configuration
}}}}}


/**
 * Represents the configuration for the scenario.
 *
 * For a list of all valid scenario names, see the following list:
 *
|| scenario || name / identifier
|  trivial scenario (everything is zero) | scenario::FluidTrivialScenario
|  driven cavity    | scenario::FluidDrivenCavity
|  circle flow      | scenario::FluidCircleFlow
|  channel          | scenario::FluidObstacleInChannel (with empty obstacle)
|  obstacle in channel (e.g. cylinder) | scenario::FluidObstacleInChannel
|  PreCICE cold leg | scenario::FluidPreCICEColdLeg
 *
 * Besides the mandatory identifier, there are a lot of attributes one is
 * allowed to specify. Depending on the type of the chosen scenario, the
 * attributes are optional, mandatory or neglected. Whether you have to specify
 * them or not has to be recherched within the scenario classes. See the
 * component fluid-scenario for a detailed description. There is no validation
 * done within the configuration object. Please consult FluidScenarioFactory for
 * a detailed description of the scenario setup workflow.
 *
 * We recently implemented the attribute names as public const strings to have
 * them accessible in a consistent manner (also from "outside", i.e. from the
 * concrete fluid scenarios for logging info of checks etc.).
 *
 * Here's a list of attributes available (perhaps not up-to-date; check the
 * defined strings for correct names):
 *
|| attribute || description || type
|  Re | Reynolds number | double
|  tau | Time step size | double
|  eta | Viscosity of the fluid | double
|  rho | Density of the fluid | double
|  lid-veloctiy | Value of the "lid" (e.g. for driven cavity) | double
|  mean-inlet-veloctiy | Value of the mean inlet boundary velocity (e.g. for channel) | double
|  inlet-pressure | Value of the mean inlet boundary pressure | double
|  number-of-time-steps |  Total number of time steps | integer
|  print-delta | Every print-delta time step, output writing is done | integer
|  adjustment-factor | Value for considering div(u) for PPERHS (0 or 1) | double
|  element-type | Type of the velocity-elements | string ("div-free" or "dlinear")
|  characteristic-length | Characteristic length to determine the Reynolds number | double
|  inlet-dimension-xk | Dimension of the inlet | double
|  inlet-offset-xk | Offset of the inlet | double
|  random-noise-weight | factor for random noise weighting in turbulent channel | double
 *
 *
 * Attention: We have implemented a work-around static variable maxElevation together with a
 * corresponding getter. To imitate a global variable. The value is set in parseSubtag()
 *
 * @author Michael Lieb, Tobias Neckel, Tobias Weinzierl
 */
class peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration {
  public:
    /**
     * XML-Tag corresponding to grid configuration.
     */
    static const std::string TAG;

    /**
     * The different types of geometries are defined by names (strings). If
     * the configuration does not know a name, it always returns this string.
     */
    static const std::string UNDEF;

    /**
     * String of attribute name. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_NAME;
    /**
     * String of attribute Reynolds number. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_RE;
    /**
     * String of attribute Reynolds number of second phase in multi-phase flow.
     * Now usable externally (e.g. in fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_RE_PHASE2;
    /**
     * String of attribute viscosity eta. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_ETA;
    /**
      * String of attribute viscosity eta of second phase in multi-phase flow.
      * Now usable externally (e.g. in fluid scenarios when checking config).
      */
    static const std::string ATTRIBUTE_ETA_PHASE2;
    /**
     * String of attribute density rho. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_RHO;
    /**
      * String of attribute viscosity rho of second phase in multi-phase flow.
      * Now usable externally (e.g. in fluid scenarios when checking config).
      */
    static const std::string ATTRIBUTE_RHO_PHASE2;
    /**
     * String of attribute surface tension sigma between the two phases
     * in multi-phase flow.
     */
    static const std::string ATTRIBUTE_SIGMA;
    /**
     * String of attribute phase interface width.
     */
    static const std::string ATTRIBUTE_PHASE_INTERFACE_WIDTH;
    /**
     * String of attribute gravity vector. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_GRAVITY_VECTOR;
    /**
     * String of attribute maximum elevation. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_MAXIMUM_ELEVATION;
    /**
     * String of attribute lid velocity. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_LID_VELOCITY;
    /**
     * String of attribute mean inlet velocity. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_INITIATE_VELOCITY_EVERYWHERE;
    /**
     * String of attribute velocity mean value. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_VELOCITY_MEAN_VALUE;
    /**
     * String of attribute velocity profile. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_VELOCITY_PROFILE;
    /**
     * String of attribute has outlet velocity profile.
     */
    static const std::string ATTRIBUTE_HAS_OUTLET_VELOCITY_PROFILE;
    /**
     * String of attribute inlet pressure. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_INLET_PRESSURE;
    /**
     * String of attribute outlet pressure. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_OUTLET_PRESSURE;
    /**
     * String of attribute use periodic boundary conditions. Now usable
     * externally (e.g. in fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_USE_PERIODIC_BC;
    /**
     * String of attribute adjustment factor. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_ADJUSTMENT_FACTOR;
    /**
     * String of attribute element type. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_ELEMENT_TYPE;
    /**
     * String of attribute characteristic length. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_CHARACTERISTIC_LENGTH;
    /**
     * String of attribute use divergence correction. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_USE_DIVERGENCE_CORRECTION;
    /**
     * String of attribute use moving geometry. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_USE_MOVING_GEOMETRY;
    /**
     * String of attribute random noise weight. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_RANDOM_NOISE_WEIGHT;
    /**
     * String of attribute inlet dimension. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_INLET_DIMENSION;
    /**
     * String of attribute inlet offset. Now usable externally (e.g. in
     * fluid scenarios when checking config).
     */
    static const std::string ATTRIBUTE_INLET_OFFSET;

    /**
     * String of element type ido-cf with CENTRAL discretisation. Now usable
     * externally (e.g. in fluid simulations when checking config).
     */
    static const std::string ELEMENT_TYPE_IDOCF_CENTRAL;
    /**
     * String of element type ido-cf with UPWIND discretisation. Now usable
     * externally (e.g. in fluid simulations when checking config).
     */
    static const std::string ELEMENT_TYPE_IDOCF_UPWIND;

    /**
     * String of print-delta for dynamical refinement.
     */
    static const std::string ATTRIBUTE_DYNAMICAL_REFINEMENT_DELTA;
    /**
     * String of minimal mesh size for dynamical refinement.
     */
    static const std::string ATTRIBUTE_DYNAMICAL_REFINEMENT_HMIN;
    /**
     * String of minimal mesh size for dynamical refinement.
     */
    static const std::string ATTRIBUTE_DYNAMICAL_REFINEMENT_STARTSTEP;

    /**
     * String of boundary pressure function.
     */
    static const std::string ATTRIBUTE_BOUNDARY_PRESSURE_FUNCTION;
    /**
     * String of boundary pressure sine function.
     */
    static const std::string BOUNDARY_PRESSURE_FUNCTION_SIN;
    /**
     * String of boundary pressure cosine function.
     */
    static const std::string BOUNDARY_PRESSURE_FUNCTION_COS;
    /**
     * String of boundary pressure tangent function.
     */
    static const std::string BOUNDARY_PRESSURE_FUNCTION_TAN;
    /**
     * String of boundary pressure amplitude \f$ A \f$.
     */
    static const std::string ATTRIBUTE_BOUNDARY_PRESSURE_AMPLITUDE;
    /**
     * String of boundary pressure angular frequency \f$ \omega \f$.
     */
    static const std::string ATTRIBUTE_BOUNDARY_PRESSURE_ANGULAR_FREQUENCY;
    /**
     * String of boundary pressure phase angle \f$ \phi \f$.
     */
    static const std::string ATTRIBUTE_BOUNDARY_PRESSURE_PHASE_ANGLE;
    /**
     * String of time to bring velocity from zero to specified value(s).
     */
    static const std::string ATTRIBUTE_VELOCITY_TURN_ON_TIME;

  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    /**
     * Stores if the fluid configuration is valid.
     */
    bool _isValid;

    /**
     * Name of the scenario.
     */
    std::string _scenarioName;

    /**
     * Stores the value of the "lid" velocity (e.g. for driven cavity).
     *
     * Even if we don't use a real lid at the corners for the driven
     * cavity in the Zenger-setup, we call it like this for simplicity.
     */
    double _lidVelocity;
    /**
     * Stores if the lid velocity is specified.
     */
    bool _lidVelocitySpecified;

    /**
     * Stores the flag for initiating the velocity everywhere.
     */
    bool _initVelocityEverywhere;
    /**
     * Stores if the flag for initial velocity everywhere is specified.
     */
    bool _initVelocityEverywhereSpecified;
    /**
     * Stores the mean value of the velocity profile.
     */
    double _velocityMeanValue;
    /**
     * Stores if the mean inlet velocity is specified.
     */
    bool _velocityMeanValueSpecified;
    /**
     * Stores the type of profile of the velocity.
     */
    std::string _velocityProfile;
    /**
     * Stores if the velocity profile is specified.
     */
    bool _velocityProfileSpecified;
    /**
     * Stores the flag for using a velocity profile at the outlet.
     */
    bool _hasOutletVelocityProfile;
    /**
     * Stores if the flag for using a velocity profile at the outlet is
     * specified.
     */
    bool _isHasOutletVelocityProfileSpecified;

    /**
     * Stores the value of the pressure at the inlet. Necessary for
     * pressure boundary conditions.
     */
    double _inletPressure;
    /**
     * Stores if the inlet pressure is specified.
     */
    bool _inletPressureSpecified;
    /**
     * Stores the value of the pressure at the outlet. Necessary for
     * pressure boundary conditions.
     */
    double _outletPressure;
    /**
     * Stores if the outlet pressure is specified.
     */
    bool _outletPressureSpecified;
    /**
     * Stores if periodic (pressure) boundary conditions shall be used.
     */
    bool _usePeriodicBC;

    /**
     * Stores the value of the Reynolds number.
     */
    double _Re;
    /**
     * Stores if the Reynolds number is specified.
     */
    bool _reSpecified;

    /**
     * Stores the value of the Reynolds number for a second phase in a
     * multi-phase setup.
     */
    double _RePhase2;
    /**
     * Stores if the Reynolds number of phase 2 is specified.
     */
    bool _rePhase2Specified;

    /**
     * Stores the value of the kinematic viscosity @f$ \eta @f$.
     */
    double _eta;
    /**
     * Stores if the viscosity eta is specified.
     */
    bool _etaSpecified;

    /**
     * Stores the value of the kinematic viscosity @f$ \eta_2 @f$
     * for a second phase in a multi-phase setup.
     * Default value for single-phase flow is @f$ \eta @f$.
     */
    double _etaPhase2;
    /**
     * Stores if the viscosity etaPhase2 is specified.
     */
    bool _etaPhase2Specified;

    /**
     * Stores the value of the density @f$ \rho @f$.
     */
    double _rho;
    /**
     * Stores if the density rho is specified.
     */
    bool _rhoSpecified;

    /**
      * Stores the value of the density @f$ \rho_2 @f$.
      * for a second phase in a multi-phase setup.
      * Default value for single-phase flow is @f$ \rho @f$.
      */
    double _rhoPhase2;
    /**
      * Stores if the density rhoPhase2 is specified.
      */
    bool _rhoPhase2Specified;

    /**
     * Stores the value of the surface tension @f$ \sigma @f$ between the two
     * phases in multi-phase flow.
     */
    double _sigma;
    /**
     * Stores if the surface tension sigma is specified.
     */
    bool _sigmaSpecified;

    /**
     * Stores the value of the phase interface width as a multiple of the cell
     * diagonal length.
     */
    double _phaseInterfaceWidth;
    /**
     * Stores if the phase interface width is specified.
     */
    bool _phaseInterfaceWidthSpecified;

    /**
     * Stores the value of the gravity vector.
     */
    Vector _gravityVector;
    /**
     * Stores if the gravity vector is specified.
     */
    bool _gravityVectorSpecified;

    /**
     * Stores the value of the maximum elevation (note that there is no
     * direction).
     * (static member for general access - see getter of max elevation )
     */
    static double _maximumElevation;
    /**
     * Stores if the maximum elevation is specified.
     * (static member for general access - see getter of max elevation )
     */
    static bool _maximumElevationSpecified;

    /**
     * Stores the value of the adjustment factor (1.0 for usage of div(u) for
     * RHS b of pressure poisson equation, 0.0 otherwise).
     */
    double _adjustmentFactor;
    /**
     * Stores if the adjustment factor is specified.
     */
    bool _adjustmentFactorSpecified;

    /**
     * Stores the element type (string: "dlinear" or "div-free").
     */
    std::string _elementType;
    /**
     * Stores if the element type is specified.
     */
    bool _elementTypeSpecified;

    /**
     * Holds the characteristic length.
     */
    double _characteristicLength;
    /**
     * Stores if the characteristic length is specified.
     */
    bool _characteristicLengthSpecified;

    /**
     * Holds the inlet dimensions.
     */
    Vector _inletDimension;
    /**
     * Stores if the inlet dimension is specified.
     */
    bool _inletDimensionSpecified;

    /**
     * Holds the inlet offset.
     */
    Vector _inletOffset;
    /**
     * Stores if the inlet offset is specified.
     */
    bool _inletOffsetSpecified;
    /**
     * Stores if the additional divergence correction shall be used.
     */
    bool _useDivergenceCorrection;
    /**
     * Stores if the additional divergence correction shall be used.
     */
    bool _useMovingGeometry;
    /**
     * Stores the random noise weight.
     */
    double _randomNoiseWeight;
    /**
     * Stores if the random noise weight is specified.
     */
    bool _randomNoiseWeightSpecified;

//    /**
//     * Vector of manual refinement box configurations (optional).
//     */
//    std::vector<RefinementBoxConfiguration> _refinementBoxConfiguration;
//    /**
//     * Vector of manual refinement tube configurations (optional).
//     */
//    std::vector<RefinementTubeConfiguration> _refinementTubeConfiguration;

    /**
     * Print-delta for dynamical refinement.
     */
    int _dynamicalRefinementDelta;
    /**
     * Stores if print-delta for dynamical refinement is specified.
     */
    bool _dynamicalRefinementDeltaSpecified;

    /**
     * Minimal mesh size for dynamical refinement.
     */
    double _dynamicalRefinementHMin;
    /**
     * Stores if minimal mesh size for dynamical refinement is specified.
     */
    bool _dynamicalRefinementHMinSpecified;

    /**
     * Start step for dynamical refinement.
     */
    int _dynamicalRefinementStartStep;
    /**
     * Stores if start step for dynamical refinement is specified.
     */
    bool _dynamicalRefinementStartStepSpecified;

    /**
     * Config of dynamical refinement.
     */
//    peano::solvertoolbox::RefinementCriterionConfiguration _dynamicalRefinementConfiguration;
    /**
     * Stores if print-delta for dynamical refinement is specified.
     */
    bool _dynamicalRefinementConfigurationSpecified;

    /**
     * Function for boundary pressure.
     */
    std::string _boundaryPressureFunction;
    /**
     * Stores if function for boundary pressure is specified.
     */
    bool _boundaryPressureFunctionSpecified;
    /**
     * Amplitude for boundary pressure.
     */
    double _boundaryPressureAmplitude;
    /**
     * Stores if amplitude for boundary pressure is specified.
     */
    bool _boundaryPressureAmplitudeSpecified;
    /**
     * Angular frequency for boundary pressure.
     */
    double _boundaryPressureAngularFrequency;
    /**
     * Stores if angular frequency for boundary pressure is specified.
     */
    bool _boundaryPressureAngularFrequencySpecified;
    /**
     * Phase angle for boundary pressure.
     */
    double _boundaryPressurePhaseAngle;
    /**
     * Stores if phase angle for boundary pressure is specified.
     */
    bool _boundaryPressurePhaseAngleSpecified;
    /**
     * Stores time to bring velocity to specified value(s).
     */
    double _velocityTurnOnTime;

    /**
     * Getter for channel maximum elevation in negative gravitation direction.
     */
    void readMaximumElevationInNegGravitationDirection() const;

  public:
    /**
     * Constructor initiating all values with zero, all boolean with false.
     */
    FluidScenarioConfiguration();
    /**
     * Standard destructor.
     */
	  virtual ~FluidScenarioConfiguration();

    /**
     * Since it depends on the type of scenario whether an entry is mandatory or
     * not, isValid() can not check the consistency all alone. Basically, it
     * is only able to check whether the scenario name is specified. Again, it
     * does not check whether the scenario is defined, because this is done by
     * the scenario factory method.
     *
     * Besides the name check, every parser error implies that this operation
     * returns false.
     */
    bool isValid() const;

    /**
     * This method parses the tag fluid scenario for all legitimate attributes.
     * It always checks if the corresponding variable exists in the config file
     * and than sets the value and the flag (to true).
     */
    void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

    /**
     * This method returns the scenario name specified in the configuration file.
     */
    std::string getScenarioName() const;

    /**
     * @return the characteristic lid velocity specified in the configuration
     * file.
     */
    double getLidVelocity() const;
    /**
     * This method returns if the attribute lid-velocity has been
     * specified in the config file.
     */
    bool isLidVelocitySpecified() const;

    /**
     * @return if the velocity shall be initiated everywhere.
     */
    bool shallVelocityBeInitiatedEverywhere() const;
    /**
     * This method returns if the attribute initiate-velocity-everywhere has been
     * specified in the config file.
     */
    bool isInitiateVelocityEverywhereySpecified() const;

    /**
     * @return the mean velocity value specified in the configuration file.
     */
    double getVelocityMeanValue() const;
    /**
     * This method returns if the attribute velocity-mean-value has been
     * specified in the config file.
     */
    bool isVelocityMeanValueSpecified() const;

    /**
     * @return the velocity profile string (for setting everywhere in
     *         fluid domain) specified in the configuration file.
     */
    std::string getVelocityProfile() const;
    /**
     * This method returns if the attribute for the velocity profile
     * type has been specified in the config file.
     */
    bool isVelocityProfileSpecified() const;

    /**
     * @return if a velocity profile should be used for the outlet.
     */
    bool hasOutletVelocityProfile() const;
    /**
     * @return if flag for using a velocity profile should be used for the
     *         outlet is specified.
     */
    bool isHasOutletVelocityProfileSpecified() const;

    /**
     * @return the pressure value at the inlet specified in the configuration
     * file.
     */
    double getInletPressure() const;
    /**
     * This method returns if the attribute inlet-pressure has been
     * specified in the config file.
     */
    bool isInletPressureSpecified() const;
    /**
     * @return the pressure value at the outlet specified in the configuration
     * file.
     */
    double getOutletPressure() const;
    /**
     * This method returns if the attribute outlet-pressure has been
     * specified in the config file.
     */
    bool isOutletPressureSpecified() const;

    /**
     * @return the Reynolds number specified in the configuration file.
     */
    double getReynoldsNumber() const;
    /**
     * This method returns if the attribute Re has been
     * specified in the config file.
     */
    bool isReynoldsNumberSpecified() const;

    /**
     * @return the Reynolds number specified in the configuration file for
     * the second phase in multi-phase flow.
     */
    double getReynoldsNumberPhase2() const;
    /**
     * This method returns if the attribute Re has been specified in the config
     * file for the second phase in multi-phase flow.
     */
    bool isReynoldsNumberPhase2Specified() const;

    /**
     * @return the dynamic viscosity specified in the configuration file.
     */
    double getViscosityEta() const;
    /**
     * This method returns if the attribute eta has been
     * specified in the config file.
     */
    bool isViscosityEtaSpecified() const;

    /**
     * @return the dynamic viscosity specified in the configuration file for
     * the second phase in multi-phase flow.
     */
    double getViscosityEtaPhase2() const;
    /**
     * This method returns if the attribute eta has been
     * specified in the config file for the second phase in multi-phase flow.
     */
    bool isViscosityEtaPhase2Specified() const;

    /**
     * @return the density specified in the configuration file.
     */
    double getDensityRho() const;
    /**
     * This method returns if the attribute rho has been
     * specified in the config file.
     */
    bool isDensityRhoSpecified() const;

    /**
     * @return the density specified in the configuration file for the second
     * phase in multi-phase flow.
     */
    double getDensityRhoPhase2() const;
    /**
     * This method returns if the attribute rho has been
     * specified in the config file for the second phase in multi-phase flow.
     */
    bool isDensityRhoPhase2Specified() const;

    /**
     * @return the attribute sigma specified in the configuration file for the
     * surface tension between the two phases in multi-phase flow.
     */
    double getSurfaceTensionSigma() const;
    /**
     * This method returns if the attribute sigma has been
     * specified in the config file.
     */
    bool isSurfaceTensionSigmaSpecified() const;

    /**
     * @return the attribute phase interface width specified in the configuration
     * file for the width of the phase interface as a multiple of the cell
     * diagonal length.
     */
    double getPhaseInterfaceWidth() const;
    /**
     * This method returns if the attribute phase interface width has been
     * specified in the config file.
     */
    bool isPhaseInterfaceWidthSpecified() const;

    /**
     * @return gravity vector specified in the configuration file.
     *
     * The method returns the default value (Vector(0.0)) if no value is
     * specified!
     */
    Vector getGravityVector() const;
    /**
     * This method returns if the attribute gravity vector has been
     * specified in the config file.
     */
    bool isGravityVectorSpecified() const;

    /**
     * This method returns if the attribute maximum elevation has been
     * specified in the config file.
     * (static since maximum elevation itself is static as well)
     */
    static bool isMaximumElevationSpecified();

    /**
     * @return the adjustment factor specified in the configuration file.
     */
    double getAdjustmentFactor() const;
    /**
     * This method returns if the attribute adjustment-factor has been
     * specified in the config file.
     */
    bool isAdjustmentFactorSpecified() const;

    /**
     * @return the element type specified in the configuration file.
     * @todo Bitte auf enum umstellen!
     */
    std::string getElementType() const;
    /**
     * This method returns if the attribute element-type has been
     * specified in the config file.
     */
    bool isElementTypeSpecified() const;

    /**
     * This method returns the characteristic length.
     */
    double getCharacteristicLength() const;
    /**
     * This method returns if the attribute total-simulation-time has been
     * specified in the config file.
     */
    bool hasCharacteristicLength() const;
    /**
     * This method returns the Vector of inlet dimensions specified in the
     * configuration file.
     */
    Vector getInletDimension() const;
    /**
     * This method returns if the attribute inlet-dimension has been
     * specified for all dimensions in the config file.
     */
    bool hasInletDimension() const;
    /**
     * This method returns the Vector of inlet offset specified in the
     * configuration file.
     */
    Vector getInletOffset() const;
    /**
     * This method returns if the attribute inlet-offset has been
     * specified for all dimensions in the config file.
     */
    bool hasInletOffset() const;
    /**
     * This method returns if the divergence correction shall be used.
     */
    bool useDivergenceCorrection() const;
    /**
     * This method returns if moving geometry shall be used (for FSI, e.g.).
     */
    bool useMovingGeometry() const;

    /**
     * This method returns if the random noise weight has been specified.
     */
    bool isRandomNoiseWeightSpecified() const;
    /**
     * This method returns if the random noise weight.
     */
    double getRandomNoiseWeight() const;
    /**
     * This method returns if periodic (pressure) boundary conditions are used.
     */
    bool arePeriodicBCUsed() const;


    /**
     * Getter for total number of manual refinement boxes specified in config.
     */
    int getNumberOfManualRefinementBoxes() const;
    /**
     * Getter for refinement box config (for getter access etc.).
     *
     * @param boxNumber Number of the desired refinement box.
     */
//    const RefinementBoxConfiguration& getManualBox(
//      const int boxNumber
//    ) const;

    /**
     * Getter for total number of manual refinement tubes specified in config.
     */
    int getNumberOfManualRefinementTubes() const;
    /**
     * Getter for refinement tube config (for getter access etc.).
     *
     * @param tubeNumber Number of the desired refinement tube.
     */
//    const RefinementTubeConfiguration& getManualTube(
//      const int tubeNumber
//    ) const;

//    /**
//     * Getter for dynamical refinement delta.
//     */
//    int getDynamicalRefinementDelta() const;
//    /**
//     * Returns if dynamical refinement delta is specified.
//     */
//    bool isDynamicalRefinementDeltaSpecified() const;
//
//    /**
//     * Getter for dynamical refinement hMin.
//     */
//    double getDynamicalRefinementHMin() const;
//    /**
//     * Returns if dynamical refinement hMin is specified.
//     */
//    bool isDynamicalRefinementHMinSpecified() const;
//
//    /**
//     * Getter for dynamical refinement start step.
//     */
//    int getDynamicalRefinementStartStep() const;
//    /**
//     * Returns if dynamical refinement start step is specified.
//     */
//    bool isDynamicalRefinementStartStepSpecified() const;
//
//    /**
//     * Getter for dynamical refinement config.
//     */
//    const peano::solvertoolbox::RefinementCriterionConfiguration&
//      getDynamicalRefinementConfiguration() const;
//    /**
//     * Returns if dynamical refinement config is specified.
//     */
//    bool isDynamicalRefinementConfigurationSpecified() const;

    /**
     * Getter for boundary pressure function config.
     */
    peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::FunctionType
    getBoundaryPressureFunction() const;
    /**
     * Returns if boundary pressure function is specified.
     */
    bool isBoundaryPressureFunctionSpecified() const;
    /**
     * Getter for boundary pressure amplitude config.
     */
    double getBoundaryPressureAmplitude() const;
    /**
     * Returns if boundary pressure amplitude is specified.
     */
    bool isBoundaryPressureAmplitudeSpecified() const;
    /**
     * Getter for boundary pressure angular frequency config.
     */
    double getBoundaryPressureAngularFrequency() const;
    /**
     * Returns if boundary pressure angular frequency is specified.
     */
    bool isBoundaryPressureAngularFrequencySpecified() const;
    /**
     * Getter for boundary pressure phase angle config.
     */
    double getBoundaryPressurePhaseAngle() const;
    /**
     * Returns if boundary pressure phase angle is specified.
     */
    bool isBoundaryPressurePhaseAngleSpecified() const;
    /**
     * Returns if velocity turn on time is specified.
     */
    bool isVelocityTurnOnTimeSpecified() const;
    /**
     * Getter for velocity turn on time.
     */
    double getVelocityTurnOnTime() const;

    /**
     * Getter for channel maximum elevation in negative gravitation direction.
     */
    static double getMaximumElevationInNegGravitationDirection();
};

#endif
