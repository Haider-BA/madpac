#include "peano/applications/navierstokes/prototype1/configurations/PrototypeConfigurationForRegularGrid.h"
#include "peano/applications/navierstokes/prototype1/runners/PrototypeRunnerForRegularGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"
#include "peano/kernel/datatraversal/configurations/AutotuningConfiguration.h"

tarch::logging::Log peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::_log( "peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid" );


registerTopLevelConfiguration( peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid )


 
peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::PrototypeConfigurationForRegularGrid():
  tarch::configuration::TopLevelConfiguration(),
  _logConfiguration(),
  _regularGridConfiguration(),
  _isValid(true), 
  _numberOfTimesteps(0),
  _maximumLGSIterations(0),
  _plotVTKFiles(true)
  {
}


peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::~PrototypeConfigurationForRegularGrid() {
}


std::string peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::getTag() const {
  return "run-navierstokes-on-regular-grid";
}

void peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::parseAttributes( tarch::irr::io::IrrXMLReader* xmlReader ) {
  if ( xmlReader->getAttributeValue("number-of-timesteps")!=0 ) {
    _numberOfTimesteps = xmlReader->getAttributeValueAsInt("number-of-timesteps");
  }
  if ( xmlReader->getAttributeValue("maximum-lgs-iterations")!=0 ) {
    _maximumLGSIterations = xmlReader->getAttributeValueAsInt("maximum-lgs-iterations");
  }
  if ( xmlReader->getAttributeValue("plot-vtk-files")!=0 ) {
    _plotVTKFiles = xmlReader->getAttributeValueAsBool("plot-vtk-files");
  }
}
 
void peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {

  parseAttributes( xmlReader );

  while(
    (xmlReader->read() )
  ) {
    if ( xmlReader->getNodeType()==tarch::irr::io::EXN_ELEMENT ) {
      if ( xmlReader->getNodeName() == _logConfiguration.getTag() ) {
        _logConfiguration.parseSubtag(xmlReader);
      }
      if ( xmlReader->getNodeName() == _logFormatConfiguration.getTag() ) {
        _logFormatConfiguration.parseSubtag(xmlReader);
      }
      if ( xmlReader->getNodeName() == _regularGridConfiguration.getTag() ) {
        _regularGridConfiguration.parseSubtag(xmlReader);
      }
      if ( xmlReader->getNodeName() == _multicoreConfiguration.getTag() ) {
        _multicoreConfiguration.parseSubtag(xmlReader);
      }
      if ( xmlReader->getNodeName() == _autotuningConfiguration.getTag() ) {
        _autotuningConfiguration.parseSubtag(xmlReader);
      }
      if (xmlReader->getNodeName() == _builtinGeometryConfiguration.getTag()){
        _builtinGeometryConfiguration.parseSubtag(xmlReader);
      }
      //       @todo Here, we can add configurations for further subtags
    }
    else if (xmlReader->getNodeType()==tarch::irr::io::EXN_ELEMENT_END){
      if(xmlReader->getNodeName()==getTag()){
        break;
      } else {
        logError("parseSubtag()","incomplete subtag!? " << xmlReader->getNodeName());
        _isValid = false;
      }
    }
  }
}

 
bool peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::isValid() const { 
  bool valid = _isValid;

  if ( _numberOfTimesteps<=0 ) {
    logError( "parseSubtag(...)", "attribute \"number-of-timesteps\" is missing or has value smaller equal 0" );
    valid = false;
  }
  if ( _maximumLGSIterations<=0 ) {
    logError( "parseSubtag(...)", "attribute \"maximum-lgs-iterations\" is missing or has value smaller equal 0" );
    valid = false;
  }

  #if defined(SharedOMP) || defined(SharedTBB)
  valid &= _autotuningConfiguration.isValid();
  #endif

  return valid && _regularGridConfiguration.isValid() && _builtinGeometryConfiguration.isValid();
}


void peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid. " << std::endl
      << "  The xml tag has to contain the following attributes: " << std::endl
      << std::endl
      << "    | attribute name | semantics | allowed values " << std::endl
      << "    |                |           | " << std::endl
      << "    | number-of-timesteps | Number of timesteps to be performed | positive integer" << std::endl
      << "    | max-lgs-iterations  | Maximum number of Gauss-Seidel iterations that the solver can use | positive integer" << std::endl
      << "    | plot-vtk-files      | Indicates wether the results should be plotted to VTK-files | true or false (may be omitted)" << std::endl
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


tarch::configuration::TopLevelConfiguration* peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::clone() const { 
  return new peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid();
}


int peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::interpreteConfiguration() {
  peano::applications::navierstokes::prototype1::runners::PrototypeRunnerForRegularGrid runner;

  tarch::logging::CommandLineLogger::getInstance().clearFilterList();
  tarch::logging::CommandLineLogger::getInstance().addFilterListEntries(_logConfiguration.getFilterList());
  tarch::logging::CommandLineLogger::getInstance().setLogFormat( _logFormatConfiguration );

  int returnValue = runner.run(*this);

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().plotStatistics();

  return returnValue;
}


tarch::logging::configurations::LogFilterConfiguration peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::getLogConfiguration() const {
  return _logConfiguration;
}

peano::kernel::regulargrid::configurations::RegularGridConfiguration
peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::getRegularGridConfiguration() const
{
  return _regularGridConfiguration;
}

tarch::multicore::configurations::CoreConfiguration
peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::getMulticoreConfiguration() const
{
  assertionMsg(_multicoreConfiguration.isValid(), "No multicore configuration found!");
  return _multicoreConfiguration;
}

const peano::geometry::builtin::configurations::BuiltinGeometryConfiguration&
peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::getBuiltinGeometryConfiguration() const {
  return _builtinGeometryConfiguration;
}

const peano::kernel::datatraversal::configurations::AutotuningConfiguration&
peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::getAutotuningConfiguration() const {
	return _autotuningConfiguration;
}
 
int peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::getNumberOfTimesteps() const {
  return _numberOfTimesteps;
}

int peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::getMaximumLGSIterations() const {
  return _maximumLGSIterations;
}

bool peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid::plotVTKFiles() const {
  return _plotVTKFiles;
}
