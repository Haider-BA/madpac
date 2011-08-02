#include "peano/applications/latticeboltzmann/BoundaryData.h"


peano::applications::latticeboltzmann::BoundaryData::BoundaryData():
_boundaryType(UNDEFINED),_velocityL(0.0),_densityL(1.0){}


void peano::applications::latticeboltzmann::BoundaryData::setVelocityL(
const tarch::la::Vector<DIMENSIONS,double> &vel) {
  _velocityL = vel;
}


tarch::la::Vector<DIMENSIONS,double>
peano::applications::latticeboltzmann::BoundaryData::getVelocityL() const {
  return _velocityL;
}


void peano::applications::latticeboltzmann::BoundaryData::
setBoundaryType(const unsigned int &boundaryType) {
  _boundaryType = boundaryType;
}


unsigned int peano::applications::latticeboltzmann::BoundaryData::getBoundaryType() const {
  return _boundaryType;
}


void peano::applications::latticeboltzmann::BoundaryData::setDensityL(const double& density){
  _densityL = density;
}


double peano::applications::latticeboltzmann::BoundaryData::getDensityL() const {
  return _densityL;
}
