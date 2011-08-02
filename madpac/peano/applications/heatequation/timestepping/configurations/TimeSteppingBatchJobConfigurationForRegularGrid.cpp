#include "peano/applications/heatequation/timestepping/configurations/TimeSteppingBatchJobConfigurationForRegularGrid.h"
#include "peano/applications/heatequation/timestepping/runners/TimeSteppingBatchJobRunnerForRegularGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"
#include "tarch/logging/CommandLineLogger.h"
#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"
#include "peano/kernel/datatraversal/autotuning/Oracle.h"


#ifdef SharedOMP
#include "tarch/multicore/openMP/Core.h"
#elif SharedTBB
#include "tarch/multicore/tbb/Core.h"
#endif


registerTopLevelConfiguration( peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid )


tarch::logging::Log peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid::_log( "peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid" );


 
peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid::TimeSteppingBatchJobConfigurationForRegularGrid() {
}


peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid::~TimeSteppingBatchJobConfigurationForRegularGrid() {
}


std::string peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid::getTag() const {
  return "run-heatEquationTimeStepping-on-regular-grid";
}


void peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid. " << std::endl
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
  _logFilterConfiguration.toXML(out);
  _rotatingHeatSourceConfiguration.toXML(out);
  _fadingSinusConfiguration.toXML(out);
  out << "</" << getTag() << ">" << std::endl;
}


tarch::configuration::TopLevelConfiguration* peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid::clone() const { 
  return new peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid();
}


void peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  _isValid = true;

  parseAttributes(xmlReader);

  while(
    (
      !(xmlReader->getNodeType()==tarch::irr::io::EXN_ELEMENT_END && xmlReader->getNodeName()==getTag())
    ) &&
    (xmlReader->read() )
  ) {
    if ( xmlReader->getNodeType()==tarch::irr::io::EXN_ELEMENT ) {
      if ( xmlReader->getNodeName() == _regularGridConfiguration.getTag() ) {
        _regularGridConfiguration.parseSubtag(xmlReader);
      }
      else if (!parseUnknownSubtags(xmlReader)) {
        logError("parseSubtag(...)", "invalid subtag <" << xmlReader->getNodeName() << ">" );
        _isValid = false;
      }
    }
  }

  if (!_regularGridConfiguration.isValid()) {
    logError( "parseSubtag(...)", "subtag " + _regularGridConfiguration.getTag() << " is invalid or missing" );
  }
  if (!_foundScenario ) {
    logError( "parseSubtag(...)", "missing or invalid experiment subtag. Add tag " << _rotatingHeatSourceConfiguration.getTag() << " or " << _fadingSinusConfiguration.getTag() );
  }
}


int peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid::interpreteConfiguration() {
  peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForRegularGrid runner; 

  tarch::logging::CommandLineLogger::getInstance().addFilterListEntries( _logFilterConfiguration.getFilterList() );
  tarch::logging::CommandLineLogger::getInstance().setLogFormat( _logFormatConfiguration );

  scenario::diffusionequation::DiffusionEquationScenario* scenario = 0;
  if (_rotatingHeatSourceConfiguration.isValid()) {
    scenario = _rotatingHeatSourceConfiguration.interpreteConfiguration();
  }
  if (_fadingSinusConfiguration.isValid()) {
    scenario = _fadingSinusConfiguration.interpreteConfiguration();
  }
  assertion( scenario!=0 );

  #ifdef SharedOMP
  tarch::multicore::openMP::Core::getInstance().configure( _coreConfiguration.getNumberOfThreads() );
  #elif SharedTBB
  tarch::multicore::tbb::Core::getInstance().configure( _coreConfiguration.getNumberOfThreads() );
  #endif

  scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().setScenario(scenario);

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setOracle(_autotuningConfiguration.interpreteConfiguration());

  int result = runner.run(*this);

  tarch::logging::CommandLineLogger::getInstance().clearFilterList();

  delete scenario;

  return result;
}


bool peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid::isValid() const {
  return _regularGridConfiguration.isValid() && AbstractTimeSteppingConfiguration::isValid();
}


peano::kernel::regulargrid::configurations::RegularGridConfiguration peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid::getRegularGridConfiguration() const {
  return _regularGridConfiguration;
}
