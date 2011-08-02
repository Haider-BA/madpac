#include "peano/applications/latticeboltzmann/configurations/AdaptiveLatticeBoltzmannCollisionModelConfiguration.h"


const std::string peano::applications::latticeboltzmann::configurations::AdaptiveLatticeBoltzmannCollisionModelConfiguration::MINIMAL_MESHSIZE="hMin";
const std::string peano::applications::latticeboltzmann::configurations::AdaptiveLatticeBoltzmannCollisionModelConfiguration::MAXIMAL_MESHSIZE="hMax";


tarch::logging::Log
peano::applications::latticeboltzmann::configurations::
AdaptiveLatticeBoltzmannCollisionModelConfiguration::_log(
  "peano::applications::latticeboltzmann::configurations::AdaptiveLatticeBoltzmannCollisionModelConfiguration"
);


peano::applications::latticeboltzmann::configurations::
AdaptiveLatticeBoltzmannCollisionModelConfiguration::
AdaptiveLatticeBoltzmannCollisionModelConfiguration():
peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration(),
_hMin(0.0),_hMax(0.0),_isDefinedHMin(false),_isDefinedHMax(false)
{}


peano::applications::latticeboltzmann::configurations::
AdaptiveLatticeBoltzmannCollisionModelConfiguration::
~AdaptiveLatticeBoltzmannCollisionModelConfiguration(){}


void peano::applications::latticeboltzmann::configurations::
AdaptiveLatticeBoltzmannCollisionModelConfiguration::parseSubtag(
tarch::irr::io::IrrXMLReader* xmlReader){

	// read collision model parameters
	peano::applications::latticeboltzmann::configurations::
	LatticeBoltzmannCollisionModelConfiguration::handleSubtag(xmlReader);

	// read in minimal and maximal meshsizes
	if (xmlReader->getAttributeValue(MINIMAL_MESHSIZE.c_str()) == 0){
		_log.error("parseSubtag()", "meshsize 'hMin' cannot be read!");
		peano::applications::latticeboltzmann::configurations::
		LatticeBoltzmannCollisionModelConfiguration::_isValid = false;
		assertion(false);
	} else {
		_hMin = xmlReader->getAttributeValueAsFloat(MINIMAL_MESHSIZE.c_str());
		_isDefinedHMin = true;
	}
	if (xmlReader->getAttributeValue(MAXIMAL_MESHSIZE.c_str()) == 0){
		_log.error("parseSubtag()", "meshsize 'hMax' cannot be read!");
		peano::applications::latticeboltzmann::configurations::
		LatticeBoltzmannCollisionModelConfiguration::_isValid = false;
		assertion(false);
	} else {
		_hMax = xmlReader->getAttributeValueAsFloat(MAXIMAL_MESHSIZE.c_str());
		_isDefinedHMax = true;
	}


	// set isValid -flag
	peano::applications::latticeboltzmann::configurations::
	LatticeBoltzmannCollisionModelConfiguration::_isValid =
	  peano::applications::latticeboltzmann::configurations::
	  LatticeBoltzmannCollisionModelConfiguration::_isValid & _isDefinedHMin & _isDefinedHMax;

	// check that meshsizes span a range
	if (tarch::la::equals(_hMin,_hMax)){
		_log.error("parseSubtag()", "hMin = hMax");
		peano::applications::latticeboltzmann::configurations::
		LatticeBoltzmannCollisionModelConfiguration::_isValid = false;
		assertion(false);
	}
	if (_hMin > _hMax){
		_log.error("parseSubtag()", "hMin > hMax");
		peano::applications::latticeboltzmann::configurations::
		LatticeBoltzmannCollisionModelConfiguration::_isValid = false;
		assertion(false);
	}
	if ( (_hMin <= 0.0) || (_hMax <= 0.0)){
		_log.error("parseSubtag()", "a non-positive meshsize occurred!");
		peano::applications::latticeboltzmann::configurations::
		LatticeBoltzmannCollisionModelConfiguration::_isValid = false;
		assertion(false);
	}

	if (peano::applications::latticeboltzmann::configurations::
	    LatticeBoltzmannCollisionModelConfiguration::_isValid){
		logDebug("parseSubtag()", "'hMin'=" << _hMin);
		logDebug("parseSubtag()", "'hMax'=" << _hMax);
	}
}



double peano::applications::latticeboltzmann::configurations::AdaptiveLatticeBoltzmannCollisionModelConfiguration::getHMin() const {
	return _hMin;
}


double peano::applications::latticeboltzmann::configurations::AdaptiveLatticeBoltzmannCollisionModelConfiguration::getHMax() const {
	return _hMax;
}
