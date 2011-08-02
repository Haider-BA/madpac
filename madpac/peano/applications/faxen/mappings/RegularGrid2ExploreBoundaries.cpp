#include "peano/applications/faxen/mappings/RegularGrid2ExploreBoundaries.h"


tarch::logging::Log peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::_log( "peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries" );


peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::RegularGrid2ExploreBoundaries() {
  logTraceIn( "RegularGrid2ExploreBoundaries()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2ExploreBoundaries()" );
}


peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::~RegularGrid2ExploreBoundaries() {
  logTraceIn( "~RegularGrid2ExploreBoundaries()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2ExploreBoundaries()" );
}

  
void peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::createCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::destroyCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::handleCell(
  peano::applications::faxen::RegularGridVertex* const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::mergeWithNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex,
  const peano::applications::faxen::RegularGridVertex& neighbour,
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::touchVertexFirstTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::touchVertexLastTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::prepareSendToNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::beginIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::mappings::RegularGrid2ExploreBoundaries::endIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}

