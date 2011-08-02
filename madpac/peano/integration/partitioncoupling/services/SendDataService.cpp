#include "peano/integration/partitioncoupling/services/SendDataService.h"

#include "tarch/services/ServiceFactory.h"
registerService(peano::integration::partitioncoupling::services::SendDataService)


#if defined(Precice)
void peano::integration::partitioncoupling::services::SendDataService::init(const peano::geometry::precice::configurations::PreciceConfiguration& config){
  if (_sendData != NULL){
    delete _sendData;
    _sendData = NULL;
  }
  _sendData = new peano::integration::partitioncoupling::precice::SendDataToPrecice(
                   config.getPreciceSolverInterface()
                 );
}
#endif


peano::integration::partitioncoupling::services::SendDataService&
peano::integration::partitioncoupling::services::SendDataService::getInstance(){
  static SendDataService singleton;
  return singleton;
}


void peano::integration::partitioncoupling::services::SendDataService::init(const tarch::la::Vector<DIMENSIONS,double>& position){
  if (_sendData != NULL){
    delete _sendData;
    _sendData = NULL;
  }
  _sendData = new peano::integration::partitioncoupling::builtin::SendDataToMovingSphere(position);
}


peano::integration::partitioncoupling::SendData&
peano::integration::partitioncoupling::services::SendDataService::getSendData(){
  assertion(_sendData != NULL);
  return *_sendData;
}
