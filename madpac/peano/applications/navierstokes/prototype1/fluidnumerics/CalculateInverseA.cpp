#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateInverseA.h"

#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"


peano::applications::navierstokes::prototype1::fluidnumerics::CalculateInverseA::CalculateInverseA( double rho, double rhoPhase2 )
  :
  _rho(rho),
  _rhoPhase2(rhoPhase2) {
}
   

peano::applications::navierstokes::prototype1::fluidnumerics::CalculateInverseA::~CalculateInverseA() {
}



void peano::applications::navierstokes::prototype1::fluidnumerics::CalculateInverseA::accumulateAValues(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit*   vertices,
  const peano::kernel::gridinterface::VertexEnumerator& enumerator
){
  double hFactor = 1.0;
  for (int d=0; d<DIMENSIONS; d++) {
    hFactor *= enumerator.getCellSize()(d);
  }

  for(int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++){
    vertices[enumerator(i)].addValueToA( _rho * hFactor / TWO_POWER_D );
  }



#ifndef Dim2
#ifndef Dim3
  assertionMsg(false, "only 2D and 3D valid!");
#endif //Dim3
#endif //Dim2

}


//void peano::fluid::CalculateInverseA::accumulateAValues(
//  Vertex*        vertices,
//  const int      vertexIndex[NUMBER_OF_VERTICES_PER_ELEMENT],
//  const Vector&  h,
//  double         phase
//){
//  // calculate _rho
//  double rho;
//  if (phase==0.0) {
//    rho = _rho;
//  }
//  else {
//    rho = GridLevelTransfer::interpolateScalar1DLinear(phase,1,_rho,_rhoPhase2);
//  }
//
//  double hFactor = 1.0;
//  for (int d=0; d<DIMENSIONS; d++) {
//    hFactor *= h(d);
//  }
//
//  for(int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++){
//    vertices[vertexIndex[i]].addValueToA( rho * hFactor / TWO_POWER_D );
//  }
//
//#ifndef Dim2
//#ifndef Dim3
//  assertionMsg(false, "only 2D and 3D valid!");
//#endif //Dim3
//#endif //Dim2
//}
