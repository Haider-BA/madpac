#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/PerformanceMeasurementService.h"

#include "tarch/services/ServiceFactory.h"
registerService(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService)


void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService::
startPerformanceMeasurement(bool measureMlups){
  if (_performanceMeasurement != NULL){
    delete _performanceMeasurement;
    _performanceMeasurement = NULL;
  }

  _performanceMeasurement = new peano::applications::latticeboltzmann::PerformanceMeasurement(measureMlups);
  _performanceMeasurement->startPerformanceMeasurement();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService::
stopPerformanceMeasurement(){
  assertion(_performanceMeasurement != NULL);
  _performanceMeasurement->stopPerformanceMeasurement();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService::
evaluatePerformance(int localNumberOfCells,int globalNumberOfCells, double globalCpuTime){
  assertion(_performanceMeasurement != NULL);
  _performanceMeasurement->setNumberOfCells(localNumberOfCells,globalNumberOfCells);
  _performanceMeasurement->setGlobalCpuTime(globalCpuTime);
  _performanceMeasurement->computeMLUPS();
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService&
peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService::
getInstance(){
  static PerformanceMeasurementService singleton;
  return singleton;
}
