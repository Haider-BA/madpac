#include "peano/applications/shallowwater/mappings/RegularGrid2GodunovMethod.h"


tarch::logging::Log peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::_log( "peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod" );

#include "scenario/shallowwater/ShallowWaterScenarioService.h"

peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::RegularGrid2GodunovMethod() {
  logTraceIn( "RegularGrid2GodunovMethod()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2GodunovMethod()" );
}


peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::~RegularGrid2GodunovMethod() {
  logTraceIn( "~RegularGrid2GodunovMethod()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2GodunovMethod()" );
}

  
void peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::createCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::destroyCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::handleCell(
  peano::applications::shallowwater::RegularGridVertex* const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  //TODO: the earth is not flat!
//  double degLength = scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getSimulationArea()[2];
//  double numberOfGridPointsInOneDirection = scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getNumberOfGridPoints()[0];
//  double cellSize = degLength / (numberOfGridPointsInOneDirection-1) * 111.;

  double maxSpeed =  1000 * 1000 / (60 * 60); //1000km/h

  cell.updateCellWithFluxes(enumerator, vertices, maxSpeed, maxSpeed);
  cell.updateVerticesWithCellData(enumerator, vertices);
  logTraceOut( "handleCell()" );
}


void peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::touchVertexFirstTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::touchVertexLastTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  vertex.calculateFluctuations(x);
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}


void peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::beginIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::endIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );

  solverState.incrementTimeStep();

  logTraceOutWith1Argument( "endIteration()", solverState );
}



int peano::applications::shallowwater::mappings::RegularGrid2GodunovMethod::parallelise( int numberOfGridCells ) {
  logTraceInWith1Argument( "parallelise()", numberOfGridCells );
  int result = scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getGrainSize();
  // @todo Insert your code here
  logTraceOutWith1Argument( "parallelise()", result );
  return result;
}
