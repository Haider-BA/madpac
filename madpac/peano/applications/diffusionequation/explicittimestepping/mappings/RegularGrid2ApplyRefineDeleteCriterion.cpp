#include "peano/applications/diffusionequation/explicittimestepping/mappings/RegularGrid2ApplyRefineDeleteCriterion.h"


tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::_log( "peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion" );


peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::RegularGrid2ApplyRefineDeleteCriterion() {
  logTraceIn( "RegularGrid2ApplyRefineDeleteCriterion()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2ApplyRefineDeleteCriterion()" );
}


peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::~RegularGrid2ApplyRefineDeleteCriterion() {
  logTraceIn( "~RegularGrid2ApplyRefineDeleteCriterion()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2ApplyRefineDeleteCriterion()" );
}

  
void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::createCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::destroyCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::handleCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex* const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::mergeWithNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex,
  const peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& neighbour,
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::touchVertexFirstTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::touchVertexLastTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::prepareSendToNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::beginIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion::endIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}

