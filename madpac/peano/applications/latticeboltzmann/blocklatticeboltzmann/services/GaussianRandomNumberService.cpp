#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/GaussianRandomNumberService.h"

#include "tarch/services/ServiceFactory.h"
registerService(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GaussianRandomNumberService)



peano::applications::latticeboltzmann::GaussianRandomNumberGenerator
peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GaussianRandomNumberService::_generator;


peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GaussianRandomNumberService::
GaussianRandomNumberService(){}


peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GaussianRandomNumberService::
~GaussianRandomNumberService(){}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GaussianRandomNumberService::
getGaussianRandomNumber(){
  return _generator.getGaussianRandomNumber();
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GaussianRandomNumberService&
peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GaussianRandomNumberService::
getInstance(){
  static GaussianRandomNumberService singleton;
  return singleton;
}
