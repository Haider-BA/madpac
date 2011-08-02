#include "peano/applications/navierstokes/prototype2/SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit.h"

#include "peano/applications/navierstokes/prototype2/SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype2/SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::navierstokes::prototype2::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit():
  Base() { 
  // @todo Insert your code here
}


peano::applications::navierstokes::prototype2::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::navierstokes::prototype2::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::navierstokes::prototype2::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit>& checkpoint ) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::navierstokes::prototype2::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit::mergeWithWorkerState(const SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif
 
