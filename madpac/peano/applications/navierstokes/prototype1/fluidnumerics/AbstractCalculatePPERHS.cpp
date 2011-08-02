/*
 * AbstractCalculatePPERHS.cpp
 *
 *  Created on: Jul 6, 2011
 *      Author: unterweg, liebm
 */

#include "AbstractCalculatePPERHS.h"

#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {

//tarch::utils::Log _log("peano::fluid::AbstractCalculatePPERHS");


AbstractCalculatePPERHS::AbstractCalculatePPERHS(
  ElementType       elementType,
  const double      adjustmentFactor,
  double            tau
) :
  _elementType(elementType),
  _tau(tau),
  _adjustmentFactor(adjustmentFactor)
  {
  assertion( tarch::la::equals(adjustmentFactor, 0.0) || tarch::la::equals(adjustmentFactor, 1.0) );
}

AbstractCalculatePPERHS::~AbstractCalculatePPERHS() {
}


ElementType AbstractCalculatePPERHS::getElementType() const {
  return _elementType;
}


void AbstractCalculatePPERHS::calculateAnalyticalDivergenceValues(
  const Vector&                     h,
  tarch::la::DynamicVector<double>& result
) {
  computeAnalyticalDivergenceValues(h, result);
}


void AbstractCalculatePPERHS::setNewTimeStepSizeTau(
  const double newTau
) {
  assertion(tarch::la::greater(newTau, 0.0));
  _tau = newTau;
}


double AbstractCalculatePPERHS::getTau() {
  return _tau;
}

void AbstractCalculatePPERHS::calculateCellPPERightHandSide(
    Vertex*                                               vertices,
    const peano::kernel::gridinterface::VertexEnumerator& enumerator,
    Cell&                                                 cell
) {
  //gather data
  tarch::la::DynamicVector<double> u = Vertex::fillUpVelocityDynamicVectorFromVertices(vertices, enumerator, getElementType());
  tarch::la::DynamicVector<double> F = Vertex::fillUpFDynamicVectorFromVertices(vertices, enumerator);
  tarch::la::DynamicVector<double> inverseA = Vertex::fillUpInverseADynamicVectorFromVertices(vertices, enumerator);

  double result;

  // computation
  computePPERHSValues(enumerator.getCellSize(), u, F, inverseA, result);

  //scatter data
  cell.setRhsPPE(result);
}


void AbstractCalculatePPERHS::calculateCellDivergenceCorrectionRightHandSide(
    Vertex*                                               vertices,
    const peano::kernel::gridinterface::VertexEnumerator& enumerator,
    Cell&                                                 cell,
    const Vector&                                         h
) {
  //gather data
  tarch::la::DynamicVector<double> u = Vertex::fillUpVelocityDynamicVectorFromVertices(vertices, enumerator, getElementType());
  double result;

  //computation
  computeCellDivergence(h, u, result);

  //scatter data
  cell.setRhsPPE(result);
}

}}}}} // close namespaces
