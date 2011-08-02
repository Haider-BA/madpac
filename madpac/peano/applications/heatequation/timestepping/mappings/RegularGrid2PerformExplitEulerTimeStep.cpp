#include "peano/applications/heatequation/timestepping/mappings/RegularGrid2PerformExplitEulerTimeStep.h"
#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::_log( "peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep" );


peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::RegularGrid2PerformExplitEulerTimeStep():
  _solver() {
}


peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::~RegularGrid2PerformExplitEulerTimeStep() {
}

  
void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}



void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  tarch::la::Vector<TWO_POWER_D,double> rhs;
  tarch::la::Vector<TWO_POWER_D,double> u;

  rhs = peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readRhs(enumerator,vertices);
  u   = peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readOldU(enumerator,vertices);

  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::writeResidual(
    enumerator,
    vertices,
    peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readResidual(enumerator,vertices) +
    _solver.computeResidualContributionForExplicitEulerStep(
      rhs,u,
      enumerator.getCellSize(),
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readStencil(enumerator,vertices)
    )
  );

  logTraceOut( "handleCell()" );
}


#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&        vertex,
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  neighbour,
  int fromRank
) {
  if (vertex.isInside()) {
    assertionNumericalEquals4( vertex.getRhs(), neighbour.getRhs(), vertex, neighbour, fromRank, tarch::parallel::Node::getInstance().getRank() );

    double residual  = neighbour.getResidual();
    residual        /= _solver.getTimeStepSize();

    vertex.setNewOldTemperature(
      _solver.getNewTemperatureForExplicitEulerStep( _h, residual, vertex.getOldTemperature() )
    );

    assertionNumericalEquals4(
      vertex.getTemperature(),
      neighbour.getTemperature(),
      vertex, neighbour, fromRank, tarch::parallel::Node::getInstance().getRank()
    );
  }
}
#endif


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  vertex.clearResidual();

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                    x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );

  if (vertex.isInside()) {
    #if defined(Asserts) && defined(Parallel)
    // I misuse the temperature (that's actually never needed at all) to save
    // away the current temperature of the preceding step. As the temperature
    // is communicated in the assertion mode, it allows for a validation
    // whether the temperatures in the preceding time steps have been
    // consistent.
    vertex.setTemperature( vertex.getOldTemperature() );
    #endif
    vertex.setNewOldTemperature(
      _solver.getNewTemperatureForExplicitEulerStep( _h, vertex.getResidual(), vertex.getOldTemperature() )
    );
    vertex.setNewRhs(scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getRhs(x));
  }

  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}


#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
  vertex.scaleResidual( _solver.getTimeStepSize() );
}
#endif


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().setTime( solverState.getTime() );
  _solver.setTimeStepSize(solverState.getTimeStepSize());
  _solver.clearMeasurements();

  _h = solverState.getMaximumMeshWidth();
  for (int d=0; d<DIMENSIONS; d++) {
    assertionNumericalEquals(solverState.getMaximumMeshWidth()(d),solverState.getMinimumMeshWidth()(d));
    assertion( _h(d)>0.0 );
  }

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::endIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );

  solverState.setUMeasurements(
    _solver.getSolutionInMaximumNorm(),
    _solver.getSolutionInMaximumNormOfGlobalSimulation(),
    _solver.getSolutionUpdateInMaximumNorm(),
    _solver.getSolutionInHNorm(),
    _solver.getSolutionInHNormOfGlobalSimulation(),
    _solver.getSolutionUpdateInHNorm()
  );
  solverState.incNumberOfStencilUpdates( _solver.getNumberOfStencilUpdates() );

  logTraceOutWith1Argument( "endIteration()", solverState );
}

