#include "peano/kernel/datatraversal/autotuning/OracleForOnePhaseWithIntervalSearch.h"
#include <cmath>


#ifdef SharedOMP
#include <omp.h>
#include "tarch/multicore/openMP/Core.h"
#elif SharedTBB
#include "tarch/multicore/tbb/Core.h"
#endif


const int peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithIntervalSearch::METHODS_NUMBER = 7;

tarch::logging::Log  peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithIntervalSearch::_log( "peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithIntervalSearch" );


peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithIntervalSearch::OracleForOnePhaseWithIntervalSearch() {
  #if defined(SharedTBB)
  _threads = tarch::multicore::tbb::Core::getInstance().getNumberOfThreads();
  #elif defined(SharedOMP)
  _threads = tarch::multicore::openMP::Core::getInstance().getNumberOfThreads();
  #else
   _threads = 1;
  #endif
   _runTimes = std::vector< std::map<int, double> >(METHODS_NUMBER, std::map<int, double>());
   _iterationGrainSizes = std::vector< std::map<int, int> >(METHODS_NUMBER, std::map<int, int>());
   _bestGrainSizes = std::vector< std::map<int, int> >(METHODS_NUMBER, std::map<int, int>());

   _parallelProblemSizes = std::vector<int>(METHODS_NUMBER, -1);
   _sequentialProblemSizes = std::vector<int>(METHODS_NUMBER, 1);

}


void peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithIntervalSearch::plotStatistics() {
	  for (int method = 0; method < METHODS_NUMBER; method++) {
		std::map<int, int>::iterator problemSizeIt = _bestGrainSizes[method].begin();
	    std::map<int, double>::iterator runTimeIt = _runTimes[method].begin();

		for( ; problemSizeIt != _bestGrainSizes[method].end(); problemSizeIt++, runTimeIt++ ) {
	    logInfo(
	      "plotStatistics()",
	      "(" << method << ", " << problemSizeIt->first << "): " <<
	      "(" << problemSizeIt->second <<  ", " << runTimeIt->second << ")"
	    );
	  }
	  }
}


int peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithIntervalSearch::parallelise(int problemSize, MethodTrace askingMethod ) {
  logTraceInWith2Arguments( "parallelise(int,int)", problemSize, askingMethod );

  _currentMethod = askingMethod;
  _problemSize   = problemSize;

  if ( _problemSize <= _sequentialProblemSizes[_currentMethod] ) {
    logTraceOutWith1Argument( "parallelise(int,int)", 0 );
    return 0;
  }

  //check if this problem size was already tested for the current oracle-method pair
  if(_bestGrainSizes[_currentMethod].find(_problemSize) == _bestGrainSizes[_currentMethod].end()) {
    // add new problemSize
    _runTimes[_currentMethod][_problemSize] = -1.0;
    _bestGrainSizes[_currentMethod][_problemSize] = -2;
    /*
     * if the problem size is bigger than the smallest problem for this method, which can be parallelised,
     * don't test the sequential run, otherwise begin with grainSize=0
     */
    if ( (_parallelProblemSizes[_currentMethod] <= _problemSize) && (_parallelProblemSizes[_currentMethod] > 0) ){
      _iterationGrainSizes[_currentMethod][_problemSize] = 1;
    }
    else{
      _iterationGrainSizes[_currentMethod][_problemSize] = 0;
    }
  }

/*
 * If tuning is finished, return the best grain size,
 * otherwise return grain size of the current iteration.
 */
if(_iterationGrainSizes[_currentMethod][_problemSize] == -1){
  logTraceOutWith1Argument( "parallelise(int,int)", _iterationGrainSizes[_currentMethod][_problemSize] );
    return _bestGrainSizes[_currentMethod][_problemSize];
}
else{
  logTraceOutWith1Argument( "parallelise(int,int)", _iterationGrainSizes[_currentMethod][_problemSize] );
  return _iterationGrainSizes[_currentMethod][_problemSize];
}
}


void peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithIntervalSearch::parallelSectionHasTerminated(double elapsedCalendarTime) {

	//return if tuning is finished or if the problem is run sequential
  if(_iterationGrainSizes[_currentMethod][_problemSize] == -1 || _problemSize <= _sequentialProblemSizes[_currentMethod]) {
    return;
  }

  bool tuningFinished = false;
  if(std::abs((double)(_bestGrainSizes[_currentMethod][_problemSize] - _iterationGrainSizes[_currentMethod][_problemSize])) <= 1){
	tuningFinished = true;   //complete the tuning if the interval is to small
  }

  if(_runTimes[_currentMethod][_problemSize] == -1.0) {
	  /* First iteration:
	   *  the best grain size is set to the current grain size
	   *  next grain size to test is the maximal grain size for parallel runs
	   */
    _bestGrainSizes[_currentMethod][_problemSize]		= _iterationGrainSizes[_currentMethod][_problemSize];
    _iterationGrainSizes[_currentMethod][_problemSize]	= _problemSize/_threads;
    _runTimes[_currentMethod][_problemSize] 			= elapsedCalendarTime;
  }
  else{
	  /* All other iterations:
	   *  next grain size to test is the mean off the old best grain size and currently tested grain size
	   */
    int nextGrainSize = (_bestGrainSizes[_currentMethod][_problemSize] + _iterationGrainSizes[_currentMethod][_problemSize])/2;
    if(_runTimes[_currentMethod][_problemSize] > elapsedCalendarTime){
    	//if the tested grain sizes has better results, save it as a best grain size
      _bestGrainSizes[_currentMethod][_problemSize] = _iterationGrainSizes[_currentMethod][_problemSize];
      _runTimes[_currentMethod][_problemSize] = elapsedCalendarTime;
    }
    _iterationGrainSizes[_currentMethod][_problemSize] = nextGrainSize;
  }

  if(tuningFinished){
    _iterationGrainSizes[_currentMethod][_problemSize] = -1;

    if(_bestGrainSizes[_currentMethod][_problemSize] == 0){ //sequential run had best results for this problem
      if(_sequentialProblemSizes[_currentMethod] < _problemSize){
        _sequentialProblemSizes[_currentMethod] = _problemSize;
      }
    }
    else{
      if(_parallelProblemSizes[_currentMethod] > _problemSize || _parallelProblemSizes[_currentMethod] == -1){
    	  /* If the problem is smaller than problems parallelized before,
    	   * save it as the currently smallest parallel problem size for this method.
    	   */
        _parallelProblemSizes[_currentMethod] = _problemSize;
      }
    }
  }

}


peano::kernel::datatraversal::autotuning::OracleForOnePhase* peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithIntervalSearch::createNewOracle() const {
  return new OracleForOnePhaseWithIntervalSearch();
}
