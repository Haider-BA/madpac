#include "peano/kernel/datatraversal/autotuning/OracleForOnePhaseWithFixedGrainSize.h"
#include "tarch/Assertions.h"

#include <cstdlib>


tarch::logging::Log  peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithFixedGrainSize::_log( "peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithFixedGrainSize" );


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithFixedGrainSize::OracleForOnePhaseWithFixedGrainSize(int grainSize):
  _fixedGrainSize(grainSize),
  _accumulatedExecutionTimes(0.0),
  _numberOfExecutionTimes(0.0)  {
  assertion( _fixedGrainSize>0 );
}


int peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithFixedGrainSize::parallelise(int problemSize, MethodTrace askingMethod ) {
  return _fixedGrainSize;
}


void peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithFixedGrainSize::parallelSectionHasTerminated(double elapsedCalendarTime) {
  _accumulatedExecutionTimes  += elapsedCalendarTime;
  _numberOfExecutionTimes     += 1.0;
}


void peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithFixedGrainSize::plotStatistics() {
  logInfo(
    "plotRuntimes()",
    "averaged runtime with grain size " << _fixedGrainSize << ": " <<
    _accumulatedExecutionTimes/_numberOfExecutionTimes << " (" << _numberOfExecutionTimes
    << " sample(s))"
  );
}


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithFixedGrainSize::~OracleForOnePhaseWithFixedGrainSize() {
}


peano::kernel::datatraversal::autotuning::OracleForOnePhase* peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithFixedGrainSize::createNewOracle() const {
  return new OracleForOnePhaseWithFixedGrainSize(_fixedGrainSize);
}
