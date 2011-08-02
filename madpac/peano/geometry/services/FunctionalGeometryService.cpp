#include "peano/geometry/services/FunctionalGeometryService.h"

#include "tarch/services/ServiceFactory.h"
registerService(peano::geometry::services::FunctionalGeometryService)

peano::geometry::services::AbstractFunctionalGeometrySubService*
peano::geometry::services::FunctionalGeometryService::_functionalGeometryService(NULL);


peano::geometry::builtin::services::FunctionalBuiltinGeometrySubService
peano::geometry::services::FunctionalGeometryService::_functionalBuiltinGeometryService;


#if defined(Precice)
peano::geometry::precice::services::FunctionalPreciceGeometrySubService
peano::geometry::services::FunctionalGeometryService::_functionalPreciceGeometryService;
#endif


peano::geometry::services::FunctionalGeometryService&
peano::geometry::services::FunctionalGeometryService::getInstance(){
  static peano::geometry::services::FunctionalGeometryService singleton;
  return singleton;
}


void peano::geometry::services::FunctionalGeometryService::init(
const peano::geometry::builtin::configurations::BuiltinGeometryConfiguration& configs
){
  _functionalBuiltinGeometryService.init(configs);
  _functionalGeometryService = &_functionalBuiltinGeometryService;
}

#if defined(Precice)
void peano::geometry::services::FunctionalGeometryService::init(
const peano::geometry::precice::configurations::PreciceConfiguration& configs
){
  _functionalPreciceGeometryService.init(configs);
  _functionalGeometryService = &_functionalPreciceGeometryService;
}
#endif


std::vector<int> peano::geometry::services::FunctionalGeometryService::getGeometryIDs(
const tarch::la::Vector<DIMENSIONS,double> &x,
const tarch::la::Vector<DIMENSIONS,double> &h
){
  assertion(_functionalGeometryService != NULL);
  return _functionalGeometryService->getGeometryIDs(x,h);
}
