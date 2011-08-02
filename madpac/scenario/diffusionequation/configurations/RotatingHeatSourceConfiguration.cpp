#include "scenario/diffusionequation/configurations/RotatingHeatSourceConfiguration.h"


tarch::logging::Log scenario::diffusionequation::configurations::RotatingHeatSourceConfiguration::_log( "scenario::diffusionequation::configurations::RotatingHeatSourceConfiguration" );


scenario::diffusionequation::configurations::RotatingHeatSourceConfiguration::RotatingHeatSourceConfiguration():
  _thermalDiffusivity(0.0), _thermalDiffusivityInEmbeddedMaterial(0.0), _isValid(0.0) {
}


scenario::diffusionequation::RotatingHeatSource* scenario::diffusionequation::configurations::RotatingHeatSourceConfiguration::interpreteConfiguration() const {
  return new RotatingHeatSource( _thermalDiffusivity, _thermalDiffusivityInEmbeddedMaterial, _stimulusRadius);
}


void scenario::diffusionequation::configurations::RotatingHeatSourceConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  _isValid = true;

  if ( xmlReader->getAttributeValue("thermal-diffusivity")!=0 ) {
    _thermalDiffusivity = xmlReader->getAttributeValueAsDouble("thermal-diffusivity");
  }
  else {
    logError( "parseSubtag(...)", "attribute \"thermal-diffusivity\" missing" );
    _isValid = false;
  }

  if ( xmlReader->getAttributeValue("thermal-diffusivity-material")!=0 ) {
    _thermalDiffusivityInEmbeddedMaterial = xmlReader->getAttributeValueAsDouble("thermal-diffusivity-material");
  }
  else {
    logError( "parseSubtag(...)", "attribute \"thermal-diffusivity-material\" missing" );
    _isValid = false;
  }

  if ( xmlReader->getAttributeValue("stimulus-radius")!=0 ) {
    _stimulusRadius = xmlReader->getAttributeValueAsDouble("stimulus-radius");
  }
  else {
    logError( "parseSubtag(...)", "attribute \"stimulus-radius\" missing" );
    _isValid = false;
  }
}


std::string scenario::diffusionequation::configurations::RotatingHeatSourceConfiguration::getTag() const {
  return "rotating-heat-source";
}


bool scenario::diffusionequation::configurations::RotatingHeatSourceConfiguration::isValid() const {
  return _isValid;
}


void scenario::diffusionequation::configurations::RotatingHeatSourceConfiguration::toXML(std::ostream& out) const {
  assertion(false);
}
