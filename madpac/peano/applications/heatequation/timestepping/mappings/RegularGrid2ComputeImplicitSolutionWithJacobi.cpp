#include "peano/applications/heatequation/timestepping/mappings/RegularGrid2ComputeImplicitSolutionWithJacobi.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::_log( "peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi" );


peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::RegularGrid2ComputeImplicitSolutionWithJacobi() {}


peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::~RegularGrid2ComputeImplicitSolutionWithJacobi() {}

  
void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {}



void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const  vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&                    cell,
  const peano::kernel::gridinterface::VertexEnumerator&                                enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  tarch::la::Vector<TWO_POWER_D,double> residual =
    peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readResidual(enumerator,vertices);

  residual +=
    _solver.computeResidualContributionForImplicitEulerStepFromSolution(
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readU(enumerator,vertices),
      enumerator.getCellSize(),
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readStencil(enumerator,vertices)
    );

  residual +=
    _solver.computeResidualContributionForImplicitEulerStepFromRhs(
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readRhs(enumerator,vertices),
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readOldU(enumerator,vertices),
      enumerator.getCellSize()
    );

  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::writeResidual(
    enumerator,
    vertices,
    residual
  );

  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
  int fromRank) {
  vertex.incResidual( neighbour );
}
#endif

void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  vertex.clearResidual();

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );

  vertex.setTemperature(
    _solver.getNewTemperatureForImplicitEulerStep(
      _h,
      vertex.getResidual(),
      vertex.getStencil(),
      vertex.getTemperature()
    )
  );

  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  _solver.clearMeasurements();
  _solver.setTimeStepSize(solverState.getTimeStepSize());
  _solver.setOmega( solverState.getRelaxationFactor() );

  _h = solverState.getMaximumMeshWidth();
  for (int d=0; d<DIMENSIONS; d++) {
    assertionNumericalEquals(solverState.getMaximumMeshWidth()(d),solverState.getMinimumMeshWidth()(d));
    assertion( _h(d)>0.0 );
  }

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeImplicitSolutionWithJacobi::endIteration(
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

