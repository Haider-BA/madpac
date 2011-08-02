#include "peano/geometry/builtin/configurations/CuttingPlaneConfiguration.h"


tarch::logging::Log peano::geometry::builtin::configurations::CuttingPlaneConfiguration::_log("peano::geometry::builtin::configurations::CuttingPlaneConfiguration");

const std::string peano::geometry::builtin::configurations::CuttingPlaneConfiguration::TAG="cutting-plane";
const std::string peano::geometry::builtin::configurations::CuttingPlaneConfiguration::ATTRIBUTE_POINT = "point";
const std::string peano::geometry::builtin::configurations::CuttingPlaneConfiguration::ATTRIBUTE_NORMAL = "normal";

peano::geometry::builtin::configurations::CuttingPlaneConfiguration::CuttingPlaneConfiguration():
peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration(),
_fileValid(true),
_point(0.0),
_normal(0.0){}


peano::geometry::builtin::configurations::CuttingPlaneConfiguration::~CuttingPlaneConfiguration(){}


void peano::geometry::builtin::configurations::CuttingPlaneConfiguration::
parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ){
  _fileValid = true;

  // get geometry ID, if available
  peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration::readGeometryID(xmlReader);

  // get width of box
  if ( xmlReader->getAttributeValue( ATTRIBUTE_POINT.c_str() ) != 0 ) {
    _point = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(
                ATTRIBUTE_POINT.c_str()
              );
    logDebug("parseSubtag()", "Point on plane " << _point);
  }
  else {
    _fileValid = false;
    logError( "parseSubtag(...)", "attribute \"" << ATTRIBUTE_POINT << "\" not specified" );
  }

  // get offset
  if ( xmlReader->getAttributeValue( ATTRIBUTE_NORMAL.c_str() ) != 0 ) {
    _normal = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(
                ATTRIBUTE_NORMAL.c_str()
              );
    logDebug("parseSubtag()", "Plane normal: " << _normal);
  }
  else {
    _fileValid = false;
    logError( "parseSubtag(...)", "attribute \"" << ATTRIBUTE_NORMAL << "\" not specified" );
  }

}

bool peano::geometry::builtin::configurations::CuttingPlaneConfiguration::isValid() const {
  return _fileValid;
}

void peano::geometry::builtin::configurations::CuttingPlaneConfiguration::toXML(std::ostream& result) const {
  result << "<" << TAG << " \n";
  result << "  " << ATTRIBUTE_POINT << "=\"";
  for (int d = 0; d < DIMENSIONS; d++){
    result << " " << _point(d);
  }
  result << "\"\n";
  result << "  " << ATTRIBUTE_NORMAL << "=\"";
  for (int d = 0; d < DIMENSIONS; d++){
    result << " " << _normal(d);
  }
  result << "\"\n";
  result << "/>\n";
}


std::string peano::geometry::builtin::configurations::CuttingPlaneConfiguration::getTag() const {
  return TAG;
}


peano::geometry::GeometryObject* peano::geometry::builtin::configurations::CuttingPlaneConfiguration::
interpreteConfiguration() const {
  return new peano::geometry::builtin::CuttingPlane(_point,_normal);
}
