#include "scenario/poisson/sinexperiment/configuration/Configuration.h"
#include "scenario/poisson/sinexperiment/Experiment.h"


tarch::logging::Log scenario::poisson::sinexperiment::configuration::Configuration::_log( "scenario::poisson::sinexperiment::configuration::Configuration" );


scenario::poisson::sinexperiment::configuration::Configuration::Configuration():
  _isValid(false),
  _oscillationsPerAxis(1),
  _numberOfGridPoints(3),
  _relaxationFactor(0.0),
  _outputFile( "default" ) {
}


scenario::poisson::sinexperiment::configuration::Configuration::~Configuration() {
}


scenario::poisson::PoissonScenario* scenario::poisson::sinexperiment::configuration::Configuration::interpreteConfiguration() const {
  return new scenario::poisson::sinexperiment::Experiment(_oscillationsPerAxis,_numberOfGridPoints,_relaxationFactor,_outputFile);
}


void scenario::poisson::sinexperiment::configuration::Configuration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  _isValid = true;

  if (xmlReader->getAttributeValue("oscillations")==0) {
    _log.error("parseSubtag(...)", "missing scenario attribute \"oscillations\"");
    _isValid = false;
    return;
  }
  _oscillationsPerAxis = xmlReader->getAttributeValueAsIntVector<DIMENSIONS>( "oscillations" );
  if (tarch::la::volume(_oscillationsPerAxis)==0 ) {
    logError("parseSubtag(...)", "invalid \"oscillations\". Has to have " << DIMENSIONS << " entries that are all positive integers" );
    _isValid = false;
    return;
  }
  _numberOfGridPoints = xmlReader->getAttributeValueAsIntVector<DIMENSIONS>( "number-of-grid-points" );
  if (tarch::la::volume(_numberOfGridPoints)==0 ) {
    logError("parseSubtag(...)", "invalid \"number-of-grid-points\". Has to have " << DIMENSIONS << " entries that are all greater than three" );
    _isValid = false;
    return;
  }

  _relaxationFactor = xmlReader->getAttributeValueAsDouble( "relaxation-factor" );
  if (_relaxationFactor<=0.0 || _relaxationFactor>1.0 ) {
    logError("parseSubtag(...)", "invalid \"relaxation-factor\". Has to be from (0,1)" );
    _isValid = false;
    return;
  }

  if (xmlReader->getAttributeValue("output-file")==0) {
    logError("parseSubtag(...)", "invalid \"output-file\" in tag <" << getTag() << ">" );
    _isValid = false;
    return;
  }
  else {
    _outputFile = xmlReader->getAttributeValue( "output-file" );
  }
}


std::string scenario::poisson::sinexperiment::configuration::Configuration::Tag() {
  return "scenario-sin-experiment";
}


std::string scenario::poisson::sinexperiment::configuration::Configuration::getTag() const {
  return Tag();
}

bool scenario::poisson::sinexperiment::configuration::Configuration::isValid() const {
  return _isValid;
}

void scenario::poisson::sinexperiment::configuration::Configuration::toXML(std::ostream& out) const {
  out << "<!-- Scenario description --> " << std::endl;
  out << "<" << getTag()
	  << " oscillations=\"" << _oscillationsPerAxis << "\""
	  << " number-of-grid-points=\"" << _numberOfGridPoints << "\""
	  << " relaxation-factor=\"" << _relaxationFactor << "\""
	  << " output-file=\"" << _outputFile << "\""
      << " />";
}
