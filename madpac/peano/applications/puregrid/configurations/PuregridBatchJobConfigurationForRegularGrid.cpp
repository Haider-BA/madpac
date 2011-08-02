#include "peano/applications/puregrid/configurations/PuregridBatchJobConfigurationForRegularGrid.h"
#include "peano/applications/puregrid/runners/PuregridBatchJobRunnerForRegularGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"


registerTopLevelConfiguration( peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForRegularGrid )


 
peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForRegularGrid::PuregridBatchJobConfigurationForRegularGrid():
  tarch::configuration::TopLevelConfiguration() {
}


peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForRegularGrid::~PuregridBatchJobConfigurationForRegularGrid() {
}


std::string peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForRegularGrid::getTag() const {
  return "run-puregrid-on-regular-grid";
}

 
void peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForRegularGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  while(
    (xmlReader->getNodeType()!=tarch::irr::io::EXN_ELEMENT_END) &&
    (xmlReader->read() )
  ) {
    if ( xmlReader->getNodeType()==tarch::irr::io::EXN_ELEMENT ) {
      if ( xmlReader->getNodeName() == _logFilterConfiguration.getTag() ) {
        _logFilterConfiguration.parseSubtag(xmlReader);
      }
    }
  }
}

 
bool peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForRegularGrid::isValid() const { 
  // @todo insert your code here
  return _logFilterConfiguration.isValid();
}


void peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForRegularGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForRegularGrid. " << std::endl
      << "  The xml tag has to contain the following attributes: " << std::endl
      << std::endl
      << "    | attribute name | semantics | allowed values " << std::endl
      << "    |                |           | " << std::endl
      << std::endl
      << "  The xml tag has to contain the following subtags: " << std::endl
      << "    - tag 1 (dummy)" << std::endl
      << "    - tag 2 (dummy)" << std::endl 
      << "  -->" << std::endl;
  if ( isValid() ) {
    out << "<" << getTag() << "@todo insert your attributes here >" << std::endl;
  }
  else {
    out << "<" << getTag() << "@todo insert your dummy-attributes here >" << std::endl;
  }
  _logFilterConfiguration.toXML(out);
  // @todo insert your subtags here, i.e. call toXMLString() for them
  out << "</" << getTag() << ">" << std::endl;
}


tarch::configuration::TopLevelConfiguration* peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForRegularGrid::clone() const { 
  return new peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForRegularGrid();
}



tarch::logging::configurations::LogFilterConfiguration peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForRegularGrid::getLogConfiguration() const {
  return _logFilterConfiguration;
}


int peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForRegularGrid::interpreteConfiguration() {
  peano::applications::puregrid::runners::PuregridBatchJobRunnerForRegularGrid runner; 
  // @insert your code here 
  return runner.run(*this);
}
 
