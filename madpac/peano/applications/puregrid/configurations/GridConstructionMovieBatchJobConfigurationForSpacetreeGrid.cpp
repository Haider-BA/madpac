#include "peano/applications/puregrid/configurations/GridConstructionMovieBatchJobConfigurationForSpacetreeGrid.h"
#include "peano/applications/puregrid/runners/GridConstructionMovieBatchJobRunnerForSpacetreeGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"


registerTopLevelConfiguration( peano::applications::puregrid::configurations::GridConstructionMovieBatchJobConfigurationForSpacetreeGrid )


 
peano::applications::puregrid::configurations::GridConstructionMovieBatchJobConfigurationForSpacetreeGrid::GridConstructionMovieBatchJobConfigurationForSpacetreeGrid():
  tarch::configuration::TopLevelConfiguration() {
}


peano::applications::puregrid::configurations::GridConstructionMovieBatchJobConfigurationForSpacetreeGrid::~GridConstructionMovieBatchJobConfigurationForSpacetreeGrid() {
}


std::string peano::applications::puregrid::configurations::GridConstructionMovieBatchJobConfigurationForSpacetreeGrid::getTag() const {
  return "run-gridConstructionMovie-on-spacetree-grid";
}

 
void peano::applications::puregrid::configurations::GridConstructionMovieBatchJobConfigurationForSpacetreeGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  // @todo Insert your code here
}

 
bool peano::applications::puregrid::configurations::GridConstructionMovieBatchJobConfigurationForSpacetreeGrid::isValid() const { 
  // @todo insert your code here
  return true;
}


void peano::applications::puregrid::configurations::GridConstructionMovieBatchJobConfigurationForSpacetreeGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::puregrid::configurations::GridConstructionMovieBatchJobConfigurationForSpacetreeGrid. " << std::endl
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


tarch::configuration::TopLevelConfiguration* peano::applications::puregrid::configurations::GridConstructionMovieBatchJobConfigurationForSpacetreeGrid::clone() const { 
  return new peano::applications::puregrid::configurations::GridConstructionMovieBatchJobConfigurationForSpacetreeGrid();
}


int peano::applications::puregrid::configurations::GridConstructionMovieBatchJobConfigurationForSpacetreeGrid::interpreteConfiguration() {
  peano::applications::puregrid::runners::GridConstructionMovieBatchJobRunnerForSpacetreeGrid runner; 
  // @insert your code here 
  return runner.run(*this);
}
 
