//#include "configuration/DomainConfiguration.h"
//#include "utils/Globals.h"
//#include <sstream>
//
//using namespace tarch;
//
//
//const std::string configuration::DomainConfiguration::TAG = "domain";
//
//utils::Log configuration::DomainConfiguration::_log( "configuration::DomainConfiguration" );
//
//configuration::DomainConfiguration::DomainConfiguration():
//  _domainSize(0.0),
//  _domainOffset(0.0),
//  _domainSizeValid(false),
//  _domainOffsetValid(false) {
//}
//
//configuration::DomainConfiguration::~DomainConfiguration() {
//}
//
//tarch::la::Vector<DIMENSIONS,double> configuration::DomainConfiguration::getDomainSize() const {
//  return _domainSize;
//}
//
//
//tarch::la::Vector<DIMENSIONS,double> configuration::DomainConfiguration::getOffset() const {
//  return _domainOffset;
//}
//
//
//void configuration::DomainConfiguration::parseSubtag( irr::io::IrrXMLReader* xmlReader ) {
//  assertion( xmlReader != 0 );
//  _domainSizeValid   = true;
//  _domainOffsetValid = true;
//
//  for (int i=0; i<DIMENSIONS; i++) {
//    std::ostringstream attribute;
//    attribute << "h" << i;
//    if (xmlReader->getAttributeValue( attribute.str().c_str() ) == 0) {
//      _log.error(
//        "parseSubtag(irr::io::IrrXMLReader*)",
//        "within tag <domain> there's an attribute missing: " + attribute.str()
//      );
//      _domainSizeValid = false;
//      return;
//    }
//    else {
//      _domainSize(i) = xmlReader->getAttributeValueAsDouble(attribute.str().c_str());
//    }
//  }
//
//  for (int i=0; i<DIMENSIONS; i++) {
//    std::ostringstream attribute;
//    attribute << "x" << i;
//    if (xmlReader->getAttributeValue( attribute.str().c_str() ) == 0) {
//      _log.error(
//        "parseSubtag(irr::io::IrrXMLReader*)",
//        "within tag <domain> there's an attribute missing: " + attribute.str()
//      );
//      _domainOffsetValid = false;
//      return;
//    }
//    else {
//      _domainOffset(i) = xmlReader->getAttributeValueAsDouble(attribute.str().c_str());
//    }
//  }
//
//}
//
//
//bool configuration::DomainConfiguration::isValid() const {
//  if ( !_domainSizeValid ){
//    _log.error(
//      "isValid()",
//      "missing or invalid domain size within tag <" + DomainConfiguration::TAG + ">"
//    );
//    return false;
//  }
//  if ( !_domainOffsetValid ){
//    _log.error(
//      "isValid()",
//      "missing or invalid domain offset within tag <" + DomainConfiguration::TAG + ">"
//  );
//    return false;
//  }
//  return true;
//}
//
//
//bool operator==(const configuration::DomainConfiguration& configA,
//                const configuration::DomainConfiguration& configB) {
//  utils::Log log("configuration::DomainConfigurationConfiguration");
//
//  if ( configA.getOffset() != configB.getOffset() ) {
//    log.debug("operator==","inconsistent offsets in tag \"" + configuration::DomainConfiguration::TAG + "\"");
//    return false;
//  }
//  if ( configA.getDomainSize() != configB.getDomainSize() ) {
//    log.debug("operator==","inconsistent domain sizes in tag \"" + configuration::DomainConfiguration::TAG + "\"");
//    return false;
//  }
//
//  return true;
//}
//
//std::string configuration::DomainConfiguration::toXMLString() const {
//  std::ostringstream result;
//  result << "<" << TAG;
//  for (int i=0; i<DIMENSIONS; i++) {
//  result << " x" << i << "=\"" << _domainOffset(i) << "\"";
//  result << " h" << i << "=\"" << _domainSize(i) << "\"";
//  }
//  result << " />\n";
//  return result.str();
//}
