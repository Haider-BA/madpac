#include "peano/applications/diffusionequation/explicittimestepping/mappings/RegularGrid2PerformExplitEulerTimeStep.h"
#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"


tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::_log( "peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep" );


peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::RegularGrid2PerformExplitEulerTimeStep():
  _solver() {
}


peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::~RegularGrid2PerformExplitEulerTimeStep() {
}

  
void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::createCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}



void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::destroyCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::handleCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex* const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  tarch::la::Vector<TWO_POWER_D,double> rhs;
  tarch::la::Vector<TWO_POWER_D,double> u;

  rhs = peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::readRhs(enumerator,vertices);
  u   = peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::readU(enumerator,vertices);

  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::writeResidual(
    enumerator,
    vertices,
    peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::readResidual(enumerator,vertices) +
    _solver.computeResidualContributionForExplicitEulerStep(
      rhs,u,
      enumerator.getCellSize(),
      peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::readStencil(enumerator,vertices)
    )
  );

  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::mergeWithNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex,
  const peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& neighbour,
  int fromRank
) {
  if (vertex.isInside()) {
    assertionNumericalEquals4( vertex.getRhs(), neighbour.getRhs(), vertex, neighbour, fromRank, tarch::parallel::Node::getInstance().getRank() );

    double neighbourResidual = neighbour.getResidual() /_solver.getTimeStepSize();
    vertex.setTemperature(
      _solver.getNewTemperatureForExplicitEulerStep( _h, neighbourResidual, vertex.getTemperature() )
    );
  }
  else {
    assertionNumericalEquals4(
      vertex.getTemperature(),
      neighbour.getTemperature(),
      vertex, neighbour, fromRank, tarch::parallel::Node::getInstance().getRank()
    );
  }
}
#endif

void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::touchVertexFirstTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  vertex.clearResidual();

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::touchVertexLastTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );

  if (vertex.isInside()) {
    vertex.setTemperature(
      _solver.getNewTemperatureForExplicitEulerStep( _h, vertex.getResidual(), vertex.getTemperature() )
    );
    vertex.setNewRhs(scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getRhs(x));
  }

  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::prepareSendToNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex
) {
  vertex.scaleResidual( _solver.getTimeStepSize() );
}
#endif

void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::beginIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
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


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PerformExplitEulerTimeStep::endIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
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
