#include "peano/applications/navierstokes/prototype2/SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"


peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit():
  Base() { 
  // @todo Insert your code here
}


peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const Base::PersistentVertex& argument):
  Base(argument) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::mergeWithNeighbour(const peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, int fromRank) {
  Base::mergeWithNeighbour(neighbour,fromRank);
  // @todo Insert your code here
}
 

void peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit::prepareSendToNeighbour() {
  // @todo Insert your code here
}
#endif











