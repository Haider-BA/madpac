#include "peano/integration/cca/PortRepository.h"
#include "tarch/Assertions.h"


tarch::logging::Log peano::integration::cca::PortRepository::_log( "peano::integration::cca::PortRepository" );


peano::integration::cca::PortRepository::PortRepository() {
}


peano::integration::cca::PortRepository::~PortRepository() {
}


peano::integration::cca::PortRepository& peano::integration::cca::PortRepository::getInstance() {
	static PortRepository instance;
	return instance;
}


void peano::integration::cca::PortRepository::clearAllPorts() {
  _ports.clear();
}


void peano::integration::cca::PortRepository::addPort( const std::string& fullQualifiedPortName, Port* port ) {
  _ports[ fullQualifiedPortName ] = port;
}


bool peano::integration::cca::PortRepository::hasPort( const std::string& fullQualifiedPortName ) const {
  return _ports.find( fullQualifiedPortName ) != _ports.end();
}


peano::integration::cca::Port* peano::integration::cca::PortRepository::getPort( const std::string& fullQualifiedPortName ) const {
  assertion( hasPort(fullQualifiedPortName) );
  return _ports.at( fullQualifiedPortName );
}
