#include "peano/applications/faxen/configurations/FaxenBatchJobConfigurationForSpacetreeGrid.h"
#include "peano/applications/faxen/runners/FaxenBatchJobRunnerForSpacetreeGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"


registerTopLevelConfiguration( peano::applications::faxen::configurations::FaxenBatchJobConfigurationForSpacetreeGrid )


 
peano::applications::faxen::configurations::FaxenBatchJobConfigurationForSpacetreeGrid::FaxenBatchJobConfigurationForSpacetreeGrid():
  tarch::configuration::TopLevelConfiguration() {
}


peano::applications::faxen::configurations::FaxenBatchJobConfigurationForSpacetreeGrid::~FaxenBatchJobConfigurationForSpacetreeGrid() {
}


std::string peano::applications::faxen::configurations::FaxenBatchJobConfigurationForSpacetreeGrid::getTag() const {
  return "run-faxen-on-spacetree-grid";
}

 
void peano::applications::faxen::configurations::FaxenBatchJobConfigurationForSpacetreeGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  // @todo Insert your code here
}

 
bool peano::applications::faxen::configurations::FaxenBatchJobConfigurationForSpacetreeGrid::isValid() const { 
  // @todo insert your code here
  return true;
}


void peano::applications::faxen::configurations::FaxenBatchJobConfigurationForSpacetreeGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::faxen::configurations::FaxenBatchJobConfigurationForSpacetreeGrid. " << std::endl
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


tarch::configuration::TopLevelConfiguration* peano::applications::faxen::configurations::FaxenBatchJobConfigurationForSpacetreeGrid::clone() const { 
  return new peano::applications::faxen::configurations::FaxenBatchJobConfigurationForSpacetreeGrid();
}


int peano::applications::faxen::configurations::FaxenBatchJobConfigurationForSpacetreeGrid::interpreteConfiguration() {
  peano::applications::faxen::runners::FaxenBatchJobRunnerForSpacetreeGrid runner; 
  // @insert your code here 
  return runner.run(*this);
}
 
