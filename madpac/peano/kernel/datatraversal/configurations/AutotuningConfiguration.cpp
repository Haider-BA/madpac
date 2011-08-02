#include "peano/kernel/datatraversal/configurations/AutotuningConfiguration.h"
#include "tarch/Assertions.h"


#include "peano/kernel/datatraversal/autotuning/OracleForOnePhaseWithFixedGrainSize.h"
#include "peano/kernel/datatraversal/autotuning/OracleForOnePhaseWithGrainSizeSampling.h"
#include "peano/kernel/datatraversal/autotuning/OracleForOnePhaseWithIntervalSearch.h"
#include "peano/kernel/datatraversal/autotuning/OracleForOnePhaseWithOscillatingSearch.h"
#include "peano/kernel/datatraversal/autotuning/OracleForOnePhaseWithoutParallelisation.h"


tarch::logging::Log peano::kernel::datatraversal::configurations::AutotuningConfiguration::_log( "peano::kernel::datatraversal::configurations::AutotuningConfiguration" );


peano::kernel::datatraversal::configurations::AutotuningConfiguration::AutotuningConfiguration():
  _oracleType( "" ),
  _printStatisticsWhenTerminating(false),
  _hasParsed(false),
  _isValid(false) {
}


peano::kernel::datatraversal::configurations::AutotuningConfiguration::~AutotuningConfiguration() {
}


std::string peano::kernel::datatraversal::configurations::AutotuningConfiguration::getTag() const {
  return "autotuning";
}


void peano::kernel::datatraversal::configurations::AutotuningConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  _hasParsed = true;
  _isValid   = true;

  if ( xmlReader->getAttributeValue("strategy")==0 ) {
    _log.error("parseSubtag(...)", "attribute \"strategy\" missing within tag <" + getTag() + ">");
    _isValid = false;
  }
  else {
    _oracleType = xmlReader->getAttributeValue("strategy");
  }

  if (
    _oracleType!="no-shared-memory-parallisation" &&
    _oracleType!="oscillating-search" &&
    _oracleType!="interval-search" &&
    _oracleType!="grain-size-sampling-8" &&
    _oracleType!="grain-size-sampling-32" &&
    _oracleType!="grain-size-sampling-64" &&
    _oracleType!="grain-size-sampling-128" &&
    _oracleType!="grain-size-sampling-16-logarithmic" &&
    _oracleType!="grain-size-sampling-32-logarithmic" &&
    _oracleType!="grain-size-sampling-64-logarithmic" &&
    _oracleType!="fixed-grain-size-4" &&
    _oracleType!="fixed-grain-size-64" &&
    _oracleType!="fixed-grain-size-128" &&
    _oracleType!="fixed-grain-size-1024" &&
    _oracleType!="fixed-grain-size-65536"
  ) {
    _log.error(
      "parseSubtag(...)",
      "attribute \"strategy\" within tag <" + getTag() +
      "> has invalid value. Suported values: \"no-shared-memory-parallisation\",\"oscillating-search\",\"interval-search\", \"grain-size-sampling-{8, 32, 64, 128}\", \"grain-size-sampling-{16, 32, 64}-logarithmic\", and \"fixed-grain-size-{4, 64, 128,1024, 65536}\" ");
    _isValid = false;
  }

  if ( xmlReader->getAttributeValue("plot-statistics")==0 ) {
    _log.error("parseSubtag(...)", "attribute \"plot-statistics\" missing within tag <" + getTag() + ">");
    _isValid = false;
  }
  else {
    _printStatisticsWhenTerminating =  xmlReader->getAttributeValueAsBool("plot-statistics");
  }
}


bool peano::kernel::datatraversal::configurations::AutotuningConfiguration::isValid() const {
  if (!_hasParsed) {
    logError( "isValid()", "tag <" + getTag() + "> is missing" );
  }
  return _isValid;
}


void peano::kernel::datatraversal::configurations::AutotuningConfiguration::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  Configures the multithreading. This tag has only one attribute and" << std::endl
      << "  the attribute's value is either a natural number of a start to denote" << std::endl
      << "  that the system should use the default settings." << std::endl
      << "  -->" << std::endl;
  out << "<" << getTag() << " strategy=\"no-shared-memory-parallisation\" plot-statistics=\"yes\" />";
}


peano::kernel::datatraversal::autotuning::OracleForOnePhase*
peano::kernel::datatraversal::configurations::AutotuningConfiguration::interpreteConfiguration() const {
  #if defined(SharedOMP) || defined(SharedTBB)
  peano::kernel::datatraversal::autotuning::OracleForOnePhase* result = 0;

  if ( _oracleType=="no-shared-memory-parallisation" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithoutParallelisation();
  }
  else if ( _oracleType=="oscillating-search" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch();
  }
  else if ( _oracleType=="interval-search" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithIntervalSearch();
  }
  else if ( _oracleType=="grain-size-sampling-8" ) {
  	result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling(8);
  }
  else if ( _oracleType=="grain-size-sampling-32" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling(32);
  }
  else if ( _oracleType=="grain-size-sampling-64" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling(64);
  }
  else if ( _oracleType=="grain-size-sampling-128" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling(128);
  }
  else if ( _oracleType=="grain-size-sampling-16-logarithmic" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling(16, true);
  }
  else if ( _oracleType=="grain-size-sampling-32-logarithmic" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling(32, true);
  }
  else if ( _oracleType=="grain-size-sampling-64-logarithmic" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling(64, true);
  }
  else if ( _oracleType=="fixed-grain-size-4" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithFixedGrainSize(4);
  }
  else if ( _oracleType=="fixed-grain-size-64" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithFixedGrainSize(64);
  }
  else if ( _oracleType=="fixed-grain-size-128" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithFixedGrainSize(128);
  }
  else if ( _oracleType=="fixed-grain-size-1024" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithFixedGrainSize(1024);
  }
  else if ( _oracleType=="fixed-grain-size-65536" ) {
    result = new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithFixedGrainSize(65536);
  }

  assertion( result!=0 );
  return result;
  #else
  return getOracleForSequentialCode();
  #endif
}


peano::kernel::datatraversal::autotuning::OracleForOnePhase*
peano::kernel::datatraversal::configurations::AutotuningConfiguration::getOracleForSequentialCode() {
  return new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithoutParallelisation();
}


bool peano::kernel::datatraversal::configurations::AutotuningConfiguration::printStatisticsWhenTerminating() const {
  return _printStatisticsWhenTerminating;
}

