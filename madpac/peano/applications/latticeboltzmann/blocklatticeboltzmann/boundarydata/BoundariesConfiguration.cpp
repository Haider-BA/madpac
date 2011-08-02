#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/configurations/BoundariesConfiguration.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundariesConfiguration::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundariesConfiguration"
);


const std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundariesConfiguration::TAG = "boundaries";


peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundariesConfiguration::
~BoundariesConfiguration() {
  for (unsigned int i = 0; i < _boundaryConfigurations.size(); i++){
    if (_boundaryConfigurations[i] != NULL){
      delete &(*_boundaryConfigurations[i]);
      _boundaryConfigurations[i] = NULL;
    }
  }
  _boundaryConfigurations.clear();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundariesConfiguration::
parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader){
  while (xmlReader->read()){
    if ( xmlReader->getNodeType()== tarch::irr::io::EXN_ELEMENT ) {

      // collision model configurations
      if (xmlReader->getNodeName() == peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::PlaneBoundaryConfiguration::TAG){
        logInfo("parseSubtag()", "Parse "<< peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::PlaneBoundaryConfiguration::TAG);
        _boundaryConfigurations.push_back(new peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::PlaneBoundaryConfiguration());
        _boundaryConfigurations[_boundaryConfigurations.size()-1]->parseSubtag(xmlReader);
      } else {
        logError("parseSubtag()", "Unknown Subtag " << xmlReader->getNodeName() << " in config");
        assertion(false);
      }
    } else if ( xmlReader->getNodeType()== tarch::irr::io::EXN_ELEMENT_END ) {
      if ( TAG == xmlReader->getNodeName() ) {
        return;
      }
    }
  }

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundaryConfiguration&
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundariesConfiguration::
getBoundaryConfiguration(unsigned int i) const {
  assertion(i < _boundaryConfigurations.size());
  return *_boundaryConfigurations[i];
}

unsigned int peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundariesConfiguration::
getNumberOfBoundaryConfigurations() const {
  return _boundaryConfigurations.size();
}
