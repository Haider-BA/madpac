#include "peano/applications/poisson/multigrid/configurations/MultigridBatchJobConfigurationForSpacetreeGrid.h"
#include "peano/applications/poisson/multigrid/runners/MultigridBatchJobRunnerForSpacetreeGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"

#include "tarch/logging/Log.h"
#include "tarch/logging/CommandLineLogger.h"

registerTopLevelConfiguration( peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid )


 
peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid::MultigridBatchJobConfigurationForSpacetreeGrid():
  tarch::configuration::TopLevelConfiguration() {
}


peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid::~MultigridBatchJobConfigurationForSpacetreeGrid() {
}


std::string peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid::getTag() const {
  return "run-poissonmultigrid-on-spacetree-grid";
}

 
void peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  while(
    (xmlReader->getNodeType()!=tarch::irr::io::EXN_ELEMENT_END) &&
    (xmlReader->read() )
  ) {
    if ( xmlReader->getNodeType()==tarch::irr::io::EXN_ELEMENT ) {
      if ( xmlReader->getNodeName() == _logConfiguration.getTag() ) {
        _logConfiguration.parseSubtag(xmlReader);
      }
      // @todo Here, we can add configurations for further subtags
    }
  }

  if (
    (xmlReader->getNodeType()!=tarch::irr::io::EXN_ELEMENT_END) ||
    (xmlReader->getNodeName()!=getTag())
  ) {
   // @todo Plot an error message and make isValid() return false.
  }

}

 
bool peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid::isValid() const { 
  // @todo insert your code here
  return true;
}


void peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid. " << std::endl
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


tarch::configuration::TopLevelConfiguration* peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid::clone() const { 
  return new peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid();
}


int peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid::interpreteConfiguration() {
  peano::applications::poisson::multigrid::runners::MultigridBatchJobRunnerForSpacetreeGrid runner; 
  // @insert your code here 

  //tarch::logging::CommandLineLogger::getInstance().addFilterListEntry(tarch::logging::CommandLineLogger::FilterListEntry());

  return runner.run(*this);
}
 
tarch::logging::configurations::LogFilterConfiguration
 peano::applications::poisson::multigrid::configurations::MultigridBatchJobConfigurationForSpacetreeGrid::getLogConfiguration() const{
return _logConfiguration;
}
