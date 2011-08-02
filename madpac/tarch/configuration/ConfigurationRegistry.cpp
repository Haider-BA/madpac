#include "tarch/configuration/ConfigurationRegistry.h"
#include "tarch/configuration/TopLevelConfiguration.h"
#include "tarch/irr/XML.h"
#include "tarch/Assertions.h"


tarch::logging::Log tarch::configuration::ConfigurationRegistry::_log("tarch::configuration::ConfigurationRegistry");

tarch::configuration::ConfigurationRegistry::ConfigurationRegistry():
//_log("tarch::configuration::ConfigurationRegistry"),
_topLevelTags(){
}


tarch::configuration::ConfigurationRegistry::~ConfigurationRegistry() {
}


tarch::configuration::ConfigurationRegistry& tarch::configuration::ConfigurationRegistry::getInstance() {
  static ConfigurationRegistry singleton;
  return singleton;
}


void tarch::configuration::ConfigurationRegistry::addTopLevelConfiguration( TopLevelConfiguration* configuration ) {
  assertion1( _topLevelTags.count(configuration->getTag())==0, configuration->getTag() );
  _topLevelTags[ configuration->getTag() ] = configuration;
}


void tarch::configuration::ConfigurationRegistry::writeDummyConfigFile(std::ostream& out) const {
  std::cout << "<your-top-level-tag>" << std::endl
            << "<!--" << std::endl
            << "  This file enlists all the tags that are available. " << std::endl
            << "  ->" << std::endl;
  for (TopLevelConfigurationContainer::const_iterator p = _topLevelTags.begin(); p!=_topLevelTags.end(); p++) {
    p->second->toXML(out);
  }
  std::cout << "</your-top-level-tag>" << std::endl;
}


void tarch::configuration::ConfigurationRegistry::enlistAvailableTopLevelTags() const {
  std::ostringstream msg;
  msg << "available top level tags: ";
  for (TopLevelConfigurationContainer::const_iterator p = _topLevelTags.begin(); p!=_topLevelTags.end(); p++) {
    msg << "<" << p->first << "> ";
  }
  _log.info( "enlistAvailableTopLevelTags()", msg.str() );
}


void tarch::configuration::ConfigurationRegistry::freeConfigurations(std::list<TopLevelConfiguration*>& configurations) {
  for (std::list<TopLevelConfiguration*>::iterator p = configurations.begin(); p!=configurations.end(); p++) {
    delete *p;
  }
}


std::list<tarch::configuration::TopLevelConfiguration*>
tarch::configuration::ConfigurationRegistry::readFile(
  const std::string& filename,
  const std::string& topLevelTag
) {
  bool error = false;

  tarch::irr::io::IrrXMLReader*                            xmlReader =
        tarch::irr::io::createIrrXMLReader( filename.c_str() );
  std::list<tarch::configuration::TopLevelConfiguration*>  result;
  if ( (xmlReader==0) || (! xmlReader->read()) || (xmlReader->getNodeType()==irr::io::EXN_NONE) ) {
    _log.error( "readFile(std::string,std::string)", "was not able to read input file " + filename );
    error = true;
  }


  while( xmlReader->read() && !error) {
    if ( xmlReader->getNodeType()==irr::io::EXN_ELEMENT ) {
      std::string currentTag = xmlReader->getNodeName();
      if (
        topLevelTag == currentTag
      ) {
      }
      else
      if ( _topLevelTags.find(currentTag)==_topLevelTags.end() ) {
        _log.error(
          "readFile(std::string,std::string)",
          "invalid top level tag. Received <" + currentTag + "> but expected <"
          + topLevelTag + "> or any top level tag"
        );
        enlistAvailableTopLevelTags();
        error = true;
      }
      else {
        TopLevelConfiguration* configuration = _topLevelTags[currentTag]->clone();
        configuration->parseSubtag(xmlReader);
        if (configuration->isValid()) {
          result.push_back(configuration);
        }
        else {
          error = true;
        }
      }
    }
  }


  if (
    !error &&
    (
    (xmlReader->getNodeType()!=irr::io::EXN_ELEMENT_END) ||
    (xmlReader->getNodeName()!=topLevelTag)
    )
  ) {
    _log.error(
      "parseSubtag(...)",
      "expected closing tag for " + topLevelTag +
      ", but received tag <" + xmlReader->getNodeName() + ">"
    );
    error = true;
  }

  if ( error ) {
    freeConfigurations( result );
    result.clear();
  }

  return result;
}
