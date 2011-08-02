#include "peano/applications/latticeboltzmann/PerformanceMeasurement.h"

tarch::logging::Log peano::applications::latticeboltzmann::PerformanceMeasurement::_log("peano::applications::latticeboltzmann::PerformanceMeasurement");


peano::applications::latticeboltzmann::PerformanceMeasurement::PerformanceMeasurement(bool measureMLUPS):
_localNumberOfCells(0),
#ifdef Parallel
_globalNumberOfCells(0),
#endif
_measureMLUPS(measureMLUPS),
_globalCpuTime(0.0),
_localCpuTime(0.0),
_localMlups(0.0),
_globalMlups(0.0),
_watch(tarch::utils::Watch("","",false)){
}


peano::applications::latticeboltzmann::PerformanceMeasurement::~PerformanceMeasurement(){}


void peano::applications::latticeboltzmann::PerformanceMeasurement::setNumberOfCells(
int localCells,int globalCells
){
  _localNumberOfCells = localCells;
  _globalNumberOfCells = globalCells;
}


void peano::applications::latticeboltzmann::PerformanceMeasurement::setGlobalCpuTime(
double time
){
  _globalCpuTime = time;
}


void peano::applications::latticeboltzmann::PerformanceMeasurement::startPerformanceMeasurement(){
  if (_measureMLUPS){
    _watch.startTimer();
  }
}


void peano::applications::latticeboltzmann::PerformanceMeasurement::computeMLUPS() {
  if (_measureMLUPS){
    assertion(_localCpuTime > 0.0);
    assertion(_globalCpuTime > 0.0);

    // compute the MLUPS
    logInfo("computeMLUPS()", "Local no. cells: " << _localNumberOfCells << ", global no. cells: " << _globalNumberOfCells);
    _localMlups = ( ( (double)  _localNumberOfCells) / (1000000.0*_localCpuTime ) );
    _globalMlups = ( ( (double) _globalNumberOfCells)/ (1000000.0*_globalCpuTime) );

#ifdef Parallel
    if (tarch::parallel::Node::getInstance().isMasterProcess()){
      logInfo("computeMLUPS()", "Global MLUPS: " << _globalMlups);
    }
    logInfo("computeMLUPS()", "MLUPS of rank " << tarch::parallel::Node::getInstance().getRank() << ": " << _localMlups);
#else
    logInfo("computeMLUPS()", "MLUPS: " << _localMlups);
#endif

  }
}


void peano::applications::latticeboltzmann::PerformanceMeasurement::stopPerformanceMeasurement() {
  if (_measureMLUPS){
    _watch.stopTimer();
    _localCpuTime = _watch.getCPUTime();
  }
}
