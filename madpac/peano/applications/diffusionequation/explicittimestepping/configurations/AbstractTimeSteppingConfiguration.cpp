#include "peano/applications/diffusionequation/explicittimestepping/configurations/AbstractTimeSteppingConfiguration.h"


tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration::_log( "peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration" );


peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration::AbstractTimeSteppingConfiguration():
  _initialTimeStepSize(-1.0),
  _timeStepSizeMaxDifference(-1.0),
  _totalTime(-1.0),
  _plotInputGeometryToVTKFile(""),
  _snapshotDelta(-1.0),
  _foundScenario(false) {
}


void peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration::parseAttributes( tarch::irr::io::IrrXMLReader* xmlReader ) {
  if ( xmlReader->getAttributeValue("initial-time-step-size")!=0 ) {
    _initialTimeStepSize = xmlReader->getAttributeValueAsDouble("initial-time-step-size");
  }

  if ( xmlReader->getAttributeValue("max-time-step-difference")!=0 ) {
    _timeStepSizeMaxDifference = xmlReader->getAttributeValueAsDouble("max-time-step-difference");
  }

  if ( xmlReader->getAttributeValue("snapshot-delta")!=0 ) {
    _snapshotDelta = xmlReader->getAttributeValueAsDouble("snapshot-delta");
    if (_snapshotDelta==0.0) {
      logWarning( "parseAttributes(...)", "snapshot-delta is set to 0, i.e. no output data is written" );
    }
  }

  if ( xmlReader->getAttributeValue("plot-input-geometry-to-vtk-file")!=0 ) {
    _plotInputGeometryToVTKFile = xmlReader->getAttributeValue("plot-input-geometry-to-vtk-file");
  }
  else {
    logError( "parseAttributes(...)", "attribute \"plot-input-geometry-to-vtk-file\" is missing" );
    _isValid = false;
  }

  if ( xmlReader->getAttributeValue("total-time")!=0 ) {
    _totalTime = xmlReader->getAttributeValueAsDouble("total-time");
  }
}


std::string peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration::shouldPlotInputGeometryToVTKFile() const {
  return _plotInputGeometryToVTKFile;
}


void peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration::subtagsToXML(std::ostream& out) const {
  out << "@todo" << std::endl;
}


bool peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration::parseUnknownSubtags( tarch::irr::io::IrrXMLReader* xmlReader ) {
  bool interpretedSubtags = false;

  if ( xmlReader->getNodeName() == _logFilterConfiguration.getTag() ) {
    _logFilterConfiguration.parseSubtag(xmlReader);
    interpretedSubtags = true;
  }

  if ( xmlReader->getNodeName() == _logFormatConfiguration.getTag() ) {
    _logFormatConfiguration.parseSubtag(xmlReader);
    interpretedSubtags = true;
  }

  if ( xmlReader->getNodeName() == _autotuningConfiguration.getTag() ) {
    _autotuningConfiguration.parseSubtag(xmlReader);
    interpretedSubtags = true;
  }

  #if defined(SharedOMP) || defined(SharedTBB)
  if ( xmlReader->getNodeName() == _coreConfiguration.getTag() ) {
    _coreConfiguration.parseSubtag(xmlReader);
    interpretedSubtags = true;
  }
  #endif

  if ( xmlReader->getNodeName() == _rotatingHeatSourceConfiguration.getTag() ) {
    if (_foundScenario ) {
      logError( "parseSubtag(...)", "two scenarios found. Remove one of them");
      _isValid = false;
    }
    _foundScenario = true;
    _rotatingHeatSourceConfiguration.parseSubtag(xmlReader);
    interpretedSubtags = true;
  }
  if ( xmlReader->getNodeName() == _fadingSinusConfiguration.getTag() ) {
    if (_foundScenario ) {
      logError( "parseSubtag(...)", "two scenarios found. Remove one of them");
      _isValid = false;
    }
    _foundScenario = true;
    _fadingSinusConfiguration.parseSubtag(xmlReader);
    interpretedSubtags = true;
  }

  if ( xmlReader->getNodeName() == _cornerPointFieldConfiguration.getTag() ) {
    if (_foundScenario ) {
      logError( "parseSubtag(...)", "two scenarios found. Remove one of them");
      _isValid = false;
    }
    _foundScenario = true;
    _cornerPointFieldConfiguration.parseSubtag(xmlReader);
    interpretedSubtags = true;
  }

  return interpretedSubtags;
}


bool peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration::isValid() const {
  bool areAttributesValid = true;

  if ( !_rotatingHeatSourceConfiguration.isValid()
    && !_fadingSinusConfiguration.isValid()
    && !_cornerPointFieldConfiguration.isValid()
  ) {
    logError( "parseSubtag(...)", "no valid scenario description found");
    areAttributesValid = false;
  }

  if ( _initialTimeStepSize<=0.0 ) {
    logError( "parseSubtag(...)", "attribute \"initial-time-step-size\" is missing or has invalid value smaller than or equal to 0.0" );
    areAttributesValid = false;
  }

  if ( _timeStepSizeMaxDifference<0.0) {
    logError( "parseSubtag(...)", "attribute \"max-time-step-difference\" is missing or has invalid value smaller than 0.0 (0.0 switches it off)" );
    areAttributesValid = false;
  }

  if ( _snapshotDelta<0.0) {
    logError( "parseSubtag(...)", "attribute \"snapshot-delta\" is missing or has invalid value smaller than 0.0 (0.0 switches it off)" );
    areAttributesValid = false;
  }

  if ( _totalTime<0.0) {
    logError( "parseSubtag(...)", "attribute \"total-time\" is missing or has invalid value smaller than 0.0 (0.0 switches it off)" );
    areAttributesValid = false;
  }

  if (!_foundScenario) {
    logError( "parseSubtag(...)", "no scenario subtag found" );
    areAttributesValid = false;
  }

  #if defined(SharedOMP) || defined(SharedTBB)
  return _logFilterConfiguration.isValid() && _logFormatConfiguration.isValid() && _isValid && areAttributesValid && _autotuningConfiguration.isValid() && _coreConfiguration.isValid();
  #else
  return _logFilterConfiguration.isValid() && _logFormatConfiguration.isValid() && _isValid && areAttributesValid;
  #endif
}


double peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration::getInitialTimeStepSize() const {
  return _initialTimeStepSize;
}


double peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration::getSnapshotDelta() const {
  return _snapshotDelta;
}


double peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration::getTimeStepSizeMaxDifference() const {
  return _timeStepSizeMaxDifference;
}


double peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration::getTotalTime() const {
  return _totalTime;
}


scenario::diffusionequation::DiffusionEquationScenario* peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration::createScenario() {
  assertion( isValid() );
  if (_rotatingHeatSourceConfiguration.isValid()) {
    return _rotatingHeatSourceConfiguration.interpreteConfiguration();
  }
  if (_fadingSinusConfiguration.isValid()) {
    return  _fadingSinusConfiguration.interpreteConfiguration();
  }
  if (_cornerPointFieldConfiguration.isValid()) {
    return _cornerPointFieldConfiguration.interpreteConfiguration();
  }

  return 0;
}
