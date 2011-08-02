#include "peano/kernel/regulargrid/configurations/RegularGridConfiguration.h"

#include <sstream>


const std::string peano::kernel::regulargrid::configurations::RegularGridConfiguration::TAG = "regular-grid";
const std::string peano::kernel::regulargrid::configurations::RegularGridConfiguration::NUMBER_OF_GRID_POINTS = "number-of-vertices";


tarch::logging::Log peano::kernel::regulargrid::configurations::RegularGridConfiguration::_log( "peano::kernel::regulargrid::configurations::RegularGridConfiguration" );


peano::kernel::regulargrid::configurations::RegularGridConfiguration::RegularGridConfiguration():
  _isValid(false),
  _numberOfGridPoints(0) {
}


peano::kernel::regulargrid::configurations::RegularGridConfiguration::~RegularGridConfiguration() {
}


bool peano::kernel::regulargrid::configurations::RegularGridConfiguration::isValid() const {
  return _isValid;
}


std::string peano::kernel::regulargrid::configurations::RegularGridConfiguration::getTag() const {
  return TAG;
}


void peano::kernel::regulargrid::configurations::RegularGridConfiguration::toXML(std::ostream& out) const {
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


void peano::kernel::regulargrid::configurations::RegularGridConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
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
}


tarch::la::Vector<DIMENSIONS,int> peano::kernel::regulargrid::configurations::RegularGridConfiguration::getNumberOfGridPoints() const {
  assertion( _isValid );
  return _numberOfGridPoints;
}
