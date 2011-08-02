#include "peano/geometry/builtin/configurations/UnionConfiguration.h"

tarch::logging::Log peano::geometry::builtin::configurations::UnionConfiguration::_log("peano::geometry::builtin::configurations::UnionConfiguration");

peano::geometry::builtin::configurations::UnionConfiguration::UnionConfiguration():
peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration(){}


peano::geometry::builtin::configurations::UnionConfiguration::~UnionConfiguration(){
  for (unsigned int i = 0; i < _builtinGeometryObjectConfigurations.size(); i++){
    if (_builtinGeometryObjectConfigurations[i] != NULL){
      delete _builtinGeometryObjectConfigurations[i];
      _builtinGeometryObjectConfigurations[i] = NULL;
    }
  }
  _builtinGeometryObjectConfigurations.clear();
}

void peano::geometry::builtin::configurations::UnionConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ){

  // allow for different geometrical objects to be cut. Currently, no cutting-plane geometry object can be cut again...
  const peano::geometry::builtin::configurations::CuttingPlaneConfiguration cuttingPlane;
  const peano::geometry::builtin::configurations::DriftRatchetConfiguration driftRatchet;
  const peano::geometry::builtin::configurations::SphereConfiguration sphere;
  const peano::geometry::builtin::configurations::HexahedronConfiguration hexahedron;
  const peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry intersection;
  const peano::geometry::builtin::configurations::UnionConfiguration myUnion;
  _builtinGeometryObjectConfigurations.clear();

  // read one and only one geometrical object (which is no cutting plane) and an arbitrary number of
  // cutting planes
  while (xmlReader->read()){
    if ( xmlReader->getNodeType()== tarch::irr::io::EXN_ELEMENT ) {
      if (xmlReader->getNodeName() == cuttingPlane.getTag()){
        peano::geometry::builtin::configurations::CuttingPlaneConfiguration *config = new peano::geometry::builtin::configurations::CuttingPlaneConfiguration();
        assertion(config != NULL);
        config->parseSubtag(xmlReader);
        _builtinGeometryObjectConfigurations.push_back(config);
      } else if (xmlReader->getNodeName() == driftRatchet.getTag()){
        peano::geometry::builtin::configurations::DriftRatchetConfiguration *config = new peano::geometry::builtin::configurations::DriftRatchetConfiguration();
        assertion(config != NULL);
        config->parseSubtag(xmlReader);
        _builtinGeometryObjectConfigurations.push_back(config);
      } else if (xmlReader->getNodeName() == sphere.getTag()){
        peano::geometry::builtin::configurations::SphereConfiguration *config = new peano::geometry::builtin::configurations::SphereConfiguration();
        assertion(config != NULL);
        config->parseSubtag(xmlReader);
        _builtinGeometryObjectConfigurations.push_back(config);
      } else if (xmlReader->getNodeName() == hexahedron.getTag()){
        peano::geometry::builtin::configurations::HexahedronConfiguration *config = new peano::geometry::builtin::configurations::HexahedronConfiguration();
        assertion(config != NULL);
        config->parseSubtag(xmlReader);
        _builtinGeometryObjectConfigurations.push_back(config);
      } else if (xmlReader->getNodeName() == intersection.getTag()){
        peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry *config = new peano::geometry::builtin::configurations::IntersectionConfiguration4BuiltinGeometry();
        assertion(config != NULL);
        config->parseSubtag(xmlReader);
        _builtinGeometryObjectConfigurations.push_back(config);
      }  else if (xmlReader->getNodeName() == myUnion.getTag()){
        peano::geometry::builtin::configurations::UnionConfiguration *config = new peano::geometry::builtin::configurations::UnionConfiguration();
        assertion(config != NULL);
        config->parseSubtag(xmlReader);
        _builtinGeometryObjectConfigurations.push_back(config);
      } else {
        logError("parseSubtag()", "Unknown configuration");
        assertion(false);
      }
    } else if ( xmlReader->getNodeType()== tarch::irr::io::EXN_ELEMENT_END ) {
      // end was found
      if ( getTag() == xmlReader->getNodeName() ) {
        return;
      }
    }
  }
}


bool peano::geometry::builtin::configurations::UnionConfiguration::isValid() const {

  // true, if all geometry object configurations are valid
  bool isValid = true;
  for (unsigned int i = 0; i < _builtinGeometryObjectConfigurations.size(); i++){
    isValid = isValid && _builtinGeometryObjectConfigurations[i]->isValid();
  }
  return isValid;
}

void peano::geometry::builtin::configurations::UnionConfiguration::toXML(std::ostream&) const{
  // TODO
}

std::string peano::geometry::builtin::configurations::UnionConfiguration::getTag() const {
  return "union";
}


peano::geometry::GeometryObject* peano::geometry::builtin::configurations::UnionConfiguration::interpreteConfiguration() const {

  // set up a vector containing all cutting planes and build a Cut pointer
  std::vector<peano::geometry::GeometryObject*> objects;

  for (unsigned int i = 0; i < _builtinGeometryObjectConfigurations.size(); i++){
    objects.push_back(_builtinGeometryObjectConfigurations[i]->interpreteConfiguration());
  }

  return new peano::geometry::builtin::Union(objects);
}
