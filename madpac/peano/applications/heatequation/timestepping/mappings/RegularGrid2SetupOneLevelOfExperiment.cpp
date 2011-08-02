#include "peano/applications/heatequation/timestepping/mappings/RegularGrid2SetupOneLevelOfExperiment.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::_log( "peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment" );


peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::RegularGrid2SetupOneLevelOfExperiment() {}


peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::~RegularGrid2SetupOneLevelOfExperiment() {}

  
void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupOneLevelOfExperiment::endIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}

