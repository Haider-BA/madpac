#include "peano/kernel/datatraversal/autotuning/OracleForOnePhaseWithOscillatingSearch.h"
#include "tarch/Assertions.h"
#include <limits>


tarch::logging::Log peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::_log( "peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch" );


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::OracleForOnePhaseWithOscillatingSearch() {
}


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::~OracleForOnePhaseWithOscillatingSearch() {
}


int peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::parallelise(int problemSize, MethodTrace askingMethod ) {
  _currentMeasurementDescription = MeasurementDescription(problemSize,askingMethod);
  if (_database.count(_currentMeasurementDescription)==0) {
    _database[_currentMeasurementDescription] = Tuple(problemSize);
    assertion3( _database.count(_currentMeasurementDescription)==1, _database.count(_currentMeasurementDescription), _currentMeasurementDescription._problemSize, _currentMeasurementDescription._askingMethod );
    return 0;
  }

  assertion( _database.count(_currentMeasurementDescription)==1 );
  return _database[_currentMeasurementDescription]._grainSize + _database[_currentMeasurementDescription]._b;
}


void peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::parallelSectionHasTerminated(double elapsedCalendarTime) {
  assertion3( _database.count(_currentMeasurementDescription)==1, _database.count(_currentMeasurementDescription), _currentMeasurementDescription._problemSize, _currentMeasurementDescription._askingMethod );

  if (_database[_currentMeasurementDescription]._time==std::numeric_limits<double>::max()) {
    _database[_currentMeasurementDescription]._time = elapsedCalendarTime;
  }
  else if (elapsedCalendarTime< _database[_currentMeasurementDescription]._time) {
    _database[_currentMeasurementDescription]._grainSize = _database[_currentMeasurementDescription]._grainSize + _database[_currentMeasurementDescription]._b;
    _database[_currentMeasurementDescription]._time      = elapsedCalendarTime;
  }
  else {
    int check = _database[_currentMeasurementDescription]._grainSize - _database[_currentMeasurementDescription]._b/2;
    if (check<0) {
      _database[_currentMeasurementDescription]._grainSize = 0;
      _database[_currentMeasurementDescription]._b         = 0;
    }
    else {
      _database[_currentMeasurementDescription]._b         = -_database[_currentMeasurementDescription]._b/2;
    }
  }
}


void peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::plotStatistics() {
  logInfo( "plotStatistics()", "manage " << _database.size() << " measurement sets" );
  for (
    std::map<MeasurementDescription,Tuple>::const_iterator p = _database.begin();
      p != _database.end();
      p++
  ) {
    logInfo(
      "plotStatistics()",
      "(" << toString(p->first._askingMethod) << "," << p->first._problemSize << "):" <<
      "(" << p->second._grainSize << "," << p->second._b << "," << p->second._time << ")"
    );
  }
}


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::Tuple::Tuple(int problemSize):
  _grainSize(0),
  _b(problemSize/2),
  _time( std::numeric_limits<double>::max() ) {
}


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::Tuple::Tuple():
  _grainSize(-1),
  _b(-1),
  _time( 0.0 ) {
}


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::MeasurementDescription::MeasurementDescription(int problemSize, MethodTrace askingMethod):
  _problemSize(problemSize),
  _askingMethod(askingMethod) {
  assertion( problemSize>0 );
  assertion( askingMethod>=0 );
  assertion( askingMethod<NumberOfDifferentMethodsCalling );
}


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::MeasurementDescription::MeasurementDescription() {
}


bool peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::MeasurementDescription::operator<(const peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::MeasurementDescription& rhs) const {
  if (_askingMethod < rhs._askingMethod) return true;
  if (_askingMethod > rhs._askingMethod) return false;

  return _problemSize < rhs._problemSize;
}


bool peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::MeasurementDescription::operator==(const peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::MeasurementDescription& rhs) const {
  return ( _problemSize == rhs._problemSize ) && ( _askingMethod == rhs._askingMethod);
}


peano::kernel::datatraversal::autotuning::OracleForOnePhase* peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch::createNewOracle() const {
  return new OracleForOnePhaseWithOscillatingSearch();
}
