#include "TimeDependentBoundaryData.h"
#include "peano/applications/navierstokes/prototype1/scenarios/configuration/FluidScenarioConfiguration.h"

#include <cmath>


tarch::logging::Log peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::_log("peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData");

peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::TimeDependentBoundaryData():
  _isValid(true),
  _pressureFunction(UNDEF),
  _pressureAmplitude(0.0),
  _pressureAngularFrequency(0.0),
  _pressurePhaseAngle(0.0),
  _velocityTurnOnTime(0.0),
  _time(0.0),
  _velocityFactor(1.0){
}

peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::TimeDependentBoundaryData(
  const configuration::FluidScenarioConfiguration& fluidConfig
) :
  _isValid(true),
  _pressureFunction(fluidConfig.getBoundaryPressureFunction()),
  _pressureAmplitude(fluidConfig.getBoundaryPressureAmplitude()),
  _pressureAngularFrequency(fluidConfig.getBoundaryPressureAngularFrequency()),
  _pressurePhaseAngle(fluidConfig.getBoundaryPressurePhaseAngle()),
  _velocityTurnOnTime(fluidConfig.getVelocityTurnOnTime()),
  _time(0.0),
  _velocityFactor(1.0) {

  setTime(0.0); // computes the correct initial velocity scaling factor

  if (fluidConfig.isBoundaryPressureFunctionSpecified()) {
    if (!fluidConfig.isBoundaryPressureAmplitudeSpecified() ||
        !fluidConfig.isBoundaryPressureAngularFrequencySpecified()) {
      _isValid = false;
      _log.error("TimeDependentBoundaryData(configs)","attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_BOUNDARY_PRESSURE_AMPLITUDE +
                                            "\" or \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_BOUNDARY_PRESSURE_ANGULAR_FREQUENCY +
                                            "\" missing in tag <" + configuration::FluidScenarioConfiguration::TAG + ">");
    }
    if (!fluidConfig.isBoundaryPressurePhaseAngleSpecified()) {
      _log.warning("TimeDependentBoundaryData(config)",
                    "attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_BOUNDARY_PRESSURE_PHASE_ANGLE +
                    "\" not specified in config; using zero");
    }
    if (fluidConfig.isVelocityTurnOnTimeSpecified()) {
      _isValid = false;
      logError("TimeDependentBoundaryData(configs)","Cannot use boundary pressure function and velocity "
               << "turn on time simultaneously in tag <" << configuration::FluidScenarioConfiguration::TAG << ">");
    }
  }
  else {
    if (fluidConfig.isBoundaryPressureAmplitudeSpecified() ||
        fluidConfig.isBoundaryPressureAngularFrequencySpecified()) {
      _isValid = false;
      _log.error("TimeDependentBoundaryData(configs)","attribute \"" + configuration::FluidScenarioConfiguration::ATTRIBUTE_BOUNDARY_PRESSURE_FUNCTION +
                                            "\" for time-dep. pressure BC missing in tag <" + configuration::FluidScenarioConfiguration::TAG + ">");
    }
  }
}


peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::TimeDependentBoundaryData(
  const FunctionType pressureFunction,
  const double       pressureAmplitude,
  const double       pressureAngularFrequency,
  const double       pressurePhaseAngle
) :
  _isValid(true),
  _pressureFunction(pressureFunction),
  _pressureAmplitude(pressureAmplitude),
  _pressureAngularFrequency(pressureAngularFrequency),
  _pressurePhaseAngle(pressurePhaseAngle),
  _velocityTurnOnTime(0.0) {
}


peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::~TimeDependentBoundaryData() {
}


bool peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::isValid() const {
  return _isValid;
}

void peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::setVelocityTurnOnTime(
  double time
) {
  _velocityTurnOnTime = time;
}

bool peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::isPressureTimeDependent() const {
  return _pressureFunction != UNDEF;
}

bool peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::isVelocityTimeDependent() const {
  return tarch::la::greater(_velocityTurnOnTime, _time);
}


void peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::computeNewPressureData(
  double&      inletPressure,
  double&      outletPressure,
  const double time
) const {
  assertion(isValid());

  outletPressure = 0.0;

  switch (_pressureFunction) {
    case SIN:
      inletPressure = _pressureAmplitude * sin( _pressureAngularFrequency*time +
                                                _pressurePhaseAngle );
      break;

    case COS:
      inletPressure = _pressureAmplitude * cos( _pressureAngularFrequency*time +
                                                _pressurePhaseAngle );
      break;

    case TAN:
      inletPressure = _pressureAmplitude * tan( _pressureAngularFrequency*time +
                                                _pressurePhaseAngle );
      break;

    default:
      logError("computeNewPressureData()","invalid pressure function \"" << _pressureFunction << "\"" );
      assertion(false);
  }
}

void peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::setTime(
  const double currentTime
) {
  _time = currentTime;
  if (_time > _velocityTurnOnTime) {
    _velocityFactor = 1.0;
  }
  else {
    _velocityFactor = tarch::la::equals(_time, 0.0) ? 0.0 : _time / _velocityTurnOnTime;
  }
}

void peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::scaleVelocityAccordingTurnOnTime(
  Vector& velocity
) const {
  assertion(isValid());
  velocity *= _velocityFactor;
}

