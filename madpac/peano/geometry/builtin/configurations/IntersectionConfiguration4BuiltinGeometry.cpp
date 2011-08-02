#include "peano/geometry/builtin/configurations/IntersectionConfiguration4BuiltinGeometry.h"


peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry::IntersectionConfiguration4BuiltinGeometry():
peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration(),
_log("peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry"){}


peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry::~IntersectionConfiguration4BuiltinGeometry(){
  // delete all geometry object configurations
  for (unsigned int i = 0; i < _builtinGeometryObjectConfigurations.size(); i++){
    delete _builtinGeometryObjectConfigurations[i];
    _builtinGeometryObjectConfigurations[i] = NULL;
  }

  _builtinGeometryObjectConfigurations.clear();
}



void peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry::parseSubtag(
tarch::irr::io::IrrXMLReader* xmlReader ){

  // get geometry ID, if available
  peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration::readGeometryID(xmlReader);

  // for all types of possible builtin geometry object configurations to be read
  peano::geometry::builtin::configurations::CuttingPlaneConfiguration *cuttingPlane = new peano::geometry::builtin::configurations::CuttingPlaneConfiguration();
  peano::geometry::builtin::configurations::DriftRatchetConfiguration *driftRatchet = new peano::geometry::builtin::configurations::DriftRatchetConfiguration();
  peano::geometry::builtin::configurations::SphereConfiguration *sphere = new peano::geometry::builtin::configurations::SphereConfiguration();
  peano::geometry::builtin::configurations::HexahedronConfiguration *hexahedron = new peano::geometry::builtin::configurations::HexahedronConfiguration();
  peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry *intersection = new peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry();
  peano::geometry::builtin::configurations::UnionConfiguration *myUnion = new peano::geometry::builtin::configurations::UnionConfiguration();
  peano::geometry::builtin::configurations::TubeConfiguration *tube = new peano::geometry::builtin::configurations::TubeConfiguration();


  // parse all geometrical object configurations and store them in the vector
  while (xmlReader->read()){
    if ( xmlReader->getNodeType()== tarch::irr::io::EXN_ELEMENT ) {

      if (xmlReader->getNodeName() == sphere->getTag()){
        sphere->parseSubtag(xmlReader);
        _builtinGeometryObjectConfigurations.push_back(sphere);
        sphere = new peano::geometry::builtin::configurations::SphereConfiguration();
      } else if (xmlReader->getNodeName() == hexahedron->getTag()){
        hexahedron->parseSubtag(xmlReader);
        _builtinGeometryObjectConfigurations.push_back(hexahedron);
        hexahedron = new peano::geometry::builtin::configurations::HexahedronConfiguration();
      } else if (xmlReader->getNodeName() == driftRatchet->getTag()){
        driftRatchet->parseSubtag(xmlReader);
        _builtinGeometryObjectConfigurations.push_back(driftRatchet);
        driftRatchet = new peano::geometry::builtin::configurations::DriftRatchetConfiguration();
      } else if (xmlReader->getNodeName() == cuttingPlane->getTag()){
        cuttingPlane->parseSubtag(xmlReader);
        _builtinGeometryObjectConfigurations.push_back(cuttingPlane);
        cuttingPlane = new peano::geometry::builtin::configurations::CuttingPlaneConfiguration();
      } else if (xmlReader->getNodeName() == intersection->getTag()){
        intersection->parseSubtag(xmlReader);
        _builtinGeometryObjectConfigurations.push_back(intersection);
        intersection = new peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry();
      } else if (xmlReader->getNodeName() == myUnion->getTag()){
        myUnion->parseSubtag(xmlReader);
        _builtinGeometryObjectConfigurations.push_back(myUnion);
        myUnion = new peano::geometry::builtin::configurations::UnionConfiguration();
      } else if (xmlReader->getNodeName() == tube->getTag()){
        tube->parseSubtag(xmlReader);
        _builtinGeometryObjectConfigurations.push_back(tube);
        tube = new peano::geometry::builtin::configurations::TubeConfiguration();
      } else {
        logError("parseSubtag()", "Geometry configuration " << xmlReader->getNodeName() << " unknown!");
        exit(EXIT_FAILURE);
      }
    } else if ( xmlReader->getNodeType()== tarch::irr::io::EXN_ELEMENT_END ) {
      // end was found
      if ( getTag() == xmlReader->getNodeName() ) {
        return;
      }
    }
  }

  // delete superfluous configuration pointers
  delete sphere;
  delete cuttingPlane;
  delete hexahedron;
  delete driftRatchet;
  delete intersection;
  delete myUnion;
  delete tube;
}



bool peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry::isValid() const {
  // valid, if all object configurations are valid
  bool isValid = true;
  for (unsigned int i = 0; i < _builtinGeometryObjectConfigurations.size(); i++){
    isValid = isValid && _builtinGeometryObjectConfigurations[i]->isValid();
  }
  return isValid;
}


void peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry::toXML(std::ostream&) const {
  // TODO
}


std::string peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry::getTag() const {
  return "intersection";
}



peano::geometry::GeometryObject*
peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry::interpreteConfiguration() const {
  // build intersection, add objects and return pointer
  peano::geometry::Intersection *geo = new peano::geometry::Intersection();

  for (unsigned int i = 0; i < _builtinGeometryObjectConfigurations.size(); i++){
    geo->addGeometry(*_builtinGeometryObjectConfigurations[i]);
  }
  return geo;
}
