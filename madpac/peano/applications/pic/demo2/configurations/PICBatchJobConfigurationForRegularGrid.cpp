#include "peano/applications/pic/demo2/configurations/PICBatchJobConfigurationForRegularGrid.h"
#include "peano/applications/pic/demo2/runners/PICBatchJobRunnerForRegularGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"

#include "tarch/logging/CommandLineLogger.h"


registerTopLevelConfiguration( peano::applications::pic::demo2::configurations::PICBatchJobConfigurationForRegularGrid )


 
peano::applications::pic::demo2::configurations::PICBatchJobConfigurationForRegularGrid::PICBatchJobConfigurationForRegularGrid():
  tarch::configuration::TopLevelConfiguration() {
}


peano::applications::pic::demo2::configurations::PICBatchJobConfigurationForRegularGrid::~PICBatchJobConfigurationForRegularGrid() {
}


std::string peano::applications::pic::demo2::configurations::PICBatchJobConfigurationForRegularGrid::getTag() const {
  return "run-picdemo2-on-regular-grid";
}

 
void peano::applications::pic::demo2::configurations::PICBatchJobConfigurationForRegularGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  // @todo Insert your code here
}

 
bool peano::applications::pic::demo2::configurations::PICBatchJobConfigurationForRegularGrid::isValid() const { 
  // @todo insert your code here
  return true;
}


void peano::applications::pic::demo2::configurations::PICBatchJobConfigurationForRegularGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::pic::demo2::configurations::PICBatchJobConfigurationForRegularGrid. " << std::endl
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


tarch::configuration::TopLevelConfiguration* peano::applications::pic::demo2::configurations::PICBatchJobConfigurationForRegularGrid::clone() const { 
  return new peano::applications::pic::demo2::configurations::PICBatchJobConfigurationForRegularGrid();
}


int peano::applications::pic::demo2::configurations::PICBatchJobConfigurationForRegularGrid::interpreteConfiguration() {
  peano::applications::pic::demo2::runners::PICBatchJobRunnerForRegularGrid runner; 


  tarch::logging::CommandLineLogger::getInstance().addFilterListEntry(tarch::logging::CommandLineLogger::FilterListEntry());

  // @insert your code here

  int result = runner.run(*this);

  tarch::logging::CommandLineLogger::getInstance().clearFilterList();
  return result;
}
 
