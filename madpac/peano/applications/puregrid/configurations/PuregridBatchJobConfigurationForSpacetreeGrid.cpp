#include "peano/applications/puregrid/configurations/PuregridBatchJobConfigurationForSpacetreeGrid.h"
#include "peano/applications/puregrid/runners/PuregridBatchJobRunnerForSpacetreeGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"


registerTopLevelConfiguration( peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForSpacetreeGrid )


 
peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForSpacetreeGrid::PuregridBatchJobConfigurationForSpacetreeGrid():
  tarch::configuration::TopLevelConfiguration() {
}


peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForSpacetreeGrid::~PuregridBatchJobConfigurationForSpacetreeGrid() {
}


std::string peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForSpacetreeGrid::getTag() const {
  return "run-puregrid-on-spacetree-grid";
}

 
void peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForSpacetreeGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  // @todo Insert your code here
}

 
bool peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForSpacetreeGrid::isValid() const { 
  // @todo insert your code here
  return true;
}


void peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForSpacetreeGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForSpacetreeGrid. " << std::endl
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


tarch::configuration::TopLevelConfiguration* peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForSpacetreeGrid::clone() const { 
  return new peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForSpacetreeGrid();
}


int peano::applications::puregrid::configurations::PuregridBatchJobConfigurationForSpacetreeGrid::interpreteConfiguration() {
  peano::applications::puregrid::runners::PuregridBatchJobRunnerForSpacetreeGrid runner; 
  // @insert your code here 
  return runner.run(*this);
}
 
