#include "peano/geometry/builtin/configurations/TubeConfiguration.h"

const std::string peano::geometry::builtin::configurations::TubeConfiguration::TAG   = "tube";
const std::string peano::geometry::builtin::configurations::TubeConfiguration::ATTRIBUTE_INVERT       = "invert";
const std::string peano::geometry::builtin::configurations::TubeConfiguration::ATTRIBUTE_POINT1      = "point2";
const std::string peano::geometry::builtin::configurations::TubeConfiguration::ATTRIBUTE_POINT2          = "point1";
const std::string peano::geometry::builtin::configurations::TubeConfiguration::ATTRIBUTE_RADIUS = "radius";

tarch::logging::Log peano::geometry::builtin::configurations::TubeConfiguration::_log( "geometry::configurations::TubeConfiguration" );


peano::geometry::builtin::configurations::TubeConfiguration::TubeConfiguration():
  peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration(),
  _point1(0.0),
  _point2(0.0),
  _radius(0.0),
  _isInverted(false),
  _isValid(true){
}



void peano::geometry::builtin::configurations::TubeConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {

  // get geometry ID, if available
  peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration::readGeometryID(xmlReader);

  // determine invertion
  if ( xmlReader->getAttributeValue( ATTRIBUTE_INVERT.c_str() ) != 0 ) {
    _isInverted = xmlReader->getAttributeValueAsBool( ATTRIBUTE_INVERT.c_str() );
    if (_isInverted){
      logDebug("parseSubtag()", "Hexahedron is inverted: true");
    } else {
      logDebug("parseSubtag()", "Hexahedron is inverted: false");
    }
  }
  else {
    _isValid = false;
    logError( "parseSubtag()", "attribute \"" << ATTRIBUTE_INVERT << "\" not specified" );
  }

  // get points
  if ( xmlReader->getAttributeValue( ATTRIBUTE_POINT1.c_str() ) != 0 ) {
    _point1 = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(
                ATTRIBUTE_POINT1.c_str()
              );
    logDebug("parseSubtag()", "Tube, Point1: " << _point1);
  }
  else {
    _isValid = false;
    logError( "parseSubtag()", "attribute \"" << ATTRIBUTE_POINT1 << "\" not specified" );
  }
  if ( xmlReader->getAttributeValue( ATTRIBUTE_POINT2.c_str() ) != 0 ) {
    _point2 = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(
                ATTRIBUTE_POINT2.c_str()
              );
    logDebug("parseSubtag()", "Tube, Point2: " << _point2);
  }
  else {
    _isValid = false;
    logError( "parseSubtag()", "attribute \"" << ATTRIBUTE_POINT2 << "\" not specified" );
  }
  // check that the points are not identical
  if (tarch::la::equals(tarch::la::dot(_point1-_point2,_point1-_point2),0.0)){
    _isValid = false;
    logError("parseSubtag()", "Both points that were specified are identical!");
  }

  // get offset
  if ( xmlReader->getAttributeValue( ATTRIBUTE_RADIUS.c_str() ) != 0 ) {
    _radius = xmlReader->getAttributeValueAsDouble(
                ATTRIBUTE_RADIUS.c_str()
              );
    logDebug("parseSubtag()", "Tube radius: " << _radius);
  }
  else {
    _isValid = false;
    logError("parseSubtag()", "attribute \"" << ATTRIBUTE_RADIUS << "\" not specified" );
  }
}


bool peano::geometry::builtin::configurations::TubeConfiguration::isValid() const {
  return _isValid;
}


void peano::geometry::builtin::configurations::TubeConfiguration::toXML(std::ostream& result) const {

}


std::string peano::geometry::builtin::configurations::TubeConfiguration::getTag() const {
  return TAG;
}


peano::geometry::GeometryObject* peano::geometry::builtin::configurations::TubeConfiguration::interpreteConfiguration() const {
  return new peano::geometry::builtin::Tube(_point1,_point2,_radius,_isInverted);
}

