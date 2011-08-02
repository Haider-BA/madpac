#include "peano/applications/pic/demo/configurations/PICBatchJobConfigurationForSpacetreeGrid.h"
#include "peano/applications/pic/demo/runners/PICBatchJobRunnerForSpacetreeGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"

#include "tarch/logging/CommandLineLogger.h"


registerTopLevelConfiguration( peano::applications::pic::demo::configurations::PICBatchJobConfigurationForSpacetreeGrid )


 
peano::applications::pic::demo::configurations::PICBatchJobConfigurationForSpacetreeGrid::PICBatchJobConfigurationForSpacetreeGrid():
  tarch::configuration::TopLevelConfiguration() {
}


peano::applications::pic::demo::configurations::PICBatchJobConfigurationForSpacetreeGrid::~PICBatchJobConfigurationForSpacetreeGrid() {
}


std::string peano::applications::pic::demo::configurations::PICBatchJobConfigurationForSpacetreeGrid::getTag() const {
  return "run-picdemo-on-spacetree-grid";
}

 
void peano::applications::pic::demo::configurations::PICBatchJobConfigurationForSpacetreeGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  // @todo Insert your code here
}

 
bool peano::applications::pic::demo::configurations::PICBatchJobConfigurationForSpacetreeGrid::isValid() const { 
  // @todo insert your code here
  return true;
}


void peano::applications::pic::demo::configurations::PICBatchJobConfigurationForSpacetreeGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::pic::demo::configurations::PICBatchJobConfigurationForSpacetreeGrid. " << std::endl
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


tarch::configuration::TopLevelConfiguration* peano::applications::pic::demo::configurations::PICBatchJobConfigurationForSpacetreeGrid::clone() const { 
  return new peano::applications::pic::demo::configurations::PICBatchJobConfigurationForSpacetreeGrid();
}


int peano::applications::pic::demo::configurations::PICBatchJobConfigurationForSpacetreeGrid::interpreteConfiguration() {
  peano::applications::pic::demo::runners::PICBatchJobRunnerForSpacetreeGrid runner; 


  tarch::logging::CommandLineLogger::getInstance().addFilterListEntry(tarch::logging::CommandLineLogger::FilterListEntry());

  // @insert your code here

  int result = runner.run(*this);

  tarch::logging::CommandLineLogger::getInstance().clearFilterList();
  return result;
}
 
