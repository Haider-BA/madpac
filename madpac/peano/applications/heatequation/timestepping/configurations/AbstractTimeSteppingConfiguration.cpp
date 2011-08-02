#include "peano/applications/heatequation/timestepping/configurations/AbstractTimeSteppingConfiguration.h"


tarch::logging::Log peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::_log( "peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration" );


peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::AbstractTimeSteppingConfiguration():
  _initialTimeStepSize(0.0),
  _timeStepSizeMaxDifference(-1.0),
  _numberOfSnapshotsPerSequence(-1),
  _numberOfSequences(-1),
  _relaxationFactor(0.0),
  _solverAccuracy(0.0),
  _solverScheme(Undef),
  _foundScenario(false) {
}


void peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::parseAttributes( tarch::irr::io::IrrXMLReader* xmlReader ) {
  if ( xmlReader->getAttributeValue("initial-time-step-size")!=0 ) {
    _initialTimeStepSize = xmlReader->getAttributeValueAsDouble("initial-time-step-size");
  }

  if ( xmlReader->getAttributeValue("max-time-step-difference")!=0 ) {
    _timeStepSizeMaxDifference = xmlReader->getAttributeValueAsDouble("max-time-step-difference");
  }

  if ( xmlReader->getAttributeValue("number-of-snapshots-per-sequence")!=0 ) {
    _numberOfSnapshotsPerSequence = xmlReader->getAttributeValueAsInt("number-of-snapshots-per-sequence");
  }

  if ( xmlReader->getAttributeValue("number-of-sequences")!=0 ) {
    _numberOfSequences= xmlReader->getAttributeValueAsInt("number-of-sequences");
  }

  if ( xmlReader->getAttributeValue("relaxation-factor")!=0 ) {
    _relaxationFactor = xmlReader->getAttributeValueAsDouble("relaxation-factor");
  }

  if ( xmlReader->getAttributeValue("solver-accuracy")!=0 ) {
    _solverAccuracy = xmlReader->getAttributeValueAsDouble("solver-accuracy");
  }

  if ( xmlReader->getAttributeValue("solver")!=0 && std::string(xmlReader->getAttributeValue("solver")) == "explicit-Euler" ) {
    _solverScheme = ExplicitEuler;
  }

  if ( xmlReader->getAttributeValue("solver")!=0 && std::string(xmlReader->getAttributeValue("solver")) == "implicit-Euler-with-Jacobi" ) {
    _solverScheme = ImplicitEulerJacobi;
  }

  if ( xmlReader->getAttributeValue("solver")!=0 && std::string(xmlReader->getAttributeValue("solver")) == "implicit-Euler-with-FMG" ) {
    _solverScheme = FMG;
  }

  if ( xmlReader->getAttributeValue("solver")!=0 && std::string(xmlReader->getAttributeValue("solver")) == "implicit-Euler-with-V-cycle" ) {
    _solverScheme = VCycle;
  }

  if ( xmlReader->getAttributeValue("solver")!=0 && std::string(xmlReader->getAttributeValue("solver")) == "one-implicit-Euler-with-V-cycle" ) {
    _solverScheme = OneVCycle;
  }
}


bool peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::parseUnknownSubtags( tarch::irr::io::IrrXMLReader* xmlReader ) {
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

  return interpretedSubtags;
}


bool peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::isValid() const {
  bool areAttributesValid = true;

  if ( _initialTimeStepSize<=0.0 ) {
    logError( "parseSubtag(...)", "attribute \"initial-time-step-size\" is missing or has valid smaller equal 0.0" );
    areAttributesValid = false;
  }

  if ( _timeStepSizeMaxDifference<0.0) {
    logError( "parseSubtag(...)", "attribute \"max-time-step-difference\" is missing or has valid smaller than 0.0 (0.0 switches it off)" );
    areAttributesValid = false;
  }

  if ( _numberOfSnapshotsPerSequence <0 ) {
    logError( "parseSubtag(...)", "attribute \"number-of-snapshots-per-sequence\" missing or has value smaller 0 (0 switches plotting off)" );
    areAttributesValid = false;
  }

  if ( _numberOfSequences<0 ) {
    logError( "parseSubtag(...)", "attribute \"number-of-sequences\" missing or has value smaller 0 (0 imlies only one time step)" );
    areAttributesValid = false;
  }

  if ( _solverScheme!= ExplicitEuler && (_relaxationFactor<=0.0 || _relaxationFactor>=2.0) ) {
    logError( "parseSubtag(...)", "attribute \"relaxation-factor\" missing or has invalid value (0<omega<1)" );
    areAttributesValid = false;
  }

  if ( _solverAccuracy<=0.0 && _solverScheme!=ExplicitEuler ) {
    logError( "parseSubtag(...)", "attribute \"solver-accuracy\" missing or has invalid value (0<solver-accuracy<1)" );
    areAttributesValid = false;
  }
  else if ( _solverAccuracy>0.0 && _solverScheme==ExplicitEuler ) {
    logError( "parseSubtag(...)", "attribute \"solver-accuracy\" is specified but has no meaning for explicit Euler time integration" );
    areAttributesValid = false;
  }

  if ( _solverScheme==Undef  ) {
    logError( "parseSubtag(...)", "attribute \"solver\" missing or has invalid value (values: \"explicit-Euler\",\"implicit-Euler-with-Jacobi\",\"implicit-Euler-with-V-cycle\",\"one-implicit-Euler-with-V-cycle\",\"FMG\")" );
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


double peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::getInitialTimeStepSize() const {
  return _initialTimeStepSize;
}


int  peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::getNumberOfSnapshotsPerSequence() const {
  return _numberOfSnapshotsPerSequence;
}


int peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::getNumberOfSequences() const {
  return _numberOfSequences;
}


double peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::getRelaxationFactor() const {
  assertion( _solverScheme!= ExplicitEuler );
  return _relaxationFactor;
}


peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::SolverScheme
peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::getSolverScheme() const {
  return _solverScheme;
}


double peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::getSolverAccuracy() const {
  assertion( _solverScheme!= ExplicitEuler );
  return _solverAccuracy;
}

double peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::getTimeStepSizeMaxDifference() const {
  return _timeStepSizeMaxDifference;
}
