#include "scenario/shallowwater/defaultsimulation/configuration/Configuration.h"
#include "scenario/shallowwater/defaultsimulation/Simulation.h"

tarch::logging::Log scenario::shallowwater::defaultsimulation::configuration::Configuration::_log( "scenario::shallowwater::defaultsimulation::configuration::Configuration" );


scenario::shallowwater::defaultsimulation::configuration::Configuration::Configuration():
  _isValid(false) {
}

scenario::shallowwater::defaultsimulation::configuration::Configuration::~Configuration() {
}

scenario::shallowwater::ShallowWaterScenario* scenario::shallowwater::defaultsimulation::configuration::Configuration::interpreteConfiguration() const {
  return new scenario::shallowwater::defaultsimulation::Simulation(_bathymetryFile, _displacementFile, _outputFile, _outputTimeDistance, _numberOfGridPoints, _simulationArea, _displacementLocation, _numberOfTimeSteps, _grainSize);
}

void scenario::shallowwater::defaultsimulation::configuration::Configuration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  _isValid = true;

  if (xmlReader->getAttributeValue("bathymetry-file")==0) {
    logError("parseSubtag(...)", "invalid \"bathymetry-file\" in tag <" << getTag() << ">" );
    _isValid = false;
    return;
  }
  else {
    _bathymetryFile = xmlReader->getAttributeValue( "bathymetry-file" );
  }
//***
  if (xmlReader->getAttributeValue("displacement-file")==0) {
    logError("parseSubtag(...)", "invalid \"displacement-file\" in tag <" << getTag() << ">" );
    _isValid = false;
    return;
  }
  else {
    _displacementFile = xmlReader->getAttributeValue( "displacement-file" );
  }
//***
  if (xmlReader->getAttributeValue("output-file")==0) {
    logError("parseSubtag(...)", "invalid \"output-file\" in tag <" << getTag() << ">" );
    _isValid = false;
    return;
  }
  else {
    _outputFile = xmlReader->getAttributeValue( "output-file" );
  }
//***
  _outputTimeDistance = xmlReader->getAttributeValueAsInt( "output-time-distance");
//***
  _numberOfGridPoints = xmlReader->getAttributeValueAsIntVector<DIMENSIONS>( "number-of-grid-points" );
  if ( tarch::la::volume( _numberOfGridPoints) == 0) {
    logError("parseSubtag(...)", "invalid \"number-of-grid-points\". Has to have " << DIMENSIONS  << " entries that are all greater than three" );
    _isValid = false;
    return;
  }
//***
  _simulationArea = xmlReader->getAttributeValueAsDoubleVector<3>( "simulation-area");
  if (_simulationArea[2] <= 0) {
    logError("parseSubtag(...)", "invalid \"simulation-area\". Length " << _simulationArea[2] << " has to be greater than zero" );
    _isValid = false;
    return;
  }
//***
  _displacementLocation = xmlReader->getAttributeValueAsDoubleVector<2>( "displacement-location");
//***
  _numberOfTimeSteps = xmlReader->getAttributeValueAsInt( "number-of-time-steps");
  if (_numberOfTimeSteps <= 0) {
    logError("parseSubtag(...)", "invalid \"number-of-time-steps\". Length " << _numberOfTimeSteps << " has to be greater than zero" );
    _isValid = false;
    return;
  }

  _grainSize = xmlReader -> getAttributeValueAsInt( "grain-size");
}

std::string scenario::shallowwater::defaultsimulation::configuration::Configuration::Tag() {
  return "scenario-default-simulation";
}

std::string scenario::shallowwater::defaultsimulation::configuration::Configuration::getTag() const {
  return Tag();
}

bool scenario::shallowwater::defaultsimulation::configuration::Configuration::isValid() const {
  return _isValid;
}

void scenario::shallowwater::defaultsimulation::configuration::Configuration::toXML( std::ostream& out) const {
  out << "<!-- Scenario description --> " << std::endl;
  out << "<" << getTag()
    << " bathymetry-file=\"" << _bathymetryFile << "\""
    << " displacement-file=\"" << _displacementFile << "\""
    << " output-file=\"" << _outputFile << "\""
    << " output-time-distance=\"" << _outputTimeDistance << "\""
    << " number-of-grid-points=\"" << _numberOfGridPoints << "\""
    << " simulation-area=\"" << _simulationArea << "\""
    << " displacement-location=\"" << _displacementLocation << "\""
    << " number-of-time-steps=\"" << _numberOfTimeSteps << "\""
    << " grain-size=\"" << _grainSize << "\""
      << " />";
}
