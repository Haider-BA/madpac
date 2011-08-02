#include "peano/applications/heatequation/timestepping/mappings/RegularGrid2ComputeHierarchicalSurplus.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::_log( "peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus" );


peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::RegularGrid2ComputeHierarchicalSurplus() {
  logTraceIn( "RegularGrid2ComputeHierarchicalSurplus()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2ComputeHierarchicalSurplus()" );
}


peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::~RegularGrid2ComputeHierarchicalSurplus() {
  logTraceIn( "~RegularGrid2ComputeHierarchicalSurplus()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2ComputeHierarchicalSurplus()" );
}

  
void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus::endIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}

