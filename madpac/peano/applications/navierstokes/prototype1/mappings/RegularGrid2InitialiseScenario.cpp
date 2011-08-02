#include "peano/applications/navierstokes/prototype1/mappings/RegularGrid2InitialiseScenario.h"


tarch::logging::Log peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::_log( "peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario" );


peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::RegularGrid2InitialiseScenario() {
  logTraceIn( "RegularGrid2InitialiseScenario()" );

  _scenarioHandler = std::auto_ptr<SetScenario>(new SetScenario(true)); //true, since we are in the grid initialisation
  _calculateA      = std::auto_ptr<peano::applications::navierstokes::prototype1::fluidnumerics::CalculateA>(
      new peano::applications::navierstokes::prototype1::fluidnumerics::CalculateA() );

  logTraceOut( "RegularGrid2InitialiseScenario()" );
}


peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::~RegularGrid2InitialiseScenario() {
  logTraceIn( "~RegularGrid2InitialiseScenario()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2InitialiseScenario()" );
}

  
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );

  _scenarioHandler->initialiseInnerVertex(vertex);

  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );

  _scenarioHandler->initialiseBoundaryVertex(x, vertex);

  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::createCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );

  cell.setFluidCellType(RegularGridFluidCellEnhancedDivFreeEulerExplicit::Records::INNER);

  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::destroyCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::handleCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  _calculateA->accumulateA(vertices, cell, enumerator);

  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex, 
  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {

}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::touchVertexFirstTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  _calculateA->handleVertex(vertex);

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::touchVertexLastTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::beginIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  // @todo Insert your code here
  _log.info("beginIteration()","start iteration for InitialiseScenario mapping ...");
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2InitialiseScenario::endIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}

