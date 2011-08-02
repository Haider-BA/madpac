#include "tarch/utils/Watch.h"

#include <sstream>



tarch::utils::Watch::Watch(
  const std::string& className,
  const std::string& operationName,
  const bool         plotResultInDestructor
  ):
  _log( className ),
  _plotResultInDestructor(plotResultInDestructor),
  _operationName( operationName ),
  _startClockTicks( 0 ),
  _startTime(),
  _elapsedClockTicks( 0 ),
  _elapsedTime( 0 ),
  _calledStopManually(false) {
  startTimer();
}


tarch::utils::Watch::~Watch() {
  if (!_calledStopManually) {
    stopTimer();
  }

  if (_plotResultInDestructor) {
    std::ostringstream message;
    message << "total number of clock ticks within block (cpu-time,calendar-time): "
            << "(" << getCPUTime() << "s"
            << "," << getCalendarTime() << "s"
            << ")";
    _log.info( _operationName, message.str() );
  }
}


void tarch::utils::Watch::startTimer() {
  _startClockTicks = std::clock();
  #ifdef SharedOMP
  _startTime       = omp_get_wtime();
  #elif SharedTBB
  _startTime       = tbb::tick_count::now();
  #else
  _startTime       = std::time(NULL);
  #endif
}


void tarch::utils::Watch::stopTimer() {
  _elapsedClockTicks   = clock() - _startClockTicks;
  #ifdef SharedOMP
  _elapsedTime         = omp_get_wtime() - _startTime;
  #elif SharedTBB
  _elapsedTime         = (tbb::tick_count::now() - _startTime).seconds();
  #else
  _elapsedTime         = difftime ( std::time(NULL), _startTime );
  #endif
  _calledStopManually  = true;
}


double tarch::utils::Watch::getCPUTime() {
  double lhs = _elapsedClockTicks;
  double rhs = CLOCKS_PER_SEC;
  return lhs/rhs;
}


std::clock_t tarch::utils::Watch::getCPUTicks() {
  return _elapsedClockTicks;
}


double tarch::utils::Watch::getCalendarTime()  {
  return _elapsedTime;
}
