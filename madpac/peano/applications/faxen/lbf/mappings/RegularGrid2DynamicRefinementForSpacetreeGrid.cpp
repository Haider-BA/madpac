#include "peano/applications/faxen/lbf/mappings/RegularGrid2DynamicRefinementForSpacetreeGrid.h"


tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid" );


peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::RegularGrid2DynamicRefinementForSpacetreeGrid() {
  logTraceIn( "RegularGrid2DynamicRefinementForSpacetreeGrid()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2DynamicRefinementForSpacetreeGrid()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::~RegularGrid2DynamicRefinementForSpacetreeGrid() {
  logTraceIn( "~RegularGrid2DynamicRefinementForSpacetreeGrid()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2DynamicRefinementForSpacetreeGrid()" );
}

  
void peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::createCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::destroyCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::handleCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::mergeWithNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex, 
  const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::touchVertexFirstTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::touchVertexLastTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::prepareSendToNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::beginIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2DynamicRefinementForSpacetreeGrid::endIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}

