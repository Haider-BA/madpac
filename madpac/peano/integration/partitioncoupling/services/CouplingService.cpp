#include "peano/integration/partitioncoupling/services/CouplingService.h"


#include "tarch/services/ServiceFactory.h"
registerService(peano::integration::partitioncoupling::services::CouplingService)


peano::integration::partitioncoupling::services::CouplingService::CouplingService():
tarch::services::Service(), _couplingManager(NULL){}


peano::integration::partitioncoupling::services::CouplingService&
peano::integration::partitioncoupling::services::CouplingService::getInstance(){
  static CouplingService singleton;
  return singleton;
}


#if defined(Precice)
void peano::integration::partitioncoupling::services::CouplingService::init(
  const peano::geometry::precice::configurations::PreciceConfiguration& config
){
  if (_couplingManager != NULL){
    delete _couplingManager;
    _couplingManager = NULL;
  }

  _couplingManager = new peano::integration::partitioncoupling::precice::PreciceSolverInterfaceManager(config);
  assertion(_couplingManager != NULL);
  _couplingManager->initialize();
}
#endif


void peano::integration::partitioncoupling::services::CouplingService::init(
  peano::geometry::Geometry *basicGeometry,
  tarch::la::Vector<DIMENSIONS,double> domainSize,
  tarch::la::Vector<DIMENSIONS,double> domainOffset,
  tarch::la::Vector<DIMENSIONS,double> position,
  double radius,
  double sphereDensity,
  int timestepsPerPlottingVTK,
  int timestepsPerPlottingPovray,
  std::string filename,
  int initTimestepCounter
){
  if (_couplingManager != NULL){
    delete _couplingManager;
    _couplingManager = NULL;
  }

  _couplingManager = new peano::integration::partitioncoupling::builtin::PartitionCoupling4MovingSphere(
                      basicGeometry,domainSize,domainOffset,
                      position,radius,sphereDensity,
                      timestepsPerPlottingVTK,timestepsPerPlottingPovray,
                      filename,initTimestepCounter
                     );
  assertion(_couplingManager != NULL);
  _couplingManager->initialize();
}



void peano::integration::partitioncoupling::services::CouplingService::advance(double timestep){
  if (_couplingManager != NULL){
    _couplingManager->advance(timestep);
  }
}


void peano::integration::partitioncoupling::services::CouplingService::shutdown(){
  if (_couplingManager != NULL){
    _couplingManager->finalize();
    delete _couplingManager;
    _couplingManager = NULL;
  }
}
