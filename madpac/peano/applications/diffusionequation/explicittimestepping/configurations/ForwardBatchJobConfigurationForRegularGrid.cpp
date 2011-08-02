#include "peano/applications/diffusionequation/explicittimestepping/configurations/ForwardBatchJobConfigurationForRegularGrid.h"
#include "peano/applications/diffusionequation/explicittimestepping/runners/ForwardBatchJobRunnerForRegularGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"
#include "tarch/logging/CommandLineLogger.h"
#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"
#include "peano/kernel/datatraversal/autotuning/Oracle.h"

#include "tarch/logging/CommandLineLogger.h"


#if defined(SharedOMP)
#include "tarch/multicore/openMP/Core.h"
#elif defined(SharedTBB)
#include "tarch/multicore/tbb/Core.h"
#endif


registerTopLevelConfiguration( peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid )


 
tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid::_log( "peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid" );


peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid::ForwardBatchJobConfigurationForRegularGrid() {
}


peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid::~ForwardBatchJobConfigurationForRegularGrid() {
}


std::string peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid::getTag() const {
  return "run-diffusionEquationExplicitTimeStepping-on-regular-grid";
}

 
void peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
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

 
bool peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid::isValid() const {
  return _regularGridConfiguration.isValid() && AbstractTimeSteppingConfiguration::isValid();
}


void peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid::toXML(std::ostream& out) const {
  out << "<" << getTag() << ">" << std::endl;

  AbstractTimeSteppingConfiguration::subtagsToXML(out);

  _regularGridConfiguration.toXML(out);

  out << "</" << getTag() << ">" << std::endl;
}


tarch::configuration::TopLevelConfiguration* peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid::clone() const {
  return new peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid();
}


peano::kernel::regulargrid::configurations::RegularGridConfiguration peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid::getRegularGridConfiguration() const {
  return _regularGridConfiguration;
}


int peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid::interpreteConfiguration() {
  assertion( isValid() );

  peano::applications::diffusionequation::explicittimestepping::runners::ForwardBatchJobRunnerForRegularGrid runner;

  tarch::logging::CommandLineLogger::getInstance().clearFilterList();
  tarch::logging::CommandLineLogger::getInstance().addFilterListEntries( _logFilterConfiguration.getFilterList() );

  tarch::logging::CommandLineLogger::getInstance().setLogFormat( _logFormatConfiguration );

  scenario::diffusionequation::DiffusionEquationScenario* scenario = createScenario();
  assertion( scenario!=0 );
  scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().setScenario(scenario);

  #ifdef SharedOMP
  tarch::multicore::openMP::Core::getInstance().configure( _coreConfiguration.getNumberOfThreads() );
  #elif SharedTBB
  tarch::multicore::tbb::Core::getInstance().configure( _coreConfiguration.getNumberOfThreads() );
  #endif

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setOracle(_autotuningConfiguration.interpreteConfiguration());

  int result = runner.run(*this);

  delete scenario;

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().plotStatistics();

  return result;
}
 
