#include "peano/applications/latticeboltzmann/configurations/SpacetreeGridConfiguration.h"


tarch::logging::Log
peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::_log(
  "peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration"
);

const std::string peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::TAG = "spacetree-grid";
const std::string peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::DOMAIN_SIZE = "domain-size";
const std::string peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::DOMAIN_OFFSET = "domain-offset";
const std::string peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::NUMBER_OF_VERTICES_ON_REFERENCE_LEVEL = "number-of-vertices-on-reference-level";
const std::string peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::NUMBER_OF_SIMULATION_GRID_LEVELS = "number-of-simulation-grid-levels";


peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::
SpacetreeGridConfiguration():
_isValid(true),
_domainSize(0.0),
_domainOffset(0.0),
_verticesOnReferenceLevel(0),
_numberOfSimulationGridLevels(0){}



void peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::
parseSubtag(tarch::irr::io::IrrXMLReader* xmlReader){
  // get domain size and offset
  if ( xmlReader->getAttributeValue( DOMAIN_SIZE.c_str() ) != 0 ) {
    _domainSize = xmlReader->getAttributeValueAsDoubleVector<DIMENSIONS>(DOMAIN_SIZE.c_str());
    logDebug("parseSubtag()", DOMAIN_SIZE << ": " << _domainSize);
    for (int d = 0; d < DIMENSIONS; d++){
      assertion1(_domainSize(d) > 0.0, "Entry " << d << " of domain-size is not bigger than zero: " << _domainSize(d));
      if (_domainSize(d) <= 0.0){
        _isValid = false;
      }
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

  // get number of vertices
  if ( xmlReader->getAttributeValue(NUMBER_OF_VERTICES_ON_REFERENCE_LEVEL.c_str()) != 0 ){
    _verticesOnReferenceLevel = xmlReader->getAttributeValueAsIntVector<DIMENSIONS>(NUMBER_OF_VERTICES_ON_REFERENCE_LEVEL.c_str());
    for (int d = 0; d < DIMENSIONS; d++){
      assertion1(_verticesOnReferenceLevel(d) > 1, "Entry " << d << " of " << NUMBER_OF_VERTICES_ON_REFERENCE_LEVEL << " is smaller than 2!");
      if (_verticesOnReferenceLevel(d) < 2){
        _isValid = false;
      }
    }
  } else {
    logError("parseSubtag()", NUMBER_OF_VERTICES_ON_REFERENCE_LEVEL << " not specified!");
    assertion(false);
    _isValid = false;
  }

  // get number of simulation levels
  if ( xmlReader->getAttributeValue(NUMBER_OF_SIMULATION_GRID_LEVELS.c_str()) != 0){
    _numberOfSimulationGridLevels = xmlReader->getAttributeValueAsInt(NUMBER_OF_SIMULATION_GRID_LEVELS.c_str());
    if (_numberOfSimulationGridLevels < 1){
      logError("parseSubtag()", NUMBER_OF_SIMULATION_GRID_LEVELS << " is smaller than 1!");
      assertion(false);
      _isValid = false;
    }
  } else {
    logError("parseSubtag()", NUMBER_OF_SIMULATION_GRID_LEVELS << " not specified!");
    _isValid = false;
  }
}


bool peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::
isValid() const {
  return _isValid;
}

std::string peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::
toXMLString() const {
  return "";
}


tarch::la::Vector<DIMENSIONS,double>
peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::
getDomainSize() const {
  return _domainSize;
}


tarch::la::Vector<DIMENSIONS,double>
peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::
getDomainSizeForPeanoGrid() const {
  double maxDomainSize = 0.0;
  tarch::la::Vector<DIMENSIONS,double> domainSize(1.0);
  for (int d = 0; d < DIMENSIONS; d++){
    if (_domainSize(d) > maxDomainSize){
      maxDomainSize = _domainSize(d);
    }
  }
  domainSize = maxDomainSize*domainSize;
  return domainSize;
}


tarch::la::Vector<DIMENSIONS,double>
peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::
getDomainOffset() const {
  return _domainOffset;
}


int peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::
getReferenceLevel() const {
  // domain size
  double domainLength = getDomainSize()(0);

  int referenceLevel = 0;
  // determine minimal mesh size for reference level
  double dx = _domainSize(0)/_verticesOnReferenceLevel(0);
  for (int d = 1; d < DIMENSIONS; d++){
    double tmpDx = _domainSize(d)/_verticesOnReferenceLevel(d);
    if (tmpDx < dx){
      dx = tmpDx;
    }
  }
  // transfer dx to peano grid mesh size
  dx = dx * LB_BLOCKSIZE;
  // set reference level to the next finer level (or the exact level, if dx coincides with
  // a peano grid level mesh size. We add one level, as we need to embed our simulation domain
  // in a 3*domainLength cube.
  referenceLevel = 1 + (int)ceil( (log(domainLength) - log(dx))/log(3.0));

  return referenceLevel;
}


int peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::
getTotalNumberOfGridLevels() const {
  return (getReferenceLevel() + _numberOfSimulationGridLevels);
}
