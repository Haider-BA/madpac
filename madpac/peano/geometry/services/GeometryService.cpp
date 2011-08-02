#include "peano/geometry/services/GeometryService.h"


#include "tarch/services/ServiceFactory.h"
registerService(peano::geometry::services::GeometryService)


peano::geometry::services::GeometryService::GeometryService():
  tarch::services::Service(),
  _geometry(0),
  _deleteGeometry(false) {
}


peano::geometry::services::GeometryService::~GeometryService() {
  deleteGeometry();
}


void peano::geometry::services::GeometryService::deleteGeometry() {
  if (_geometry!=0 && _deleteGeometry) {
    delete _geometry;
    _geometry = 0;
  }
}


void peano::geometry::services::GeometryService::init(
  const peano::geometry::configurations::GeometryConfiguration& config
) {
  deleteGeometry();
  _geometry       = config.interpreteConfiguration();
  _deleteGeometry = true;
  assertion( _geometry != 0 );
}


void peano::geometry::services::GeometryService::init(
  peano::geometry::Geometry* geometry,
  bool                       serviceShallDeleteGeometry
) {
  assertion( geometry != 0 );
  deleteGeometry();
  _geometry       = geometry;
  _deleteGeometry = serviceShallDeleteGeometry;
}


peano::geometry::services::GeometryService& peano::geometry::services::GeometryService::getInstance() {
  static GeometryService singleton;
  return singleton;
}


peano::geometry::Geometry& peano::geometry::services::GeometryService::getGeometry() {
  assertion(_geometry!=0);
  return *_geometry;
}


void peano::geometry::services::GeometryService::receiveDanglingMessages() {
  // nop , @todo
}
