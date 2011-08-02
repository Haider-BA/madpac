#ifndef _FLUIDSCENARIO_TIME_DEPENDENT_BOUNDARY_DATA_H_
#define _FLUIDSCENARIO_TIME_DEPENDENT_BOUNDARY_DATA_H_



#include "tarch/logging/Log.h"
#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"


namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace scenarios {
          class TimeDependentBoundaryData;

          namespace configuration {
            /**
             * Forward declaration for reference.
             */
            class FluidScenarioConfiguration;
          }  // namespace configuration
        }}}}}


/**
 * Class for handling time dependent boundary data.
 *
 * For time dependent (inlet) pressure, the resulting formula is
 * \f$ p(t) = A\cdot f (\omega\cdot t + \phi) \f$, where \f$ A \f$ is the
 * amplitude,
 * \f$ \omega \f$ represents the angular frequency, and \f$ \phi \f$ corresponds
 * to the phase angle (often zero) used in the function \f$ f \f$. \f$ f \f$
 * typically corresponds to the sine or cosine function.
 */
class peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData {
public:
  /**
   * Enum for type of time dependent function.
   */
  enum FunctionType {
    /**
     * Undefined function type.
     */
    UNDEF  = 0,
    /**
     * Sine function type.
     */
    SIN    = 1,
    /**
     * Cosine function type.
     */
    COS    = 2,
    /**
     * Tangent function type.
     */
    TAN    = 3
  };

private:
  /**
   * Logging device.
   */
  static tarch::logging::Log _log;

  /**
   * Flag for storing validity of instantiation.
   */
  bool _isValid;

  /**
   * Type of the function to be used for the time dependent inlet pressure.
   */
  FunctionType _pressureFunction;
  /**
   * Amplitude \f$ A \f$ of the time dependent inlet pressure in
   * \f$ p(t) = A\cdot f (\omega\cdot t + \phi) \f$ .
   */
  double _pressureAmplitude;
  /**
   * Angular frequency \f$ \omega \f$ of the time dependent inlet pressure in
   * \f$ p(t) = A\cdot f (\omega\cdot t + \phi) \f$ .
   */
  double _pressureAngularFrequency;
  /**
   * Phase angle \f$ \phi \f$ of the time dependent inlet pressure in
   * \f$ p(t) = A\cdot f (\omega\cdot t + \phi) \f$ .
   */
  double _pressurePhaseAngle;
  /**
   * Simulation time used to drive the inlet velocities to the specified
   * value(s).
   */
  double _velocityTurnOnTime;
  /**
   * Last time used to retrieve
   */
  double _time;
  /**
   * Factor for changing velocities affected by turn-on time
   */
  double _velocityFactor;

public:
  /**
   * Default constructor for no time dependent boundary data.
   */
  TimeDependentBoundaryData();
  /**
   * Constructor with config for setup.
   *
   * @param fluidConfig Config for fluid settings.
   */
  TimeDependentBoundaryData(
      const configuration::FluidScenarioConfiguration& fluidConfig
  );

  /**
   * Constructor for test cases only!.
   *
   * @param pressureFunction         Function type for inlet pressure.
   * @param pressureAmplitude        Amplitude for inlet pressure.
   * @param pressureAngularFrequency Angular frequency for inlet pressure.
   * @param pressurePhaseAngle       Phase angle for inlet pressure.
   */
  TimeDependentBoundaryData(
      const FunctionType pressureFunction,
      const double       pressureAmplitude,
      const double       pressureAngularFrequency,
      const double       pressurePhaseAngle
  );

  virtual ~TimeDependentBoundaryData();

  /**
   * Exports if instance of this class is valid.
   *
   * \return _isValid.
   */
  bool isValid() const;

  /**
   * Sets the velocity turn on time.
   */
  void setVelocityTurnOnTime(
      double time
  );

  /**
   * Returns true, if boundary pressure(s) varies with time.
   */
  bool isPressureTimeDependent() const;

  /**
   * Returns true, if boundary velocity(ies) varies with time.
   */
  bool isVelocityTimeDependent() const;

  /**
   * Method for computing new pressure data. Using the configurated function
   * in combination with the parameters _pressureAmplitude,
   * _pressurePhaseAngle, and _pressureAngularFrequency, the the
   * time-dependent inlet pressure is computed. The outlet pressure is set to
   * zero.
   *
   * @param inletPressure  Reference for inlet pressure return value.
   * @param outletPressure Reference for outlet pressure return value.
   * @param time           Time value for evaluation.
   */
  void computeNewPressureData(
      double&      inletPressure,
      double&      outletPressure,
      const double time
  ) const;

  /**
   * Has to be used in combination with transient velocity boundary conditions.
   *
   * @param currentTime Current simulation time, has to be greater than 0.0!
   */
  void setTime(
      const double currentTime
  );

  /**
   * Method for adapting a boundary velocity magnitude by the turn on time.
   *
   * The new velocity value depends on the time step, which is done via the
   * method setTime.
   *
   * @param velocity    Velocity to be changed.
   */
  void scaleVelocityAccordingTurnOnTime(
      Vector&       velocity
  ) const;

};


#endif //_FLUIDSCENARIO_TIME_DEPENDENT_BOUNDARY_DATA_H_
