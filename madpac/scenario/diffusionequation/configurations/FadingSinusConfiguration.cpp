#include "scenario/diffusionequation/configurations/FadingSinusConfiguration.h"


tarch::logging::Log scenario::diffusionequation::configurations::FadingSinusConfiguration::_log( "scenario::diffusionequation::configurations::FadingSinusConfiguration" );


scenario::diffusionequation::configurations::FadingSinusConfiguration::FadingSinusConfiguration():
  _isValid(0.0) {
}


scenario::diffusionequation::FadingSinus* scenario::diffusionequation::configurations::FadingSinusConfiguration::interpreteConfiguration() const {
  return new FadingSinus();
}


void scenario::diffusionequation::configurations::FadingSinusConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  _isValid = true;
}


std::string scenario::diffusionequation::configurations::FadingSinusConfiguration::getTag() const {
  return "fading-sinus";
}


bool scenario::diffusionequation::configurations::FadingSinusConfiguration::isValid() const {
  return _isValid;
}


void scenario::diffusionequation::configurations::FadingSinusConfiguration::toXML(std::ostream& out) const {
  assertion(false);
}
