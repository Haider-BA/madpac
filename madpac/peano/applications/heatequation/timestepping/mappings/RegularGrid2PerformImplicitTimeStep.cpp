#include "peano/applications/heatequation/timestepping/mappings/RegularGrid2PerformImplicitTimeStep.h"
#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::_log( "peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep" );


peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::RegularGrid2PerformImplicitTimeStep() {}


peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::~RegularGrid2PerformImplicitTimeStep() {}

  
void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {}



void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
  int fromRank) {
  assertionMsg( false, "not implemented yet" );
}
#endif

void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  if (vertex.isInside()) {
    vertex.copyTemperatureToOldTemperature();
    vertex.setNewRhs(scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getRhs(x));
  }

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {
  scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().setTime( solverState.getTime() );
  _solver.setTimeStepSize(solverState.getTimeStepSize());
  _solver.clearMeasurements();
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformImplicitTimeStep::endIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {
  solverState.setUMeasurements(
    _solver.getSolutionUpdateInMaximumNorm(),
    _solver.getSolutionUpdateInHNorm()
  );
  solverState.incNumberOfStencilUpdates( _solver.getNumberOfStencilUpdates() );
}

