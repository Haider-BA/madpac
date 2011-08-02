#include "peano/applications/faxen/mappings/RegularGrid2SetScenarioBoundary.h"


tarch::logging::Log peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::_log( "peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary" );


peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::RegularGrid2SetScenarioBoundary() {
  logTraceIn( "RegularGrid2SetScenarioBoundary()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2SetScenarioBoundary()" );
}


peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::~RegularGrid2SetScenarioBoundary() {
  logTraceIn( "~RegularGrid2SetScenarioBoundary()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2SetScenarioBoundary()" );
}

  
void peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::createCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::destroyCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::handleCell(
  peano::applications::faxen::RegularGridVertex* const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::mergeWithNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex, 
  const peano::applications::faxen::RegularGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::touchVertexFirstTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  if((x(1)+_dy/2) > _height){
	  vertex.setU0(1.0);
	  vertex.setU1(1.0);
  }

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::touchVertexLastTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::prepareSendToNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::beginIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  _dx = solverState.getDelx();
  _dy = solverState.getDely();
  _width = solverState.getXlength();
  _height = solverState.getYlength();

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::mappings::RegularGrid2SetScenarioBoundary::endIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}

