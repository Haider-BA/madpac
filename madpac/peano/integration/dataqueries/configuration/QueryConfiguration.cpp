#include "peano/integration/dataqueries/configuration/QueryConfiguration.h"
#include "peano/utils/Dimensions.h"


tarch::logging::Log peano::integration::dataqueries::configuration::QueryConfiguration::_log( "peano::integration::dataqueries::configuration::QueryConfiguration" );


peano::integration::dataqueries::configuration::QueryConfiguration::QueryConfiguration():
  _isValid(false) {
}


peano::integration::dataqueries::configuration::QueryConfiguration::~QueryConfiguration() {
}


void peano::integration::dataqueries::configuration::QueryConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  _isValid = true;

  if (xmlReader->getAttributeValue("identifier")==0) {
    _log.error("parseSubtag(...)", "missing query attribute \"identifier\"");
    _isValid = false;
    return;
  }
  _identifier = xmlReader->getAttributeValue( "identifier" );
  if ( _identifier == "" ) {
	_log.error("parseSubtag(...)", "invalid or missing query attribute \"identifier\"");
	_isValid = false;
    return;
  }

  if (xmlReader->getAttributeValue("bounding-box-offset")==0) {
    _log.error("parseSubtag(...)", "missing query attribute \"bounding-box-offset\"");
    _isValid = false;
    return;
  }
  _boundingBoxOffset = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>( "bounding-box-offset" );

  if (xmlReader->getAttributeValue("bounding-box")==0) {
    _log.error("parseSubtag(...)", "missing query attribute \"bounding-box\"");
    _isValid = false;
    return;
  }
  _boundingBox = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>( "bounding-box" );
  if (tarch::la::volume(_boundingBox)==0) {
    _log.error("parseSubtag(...)", "invalid \"bounding-box\" for query with volume 0");
    _isValid = false;
    return;
  }

  if (xmlReader->getAttributeValue("resolution")==0) {
    _log.error("parseSubtag(...)", "missing query attribute \"resolution\"");
    _isValid = false;
    return;
  }
  _resolution = xmlReader->getAttributeValueAsIntVector<DIMENSIONS>( "resolution" );
  if (tarch::la::volume(_resolution)==0) {
    _log.error("parseSubtag(...)", "invalid \"resolution\" for query with volume 0");
    _isValid = false;
    return;
  }
}


std::string peano::integration::dataqueries::configuration::QueryConfiguration::Tag() {
  return "data-query";
}


std::string peano::integration::dataqueries::configuration::QueryConfiguration::getTag() const {
  return Tag();
}


bool peano::integration::dataqueries::configuration::QueryConfiguration::isValid() const {
  return _isValid;
}


void peano::integration::dataqueries::configuration::QueryConfiguration::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::integration::dataqueries::configuration::QueryConfiguration. " << std::endl
      << "  The xml tag has to contain the attributes as given below. " << std::endl
      << "  The xml tag may not contain any subtags." << std::endl
      << "  The attributes from below have to be specified as d-dimensional vectors." << std::endl
      << "  -->" << std::endl;
  out << "<" << getTag()
	  << "identifier=\"" << _identifier << "\" "
	  << "bounding-box-offset=\"" << _boundingBoxOffset << "\" "
	  << "bounding-box=\"" << _boundingBox << "\" "
	  << "resolution=\"" << _resolution << "\" "
      << " />" << std::endl;
}


peano::integration::dataqueries::DataQuery peano::integration::dataqueries::configuration::QueryConfiguration::interpreteConfiguration() const {
  return peano::integration::dataqueries::DataQuery(
    0,
    0,
    0,
    _boundingBoxOffset,
    _boundingBox,
    _resolution
  );
}


std::string peano::integration::dataqueries::configuration::QueryConfiguration::getIdentifier() const {
  return _identifier;
}

