#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/configurations/PlaneBoundaryConfiguration.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::PlaneBoundaryConfiguration::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::PlaneBoundaryConfiguration"
);


const std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::PlaneBoundaryConfiguration::INTERVAL = "interval";
const std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::PlaneBoundaryConfiguration::NORMAL = "normal";
const std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::PlaneBoundaryConfiguration::TAG = "plane-boundary";


void peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::PlaneBoundaryConfiguration::
parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader){
  // parse general part (-> boundary type)
  parseBoundaryConfigurationData(xmlReader);

  // parse interval
  if (xmlReader->getAttributeValue(INTERVAL.c_str()) != 0){
    parseInterval(xmlReader->getAttributeValue(INTERVAL.c_str()));
  } else {
    logDebug("parseSubtag()", INTERVAL << " not specified!");
    assertion(false);
  }
  // parse normal
  if ( xmlReader->getAttributeValue( NORMAL.c_str() ) != 0 ) {
    _normal = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(NORMAL.c_str());
    logDebug("parseSubtag()", NORMAL << ": " << _normal);
  } else {
    logDebug( "parseSubtag()", NORMAL << "not specified!");
    assertion(false);
  }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::PlaneBoundaryConfiguration::
parseInterval(std::string interval){
  for (int d = 0; d < DIMENSIONS; d++){
    std::string number1("");
    std::string number2("");
    tarch::irr::io::IrrXMLReader* getNumbers = tarch::irr::io::createIrrXMLReaderFromString("");
    size_t closedPos1   = interval.find("[");
    size_t openPos1     = interval.find("(");
    size_t closedPos2   = interval.find("]");
    size_t openPos2     = interval.find(")");
    size_t semicolonPos = interval.find(";");
    size_t first = 0;
    size_t last = 0;

    // determine left bracket position
    if ( (closedPos1 == std::string::npos) && (openPos1 == std::string::npos) ){
      logDebug("parseInterval()", "No left brackets found!");
      assertion(false);
    }
    if (closedPos1 == std::string::npos){
      first = openPos1;
    }
    if (openPos1 == std::string::npos){
      first = closedPos1;
    }
    if ( (closedPos1 != std::string::npos) && (openPos1 != std::string::npos) ){
      first = std::min(closedPos1,openPos1);
    }

    // determine right bracket position
    if ( (closedPos2 == std::string::npos) && (openPos2 == std::string::npos) ){
      logDebug("parseInterval()", "No right brackets found!");
      assertion(false);
    }
    if (closedPos2 == std::string::npos){
      last = openPos2;
    }
    if (openPos2 == std::string::npos){
      last = closedPos2;
    }
    if ( (closedPos2 != std::string::npos) && (openPos2 != std::string::npos) ){
      last = std::min(closedPos2,openPos2);
    }

    // check validity
    if (first >= last){
      logDebug("parseInterval()", "Right brackets before left brackets!");
      assertion(false);
    }
    if ( (semicolonPos <=first) || (semicolonPos >= last) || (semicolonPos == std::string::npos) ){
      logDebug("parseInterval()", "No valid semicolon separation could not be detected!");
      assertion(false);
    }

    // find out type of brackets
    if (first == closedPos1){
      _isOpen(2*d) = false;
    } else {
      _isOpen(2*d) = true;
    }
    if (last == closedPos2){
      _isOpen(2*d+1) = false;
    } else {
      _isOpen(2*d+1) = true;
    }

    // get start and end interval and set offset and width of box range
    number1 = interval.substr(first+1,semicolonPos-1-first);
    number2 = interval.substr(semicolonPos+1,last-1-semicolonPos);
    _offset(d) = getNumbers->convertValueStringToDouble( number1 );
    _width(d) = getNumbers->convertValueStringToDouble(number2) - _offset(d);
    logDebug("parseInterval()", "Number1: " << number1 << " offset " << d << ": " << _offset(d));
    logDebug("parseInterval()", "Number2: " << number2 << " width " << d << ": " << _width(d));

    // remove this part from string
    interval = interval.substr(last+1);

    // find sign 'x' and next left bracket
    if (d < DIMENSIONS-1){
      size_t closedNext = interval.find("[");
      size_t openNext = interval.find("(");
      first = interval.find("x");

      if ( (closedNext == std::string::npos) && (openNext == std::string::npos) ){
        logDebug("parseInterval()", "No new left brackets found!");
        assertion(false);
      }
      if (closedNext == std::string::npos){
        last = openNext;
      }
      if (openNext == std::string::npos){
        last = closedNext;
      }
      if ( (closedNext != std::string::npos) && (openNext != std::string::npos) ){
        last = std::min(closedNext,openNext);
      }

      if (last <= first){
        logDebug("parseInterval()", "No 'x' between intervals could be found!");
        assertion(false);
      }

      // remove all just until the first letter behind 'x'
      interval = interval.substr(first+1);
    }
    logDebug("parseInterval()", "Rest to parse: " << interval);

  }

  // check width
  for (int d = 0; d < DIMENSIONS; d++){
    if (tarch::la::smaller(_width(d),0.0)){
      logDebug("parseInterval()", "Width of box is smaller than zero!");
      assertion(false);
    }
  }
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundary*
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::PlaneBoundaryConfiguration::
interpreteConfiguration(){
  // return a BoxRange
  return new peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::PlaneBoundary(_width,_offset,_normal,_isOpen,_configData);
}

