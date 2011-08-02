#include "peano/kernel/regulargrid/configurations/RegularGridConfigurationWithDomainInformation.h"

#include <sstream>


const std::string peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::TAG = "regular-grid";
const std::string peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::NUMBER_OF_GRID_POINTS = "number-of-vertices";
const std::string peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::DOMAIN_SIZE = "domain-size";
const std::string peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::DOMAIN_OFFSET = "domain-offset";

tarch::logging::Log peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::_log( "peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation" );


peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::RegularGridConfigurationWithDomainInformation():
  _isValid(false),
  _numberOfGridPoints(0),
  _domainSize(0.0),
  _domainOffset(0.0){
}


peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::~RegularGridConfigurationWithDomainInformation() {
}


bool peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::isValid() const {
  return _isValid;
}


std::string peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::getTag() const {
  return TAG;
}


void peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::toXML(std::ostream& out) const {
  out << "<" + getTag();
  out << " number-of-vertices=\"";
  for (int d=0; d<DIMENSIONS; d++) {
    out << _numberOfGridPoints(d);
    if(d < DIMENSIONS-1){
      out << ";";
    }
  }
  out << "\" />";
}


void peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  assertion( xmlReader != 0 );
  assertion( xmlReader->getNodeName() == getTag() );

  _isValid = true;

  if (xmlReader->getAttributeValue( NUMBER_OF_GRID_POINTS.c_str() ) != 0) {
    _numberOfGridPoints = xmlReader->getAttributeValueAsIntVector<DIMENSIONS>( NUMBER_OF_GRID_POINTS.c_str() );
  }

  if (
    (xmlReader->getAttributeValue( NUMBER_OF_GRID_POINTS.c_str() ) == 0)
  ){
    _log.error(
      "parseSubtag(...)",
      "attribute \"" + NUMBER_OF_GRID_POINTS + "\" of tag <" + getTag() +
      "> is missing."
    );
    _isValid = false;
  }
  for (int d=0; d<DIMENSIONS; d++) {
    if(_numberOfGridPoints(d) <= 2){
      _log.error(
        "parseSubtag(...)",
        "attribute \"" + NUMBER_OF_GRID_POINTS + "\" of tag <" + getTag() +
        "> is invalid. Less than three points per dimension are not allowed."
      );
      _isValid = false;
    }
  }

  // get domain size and offset
  if ( xmlReader->getAttributeValue( DOMAIN_SIZE.c_str() ) != 0 ) {
    _domainSize = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(DOMAIN_SIZE.c_str());
    logDebug("parseSubtag()", DOMAIN_SIZE << ": " << _domainSize);
    for (int d = 0; d < DIMENSIONS; d++){
      assertion1(_domainSize(d) > 0.0, "Entry " << d << " of domain-size is not bigger than zero: " << _domainSize(d));
    }
  } else {
    logError( "parseSubtag()", DOMAIN_SIZE << " not specified!");
    _isValid = false;
  }

  if ( xmlReader->getAttributeValue( DOMAIN_OFFSET.c_str() ) != 0 ) {
    _domainOffset = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(DOMAIN_OFFSET.c_str());
    logDebug("parseSubtag()", DOMAIN_OFFSET << ": " << _domainOffset);
  } else {
    logError( "parseSubtag()", DOMAIN_OFFSET << " not specified!");
    _isValid = false;
  }
}


tarch::la::Vector<DIMENSIONS,int> peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::getNumberOfGridPoints() const {
  assertion( _isValid );
  return _numberOfGridPoints;
}


tarch::la::Vector<DIMENSIONS,double>
peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::
getDomainSize() const {
  return _domainSize;
}


tarch::la::Vector<DIMENSIONS,double>
peano::kernel::regulargrid::configurations::RegularGridConfigurationWithDomainInformation::
getDomainOffset() const {
  return _domainOffset;
}
