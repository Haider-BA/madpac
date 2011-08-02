#include "peano/geometry/builtin/configurations/BuiltinGeometryObjectConfiguration.h"

const std::string peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration::GEOMETRY_ID = "geometry-id";
tarch::logging::Log peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration::_log("peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration");


peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration::BuiltinGeometryObjectConfiguration():
peano::geometry::configurations::GeometryObjectConfiguration(),
_geometryID(-1){}



int peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration::getGeometryID() const {
  assertion(_geometryID != -1);
  return _geometryID;
}



void peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration::readGeometryID(
tarch::irr::io::IrrXMLReader* xmlReader){
  // if available, parse geometry ID
  if (xmlReader->getAttributeValue(GEOMETRY_ID.c_str()) != 0){
    _geometryID = xmlReader->getAttributeValueAsInt(GEOMETRY_ID.c_str());
    if (_geometryID < 0){
      assertion1(false, "Read negative geometry ID!");
      exit(EXIT_FAILURE);
    }
    logDebug("readGeometryID()", "Geometry ID: " << _geometryID);
  }
}
