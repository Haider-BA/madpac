#include "peano/applications/navierstokes/prototype2/RegularGridFluidStateEnhancedDivFreeEulerExplicit.h"

#include "peano/applications/navierstokes/prototype2/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype2/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::navierstokes::prototype2::RegularGridFluidStateEnhancedDivFreeEulerExplicit::RegularGridFluidStateEnhancedDivFreeEulerExplicit():
  Base() { 
  // @todo Insert your code here
}


peano::applications::navierstokes::prototype2::RegularGridFluidStateEnhancedDivFreeEulerExplicit::RegularGridFluidStateEnhancedDivFreeEulerExplicit(const Base::PersistentState& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::navierstokes::prototype2::RegularGridFluidStateEnhancedDivFreeEulerExplicit::writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::RegularGridFluidCellEnhancedDivFreeEulerExplicit>& checkpoint ) const {
  // @todo Insert your code here
}

    
void peano::applications::navierstokes::prototype2::RegularGridFluidStateEnhancedDivFreeEulerExplicit::readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::navierstokes::prototype2::RegularGridFluidVertexEnhancedDivFreeEulerExplicit, peano::applications::navierstokes::prototype2::RegularGridFluidCellEnhancedDivFreeEulerExplicit>& checkpoint ) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::navierstokes::prototype2::RegularGridFluidStateEnhancedDivFreeEulerExplicit::mergeWithWorkerState(const RegularGridFluidStateEnhancedDivFreeEulerExplicit& workerState) {
  Base::mergeWithWorkerState(workerState);
  // @todo Insert your code here
}
#endif
 
