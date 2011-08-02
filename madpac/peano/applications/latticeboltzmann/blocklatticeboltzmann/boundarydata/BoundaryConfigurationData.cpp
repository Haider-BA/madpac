#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/BoundaryConfigurationData.h"

peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::
BoundaryConfigurationData():
_boundaryType(peano::applications::latticeboltzmann::BoundaryData::UNDEFINED),
_geometryID(0),
_profileType(peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::UNDEFINED_PROFILE),
_density_L(1.0),
_velocity_L(0.0){}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::
setVelocityL(const tarch::la::Vector<DIMENSIONS,double> &vel){
  _velocity_L = vel;
}


tarch::la::Vector<DIMENSIONS,double>
peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::getVelocityL() const {
  return _velocity_L;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::
setDensityL(const double& densityL) {
  _density_L = densityL;
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::
getDensityL() const {
  return _density_L;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::
setBoundaryType(const unsigned int &type){
  _boundaryType = type;
}

unsigned int peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::
getBoundaryType() const {
  return _boundaryType;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::
setProfileType(const unsigned int &profile) {
  assertion(profile < UNDEFINED_PROFILE);
  _profileType = profile;
}


unsigned int peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::
getProfileType() const {
  assertion(_profileType < UNDEFINED_PROFILE);
  return _profileType;
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::
setGeometryID(const unsigned int &id){
  _geometryID = id;
}


unsigned int peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData::
getGeometryID() const {
  return _geometryID;
}
