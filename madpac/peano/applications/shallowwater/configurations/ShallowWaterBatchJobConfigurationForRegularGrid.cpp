#include "peano/applications/shallowwater/configurations/ShallowWaterBatchJobConfigurationForRegularGrid.h"
#include "peano/applications/shallowwater/runners/ShallowWaterBatchJobRunnerForRegularGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"
#include "tarch/Assertions.h"

#include "scenario/shallowwater/defaultsimulation/configuration/Configuration.h"


registerTopLevelConfiguration( peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid )


tarch::logging::Log peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid::_log( "peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid" );


 
peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid::ShallowWaterBatchJobConfigurationForRegularGrid():
  tarch::configuration::TopLevelConfiguration(),
  _scenarioConfiguration(0) {
}


peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid::~ShallowWaterBatchJobConfigurationForRegularGrid() {
  if (_scenarioConfiguration != 0) {
    delete _scenarioConfiguration;
  }
}


std::string peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid::getTag() const {
  return "run-shallowwater-on-regular-grid";
}

 
void peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  _isValid = true;

  while(
    (xmlReader->getNodeType()!=tarch::irr::io::EXN_ELEMENT_END) &&
    (xmlReader->read() )
  ) {
    if ( xmlReader->getNodeType()==tarch::irr::io::EXN_ELEMENT ) {
      if ( xmlReader->getNodeName() == _logConfiguration.getTag() ) {
        _logConfiguration.parseSubtag(xmlReader);
      }
      if ( xmlReader->getNodeName() == _logFormatConfiguration.getTag() ) {
        _logFormatConfiguration.parseSubtag(xmlReader);
      }
      #if defined(SharedTBB)
      if ( xmlReader->getNodeName() == _coreConfiguration.getTag() ) {
       _coreConfiguration.parseSubtag(xmlReader);
      }
      #endif
      if ( xmlReader->getNodeName() == scenario::shallowwater::defaultsimulation::configuration::Configuration::Tag() ) {
        if( _scenarioConfiguration != 0) {
          logError( "parseSubtag(...)", "multiple scenarios defined. Specify only one ");
          _isValid = false;
          return;
        }
        _scenarioConfiguration = new scenario::shallowwater::defaultsimulation::configuration::Configuration();
        _scenarioConfiguration -> parseSubtag(xmlReader);
      }
    }
  }

  if (
    (xmlReader->getNodeType()!=tarch::irr::io::EXN_ELEMENT_END) ||
    (xmlReader->getNodeName()!=getTag())
  ) {
    _log.error(
      "parseSubtag(...)",
      "expected closing tag for " + getTag() +
      ", but received tag <" + xmlReader->getNodeName() + ">"
    );
    _isValid = false;
  }

  if (_scenarioConfiguration==0) {
    logError( "parseSubtag(...)", "no experiment scenario specified. See template xml file for options" );
  }
}

 
bool peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid::isValid() const {
  return _isValid
    && _scenarioConfiguration != 0
    && _scenarioConfiguration -> isValid()
    && _logConfiguration.isValid()
    && _logFormatConfiguration.isValid()
    #if defined(SharedTBB)
    && _coreConfiguration.isValid()
    #endif
    ;
}


void peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid. " << std::endl
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
  _logConfiguration.toXML(out);
  _logFormatConfiguration.toXML(out);
  #if defined(SharedTBB)
  _coreConfiguration.toXML(out);
  #endif
  out << "  <!-- here, there's one scenario to be specified -->" << std::endl;
  if (_scenarioConfiguration!=0) {
  _scenarioConfiguration->toXML(out);
  }
  out << "</" << getTag() << ">" << std::endl;
}


tarch::configuration::TopLevelConfiguration* peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid::clone() const { 
  return new peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid();
}

tarch::logging::configurations::LogFilterConfiguration       peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid::getLogConfiguration() const {
  assertion( isValid() );
  return _logConfiguration;
}


tarch::logging::configurations::LogOutputFormatConfiguration peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid::getLogFormatConfiguration() const {
  assertion( isValid() );
  return _logFormatConfiguration;
}

#if defined(SharedTBB)
tarch::multicore::configurations::CoreConfiguration          peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid::getCoreConfiguration() const {
  assertion( isValid() );
  return _coreConfiguration;
}
#endif

int peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid::interpreteConfiguration() {
  peano::applications::shallowwater::runners::ShallowWaterBatchJobRunnerForRegularGrid runner; 
  // @insert your code here 
  return runner.run(*this);
}

scenario::shallowwater::configuration::ShallowWaterScenarioConfiguration& peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid::getShallowWaterScenario() const {
  assertion ( _isValid );
  return *_scenarioConfiguration;
}
 
