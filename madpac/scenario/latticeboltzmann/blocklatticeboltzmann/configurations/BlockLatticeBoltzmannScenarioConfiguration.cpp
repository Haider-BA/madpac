#include "scenario/latticeboltzmann/blocklatticeboltzmann/configurations/BlockLatticeBoltzmannScenarioConfiguration.h"

const std::string scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::TAG = "lattice-boltzmann-scenario";

const std::string scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::SCENARIO_TYPE = "scenario";
const std::string scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::CHARACTERISTIC_VELOCITY = "characteristic-velocity";
const std::string scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::CHARACTERISTIC_VELOCITY_L = "characteristic-velocity_L";
const std::string scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::USE_PARABOLIC_PROFILE = "use-parabolic-profile";
const std::string scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::DYNAMIC_GEOMETRY = "dynamic-geometry";
const std::string scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::COMPUTE_FORCES = "compute-forces";
const std::string scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::TIMESTEPS_PER_SINE_CYCLE = "timesteps-per-sine-cycle";


tarch::logging::Log
scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::_log(
  "scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration"
);


scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::
BlockLatticeBoltzmannScenarioConfiguration():
_isValid(true),
_scenarioType(scenario::latticeboltzmann::blocklatticeboltzmann::LID_DRIVEN_CAVITY),
_characteristicVelocity(0.0),
_isDefinedCharacteristicVelocity(false),
_characteristicVelocityL(0.0),
_useParabolicProfile(false),
_timestepsPerSineCycle(0),
_dynamicGeometry(false),
_computeForces(false)
{}


scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::
~BlockLatticeBoltzmannScenarioConfiguration(){}



void scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::
parseSubtag(tarch::irr::io::IrrXMLReader* xmlReader){
  assertion(xmlReader != NULL);
  bool partitionCoupling4MovingSphereHasBeenRead = false;

  // get scenario type
  if ( xmlReader->getAttributeValue( SCENARIO_TYPE.c_str() ) == 0 ) {
    logError("parseSubtag()", "'" << SCENARIO_TYPE << "' not specified");
    _isValid = false;
    exit(EXIT_FAILURE);
  }
  else {
    std::string scenario  = xmlReader->getAttributeValue( SCENARIO_TYPE.c_str() );
    logDebug("parseSubtag()","Scenario: " << scenario);
    if (scenario == "lid-driven-cavity"){
      _scenarioType = scenario::latticeboltzmann::blocklatticeboltzmann::LID_DRIVEN_CAVITY;
    } else if (scenario == "default-channel"){
      _scenarioType = scenario::latticeboltzmann::blocklatticeboltzmann::DEFAULT_CHANNEL;
    } else if (scenario == "channel-with-moving-obstacle"){
      _scenarioType = scenario::latticeboltzmann::blocklatticeboltzmann::CHANNEL_WITH_MOVING_OBSTACLE;
    } else if (scenario == "empty-box-with-moving-obstacle"){
      _scenarioType = scenario::latticeboltzmann::blocklatticeboltzmann::EMPTY_BOX;
    } else if (scenario == "drift-ratchet-with-moving-sphere"){
      _scenarioType = scenario::latticeboltzmann::blocklatticeboltzmann::MOVING_SPHERE_IN_DRIFT_RATCHET;
    } else if (scenario == "precice-scenario"){
      _scenarioType = scenario::latticeboltzmann::blocklatticeboltzmann::PRECICE_SCENARIO;
#if (!defined(Precice))
      logError("parseSubtag()", "precice-scenario selected, but Precice component switched off!");
      logError("parseSubtag()", "Compile peano with precice=yes");
      _isValid = false;
      exit(EXIT_FAILURE);
#endif
    } else {
      logError("parseSubtag()", "Unknown scenario!");
      _isValid = false;
      exit(EXIT_FAILURE);
    }
  }

  // read characteristic velocity
  if ( xmlReader->getAttributeValue( CHARACTERISTIC_VELOCITY.c_str() ) != 0 ) {
    _characteristicVelocity = xmlReader->getAttributeValueAsDouble(CHARACTERISTIC_VELOCITY.c_str());
    _isDefinedCharacteristicVelocity = true;
    logDebug("parseSubtag()", "Characteristic velocity: " << _characteristicVelocity);
  } else {
    if (xmlReader->getAttributeValue( CHARACTERISTIC_VELOCITY_L.c_str()) != 0 ){
      _characteristicVelocityL = xmlReader->getAttributeValueAsDouble(CHARACTERISTIC_VELOCITY_L.c_str());
      _isDefinedCharacteristicVelocity = false;
      logDebug("parseSubtag()", "Characteristic velocity_L: " << _characteristicVelocityL);
    } else {
      logError("parseSubtag()", CHARACTERISTIC_VELOCITY << " not specified!");
      _isValid = false;
      exit(EXIT_FAILURE);
    }
  }

  // only for certain scenarios (no cavities and empty boxes!): parabolic profile
  if (   (_scenarioType != scenario::latticeboltzmann::blocklatticeboltzmann::LID_DRIVEN_CAVITY)
      && (_scenarioType != scenario::latticeboltzmann::blocklatticeboltzmann::EMPTY_BOX)
      && (_scenarioType != scenario::latticeboltzmann::blocklatticeboltzmann::MOVING_SPHERE_IN_DRIFT_RATCHET)
  ){
    if ( xmlReader->getAttributeValue( USE_PARABOLIC_PROFILE.c_str() ) != 0 ) {
      std::string decide = xmlReader->getAttributeValue(USE_PARABOLIC_PROFILE.c_str());
      if (decide == "yes"){
        _useParabolicProfile = true;
      } else if (decide == "no"){
        _useParabolicProfile = false;
      } else {
        logError("parseSubtag()", USE_PARABOLIC_PROFILE << " needs to be 'yes' or 'no'!");
        _isValid = false;
        exit(EXIT_FAILURE);
      }
    } else {
      logError("parseSubtag()", USE_PARABOLIC_PROFILE << " not defined!");
      _isValid = false;
      exit(EXIT_FAILURE);
    }
  }


  // only for certain scenarios: sine cycle information
  if (_scenarioType == scenario::latticeboltzmann::blocklatticeboltzmann::MOVING_SPHERE_IN_DRIFT_RATCHET){
    if ( xmlReader->getAttributeValue( TIMESTEPS_PER_SINE_CYCLE.c_str() ) != 0 ) {
      _timestepsPerSineCycle = xmlReader->getAttributeValueAsInt(TIMESTEPS_PER_SINE_CYCLE.c_str());
      if (_timestepsPerSineCycle < 1){
        logError("parseSubtag()", TIMESTEPS_PER_SINE_CYCLE << " is smaller than 1!");
        _isValid = false;
        exit(EXIT_FAILURE);
      }
    } else {
      logError("parseSubtag()",TIMESTEPS_PER_SINE_CYCLE << " not defined!");
      _isValid = false;
      exit(EXIT_FAILURE);
    }
  }


  // information on dynamic geometry
  if ( xmlReader->getAttributeValue( DYNAMIC_GEOMETRY.c_str() ) == 0 ) {
    _log.debug("parseSubtag()", "'dynamic-geometry' not specified!");
    _isValid = false;
    exit(EXIT_FAILURE);
  }
  else {
    if ( strcmp( (xmlReader->getAttributeValue(DYNAMIC_GEOMETRY.c_str())), "yes") == 0 ){
      _dynamicGeometry = true;
      _log.debug("parseSubtag()", "Dynamic geometry");
    } else if ( strcmp( (xmlReader->getAttributeValue(DYNAMIC_GEOMETRY.c_str())), "no") == 0){
      _dynamicGeometry = false;
      _log.debug("parseSubtag()", "No dynamic geometry");
    } else {
      _log.error("parseSubtag()", "'dynamic-geometry' not answered by 'yes' or 'no'!");
      _isValid = false;
      exit(EXIT_FAILURE);
    }
  }

  // information on computing forces
  if ( xmlReader->getAttributeValue( COMPUTE_FORCES.c_str() ) == 0 ) {
    _log.debug("parseSubtag()", "'compute-forces' not specified!");
    _isValid = false;
    exit(EXIT_FAILURE);
  }
  else {
    if ( strcmp( (xmlReader->getAttributeValue(COMPUTE_FORCES.c_str())), "yes") == 0 ){
      _computeForces = true;
      _log.debug("parseSubtag()", "Compute forces");
    } else if ( strcmp( (xmlReader->getAttributeValue(COMPUTE_FORCES.c_str())), "no") == 0){
      _computeForces = false;
      _log.debug("parseSubtag()", "Do not compute forces");
    } else {
      _log.error("parseSubtag()", "'compute-forces' not answered by 'yes' or 'no'!");
      _isValid = false;
      exit(EXIT_FAILURE);
    }
  }


  // read PartitionCoupling4MovingSphereConfiguration
  while (xmlReader->read()){
    if ( xmlReader->getNodeType()== tarch::irr::io::EXN_ELEMENT ) {

      if (xmlReader->getNodeName() == peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration::TAG){
        logInfo("parseSubtag()", "Parse "<< peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration::TAG);
        _partitionCoupling4MovingSphereConfiguration.parseSubtag(xmlReader);
        partitionCoupling4MovingSphereHasBeenRead = true;
      } else {
        logError("parseSubtag()", "Unknown Subtag " << xmlReader->getNodeName() << " in config");
        exit(EXIT_FAILURE);
      }
    } else if ( xmlReader->getNodeType()== tarch::irr::io::EXN_ELEMENT_END ) {
      // end was found
      if ( TAG == xmlReader->getNodeName() ) {
        return;
      }
    }
  }



  // checks -------------------------------
  // check that for PartitionCoupling4MovingSphere the respective subtag has been parsed
  if (   (_scenarioType == scenario::latticeboltzmann::blocklatticeboltzmann::CHANNEL_WITH_MOVING_OBSTACLE)
      || (_scenarioType == scenario::latticeboltzmann::blocklatticeboltzmann::EMPTY_BOX)
      || (_scenarioType == scenario::latticeboltzmann::blocklatticeboltzmann::MOVING_SPHERE_IN_DRIFT_RATCHET)
  ){
    if (!partitionCoupling4MovingSphereHasBeenRead){
      logError("parseSubtag()", peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration::TAG << " has not been specified!");
      _isValid = false;
      exit(EXIT_FAILURE);
    }
  }
}


void scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::
computeUndefinedValues(const double dx, const double dt){
  // compute characteristic velocity values
  if (_isDefinedCharacteristicVelocity){
    _characteristicVelocityL = _characteristicVelocity*dt/dx;
  } else {
    _characteristicVelocity = _characteristicVelocityL*dx/dt;
  }
}


bool scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::
isValid() const {
  return _isValid;
}



double scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::
getCharacteristicVelocityL() const {
  return _characteristicVelocityL;
}


bool scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::
useParabolicProfile() const {
  return _useParabolicProfile;
}


scenario::latticeboltzmann::blocklatticeboltzmann::ScenarioType
scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::
getScenario() const {
  return _scenarioType;
}


bool scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::
hasDynamicGeometry() const {
  return _dynamicGeometry;
}


bool scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::
computeForces() const {
  return _computeForces;
}

int scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::
getTimestepsPerSineCycle() const {
  return _timestepsPerSineCycle;
}


const peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration&
scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::
getPartitionCoupling4MovingSphereConfiguration() const {
  return _partitionCoupling4MovingSphereConfiguration;
}
