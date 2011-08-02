#include "peano/applications/faxen/configurations/FaxenBatchJobConfigurationForRegularGrid.h"
#include "peano/applications/faxen/runners/FaxenBatchJobRunnerForRegularGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"


registerTopLevelConfiguration( peano::applications::faxen::configurations::FaxenBatchJobConfigurationForRegularGrid )


 
peano::applications::faxen::configurations::FaxenBatchJobConfigurationForRegularGrid::FaxenBatchJobConfigurationForRegularGrid():
  tarch::configuration::TopLevelConfiguration() {
}


peano::applications::faxen::configurations::FaxenBatchJobConfigurationForRegularGrid::~FaxenBatchJobConfigurationForRegularGrid() {
}


std::string peano::applications::faxen::configurations::FaxenBatchJobConfigurationForRegularGrid::getTag() const {
  return "run-faxen-on-regular-grid";
}

 
void peano::applications::faxen::configurations::FaxenBatchJobConfigurationForRegularGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  // @todo Insert your code here
}

 
bool peano::applications::faxen::configurations::FaxenBatchJobConfigurationForRegularGrid::isValid() const { 
  // @todo insert your code here
  return true;
}


void peano::applications::faxen::configurations::FaxenBatchJobConfigurationForRegularGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::faxen::configurations::FaxenBatchJobConfigurationForRegularGrid. " << std::endl
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
  // @todo insert your subtags here, i.e. call toXMLString() for them
  out << "</" << getTag() << ">" << std::endl;
}


tarch::configuration::TopLevelConfiguration* peano::applications::faxen::configurations::FaxenBatchJobConfigurationForRegularGrid::clone() const { 
  return new peano::applications::faxen::configurations::FaxenBatchJobConfigurationForRegularGrid();
}


int peano::applications::faxen::configurations::FaxenBatchJobConfigurationForRegularGrid::interpreteConfiguration() {
  peano::applications::faxen::runners::FaxenBatchJobRunnerForRegularGrid runner; 
  // @insert your code here 
  return runner.run(*this);
}
 
