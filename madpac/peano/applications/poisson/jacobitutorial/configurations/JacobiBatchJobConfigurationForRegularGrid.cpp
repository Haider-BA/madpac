#include "peano/applications/poisson/jacobitutorial/configurations/JacobiBatchJobConfigurationForRegularGrid.h"
#include "peano/applications/poisson/jacobitutorial/runners/JacobiBatchJobRunnerForRegularGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"


registerTopLevelConfiguration( peano::applications::poisson::jacobitutorial::configurations::JacobiBatchJobConfigurationForRegularGrid )


 
peano::applications::poisson::jacobitutorial::configurations::JacobiBatchJobConfigurationForRegularGrid::JacobiBatchJobConfigurationForRegularGrid():
  tarch::configuration::TopLevelConfiguration() {
}


peano::applications::poisson::jacobitutorial::configurations::JacobiBatchJobConfigurationForRegularGrid::~JacobiBatchJobConfigurationForRegularGrid() {
}


std::string peano::applications::poisson::jacobitutorial::configurations::JacobiBatchJobConfigurationForRegularGrid::getTag() const {
  return "run-jacobitutorial-on-regular-grid";
}

 
void peano::applications::poisson::jacobitutorial::configurations::JacobiBatchJobConfigurationForRegularGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  // @todo Insert your code here
}

 
bool peano::applications::poisson::jacobitutorial::configurations::JacobiBatchJobConfigurationForRegularGrid::isValid() const { 
  // @todo insert your code here
  return true;
}


void peano::applications::poisson::jacobitutorial::configurations::JacobiBatchJobConfigurationForRegularGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::poisson::jacobitutorial::configurations::JacobiBatchJobConfigurationForRegularGrid. " << std::endl
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


tarch::configuration::TopLevelConfiguration* peano::applications::poisson::jacobitutorial::configurations::JacobiBatchJobConfigurationForRegularGrid::clone() const { 
  return new peano::applications::poisson::jacobitutorial::configurations::JacobiBatchJobConfigurationForRegularGrid();
}


int peano::applications::poisson::jacobitutorial::configurations::JacobiBatchJobConfigurationForRegularGrid::interpreteConfiguration() {
  peano::applications::poisson::jacobitutorial::runners::JacobiBatchJobRunnerForRegularGrid runner; 
  // @insert your code here 
  return runner.run(*this);
}
 
