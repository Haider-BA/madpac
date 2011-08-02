#include "peano/applications/poisson/vhhjacobi/configurations/JacobiBatchJobConfigurationForRegularGrid.h"
#include "peano/applications/poisson/vhhjacobi/runners/JacobiBatchJobRunnerForRegularGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"

#include "tarch/logging/CommandLineLogger.h"


registerTopLevelConfiguration( peano::applications::poisson::vhhjacobi::configurations::JacobiBatchJobConfigurationForRegularGrid )


 
peano::applications::poisson::vhhjacobi::configurations::JacobiBatchJobConfigurationForRegularGrid::JacobiBatchJobConfigurationForRegularGrid():
  tarch::configuration::TopLevelConfiguration() {
}


peano::applications::poisson::vhhjacobi::configurations::JacobiBatchJobConfigurationForRegularGrid::~JacobiBatchJobConfigurationForRegularGrid() {
}


std::string peano::applications::poisson::vhhjacobi::configurations::JacobiBatchJobConfigurationForRegularGrid::getTag() const {
  return "run-vhhjacobi-on-regular-grid";
}

 
void peano::applications::poisson::vhhjacobi::configurations::JacobiBatchJobConfigurationForRegularGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {

  while(
    (
      !(xmlReader->getNodeType()==tarch::irr::io::EXN_ELEMENT_END && xmlReader->getNodeName()==getTag())
    ) &&
    (xmlReader->read() )
  ) {
    if ( xmlReader->getNodeType()==tarch::irr::io::EXN_ELEMENT ) {
      if ( xmlReader->getNodeName() == _logFilterConfiguration.getTag() ) {
        _logFilterConfiguration.parseSubtag(xmlReader);
      }
    }
  }


}

 
bool peano::applications::poisson::vhhjacobi::configurations::JacobiBatchJobConfigurationForRegularGrid::isValid() const { 
  return _logFilterConfiguration.isValid();
}


void peano::applications::poisson::vhhjacobi::configurations::JacobiBatchJobConfigurationForRegularGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::poisson::vhhjacobi::configurations::JacobiBatchJobConfigurationForRegularGrid. " << std::endl
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


tarch::configuration::TopLevelConfiguration* peano::applications::poisson::vhhjacobi::configurations::JacobiBatchJobConfigurationForRegularGrid::clone() const { 
  return new peano::applications::poisson::vhhjacobi::configurations::JacobiBatchJobConfigurationForRegularGrid();
}


int peano::applications::poisson::vhhjacobi::configurations::JacobiBatchJobConfigurationForRegularGrid::interpreteConfiguration() {
  peano::applications::poisson::vhhjacobi::runners::JacobiBatchJobRunnerForRegularGrid runner;

  tarch::logging::CommandLineLogger::getInstance().clearFilterList();
  tarch::logging::CommandLineLogger::getInstance().addFilterListEntries( _logFilterConfiguration.getFilterList() );

  int result = runner.run(*this);

  tarch::logging::CommandLineLogger::getInstance().clearFilterList();
  return result;
}
 
