#include "peano/applications/navierstokes/prototype2/configurations/PrototypeConfigurationForRegularGrid.h"
#include "peano/applications/navierstokes/prototype2/runners/PrototypeRunnerForRegularGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"


registerTopLevelConfiguration( peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForRegularGrid )


 
peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForRegularGrid::PrototypeConfigurationForRegularGrid():
  tarch::configuration::TopLevelConfiguration() {
}


peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForRegularGrid::~PrototypeConfigurationForRegularGrid() {
}


std::string peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForRegularGrid::getTag() const {
  return "run-navierstokes-on-regular-grid";
}

 
void peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForRegularGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  // @todo Insert your code here
}

 
bool peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForRegularGrid::isValid() const { 
  // @todo insert your code here
  return true;
}


void peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForRegularGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForRegularGrid. " << std::endl
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


tarch::configuration::TopLevelConfiguration* peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForRegularGrid::clone() const { 
  return new peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForRegularGrid();
}


int peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForRegularGrid::interpreteConfiguration() {
  peano::applications::navierstokes::prototype2::runners::PrototypeRunnerForRegularGrid runner; 
  // @insert your code here 
  return runner.run(*this);
}
 
