#include "peano/applications/pic/demo2/mappings/RegularGrid2SetupExperiment.h"


tarch::logging::Log peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::_log( "peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment" );


peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::RegularGrid2SetupExperiment() {
  logTraceIn( "RegularGrid2SetupExperiment()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2SetupExperiment()" );
}


peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::~RegularGrid2SetupExperiment() {
  logTraceIn( "~RegularGrid2SetupExperiment()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2SetupExperiment()" );
}

  
void peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::pic::demo2::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::pic::demo2::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::pic::demo2::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::createCell(
  peano::applications::pic::demo2::RegularGridVertex const * const vertices,
  peano::applications::pic::demo2::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::destroyCell(
  peano::applications::pic::demo2::RegularGridVertex const * const vertices,
  peano::applications::pic::demo2::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::handleCell(
  peano::applications::pic::demo2::RegularGridVertex* const vertices,
  peano::applications::pic::demo2::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::mergeWithNeighbour(
  peano::applications::pic::demo2::RegularGridVertex& vertex, 
  const peano::applications::pic::demo2::RegularGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::touchVertexFirstTime(
  peano::applications::pic::demo2::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::touchVertexLastTime(
  peano::applications::pic::demo2::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::prepareSendToNeighbour(
  peano::applications::pic::demo2::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::beginIteration(
  peano::applications::pic::demo2::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment::endIteration(
  peano::applications::pic::demo2::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}

