#include "peano/kernel/datatraversal/autotuning/OracleForOnePhaseWithGrainSizeSampling.h"
#include "tarch/Assertions.h"
#include "peano/utils/Globals.h"

#include <cstdlib>


tarch::logging::Log  peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling::_log( "peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling" );


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling::OracleForOnePhaseWithGrainSizeSampling(int numberOfSamples):
  _currentGrainSize(0),
  _numberOfSamples(numberOfSamples) {
  assertion( _numberOfSamples>0 );
}


int peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling::parallelise(int problemSize, MethodTrace askingMethod ) {
  logTraceInWith2Arguments( "parallelise(...)", problemSize, askingMethod );
  _currentMeasurementDescription = MeasurementDescription( problemSize, askingMethod );

  while ( static_cast<int>(_executionTimes[_currentMeasurementDescription].size()) < problemSize ) {
    _executionTimes[_currentMeasurementDescription].push_back( std::pair<double,double>(0.0,0.0) );
  }

  _currentGrainSize = (problemSize/_numberOfSamples) * (rand() % _numberOfSamples);

  if(askingMethod == RegularGridHandleCells) {
    _currentGrainSize /= (TWO_POWER_D);
  }

  logTraceInWith1Argument( "parallelise(...)", _currentGrainSize );

  return _currentGrainSize;
}


void peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling::parallelSectionHasTerminated(double elapsedCalendarTime) {
  _executionTimes[_currentMeasurementDescription][_currentGrainSize].first   += elapsedCalendarTime;
  _executionTimes[_currentMeasurementDescription][_currentGrainSize].second  += 1.0;
}


void peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling::plotStatistics() {

  logInfo("plotStatistics", "used " << _numberOfSamples << " samples");

  for (ExecutionTimeDatabase::const_iterator p=_executionTimes.begin(); p!=_executionTimes.end(); p++) {
    logInfo( "plotStatistics", "runtimes for (method=" << toString( p->first._askingMethod)  << ",problem-size=" << p->first._problemSize << "):" );
    int grainSize = 0;
    for (
      std::vector< std::pair<double,double> >::const_iterator measurements = p->second.begin();
      measurements != p->second.end();
      measurements++
    ) {
      if (measurements->second != 0) {
        logInfo( "plotStatistics", " grain size " << grainSize << ": " << measurements->first / measurements->second << " (" << measurements->second << " samples)");
      }
      grainSize++;
    }
  }
}


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling::MeasurementDescription::MeasurementDescription(int problemSize, MethodTrace askingMethod):
  _problemSize(problemSize),
  _askingMethod(askingMethod) {
  assertion( problemSize>0 );
  assertion( askingMethod>=0 );
  assertion( askingMethod<NumberOfDifferentMethodsCalling );
}


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling::MeasurementDescription::MeasurementDescription() {
}


bool peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling::MeasurementDescription::operator<(const peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling::MeasurementDescription& rhs) const {
  if (_askingMethod < rhs._askingMethod) return true;
  if (_askingMethod > rhs._askingMethod) return false;

  return _problemSize < rhs._problemSize;
}


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling::~OracleForOnePhaseWithGrainSizeSampling() {
}


peano::kernel::datatraversal::autotuning::OracleForOnePhase* peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling::createNewOracle() const {
  return new OracleForOnePhaseWithGrainSizeSampling(_numberOfSamples);
}
