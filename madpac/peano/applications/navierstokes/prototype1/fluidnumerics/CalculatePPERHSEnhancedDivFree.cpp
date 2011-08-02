#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculatePPERHSEnhancedDivFree.h"

#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"

#include "peano/kernel/gridinterface/VertexEnumerator.h"


peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSEnhancedDivFree::CalculatePPERHSEnhancedDivFree(
  const double adjustmentFactor,
  double       tau
) : AbstractCalculatePPERHS( EnhancedDivergenceFree, adjustmentFactor, tau ),
    _elementMatrices()
{
}


peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSEnhancedDivFree::~CalculatePPERHSEnhancedDivFree() {
}

void peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSEnhancedDivFree::computePPERHSValues(
  const Vector&                           h,
  const tarch::la::DynamicVector<double>& u,
  const tarch::la::DynamicVector<double>& F,
  const tarch::la::DynamicVector<double>& inverseA,
  double&                                 result
) {
  assertion( tarch::la::greater(_tau, 0.0));
  assertion( tarch::la::equals(h(0),h(1)));

  result = 0.0;

//old version (rotated 45 representation
//  const double hFactor = h(0) / std::sqrt(2.0); // h due to M, 2 missing, factor due to rotation (sqrt(2)/missing_2) ?
//  //ATTENTION: invA used instead of fixed 1/h^2 !
//  result +=   hFactor * ( F(0*DIMENSIONS + 0) * inverseA(0) * _tau
//                            + _adjustmentFactor * u(0*DIMENSIONS + 0) );
//  result += - hFactor * ( F(3*DIMENSIONS + 0) * inverseA(3) * _tau
//                            + _adjustmentFactor * u(3*DIMENSIONS + 0) );
//  result += - hFactor * ( F(1*DIMENSIONS + 1) * inverseA(1) * _tau
//                            + _adjustmentFactor * u(1*DIMENSIONS + 1) );
//  result +=   hFactor * ( F(2*DIMENSIONS + 1) * inverseA(2) * _tau
//                            + _adjustmentFactor * u(2*DIMENSIONS + 1) );

//new Cartesian version (identical to d-linear since only on edges)
  const Vector hFactor = _elementMatrices.getHFactorForMOrC(h);
  for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
    for (int d=0; d<DIMENSIONS; d++) {
      result += MDlinearElementMatrix[ i + (d*NUMBER_OF_VERTICES_PER_ELEMENT) ] * hFactor(d) * (
          inverseA(i) * F(i*DIMENSIONS + d)
          - _adjustmentFactor/_tau * u(i*DIMENSIONS + d) );
    }
  }

  //std::cout << "\n ppeRhs div-free got called: rhs= " << result << "\n";
}
//overloaded methods for other datatypes skipped here.


void peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSEnhancedDivFree::computeCellDivergence(
  const Vector&                           h,
  const tarch::la::DynamicVector<double>& u,
  double&                                 result
) {
  assertionFail("not yet implemented!");
  //call to generic function necessary? to support different datatypes etc.
}

void peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSEnhancedDivFree::computeAnalyticalDivergenceValues(
  const Vector&                     h,
  tarch::la::DynamicVector<double>& result
) {
  assertion(DIMENSIONS==2);
  assertion2(result.size()==NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS+4,result.size(),NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS+4);
  assertionFail("not yet implemented!");
}

