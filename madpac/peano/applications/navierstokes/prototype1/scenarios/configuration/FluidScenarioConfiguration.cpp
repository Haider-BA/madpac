#include "peano/applications/navierstokes/prototype1/scenarios/configuration/FluidScenarioConfiguration.h"
#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"

#if defined(ComponentFluidScenario)
#include "peano/applications/navierstokes/prototype1/scenarios/FluidScenario.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidCircleFlow.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidDrivenCavity.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidDrivenCavityCheckerboardLid.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidGravityBox.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidPreCICEColdLeg.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInChannelWithSlipWalls.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInTurbulentChannel.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInAllDirichletChannel.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInStationaryFlowField.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInDriftRatchet.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidStep.h"
#include "peano/applications/navierstokes/prototype1/scenarios/FluidFlatPlateInParallelFlow.h"
#endif

#include "peano/applications/navierstokes/prototype1/scenarios/FluidObstacleInChannel.h"

#include <sstream>
#include <climits>


const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::TAG("fluid");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::UNDEF("UNDEF");

const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_NAME("name");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_RE  ("Re");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_RE_PHASE2  ("Re2");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_ETA ("eta");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_ETA_PHASE2 ("eta2");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_RHO ("rho");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_RHO_PHASE2 ("rho2");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_SIGMA ("sigma");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_PHASE_INTERFACE_WIDTH ("phase-interface-width");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_GRAVITY_VECTOR ("gravity-vector-x");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_MAXIMUM_ELEVATION ("maximum-elevation");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_LID_VELOCITY         ("lid-velocity");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_INITIATE_VELOCITY_EVERYWHERE("initiate-velocity-everywhere");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_MEAN_VALUE  ("velocity-mean-value");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_PROFILE     ("velocity-profile");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_HAS_OUTLET_VELOCITY_PROFILE ("has-outlet-velocity-profile");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_INLET_PRESSURE       ("inlet-pressure");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_OUTLET_PRESSURE      ("outlet-pressure");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_USE_PERIODIC_BC      ("use-periodic-bc");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_ADJUSTMENT_FACTOR    ("adjustment-factor");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_ELEMENT_TYPE         ("element-type");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_CHARACTERISTIC_LENGTH("characteristic-length");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_RANDOM_NOISE_WEIGHT  ("random-noise-weight");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_USE_DIVERGENCE_CORRECTION("use-divergence-correction");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_USE_MOVING_GEOMETRY  ("use-moving-geometry");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_INLET_DIMENSION      ("inlet-dimension-x");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_INLET_OFFSET         ("inlet-offset-x");

const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ELEMENT_TYPE_IDOCF_CENTRAL("ido-cf-CENTRAL");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ELEMENT_TYPE_IDOCF_UPWIND("ido-cf-UPWIND");

const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_DYNAMICAL_REFINEMENT_DELTA("dynamical-refinement-delta");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_DYNAMICAL_REFINEMENT_HMIN("dynamical-refinement-minimal-mesh-size");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_DYNAMICAL_REFINEMENT_STARTSTEP("dynamical-refinement-start-step");

const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_BOUNDARY_PRESSURE_FUNCTION("boundary-pressure-function");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::BOUNDARY_PRESSURE_FUNCTION_SIN("sin");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::BOUNDARY_PRESSURE_FUNCTION_COS("cos");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::BOUNDARY_PRESSURE_FUNCTION_TAN("tan");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_BOUNDARY_PRESSURE_AMPLITUDE("boundary-pressure-amplitude");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_BOUNDARY_PRESSURE_ANGULAR_FREQUENCY("boundary-pressure-angular-frequency");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_BOUNDARY_PRESSURE_PHASE_ANGLE("boundary-pressure-phase-angle");
const std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::ATTRIBUTE_VELOCITY_TURN_ON_TIME("velocity-turn-on-time");

tarch::logging::Log peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::_log( "peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration" );


double  peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::_maximumElevation = 1.0;
bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::_maximumElevationSpecified = true;


peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::FluidScenarioConfiguration():
  _isValid(false),
  _scenarioName(UNDEF),
  _initVelocityEverywhere(false),
  _initVelocityEverywhereSpecified(false),
  _velocityMeanValue(0.0),
  _velocityMeanValueSpecified(false),
  _velocityProfile(UNDEF),
  _velocityProfileSpecified(false),
  _hasOutletVelocityProfile(false),
  _isHasOutletVelocityProfileSpecified(false),
  _inletPressure(0.0),
  _inletPressureSpecified(false),
  _outletPressure(0.0),
  _outletPressureSpecified(false),
  _usePeriodicBC(false),
  _Re(0.0),
  _reSpecified(false),
  _RePhase2(0.0),
  _rePhase2Specified(false),
  _eta(0.0),
  _etaSpecified(false),
  _etaPhase2(0.0),
  _etaPhase2Specified(false),
  _rho(0.0),
  _rhoSpecified(false),
  _rhoPhase2(0.0),
  _rhoPhase2Specified(false),
  _sigma(0.0),
  _sigmaSpecified(false),
  _phaseInterfaceWidth(1.0),
  _phaseInterfaceWidthSpecified(false),
  _gravityVector(Vector(0.0)),
  _gravityVectorSpecified(false),
  _adjustmentFactor(0.0),
  _adjustmentFactorSpecified(false),
  _elementType(UNDEF),
  _elementTypeSpecified(false),
  _characteristicLength(0.0),
  _characteristicLengthSpecified(false),
  _inletDimension(0.0),
  _inletDimensionSpecified(false),
  _inletOffset(0.0),
  _inletOffsetSpecified(false),
  _useDivergenceCorrection(false),
  _useMovingGeometry(false),
  _randomNoiseWeight(0.0),
  _randomNoiseWeightSpecified(false),
//  _dynamicalRefinementDelta(INT_MAX/2),
//  _dynamicalRefinementDeltaSpecified(false),
//  _dynamicalRefinementHMin(-1.0),
//  _dynamicalRefinementHMinSpecified(false),
//  _dynamicalRefinementStartStep(INT_MAX/2),
//  _dynamicalRefinementStartStepSpecified(false),
//  _dynamicalRefinementConfiguration(),
//  _dynamicalRefinementConfigurationSpecified(false),
  _boundaryPressureFunction(UNDEF),
  _boundaryPressureFunctionSpecified(false),
  _boundaryPressureAmplitude(0.0),
  _boundaryPressureAmplitudeSpecified(false),
  _boundaryPressureAngularFrequency(0.0),
  _boundaryPressureAngularFrequencySpecified(false),
  _boundaryPressurePhaseAngle(0.0),
  _boundaryPressurePhaseAngleSpecified(false),
  _velocityTurnOnTime(0.0)
  {
}


peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::~FluidScenarioConfiguration() {
}


Vector peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getInletDimension() const {
  return _inletDimension;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::hasInletDimension() const {
  return _inletDimensionSpecified;
}


Vector peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getInletOffset() const {
  return _inletOffset;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::hasInletOffset() const {
  return _inletOffsetSpecified;
}


double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getCharacteristicLength() const {
  return _characteristicLength;
}

bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::hasCharacteristicLength() const {
  return _characteristicLengthSpecified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isValid() const {
  //validity of subconfigs already checked in parseSubtag()
  return _scenarioName != UNDEF && _isValid;
}


std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getScenarioName() const {
  return _scenarioName;
}


double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getLidVelocity() const {
  return _lidVelocity;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::shallVelocityBeInitiatedEverywhere() const {
  return _initVelocityEverywhere;
}


double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getVelocityMeanValue() const {
  return _velocityMeanValue;
}


std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getVelocityProfile() const {
  return _velocityProfile;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::hasOutletVelocityProfile() const {
  return _hasOutletVelocityProfile;
}


double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getInletPressure() const {
  return _inletPressure;
}


double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getOutletPressure() const {
  return _outletPressure;
}


double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getReynoldsNumber() const {
  return _Re;
}

double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getReynoldsNumberPhase2() const {
  return _RePhase2;
}


double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getViscosityEta() const {
  return _eta;
}

double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getViscosityEtaPhase2() const {
  return _etaPhase2;
}

double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getDensityRho() const {
  return _rho;
}

double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getDensityRhoPhase2() const {
  return _rhoPhase2;
}

double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getSurfaceTensionSigma() const {
  return _sigma;
}

double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getPhaseInterfaceWidth() const {
  return _phaseInterfaceWidth;
}

double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getAdjustmentFactor() const {
  return _adjustmentFactor;
}


std::string peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getElementType() const {
  return _elementType;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isLidVelocitySpecified() const {
  return _lidVelocitySpecified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isInitiateVelocityEverywhereySpecified() const {
  return _initVelocityEverywhereSpecified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isVelocityMeanValueSpecified() const {
  return _velocityMeanValueSpecified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isVelocityProfileSpecified() const {
  return _velocityProfileSpecified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isHasOutletVelocityProfileSpecified() const {
  return _isHasOutletVelocityProfileSpecified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isInletPressureSpecified() const {
  return _inletPressureSpecified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isOutletPressureSpecified() const {
  return _outletPressureSpecified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isReynoldsNumberSpecified() const {
  return _reSpecified;
}

bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isReynoldsNumberPhase2Specified() const {
  return _rePhase2Specified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isViscosityEtaSpecified() const {
  return _etaSpecified;
}

bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isViscosityEtaPhase2Specified() const {
  return _etaPhase2Specified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isDensityRhoSpecified() const {
  return _rhoSpecified;
}

bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isDensityRhoPhase2Specified() const {
  return _rhoPhase2Specified;
}

bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isSurfaceTensionSigmaSpecified() const {
  return _sigmaSpecified;
}

bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isPhaseInterfaceWidthSpecified() const {
  return _phaseInterfaceWidthSpecified;
}

Vector peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getGravityVector() const {
  return _gravityVector;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isGravityVectorSpecified() const {
  return _gravityVectorSpecified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isMaximumElevationSpecified() {
  return _maximumElevationSpecified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isAdjustmentFactorSpecified() const {
  return _adjustmentFactorSpecified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isElementTypeSpecified() const {
  return _elementTypeSpecified;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::useDivergenceCorrection() const {
  return _useDivergenceCorrection;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::useMovingGeometry() const {
  return _useMovingGeometry;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isRandomNoiseWeightSpecified() const {
  return _randomNoiseWeightSpecified;
}


double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getRandomNoiseWeight() const {
  return _randomNoiseWeight;
}


bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::arePeriodicBCUsed() const {
  return _usePeriodicBC;
}


//int peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getNumberOfManualRefinementBoxes() const {
//  return _refinementBoxConfiguration.size();
//}
//
//
//const peano::applications::navierstokes::prototype1::scenarios::RefinementBoxConfiguration& peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getManualBox(
//  const int boxNumber
//) const {
//  assertion(boxNumber<int(_refinementBoxConfiguration.size()));
//
//  return _refinementBoxConfiguration[boxNumber];
//}
//
//
//int peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getNumberOfManualRefinementTubes() const {
//  return _refinementTubeConfiguration.size();
//}
//
//
//const peano::applications::navierstokes::prototype1::scenarios::RefinementTubeConfiguration& peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getManualTube(
//  const int tubeNumber
//) const {
//  assertion(tubeNumber<int(_refinementTubeConfiguration.size()));
//
//  return _refinementTubeConfiguration[tubeNumber];
//}
//
//
//int peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getDynamicalRefinementDelta() const {
//  return _dynamicalRefinementDelta;
//}
//bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isDynamicalRefinementDeltaSpecified() const {
//  return _dynamicalRefinementDeltaSpecified;
//}
//
//
//double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getDynamicalRefinementHMin() const {
//  return _dynamicalRefinementHMin;
//}
//bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isDynamicalRefinementHMinSpecified() const {
//  return _dynamicalRefinementHMinSpecified;
//}
//
//
//int peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getDynamicalRefinementStartStep() const {
//  return _dynamicalRefinementStartStep;
//}
//bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isDynamicalRefinementStartStepSpecified() const {
//  return _dynamicalRefinementStartStepSpecified;
//}
//
//
//const peano::solvertoolbox::RefinementCriterionConfiguration&
//peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getDynamicalRefinementConfiguration() const {
//  return _dynamicalRefinementConfiguration;
//}
//bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isDynamicalRefinementConfigurationSpecified() const {
//  return _dynamicalRefinementConfigurationSpecified;
//}


peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::FunctionType
peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getBoundaryPressureFunction() const {
  peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::FunctionType result =
    peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::UNDEF;

  if (_boundaryPressureFunction==BOUNDARY_PRESSURE_FUNCTION_SIN) {
    result = peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::SIN;
  }
  else if (_boundaryPressureFunction==BOUNDARY_PRESSURE_FUNCTION_COS) {
    result = peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::COS;
  }
  else if (_boundaryPressureFunction==BOUNDARY_PRESSURE_FUNCTION_TAN) {
    result = peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::TAN;
  }
  else if (_boundaryPressureFunction==UNDEF) {
    result = peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData::UNDEF;
  }
  else {
    _log.error("getBoundaryPressureFunction()","unknown boundary pressure function string \"" + _boundaryPressureFunction +
                                             "\"; only \"" + BOUNDARY_PRESSURE_FUNCTION_SIN +
                                             "\", \"" + BOUNDARY_PRESSURE_FUNCTION_COS +
                                             "\", \"" + BOUNDARY_PRESSURE_FUNCTION_TAN +
                                             "\", and \"" + UNDEF + "\" supported!");
  }

  return result;
}
bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isBoundaryPressureFunctionSpecified() const {
  return _boundaryPressureFunctionSpecified;
}


double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getBoundaryPressureAmplitude() const {
  return _boundaryPressureAmplitude;
}
bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isBoundaryPressureAmplitudeSpecified() const {
  return _boundaryPressureAmplitudeSpecified;
}


double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getBoundaryPressureAngularFrequency() const {
  return _boundaryPressureAngularFrequency;
}
bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isBoundaryPressureAngularFrequencySpecified() const {
  return _boundaryPressureAngularFrequencySpecified;
}


double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getBoundaryPressurePhaseAngle() const {
  return _boundaryPressurePhaseAngle;
}
bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isBoundaryPressurePhaseAngleSpecified() const {
  return _boundaryPressurePhaseAngleSpecified;
}

bool peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::isVelocityTurnOnTimeSpecified() const {
  return _velocityTurnOnTime > 0.0;
}
double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getVelocityTurnOnTime() const {
  return _velocityTurnOnTime;
}

void peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  assertion( xmlReader != 0 );

  if ( xmlReader->getAttributeValue( ATTRIBUTE_NAME.c_str() ) == 0 ) {
    _isValid = false;
    _log.error( "parseSubtag(IrrXMLReader*)", "expected attribute \"" + ATTRIBUTE_NAME + "\" for tag <" + configuration::FluidScenarioConfiguration::TAG + ">");
  }
  else {
    _isValid = true;
    _scenarioName  = xmlReader->getAttributeValue( ATTRIBUTE_NAME.c_str() );
  }

  if (xmlReader->getAttributeValue( ATTRIBUTE_RE.c_str() ) != 0) {
    _Re                         = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_RE.c_str());
    _reSpecified                = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_RE_PHASE2.c_str() ) != 0) {
    _RePhase2                   = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_RE_PHASE2.c_str());
    _rePhase2Specified          = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_ETA.c_str() ) != 0) {
    _eta                        = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_ETA.c_str());
    _etaSpecified               = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_ETA_PHASE2.c_str() ) != 0) {
    _etaPhase2                  = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_ETA_PHASE2.c_str());
    _etaPhase2Specified         = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_RHO.c_str() ) != 0) {
    _rho                        = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_RHO.c_str());
    _rhoSpecified               = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_RHO_PHASE2.c_str() ) != 0) {
    _rhoPhase2                  = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_RHO_PHASE2.c_str());
    _rhoPhase2Specified         = true;
  }

  if (xmlReader->getAttributeValue( ATTRIBUTE_SIGMA.c_str() ) != 0) {
    _sigma                      = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_SIGMA.c_str());
    _sigmaSpecified             = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_PHASE_INTERFACE_WIDTH.c_str() ) != 0) {
    _phaseInterfaceWidth          = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_PHASE_INTERFACE_WIDTH.c_str());
    _phaseInterfaceWidthSpecified = true;
  }

  _gravityVectorSpecified = true;
  for (int d=0; d<DIMENSIONS; d++) {
    std::ostringstream attributeName;
    attributeName << ATTRIBUTE_GRAVITY_VECTOR << d;
    if (xmlReader->getAttributeValue( attributeName.str().c_str() ) != 0) {
      _gravityVector(d) = xmlReader->getAttributeValueAsDouble(attributeName.str().c_str() );
    }
    else {
      _gravityVectorSpecified = false;
    }
  }

  if (xmlReader->getAttributeValue( ATTRIBUTE_MAXIMUM_ELEVATION.c_str() ) != 0) {
    _maximumElevation           = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_MAXIMUM_ELEVATION.c_str());
    _maximumElevationSpecified  = true;
  }

  if (xmlReader->getAttributeValue( ATTRIBUTE_LID_VELOCITY.c_str() ) != 0) {
    _lidVelocity                = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_LID_VELOCITY.c_str());
    _lidVelocitySpecified       = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_INITIATE_VELOCITY_EVERYWHERE.c_str() ) != 0) {
    _initVelocityEverywhere          = xmlReader->getAttributeValueAsBool(ATTRIBUTE_INITIATE_VELOCITY_EVERYWHERE.c_str());
    _initVelocityEverywhereSpecified = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_VELOCITY_MEAN_VALUE.c_str() ) != 0) {
    _velocityMeanValue          = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_VELOCITY_MEAN_VALUE.c_str());
    _velocityMeanValueSpecified = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_VELOCITY_PROFILE.c_str() ) != 0) {
    _velocityProfile          = xmlReader->getAttributeValue(ATTRIBUTE_VELOCITY_PROFILE.c_str());
    _velocityProfileSpecified = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_HAS_OUTLET_VELOCITY_PROFILE.c_str() ) != 0) {
    _hasOutletVelocityProfile            = xmlReader->getAttributeValueAsBool(ATTRIBUTE_HAS_OUTLET_VELOCITY_PROFILE.c_str());
    _isHasOutletVelocityProfileSpecified = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_INLET_PRESSURE.c_str() ) != 0) {
    _inletPressure              = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_INLET_PRESSURE.c_str());
    _inletPressureSpecified     = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_OUTLET_PRESSURE.c_str() ) != 0) {
    _outletPressure             = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_OUTLET_PRESSURE.c_str());
    _outletPressureSpecified    = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_USE_PERIODIC_BC.c_str() ) != 0) {
    _usePeriodicBC             = xmlReader->getAttributeValueAsBool(ATTRIBUTE_USE_PERIODIC_BC.c_str());
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_ADJUSTMENT_FACTOR.c_str() ) != 0) {
    _adjustmentFactor           = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_ADJUSTMENT_FACTOR.c_str());
    _adjustmentFactorSpecified  = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_ELEMENT_TYPE.c_str() ) != 0) {
    _elementType                = xmlReader->getAttributeValue(ATTRIBUTE_ELEMENT_TYPE.c_str());
    _elementTypeSpecified       = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_CHARACTERISTIC_LENGTH.c_str() ) != 0) {
    _characteristicLength          = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_CHARACTERISTIC_LENGTH.c_str());
    _characteristicLengthSpecified = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_RANDOM_NOISE_WEIGHT.c_str() ) != 0) {
    _randomNoiseWeight          = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_RANDOM_NOISE_WEIGHT.c_str());
    _randomNoiseWeightSpecified = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_DYNAMICAL_REFINEMENT_DELTA.c_str() ) != 0) {
    _dynamicalRefinementDelta          = xmlReader->getAttributeValueAsInt(ATTRIBUTE_DYNAMICAL_REFINEMENT_DELTA.c_str());
    _dynamicalRefinementDeltaSpecified = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_DYNAMICAL_REFINEMENT_HMIN.c_str() ) != 0) {
    _dynamicalRefinementHMin          = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_DYNAMICAL_REFINEMENT_HMIN.c_str());
    _dynamicalRefinementHMinSpecified = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_DYNAMICAL_REFINEMENT_STARTSTEP.c_str() ) != 0) {
    _dynamicalRefinementStartStep          = xmlReader->getAttributeValueAsInt(ATTRIBUTE_DYNAMICAL_REFINEMENT_STARTSTEP.c_str());
    _dynamicalRefinementStartStepSpecified = true;
  }

  if (xmlReader->getAttributeValue( ATTRIBUTE_BOUNDARY_PRESSURE_FUNCTION.c_str() ) != 0) {
    _boundaryPressureFunction          = xmlReader->getAttributeValue(ATTRIBUTE_BOUNDARY_PRESSURE_FUNCTION.c_str());
    _boundaryPressureFunctionSpecified = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_BOUNDARY_PRESSURE_AMPLITUDE.c_str() ) != 0) {
    _boundaryPressureAmplitude          = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_BOUNDARY_PRESSURE_AMPLITUDE.c_str());
    _boundaryPressureAmplitudeSpecified = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_BOUNDARY_PRESSURE_ANGULAR_FREQUENCY.c_str() ) != 0) {
    _boundaryPressureAngularFrequency          = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_BOUNDARY_PRESSURE_ANGULAR_FREQUENCY.c_str());
    _boundaryPressureAngularFrequencySpecified = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_BOUNDARY_PRESSURE_PHASE_ANGLE.c_str() ) != 0) {
    _boundaryPressurePhaseAngle          = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_BOUNDARY_PRESSURE_PHASE_ANGLE.c_str());
    _boundaryPressurePhaseAngleSpecified = true;
  }
  if (xmlReader->getAttributeValue( ATTRIBUTE_VELOCITY_TURN_ON_TIME.c_str() ) != 0) {
    _velocityTurnOnTime = xmlReader->getAttributeValueAsDouble(ATTRIBUTE_VELOCITY_TURN_ON_TIME.c_str());
  }

  _inletDimensionSpecified = true;
  for (int d=0; d<DIMENSIONS; d++) {
    std::ostringstream attributeName;
    attributeName << ATTRIBUTE_INLET_DIMENSION << d;
    if (xmlReader->getAttributeValue( attributeName.str().c_str() ) != 0) {
      _inletDimension(d) = xmlReader->getAttributeValueAsDouble(attributeName.str().c_str() );
    }
    else {
      _inletDimensionSpecified = false;
    }
  }

  _inletOffsetSpecified = true;
  for (int d=0; d<DIMENSIONS; d++) {
    std::ostringstream attributeName;
    attributeName << ATTRIBUTE_INLET_OFFSET << d;
    if (xmlReader->getAttributeValue( attributeName.str().c_str() ) != 0) {
      _inletOffset(d) = xmlReader->getAttributeValueAsDouble(attributeName.str().c_str() );
    }
    else {
      _inletOffsetSpecified = false;
    }
  }

  if (  xmlReader->getAttributeValue(ATTRIBUTE_USE_DIVERGENCE_CORRECTION.c_str()) == 0 ) {
    _log.error("parseSubtag(...)",
               "attribute \"" + ATTRIBUTE_USE_DIVERGENCE_CORRECTION + "\" for tag <" +
               configuration::FluidScenarioConfiguration::TAG +
               "> missing!" );
    _isValid = false;
  }
  else {
    _useDivergenceCorrection = xmlReader->getAttributeValueAsBool( ATTRIBUTE_USE_DIVERGENCE_CORRECTION.c_str() );
  }

  if (  xmlReader->getAttributeValue(ATTRIBUTE_USE_MOVING_GEOMETRY.c_str()) != 0 ) {
    _useMovingGeometry = xmlReader->getAttributeValueAsBool( ATTRIBUTE_USE_MOVING_GEOMETRY.c_str() );
  }


  // read maximum elevation before subtags are parsed, since the default is to return.
  _maximumElevationSpecified = false; //is true in the constructor to enable tests with hard-coded 1.0; has to be read correctly for non-test configs in the called method
  readMaximumElevationInNegGravitationDirection();

  //check for additional external configs
//  while( xmlReader->read() ) {
//    if ( xmlReader->getNodeType()==tarch::irr::io::EXN_ELEMENT ) {
//      if ( peano::applications::navierstokes::prototype1::scenarios::RefinementBoxConfiguration::TAG == xmlReader->getNodeName() ) {
//        peano::applications::navierstokes::prototype1::scenarios::RefinementBoxConfiguration newConfiguration;
//        newConfiguration.parseSubtag(xmlReader);
//        _isValid &= newConfiguration.isValid();
//        _refinementBoxConfiguration.push_back(newConfiguration);
//        if (!newConfiguration.isValid()) return;
//      }
//      else if ( peano::applications::navierstokes::prototype1::scenarios::RefinementTubeConfiguration::TAG == xmlReader->getNodeName() ) {
//        peano::applications::navierstokes::prototype1::scenarios::RefinementTubeConfiguration newConfiguration;
//        newConfiguration.parseSubtag(xmlReader);
//        _isValid &= newConfiguration.isValid();
//        _refinementTubeConfiguration.push_back(newConfiguration);
//        if (!newConfiguration.isValid()) return;
//      }
//      else if ( peano::solvertoolbox::RefinementCriterionConfiguration::TAG == xmlReader->getNodeName() ) {
//        _dynamicalRefinementConfigurationSpecified = true;
//        _dynamicalRefinementConfiguration.parseSubtag(xmlReader);
//        _isValid &= _dynamicalRefinementConfiguration.isValid();
//        if (!_dynamicalRefinementConfiguration.isValid()) return;
//      }
//      else {
//        _log.error(
//          "parseSubtag(IrrXMLReader*)",
//          "unknown subtag of tag <" + TAG + ">: <" +
//          std::string(xmlReader->getNodeName()) + ">, Subtags supported: " +
//          "<"    + peano::applications::navierstokes::prototype1::scenarios::RefinementBoxConfiguration::TAG +
//          "/>, <"+ peano::applications::navierstokes::prototype1::scenarios::RefinementTubeConfiguration::TAG +
//          "/>, <"+ peano::solvertoolbox::RefinementCriterionConfiguration::TAG + "/>"
//        );
//        _isValid = false;
//        return;
//      }
//    }
//    else if ( xmlReader->getNodeType()==tarch::irr::io::EXN_ELEMENT_END ) {
//      if ( TAG == xmlReader->getNodeName() ) {
//        return;
//      }
//    }
//  }
}


void peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::readMaximumElevationInNegGravitationDirection() const {
  // maximum elevation has been specified in the configuration
  if (isMaximumElevationSpecified()) {
    return;
  }

  double result = 0.0;

  assertion(isValid());
  if ( !tarch::la::equals(getGravityVector().norm(),0.0) && (
//      getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidPreCICEColdLeg::IDENTIFIER ||
      getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannel::IDENTIFIER // ||
//      getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInChannelWithSlipWalls::IDENTIFIER ||
//      getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInStationaryFlowField::IDENTIFIER ||
//      getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidObstacleInTurbulentChannel::IDENTIFIER ||
//      getScenarioName() == peano::applications::navierstokes::prototype1::scenarios::FluidFlatPlateInParallelFlow::IDENTIFIER
      )
      ) {

    _log.warning("readMaximumElevationInNegGravitationDirection()", "Gravity is non-zero, if this scenario has Neumann boundaries you should define atrribute \"" +
                                                                    ATTRIBUTE_MAXIMUM_ELEVATION + "\" in tag <" + configuration::FluidScenarioConfiguration::TAG +
                                                                    "> to get the correct hydropressure correction.");

    bool isGravityInXDirection = true;
    bool isGravityInYDirection = true;
    bool isGravityInZDirection = DIMENSIONS >= 3;
    for (int d=0; d<DIMENSIONS; d++) { //only y-direction for gravity supported!
      if (d!=0 && !tarch::la::equals(getGravityVector()(d),0.0)) isGravityInXDirection = false;
      if (d!=1 && !tarch::la::equals(getGravityVector()(d),0.0)) isGravityInYDirection = false;
      if (d!=2 && !tarch::la::equals(getGravityVector()(d),0.0)) isGravityInZDirection = false;
    }
    if      (isGravityInXDirection && !isGravityInYDirection && !isGravityInZDirection) {
      result = getInletOffset()(0) + getInletDimension()(0);
    }
    else if (isGravityInYDirection && !isGravityInXDirection && !isGravityInZDirection) {
      result = getInletOffset()(1) + getInletDimension()(1);
    }
    else if (isGravityInZDirection && !isGravityInXDirection && !isGravityInYDirection) {
      assertion(DIMENSIONS == 3);
      result = getInletOffset()(2) + getInletDimension()(2);
    }
    else {
      _log.error("getMaximumElevationInNegGravitationDirection()","only y- or z-direction (exclusive or) for gravity vector supported! Otherwise use attribute \"" +
                                                                  ATTRIBUTE_MAXIMUM_ELEVATION + "\" in tag <" +
                                                                  configuration::FluidScenarioConfiguration::TAG +
                                                                  ">.");
      exit(ASSERTION_EXIT_CODE);
    }
  }
  else {
//      assertionFail("");
  }

  _maximumElevation = result;
  _maximumElevationSpecified = true;
}


double peano::applications::navierstokes::prototype1::scenarios::configuration::FluidScenarioConfiguration::getMaximumElevationInNegGravitationDirection() {
  assertion(isMaximumElevationSpecified());
  return _maximumElevation;
}


