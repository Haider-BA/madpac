#include "peano/geometry/precice/configurations/PreciceConfiguration.h"


tarch::logging::Log peano::geometry::precice::configurations::PreciceConfiguration::_log ( "peano::geometry::precice::configurations::PreciceConfiguration" );

const std::string peano::geometry::precice::configurations::PreciceConfiguration::PEANO_NAME ( "Peano" );


peano::geometry::precice::configurations::PreciceConfiguration::PreciceConfiguration ():
peano::geometry::configurations::GeometryConfiguration(),
_isValid ( true ),
_cplConfigFilename ( "" ),
_buffersize(0),
_geometryAddonNames (),
_geometryAddonIDs (),
_interface(NULL)
{}


peano::geometry::precice::configurations::PreciceConfiguration::~PreciceConfiguration(){
  if (_interface != NULL){
    delete _interface;
    _interface = NULL;
  }
}


void peano::geometry::precice::configurations::PreciceConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ){
  assertion (xmlReader->getNodeName() == getTag());
  while (xmlReader->read()) {
    if (xmlReader->getNodeType() == tarch::irr::io::EXN_ELEMENT) {
      if (std::string("coupling-config") == xmlReader->getNodeName()) {
        _cplConfigFilename = xmlReader->getAttributeValue("filename");
      } else if (std::string("buffer") == xmlReader->getNodeName()){
        _buffersize = xmlReader->getAttributeValueAsInt("size");
        assertion(_buffersize > 0);
        _isValid = _isValid && (_buffersize > 0);
      } else if (std::string("geometry-addon") == xmlReader->getNodeName()) {
        std::string name = xmlReader->getAttributeValue("name");
        int id = xmlReader->getAttributeValueAsInt("id");
        _geometryAddonNames.push_back (name);
        _geometryAddonIDs.push_back (id);
        assertion (_geometryAddonNames.size() == _geometryAddonIDs.size());
      }
    } else if ( xmlReader->getNodeType() == tarch::irr::io::EXN_ELEMENT_END ) {
      if ( getTag() == xmlReader->getNodeName() ) {
        _isValid = _isValid && (not _cplConfigFilename.empty());
      }
    }
  }

  assertion(_interface == NULL);
  if (isValid()){
    // TODO rank, size for parallel case!
    ::precice::SolverInterface *interface = new ::precice::SolverInterface ( PEANO_NAME, 0, 1 );
    assertion ( _cplConfigFilename != std::string("") );
    interface->configure ( _cplConfigFilename );
    _interface=interface;
  }
}


bool peano::geometry::precice::configurations::PreciceConfiguration::isValid() const {
  return _isValid;
}


void peano::geometry::precice::configurations::PreciceConfiguration::toXML(std::ostream& of) const {
  of << "<" << getTag() << "> not available </" << getTag() << ">";
}

std::string peano::geometry::precice::configurations::PreciceConfiguration::getTag() const {
  return "precice";
}


::precice::SolverInterface* peano::geometry::precice::configurations::PreciceConfiguration::getPreciceSolverInterface() const {
  return _interface;
}


peano::geometry::precice::PreciceGeometry* peano::geometry::precice::configurations::PreciceConfiguration::
interpreteConfigurationAsPreciceGeometry() const {
  assertion(isValid());
  return new peano::geometry::precice::PreciceGeometry(
    *_interface,
    _buffersize
  );
}


peano::geometry::Geometry* peano::geometry::precice::configurations::PreciceConfiguration::interpreteConfiguration() const {
  assertion(isValid());
  return new peano::geometry::precice::PreciceGeometry(
    *_interface,
    _buffersize
  );
}



std::vector<std::string> peano::geometry::precice::configurations::PreciceConfiguration::getGeometryAddonNames() const {
  return _geometryAddonNames;
}


std::vector<int> peano::geometry::precice::configurations::PreciceConfiguration::getGeometryAddonIDs() const {
  return _geometryAddonIDs;
}
