#include "peano/geometry/builtin/configurations/BuiltinGeometryConfiguration.h"


tarch::logging::Log peano::geometry::builtin::configurations::BuiltinGeometryConfiguration::_log("peano::geometry::builtin::configurations::BuiltinGeometryConfiguration");

peano::geometry::builtin::configurations::BuiltinGeometryConfiguration::BuiltinGeometryConfiguration():
peano::geometry::configurations::GeometryConfiguration(){}


peano::geometry::builtin::configurations::BuiltinGeometryConfiguration::~BuiltinGeometryConfiguration(){
  // deletes all geometry configurations
  for (unsigned int i = 0; i < _builtinGeometryConfigurations.size(); i++){
    delete _builtinGeometryConfigurations[i];
    _builtinGeometryConfigurations[i] = NULL;
  }
  _builtinGeometryConfigurations.clear();
}


void peano::geometry::builtin::configurations::BuiltinGeometryConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ){

  // possible builtin geometries
  peano::geometry::builtin::configurations::CuttingPlaneConfiguration *cuttingPlane = new peano::geometry::builtin::configurations::CuttingPlaneConfiguration();
  peano::geometry::builtin::configurations::DriftRatchetConfiguration *driftRatchet = new peano::geometry::builtin::configurations::DriftRatchetConfiguration();
  peano::geometry::builtin::configurations::SphereConfiguration *sphere = new peano::geometry::builtin::configurations::SphereConfiguration();
  peano::geometry::builtin::configurations::HexahedronConfiguration *hexahedron = new peano::geometry::builtin::configurations::HexahedronConfiguration();
  peano::geometry::builtin::configurations::UnionConfiguration *myUnion = new peano::geometry::builtin::configurations::UnionConfiguration();
  peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry *intersection = new peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry();
  peano::geometry::builtin::configurations::TubeConfiguration *tube = new peano::geometry::builtin::configurations::TubeConfiguration();

  // read all geometrical objects and store their configurations
  while (xmlReader->read()){
    if ( xmlReader->getNodeType()== tarch::irr::io::EXN_ELEMENT ) {
      if (xmlReader->getNodeName() == cuttingPlane->getTag()){
        cuttingPlane->parseSubtag(xmlReader);
        _builtinGeometryConfigurations.push_back(cuttingPlane);
        cuttingPlane = new peano::geometry::builtin::configurations::CuttingPlaneConfiguration();
      } else if (xmlReader->getNodeName() == driftRatchet->getTag()){
        driftRatchet->parseSubtag(xmlReader);
        _builtinGeometryConfigurations.push_back(driftRatchet);
        driftRatchet = new peano::geometry::builtin::configurations::DriftRatchetConfiguration();
      } else if (xmlReader->getNodeName() == sphere->getTag()){
        sphere->parseSubtag(xmlReader);
        _builtinGeometryConfigurations.push_back(sphere);
        sphere = new peano::geometry::builtin::configurations::SphereConfiguration();
      } else if (xmlReader->getNodeName() == hexahedron->getTag()){
        hexahedron->parseSubtag(xmlReader);
        _builtinGeometryConfigurations.push_back(hexahedron);
        hexahedron = new peano::geometry::builtin::configurations::HexahedronConfiguration();
      } else if (xmlReader->getNodeName() == myUnion->getTag()){
        myUnion->parseSubtag(xmlReader);
        _builtinGeometryConfigurations.push_back(myUnion);
        myUnion = new peano::geometry::builtin::configurations::UnionConfiguration();
      } else if (xmlReader->getNodeName() == intersection->getTag()){
        intersection->parseSubtag(xmlReader);
        _builtinGeometryConfigurations.push_back(intersection);
        intersection = new peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry();
      } else if (xmlReader->getNodeName() == tube->getTag()){
        tube->parseSubtag(xmlReader);
        _builtinGeometryConfigurations.push_back(tube);
        tube = new peano::geometry::builtin::configurations::TubeConfiguration();
      }  else {
        logError("parseSubtag()", "Unknown configuration " << xmlReader->getNodeName());
        assertion(false);
      }
    } else if ( xmlReader->getNodeType()== tarch::irr::io::EXN_ELEMENT_END ) {
      // end was found
      if ( getTag() == xmlReader->getNodeName() ) {
        return;
      }
    }
  }

  // delete the superfluous pointers
  delete cuttingPlane;
  delete driftRatchet;
  delete sphere;
  delete hexahedron;
  delete myUnion;
  delete intersection;
  delete tube;
}


bool peano::geometry::builtin::configurations::BuiltinGeometryConfiguration::isValid() const {
  // valid, if all sub-configs are valid
  bool isValid = true;
  for (unsigned int i = 0; i < _builtinGeometryConfigurations.size(); i++){
    isValid = isValid && _builtinGeometryConfigurations[i]->isValid();
  }
  return isValid;
}

void peano::geometry::builtin::configurations::BuiltinGeometryConfiguration::toXML(std::ostream&) const {
  // TODO
}

std::string peano::geometry::builtin::configurations::BuiltinGeometryConfiguration::getTag() const {
  return "builtin-geometry-configuration";
}


unsigned int peano::geometry::builtin::configurations::BuiltinGeometryConfiguration::size() const {
  return _builtinGeometryConfigurations.size();
}


const peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration&
peano::geometry::builtin::configurations::BuiltinGeometryConfiguration::getBuiltinGeometryObjectConfiguration(const unsigned int &i) const {
  assertion(i < _builtinGeometryConfigurations.size());
  return *_builtinGeometryConfigurations[i];
}



peano::geometry::Geometry* peano::geometry::builtin::configurations::BuiltinGeometryConfiguration::interpreteConfiguration() const {

  // return intersection, after adding all geometrical objects
  peano::geometry::Intersection* g = new peano::geometry::Intersection();
  assertion(g != NULL);

  for (unsigned int i = 0; i < _builtinGeometryConfigurations.size(); i++){
    g->addGeometry(*_builtinGeometryConfigurations[i]);
  }

  return g;
}
