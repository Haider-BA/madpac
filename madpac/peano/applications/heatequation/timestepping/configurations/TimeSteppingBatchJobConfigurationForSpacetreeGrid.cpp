#include "peano/applications/heatequation/timestepping/configurations/TimeSteppingBatchJobConfigurationForSpacetreeGrid.h"
#include "peano/applications/heatequation/timestepping/runners/TimeSteppingBatchJobRunnerForSpacetreeGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"
#include "tarch/logging/CommandLineLogger.h"
#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"
#include "peano/kernel/datatraversal/autotuning/Oracle.h"


#ifdef SharedOMP
#include "tarch/multicore/openMP/Core.h"
#elif SharedTBB
#include "tarch/multicore/tbb/Core.h"
#endif


registerTopLevelConfiguration( peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid )


tarch::logging::Log peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::_log( "peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid" );

 
peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::TimeSteppingBatchJobConfigurationForSpacetreeGrid():
  _minimalMeshSize(0.0),
  _maximalMeshSize(0.0),
  _numberOfPreSmoothingSteps(-1),
  _numberOfPostSmoothingSteps(-1),
  _refinementPercentage(-1.0),
  _deletePercentage(-1.0) {
}


peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::~TimeSteppingBatchJobConfigurationForSpacetreeGrid() {
}


std::string peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::getTag() const {
  return "run-heatEquationTimeStepping-on-spacetree-grid";
}

 
void peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  _isValid = true;

  parseAttributes(xmlReader);

  if ( xmlReader->getAttributeValue("minimal-mesh-size")!=0 ) {
    _minimalMeshSize = xmlReader->getAttributeValueAsDouble("minimal-mesh-size");
  }
  if ( xmlReader->getAttributeValue("maximal-mesh-size")!=0 ) {
    _maximalMeshSize = xmlReader->getAttributeValueAsDouble( "maximal-mesh-size");
  }

  if ( xmlReader->getAttributeValue("pre-smoothing-steps")!=0 ) {
    _numberOfPreSmoothingSteps = xmlReader->getAttributeValueAsDouble( "pre-smoothing-steps");
  }
  if ( xmlReader->getAttributeValue("post-smoothing-steps")!=0 ) {
    _numberOfPostSmoothingSteps = xmlReader->getAttributeValueAsDouble( "post-smoothing-steps");
  }

  if ( xmlReader->getAttributeValue("refine-percentage")!=0 ) {
    _refinementPercentage = xmlReader->getAttributeValueAsDouble( "refine-percentage");
  }
  if ( xmlReader->getAttributeValue("delete-percentage")!=0 ) {
    _deletePercentage = xmlReader->getAttributeValueAsDouble( "delete-percentage");
  }

  while(
    (
      !(xmlReader->getNodeType()==tarch::irr::io::EXN_ELEMENT_END && xmlReader->getNodeName()==getTag())
    ) &&
    (xmlReader->read() )
  ) {
    if ( xmlReader->getNodeType()==tarch::irr::io::EXN_ELEMENT ) {
      if (!parseUnknownSubtags(xmlReader)) {
        logError("parseSubtag(...)", "invalid subtag <" << xmlReader->getNodeName() << ">" );
        _isValid = false;
      }
    }
  }

  if (!_foundScenario ) {
    logError( "parseSubtag(...)", "missing or invalid experiment subtag. Add tag " << _rotatingHeatSourceConfiguration.getTag() << " or " << _fadingSinusConfiguration.getTag() );
  }

  if ( _minimalMeshSize <= 0.0 ) {
    logError( "parseSubtag(...)", "missing or invalid attribute \"minimal-mesh-size\"" );
  }

  if ( _maximalMeshSize <= 0.0 ) {
    logError( "parseSubtag(...)", "missing or invalid attribute \"maximal-mesh-size\"" );
  }

  if ( _maximalMeshSize < _minimalMeshSize ) {
    logError( "parseSubtag(...)", "minimal mesh size has to be smaller or equal maximum mesh size" );
  }

  if ( _solverScheme==VCycle && _numberOfPreSmoothingSteps<0 ) {
    logError( "parseSubtag(...)", "attribute \"pre-smoothing-steps\" has to have a number greater than or equal to zero" );
  }
  if ( _solverScheme==VCycle && _numberOfPostSmoothingSteps<1 ) {
    logError( "parseSubtag(...)", "attribute \"post-smoothing-steps\" has to have a number greater than zero" );
  }

  if ( _refinementPercentage < 0.0 ) {
    logError( "parseSubtag(...)", "missing or invalid attribute \"refine-percentage\"" );
  }

  if ( _deletePercentage < 0.0 ) {
    logError( "parseSubtag(...)", "missing or invalid attribute \"delete-percentage\"" );
  }
}


void peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid. " << std::endl
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


tarch::configuration::TopLevelConfiguration* peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::clone() const { 
  return new peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid();
}


int peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::interpreteConfiguration() {
  peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForSpacetreeGrid runner; 

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
 

bool peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::isValid() const {
  return AbstractTimeSteppingConfiguration::isValid() &&
    _minimalMeshSize > 0.0 &&
    _maximalMeshSize > 0.0 &&
    _minimalMeshSize<=_maximalMeshSize &&
    (_solverScheme!=VCycle || _numberOfPreSmoothingSteps>=0) &&
    (_solverScheme!=VCycle || _numberOfPostSmoothingSteps>0) &&
    ( _refinementPercentage >= 0.0 ) &&
    ( _deletePercentage >= 0.0 );
}


double peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::getMinimalMeshSize() const {
  return _minimalMeshSize;
}


double peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::getMaximalMeshSize() const {
  return _maximalMeshSize;
}


int peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::getNumberOfPreSmoothingSteps() const {
  return _numberOfPreSmoothingSteps;
}


int peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::getNumberOfPostSmoothingSteps() const {
  return _numberOfPostSmoothingSteps;
}


double peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::getRefinementPercentage() const {
  return _refinementPercentage;
}


double peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid::getDeletePercentage() const {
  return _deletePercentage;
}
