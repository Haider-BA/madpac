#include "peano/integration/partitioncoupling/builtin/Utils.h"


template<>
tarch::la::Vector<3,double>
peano::integration::partitioncoupling::builtin::
crossProduct(const tarch::la::Vector<2,double> &a, const tarch::la::Vector<2,double> &b) {
  tarch::la::Vector<3,double> crossProduct( 0.0,0.0,a(0)*b(1)-a(1)*b(0) );
  return crossProduct;
}

template<>
tarch::la::Vector<3,double>
peano::integration::partitioncoupling::builtin::
crossProduct(const tarch::la::Vector<3,double> &a, const tarch::la::Vector<3,double> &b){
  tarch::la::Vector<3,double> crossProduct(
    a(1)*b(2)-a(2)*b(1),
    a(2)*b(0)-a(0)*b(2),
    a(0)*b(1)-a(1)*b(0)
  );
  return crossProduct;
}
