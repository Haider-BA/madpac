#include "peano/applications/faxen/lbf/configurations/LBFBatchJobConfigurationForSpacetreeGrid.h"
#include "peano/applications/faxen/lbf/runners/LBFBatchJobRunnerForSpacetreeGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"


registerTopLevelConfiguration( peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForSpacetreeGrid )


 
peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForSpacetreeGrid::LBFBatchJobConfigurationForSpacetreeGrid():
  tarch::configuration::TopLevelConfiguration() {
}


peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForSpacetreeGrid::~LBFBatchJobConfigurationForSpacetreeGrid() {
}


std::string peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForSpacetreeGrid::getTag() const {
  return "run-lbandfaxen-on-spacetree-grid";
}

 
void peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForSpacetreeGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  // @todo Insert your code here
}

 
bool peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForSpacetreeGrid::isValid() const { 
  // @todo insert your code here
  return true;
}


void peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForSpacetreeGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForSpacetreeGrid. " << std::endl
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


tarch::configuration::TopLevelConfiguration* peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForSpacetreeGrid::clone() const { 
  return new peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForSpacetreeGrid();
}


int peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForSpacetreeGrid::interpreteConfiguration() {
  peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForSpacetreeGrid runner; 
  // @insert your code here 
  return runner.run(*this);
}
 
