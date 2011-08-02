#include "peano/geometry/builtin/configurations/SphereConfiguration.h"
#include "peano/utils/Globals.h"


#include <sstream>


const std::string peano::geometry::builtin::configurations::SphereConfiguration::TAG                            = "sphere";
const std::string peano::geometry::builtin::configurations::SphereConfiguration::ATTRIBUTE_INVERT               = "invert";
const std::string peano::geometry::builtin::configurations::SphereConfiguration::ATTRIBUTE_CENTER               = "center";
const std::string peano::geometry::builtin::configurations::SphereConfiguration::ATTRIBUTE_RADIUS               = "radius";

tarch::logging::Log peano::geometry::builtin::configurations::SphereConfiguration::_log( "geometry::SphereConfiguration" );

peano::geometry::builtin::configurations::SphereConfiguration::SphereConfiguration():
peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration(),
  _fileValid(false),
  _center(0.0),
  _radius(0.0),
  _isInverted(false){
}


peano::geometry::builtin::configurations::SphereConfiguration::~SphereConfiguration() {
}


void peano::geometry::builtin::configurations::SphereConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  assertion( xmlReader != 0 );
  _fileValid = true;

  // get geometry ID, if available
  peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration::readGeometryID(xmlReader);

  // determine invertion
  if ( xmlReader->getAttributeValue( ATTRIBUTE_INVERT.c_str() ) != 0 ) {
    _isInverted = xmlReader->getAttributeValueAsBool( ATTRIBUTE_INVERT.c_str() );
    if (_isInverted){
      logDebug("parseSubtag()", "Sphere is inverted: true");
    } else {
      logDebug("parseSubtag()", "Sphere is inverted: false");
    }
  }
  else {
    _fileValid = false;
    logError( "parseSubtag(...)", "attribute \"" << ATTRIBUTE_INVERT << "\" not specified" );
  }

  // get center of sphere
  if ( xmlReader->getAttributeValue( ATTRIBUTE_CENTER.c_str() ) != 0 ) {
    _center = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(
                ATTRIBUTE_CENTER.c_str()
              );
    logDebug("parseSubtag()", "Sphere center: " << _center);
  }
  else {
    _fileValid = false;
    logError( "parseSubtag(...)", "attribute \"" << ATTRIBUTE_CENTER << "\" not specified" );
  }

  // get radius of sphere
  if ( xmlReader->getAttributeValue( ATTRIBUTE_RADIUS.c_str() ) != 0 ) {
    _radius = xmlReader->getAttributeValueAsDouble( ATTRIBUTE_RADIUS.c_str() );
    logDebug("parseSubtag()", "Sphere radius: " << _radius);
  }
  else {
    _fileValid = false;
    logError( "parseSubtag(...)", "attribute \"" << ATTRIBUTE_RADIUS << "\" not specified" );
  }
}


bool peano::geometry::builtin::configurations::SphereConfiguration::isValid() const {
  return _fileValid;
}


void peano::geometry::builtin::configurations::SphereConfiguration::toXML(std::ostream& result) const {
  result << "<" << TAG << "\n";

  result << "  " << ATTRIBUTE_CENTER << "=\"";
  for (int i=0; i<DIMENSIONS; i++ ) {
    result << " " << _center(i);
  }
  result << "\"\n";

  result << "  " << ATTRIBUTE_RADIUS << " " << "=\"" << _radius << "\"\n";

  result << "/>\n";
}

std::string peano::geometry::builtin::configurations::SphereConfiguration::getTag() const {
  return TAG;
}


peano::geometry::GeometryObject* peano::geometry::builtin::configurations::SphereConfiguration::
interpreteConfiguration() const {
  return new peano::geometry::builtin::Sphere(_isInverted, _radius, _center);
}
