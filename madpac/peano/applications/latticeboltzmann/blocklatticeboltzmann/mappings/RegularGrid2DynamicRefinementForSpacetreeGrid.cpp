#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/mappings/RegularGrid2DynamicRefinementForSpacetreeGrid.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid" );


peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::RegularGrid2DynamicRefinementForSpacetreeGrid() {
  logTraceIn( "RegularGrid2DynamicRefinementForSpacetreeGrid()" );
  logTraceOut( "RegularGrid2DynamicRefinementForSpacetreeGrid()" );
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::~RegularGrid2DynamicRefinementForSpacetreeGrid() {
  logTraceIn( "~RegularGrid2DynamicRefinementForSpacetreeGrid()" );
  logTraceOut( "~RegularGrid2DynamicRefinementForSpacetreeGrid()" );
}

  
void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  logTraceOut( "destroyVertex()" );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::createCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::destroyCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  logTraceOut( "destroyCell()" );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::handleCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex* const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::mergeWithNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex, 
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& neighbour, 
  int fromRank) {
}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::touchVertexFirstTime(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::touchVertexLastTime(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::prepareSendToNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex
) {
}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::beginIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::endIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  logTraceOutWith1Argument( "endIteration()", solverState );
}

