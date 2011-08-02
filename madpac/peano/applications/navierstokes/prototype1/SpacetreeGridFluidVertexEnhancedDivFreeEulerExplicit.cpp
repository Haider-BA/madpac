#include "peano/applications/navierstokes/prototype1/SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"


peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit():
  Base() { 
  // @todo Insert your code here
}


peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const Base::PersistentVertex& argument):
  Base(argument) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::mergeWithNeighbour(const peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, int fromRank) {
  Base::mergeWithNeighbour(neighbour,fromRank);
  // @todo Insert your code here
}
 

void peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::prepareSendToNeighbour() {
  // @todo Insert your code here
}
#endif


 tarch::la::Vector<TWO_POWER_D,double> peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::readA(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getA(); enddforx return result; }









