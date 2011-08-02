#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/PlaneBoundary.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::PlaneBoundary::_log(
    "peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::PlaneBoundary"
);


peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::PlaneBoundary::PlaneBoundary(
  const tarch::la::Vector<DIMENSIONS,double> &width,
  const tarch::la::Vector<DIMENSIONS,double> &offset,
  const tarch::la::Vector<DIMENSIONS,double> &normal,
  const tarch::la::Vector<2*DIMENSIONS,bool> &isOpen,
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData &configData
): peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundary(configData),
_width(width),_offset(offset),
_normal(normal), _normalComponent(getNormalComponent(normal)),
_isOpen(isOpen){
  logDebug("PlaneBoundary()", "Offset: " << _offset << " ,width: " << _width << ", normal: " << _normal);
  if (_width(_normalComponent) != 0.0){
    logError("PlaneBoundary()", "Width of box in normal direction must be zero!");
    assertion(false);
  }
  for (int d = 0; d < _normalComponent; d++){
    if (_width(d) <= 0.0){
      logError("PlaneBoundary()", "Width of box is smaller/ equal zero!");
      assertion(false);
    }
  }
  for (int d = _normalComponent+1; d < DIMENSIONS; d++){
    if (_width(d) <= 0.0){
      logError("PlaneBoundary()", "Width of box is smaller/ equal zero!");
      assertion(false);
    }
  }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::PlaneBoundary::getBoundaryData(
  const tarch::la::Vector<DIMENSIONS,double> &boundaryNode,
  const tarch::la::Vector<DIMENSIONS,double> &cellSize,
  const unsigned int &pdfDirection,
  peano::applications::latticeboltzmann::BoundaryData& boundaryData
){
  boundaryData.setBoundaryType(_configData.getBoundaryType());

  switch(_configData.getBoundaryType()){
    case peano::applications::latticeboltzmann::BoundaryData::MOVING_WALL_HW_BB:
      boundaryData.setVelocityL(_configData.getVelocityL());
      break;
    case peano::applications::latticeboltzmann::BoundaryData::PRESSURE_OUTLET_HW_BB:
      boundaryData.setDensityL(1.0);
      break;
    case peano::applications::latticeboltzmann::BoundaryData::PRESSURE_INLET_HW_BB:
      boundaryData.setDensityL(_configData.getDensityL());
      break;
    case peano::applications::latticeboltzmann::BoundaryData::VELOCITY_INLET_EQUILIBRIUM_DISTRIBUTION:
      boundaryData.setVelocityL(getChannelInletVelocity(boundaryNode));
      boundaryData.setDensityL(1.0);
      break;
    default:
      break;
  }
}


tarch::la::Vector<DIMENSIONS,double>
peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::PlaneBoundary::getChannelInletVelocity(
  const tarch::la::Vector<DIMENSIONS,double> &x
){

  if (_configData.getProfileType() == peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::FLAT_PROFILE){
    return _configData.getVelocityL();

  } else if (_configData.getProfileType() == peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::PARABOLIC_PROFILE){
    tarch::la::Vector<DIMENSIONS,double> vel(0.0);
    vel(_normalComponent) = _configData.getVelocityL()(_normalComponent);
    for (int d = 0; d < _normalComponent; d++){
      vel(_normalComponent) = vel(_normalComponent)*6.0/(_width[d]*_width[d]) * (x[d]-_offset[d])*(_width[d] - (x[d]-_offset[d]));
    }
    for (int d = _normalComponent+1; d < DIMENSIONS; d++){
      vel(_normalComponent) = vel(_normalComponent)*6.0/(_width[d]*_width[d]) * (x[d]-_offset[d])*(_width[d] - (x[d]-_offset[d]));
    }
    return vel;

  } else {
    logError("getChannelInletVelocity()", "Wrong profile type!");
    assertion(false);
    return tarch::la::Vector<DIMENSIONS,double>(0.0);
  }
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::PlaneBoundary::getNormalComponent(
  const tarch::la::Vector<DIMENSIONS,double> &normal
) const{
  int d = -1;
  for (int i = 0; i < DIMENSIONS; i++){
    if (normal(i) != 0.0){
      if (d != -1){
        logError("getNormalComponent()", "There are at least two components of normal vector that are not zero!");
        assertion(false);
      }
      d = i;
    }
  }

  if (d == -1){
    logError("getNormalComponent()", "Received zero vector as normal vector!");
    assertion(false);
  }
  logDebug("getNormalComponent()", "Normal component: " << d << ", value: " << normal(d));
  return d;
}

