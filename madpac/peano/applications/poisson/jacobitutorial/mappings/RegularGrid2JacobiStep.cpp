#include "peano/applications/poisson/jacobitutorial/mappings/RegularGrid2JacobiStep.h"


tarch::logging::Log peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::_log( "peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep" );


peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::RegularGrid2JacobiStep():
  _relaxationFactor(0.0) {
  logTraceIn( "RegularGrid2JacobiStep()" );
  logTraceOut( "RegularGrid2JacobiStep()" );
}


peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::~RegularGrid2JacobiStep() {
  logTraceIn( "~RegularGrid2JacobiStep()" );
  logTraceOut( "~RegularGrid2JacobiStep()" );
}

  
void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  logTraceOut( "destroyVertex()" );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::createCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex const * const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::destroyCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex const * const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  logTraceOut( "destroyCell()" );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::handleCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex* const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  tarch::la::Vector<TWO_POWER_D,double> residual = RegularGridVertex::readResidual( enumerator, vertices );
  tarch::la::Vector<TWO_POWER_D,double> u        = RegularGridVertex::readU( enumerator, vertices );
  residual += cell.applyStencil(u);
  RegularGridVertex::writeResidual( enumerator, vertices, residual );

  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::mergeWithNeighbour(
  peano::applications::poisson::jacobitutorial::RegularGridVertex& vertex, 
  const peano::applications::poisson::jacobitutorial::RegularGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::touchVertexFirstTime(
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  vertex.clearResidual();
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::touchVertexLastTime(
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  assertion( _relaxationFactor>0.0 );
  vertex.update( _relaxationFactor );
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::prepareSendToNeighbour(
  peano::applications::poisson::jacobitutorial::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::beginIteration(
  peano::applications::poisson::jacobitutorial::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  RegularGridCell::initStencil();
  _relaxationFactor = solverState.getRelaxationFactor();
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2JacobiStep::endIteration(
  peano::applications::poisson::jacobitutorial::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // Now, the value of _relaxation factor is lost. If you wanna preserve a
  // value, you have to write it back to the state.
  logTraceOutWith1Argument( "endIteration()", solverState );
}

