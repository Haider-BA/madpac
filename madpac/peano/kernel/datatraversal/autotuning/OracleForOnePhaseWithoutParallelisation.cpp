#include "peano/kernel/datatraversal/autotuning/OracleForOnePhaseWithoutParallelisation.h"

tarch::logging::Log peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithoutParallelisation::_log( "peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithoutParallelisation" );


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithoutParallelisation::OracleForOnePhaseWithoutParallelisation() {
}


int peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithoutParallelisation::parallelise(int problemSize, MethodTrace askingMethod ) {
  return 0;
}


void peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithoutParallelisation::parallelSectionHasTerminated(double elapsedCalendarTime) {
}


void peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithoutParallelisation::plotStatistics() {
  logInfo( "plotStatistics()", "no shared memory parallelisation used" );
}


peano::kernel::datatraversal::autotuning::OracleForOnePhase* peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithoutParallelisation::createNewOracle() const {
  return new OracleForOnePhaseWithoutParallelisation();
}
