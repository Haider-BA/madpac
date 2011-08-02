#include "peano/applications/puregrid/mappings/RegularGrid2PerformOneRefinement.h"


tarch::logging::Log peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::_log( "peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement" );


peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::RegularGrid2PerformOneRefinement() {
  logTraceIn( "RegularGrid2PerformOneRefinement()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2PerformOneRefinement()" );
}


peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::~RegularGrid2PerformOneRefinement() {
  logTraceIn( "~RegularGrid2PerformOneRefinement()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2PerformOneRefinement()" );
}

  
void peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::puregrid::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::puregrid::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::puregrid::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::createCell(
  peano::applications::puregrid::RegularGridVertex const * const vertices,
  peano::applications::puregrid::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::destroyCell(
  peano::applications::puregrid::RegularGridVertex const * const vertices,
  peano::applications::puregrid::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::handleCell(
  peano::applications::puregrid::RegularGridVertex* const vertices,
  peano::applications::puregrid::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::mergeWithNeighbour(
  peano::applications::puregrid::RegularGridVertex& vertex, 
  const peano::applications::puregrid::RegularGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::touchVertexFirstTime(
  peano::applications::puregrid::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::touchVertexLastTime(
  peano::applications::puregrid::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::prepareSendToNeighbour(
  peano::applications::puregrid::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::beginIteration(
  peano::applications::puregrid::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::puregrid::mappings::RegularGrid2PerformOneRefinement::endIteration(
  peano::applications::puregrid::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}

