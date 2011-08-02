/*
 * CalculateA.cpp
 *
 *  Created on: Jan 28, 2011
 *      Author: unterweg
 */

#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateA.h"

#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"

peano::applications::navierstokes::prototype1::fluidnumerics::CalculateA::CalculateA()
{

}

peano::applications::navierstokes::prototype1::fluidnumerics::CalculateA::~CalculateA()
{
}

void peano::applications::navierstokes::prototype1::fluidnumerics::CalculateA::accumulateA(peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
      peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
      )
{
  //Calculate A
  double hFactor = 1.0;
  for (int d=0; d<DIMENSIONS; d++) {
    hFactor *= enumerator.getCellSize()(d);
  }

  for(int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++){
    vertices[enumerator(i)].addValueToA( hFactor / TWO_POWER_D );
  }
}

void peano::applications::navierstokes::prototype1::fluidnumerics::CalculateA::handleVertex(
    peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
    )
{
  vertex.resetA();
}
