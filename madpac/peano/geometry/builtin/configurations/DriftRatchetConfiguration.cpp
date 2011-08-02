#include "peano/geometry/builtin/configurations/DriftRatchetConfiguration.h"
#include "peano/utils/Globals.h"


#include <sstream>


const std::string peano::geometry::builtin::configurations::DriftRatchetConfiguration::TAG   = "drift-ratchet";

const std::string peano::geometry::builtin::configurations::DriftRatchetConfiguration::ATTRIBUTE_INVERT         = "invert";
const std::string peano::geometry::builtin::configurations::DriftRatchetConfiguration::ATTRIBUTE_OFFSET         = "offset";
const std::string peano::geometry::builtin::configurations::DriftRatchetConfiguration::ATTRIBUTE_MINIMAL_RADIUS = "minimal-radius";
const std::string peano::geometry::builtin::configurations::DriftRatchetConfiguration::ATTRIBUTE_MAXIMAL_RADIUS = "maximal-radius";
const std::string peano::geometry::builtin::configurations::DriftRatchetConfiguration::ATTRIBUTE_C_PORE = "c-pore";


tarch::logging::Log peano::geometry::builtin::configurations::DriftRatchetConfiguration::DriftRatchetConfiguration::_log( "geometry::configurations::DriftRatchetConfiguration" );

peano::geometry::builtin::configurations::DriftRatchetConfiguration::DriftRatchetConfiguration():
  peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration(),
  _fileValid(false),
  _offset(0.0),
  _isInverted(false) {
}


peano::geometry::builtin::configurations::DriftRatchetConfiguration::~DriftRatchetConfiguration() {
}


void peano::geometry::builtin::configurations::DriftRatchetConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  assertion( xmlReader != 0 );
  _fileValid = true;

  // get geometry ID, if available
  peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration::readGeometryID(xmlReader);

  // read invert flag
  if ( xmlReader->getAttributeValue( ATTRIBUTE_INVERT.c_str() ) != 0 ) {
    _isInverted = xmlReader->getAttributeValueAsBool( ATTRIBUTE_INVERT.c_str() );
  }
  else {
    _fileValid = false;
    logError( "parseSubtag(...)", "attribute \"" << ATTRIBUTE_INVERT << "\" not specified" );
  }

  // read offset
  if (xmlReader->getAttributeValue(ATTRIBUTE_OFFSET.c_str()) != 0){
    _offset = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(
                ATTRIBUTE_OFFSET.c_str()
              );
  } else {
    _fileValid = false;
    logError( "parseSubtag(...)", "attribute \"" << ATTRIBUTE_OFFSET << "\" not specified" );
  }

  // read min. and max radius
  if ( xmlReader->getAttributeValue( ATTRIBUTE_MINIMAL_RADIUS.c_str() ) != 0 ) {
    _minimalRadius = xmlReader->getAttributeValueAsDouble( ATTRIBUTE_MINIMAL_RADIUS.c_str() );
    _isDefinedMinimalRadius=true;
  }
  else {
    _isDefinedMinimalRadius=false;
    logDebug( "parseSubtag(...)", "attribute \"" << ATTRIBUTE_MINIMAL_RADIUS << "\" not specified" );
  }
  if ( xmlReader->getAttributeValue( ATTRIBUTE_MAXIMAL_RADIUS.c_str() ) != 0 ) {
    _maximalRadius = xmlReader->getAttributeValueAsDouble( ATTRIBUTE_MAXIMAL_RADIUS.c_str() );
  }
  else {
    _fileValid = false;
    logError( "parseSubtag(...)", "attribute \"" << ATTRIBUTE_MAXIMAL_RADIUS << "\" not specified" );
  }

  // read c-pore factor (optional)
  if ( xmlReader->getAttributeValue( ATTRIBUTE_C_PORE.c_str() ) != 0 ) {
    _isDefinedCPore = true;
    _cPore = xmlReader->getAttributeValueAsDouble( ATTRIBUTE_C_PORE.c_str() );
  }
  else {
    _isDefinedCPore = false;
    logDebug( "parseSubtag(...)", "attribute \"" << ATTRIBUTE_C_PORE << "\" not specified" );
  }
}


bool peano::geometry::builtin::configurations::DriftRatchetConfiguration::isValid() const {
  std::ostringstream msg;
  msg << "invalid or missing attribute ";

  return _fileValid;
}


void peano::geometry::builtin::configurations::DriftRatchetConfiguration::toXML(std::ostream& result) const {
  result << "< " << TAG << ">" << std::endl;
  result << "  " << ATTRIBUTE_MINIMAL_RADIUS << "= \"" << _minimalRadius << "\"" << std::endl;
  result << "  " << ATTRIBUTE_MAXIMAL_RADIUS << "= \"" << _maximalRadius << "\"" << std::endl;
  result << "  " << ATTRIBUTE_OFFSET << "= \"" << _offset << "\"" << std::endl;
  result << "  " << ATTRIBUTE_INVERT << "= \"" << "true/ false" << "\"" << std::endl;
  result << "/>" << std::endl;
}


std::string peano::geometry::builtin::configurations::DriftRatchetConfiguration::getTag() const {
	return TAG;
}


peano::geometry::GeometryObject* peano::geometry::builtin::configurations::DriftRatchetConfiguration::interpreteConfiguration() const {
  if (_isDefinedCPore){
    if (_isDefinedMinimalRadius){
      return new peano::geometry::builtin::DriftRatchet( _isInverted,_maximalRadius,_minimalRadius,_offset,_cPore);
    } else {
      return new peano::geometry::builtin::DriftRatchet( _isInverted,_maximalRadius,_offset,_cPore);
    }
  } else {
    if (_isDefinedMinimalRadius){
      return new peano::geometry::builtin::DriftRatchet(_isInverted,_maximalRadius,_minimalRadius,_offset);
    } else {
      return new peano::geometry::builtin::DriftRatchet(_isInverted,_maximalRadius,_offset);
    }
  }
}
