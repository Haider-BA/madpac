#include "peano/integration/partitioncoupling/services/ReceiveDataService.h"

#include "tarch/services/ServiceFactory.h"
registerService(peano::integration::partitioncoupling::services::ReceiveDataService)


#if defined(Precice)
void peano::integration::partitioncoupling::services::ReceiveDataService::init(const peano::geometry::precice::configurations::PreciceConfiguration& config){
  if (_receiveData != NULL){
    delete _receiveData;
    _receiveData = NULL;
  }
  _receiveData = new peano::integration::partitioncoupling::precice::ReceiveDataFromPrecice(
                   config.getPreciceSolverInterface()
                 );
}
#endif



peano::integration::partitioncoupling::services::ReceiveDataService&
peano::integration::partitioncoupling::services::ReceiveDataService::getInstance(){
  static ReceiveDataService singleton;
  return singleton;
}


void peano::integration::partitioncoupling::services::ReceiveDataService::init(
  const tarch::la::Vector<DIMENSIONS,double>& position,
  const double radius,
  const tarch::la::Vector<3,double>& initialTranslationalVelocity,
  const tarch::la::Vector<3,double>& initialAngularVelocity
){
  if (_receiveData != NULL){
    delete _receiveData;
    _receiveData = NULL;
  }
  _receiveData = new peano::integration::partitioncoupling::builtin::ReceiveDataFromMovingSphere(position,radius,initialTranslationalVelocity,initialAngularVelocity);
}


peano::integration::partitioncoupling::ReceiveData&
peano::integration::partitioncoupling::services::ReceiveDataService::getReceiveData(){
  assertion(_receiveData != NULL);
  return *_receiveData;
}
