#include "peano/applications/latticeboltzmann/configurations/LatticeBoltzmannCollisionModelConfiguration.h"

#include "peano/applications/latticeboltzmann/configurations/FluctuatingLatticeBoltzmannCollisionModelConfiguration.h"
#include "peano/applications/latticeboltzmann/configurations/MRTHumieresCollisionModelConfiguration.h"

const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::TAG = "collision-model";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::COLLISION_MODEL_NAME = "name";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::BGK_NAME = "BGK";

tarch::logging::Log peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::_log("peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration");


peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::LatticeBoltzmannCollisionModelConfiguration():
_isValid(true),_name(""),
_isBGKConfiguration(false), _isFluctuatingLatticeBoltzmannConfiguration(false),
_fluctuating_LB_numberRelaxationTimes(0),
_isDefinedDx(false), _isDefinedDt(false), _isDefinedDensity(false),
_isDefinedKB(false), _isDefinedKBL(false), _isDefinedTemperature(false),
_isDefinedBulkViscosity(false), _isDefinedBulkViscosityL(false),
_isDefinedDxDt(false), _isDefinedDt2Dx2PlusDDensity(false), _isDefinedKBT(false),
_isMRTHumieresConfiguration(false),
_MRT_Humieres_numberRelaxationTimes(0)
{
  _MRT_Humieres_relaxationTimes.clear();
  _fluctuating_LB_relaxationTimes.clear();
}


peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::
~LatticeBoltzmannCollisionModelConfiguration(){
  _fluctuating_LB_relaxationTimes.clear();
  _MRT_Humieres_relaxationTimes.clear();
}



void peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::
handleSubtag(tarch::irr::io::IrrXMLReader *xmlReader){

  // get name of collision model
  if ( xmlReader->getAttributeValue( COLLISION_MODEL_NAME.c_str() ) == 0 ) {
    _log.error("parseSubtag()", "name 'name' of collision model not specified");
    _isValid = false;
    assertion(false);
  }
  else {
    _name = xmlReader->getAttributeValue(COLLISION_MODEL_NAME.c_str());
    _log.info("parseSubtag()", "'name': " + _name);
  }

  // check input name for correctness, set boolean variables and parse further parameters
  if ( _name == BGK_NAME){
    _log.info("parseSubtag()", "use BGK-Collision model");
    _isBGKConfiguration = true;
  } else if ( _name == FLUCTUATING_LATTICE_BOLTZMANN_NAME){
    _log.info("parseSubtag()", "use fluctuating lattice Boltzmann model");
    _isFluctuatingLatticeBoltzmannConfiguration = true;
    parseFluctuatingLatticeBoltzmannConfiguration(xmlReader);
  } else if ( _name == MRT_HUMIERES_NAME){
    _log.info("parseSubtag()", "use MRT model from d'Humieres et al");
    _isMRTHumieresConfiguration = true;
    parseMRTHumieresConfiguration(xmlReader);
  }
  else {
    _log.error("parseSubtag()", "invalid collision model!");
    assertion(false);
    _isValid = false;
  }
}


void peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::
parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader){
  handleSubtag(xmlReader);
}



void peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::
computeUndefinedValues(){

  // nop
  if (_name == BGK_NAME){

  // updates for fluctuating lattice Boltzmann model
  } else if (_name == FLUCTUATING_LATTICE_BOLTZMANN_NAME){
    computeUndefinedFluctuatingLatticeBoltzmannValues();
  } else if (_name == MRT_HUMIERES_NAME){
    computeUndefinedMRTHumieresValues();
  } else {

  }
}


void peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::
checkConfiguration() const{
  if (_name == BGK_NAME){

  } else if (_name == FLUCTUATING_LATTICE_BOLTZMANN_NAME){
    checkFluctuatingLatticeBoltzmannConfiguration();
  }
  else if (_name == MRT_HUMIERES_NAME){
    checkMRTHumieresConfiguration();
  } else {
  }
}


std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::
getCollisionModelName() const {
  return _name;
}


bool peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::
isBGKConfiguration() const {
  return _isBGKConfiguration;
}


bool peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::
isFluctuatingLatticeBoltzmannConfiguration() const {
  return _isFluctuatingLatticeBoltzmannConfiguration;
}


bool peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::
isMRTHumieresConfiguration() const {
  return _isMRTHumieresConfiguration;
}


bool peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::
isValid() const {
  return peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::_isValid;
}


std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::
toXMLString() const {
  return "";
}


std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::
getTag() const {
  return TAG;
}
