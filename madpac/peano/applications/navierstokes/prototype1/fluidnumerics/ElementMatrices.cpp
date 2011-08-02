#include "peano/applications/navierstokes/prototype1/fluidnumerics/ElementMatrices.h"


peano::applications::navierstokes::prototype1::fluidnumerics::ElementMatrices::ElementMatrices() {
}


peano::applications::navierstokes::prototype1::fluidnumerics::ElementMatrices::~ElementMatrices() {
}


Vector peano::applications::navierstokes::prototype1::fluidnumerics::ElementMatrices::getHFactorForMOrC(const Vector& h) const {
  Vector hFactor(1.0);
  for (int d=0; d<DIMENSIONS; d++) {
    for (int dim=0; dim<DIMENSIONS; dim++) {
      if (dim!=d) {
        hFactor(d) *= h(dim);
      }
    }
  }
  return hFactor;
} 


double peano::applications::navierstokes::prototype1::fluidnumerics::ElementMatrices::getVolumeOfCell(const Vector& h) const {
  double hFactor=1.0;
  for (int d=0; d<DIMENSIONS; d++) {
    hFactor *= h(d);
  }
  return hFactor;
}
