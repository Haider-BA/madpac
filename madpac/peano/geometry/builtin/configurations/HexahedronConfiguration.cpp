#include "peano/geometry/builtin/configurations/HexahedronConfiguration.h"
#include "peano/utils/Globals.h"


#include <sstream>


const std::string peano::geometry::builtin::configurations::HexahedronConfiguration::TAG   = "hexahedron";
const std::string peano::geometry::builtin::configurations::HexahedronConfiguration::ATTRIBUTE_INVERT       = "invert";
const std::string peano::geometry::builtin::configurations::HexahedronConfiguration::ATTRIBUTE_WIDTH      = "width";
const std::string peano::geometry::builtin::configurations::HexahedronConfiguration::ATTRIBUTE_OFFSET          = "offset";

tarch::logging::Log peano::geometry::builtin::configurations::HexahedronConfiguration::HexahedronConfiguration::_log( "geometry::configurations::HexahedronConfiguration" );

peano::geometry::builtin::configurations::HexahedronConfiguration::HexahedronConfiguration():
  peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration(),
  _fileValid(false),
  _offset(0.0),
  _width(0.0),
  _isInverted(false) {
}


peano::geometry::builtin::configurations::HexahedronConfiguration::~HexahedronConfiguration() {}



void peano::geometry::builtin::configurations::HexahedronConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  assertion( xmlReader != 0 );
  _fileValid = true;

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
    _fileValid = false;
    logError( "parseSubtag()", "attribute \"" << ATTRIBUTE_INVERT << "\" not specified" );
  }

  // get width of box
  if ( xmlReader->getAttributeValue( ATTRIBUTE_WIDTH.c_str() ) != 0 ) {
    _width = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(
                ATTRIBUTE_WIDTH.c_str()
              );
    logDebug("parseSubtag()", "Hexahedron width: " << _width);
  }
  else {
    _fileValid = false;
    logError( "parseSubtag()", "attribute \"" << ATTRIBUTE_WIDTH << "\" not specified" );
  }

  // get offset
  if ( xmlReader->getAttributeValue( ATTRIBUTE_OFFSET.c_str() ) != 0 ) {
    _offset = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(
                ATTRIBUTE_OFFSET.c_str()
              );
    logDebug("parseSubtag()", "Hexahedron offset: " << _offset);
  }
  else {
    _fileValid = false;
    logError("parseSubtag()", "attribute \"" << ATTRIBUTE_OFFSET << "\" not specified" );
  }
}


bool peano::geometry::builtin::configurations::HexahedronConfiguration::isValid() const {
  return _fileValid;
}


void peano::geometry::builtin::configurations::HexahedronConfiguration::toXML(std::ostream& result) const {
  result << "<" << TAG << " \n";
  result << "  " << ATTRIBUTE_WIDTH << "=\"";
  for (int d = 0; d < DIMENSIONS; d++){
    result << " " << _width(d);
  }
  result << "\"\n";
  result << "  " << ATTRIBUTE_OFFSET << "=\"";
  for (int d = 0; d < DIMENSIONS; d++){
    result << " " << _offset(d);
  }
  result << "\"\n";
  result << "/>\n";
}


std::string peano::geometry::builtin::configurations::HexahedronConfiguration::getTag() const {
	return TAG;
}


peano::geometry::GeometryObject* peano::geometry::builtin::configurations::HexahedronConfiguration::interpreteConfiguration() const {
  return new peano::geometry::builtin::Hexahedron(_isInverted,_width,_offset);
}
