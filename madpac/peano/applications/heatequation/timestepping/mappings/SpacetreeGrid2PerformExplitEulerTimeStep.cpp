#include "peano/applications/heatequation/timestepping/mappings/SpacetreeGrid2PerformExplitEulerTimeStep.h"
#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::_log( "peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep" );


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::SpacetreeGrid2PerformExplitEulerTimeStep():
  _solver() {}


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::~SpacetreeGrid2PerformExplitEulerTimeStep() {}
  
  
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::createInnerVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}



void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::createHangingVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::destroyHangingVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::createBoundaryVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::destroyVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::createCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::destroyCell(
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::touchVertexFirstTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  fineGridVertex.clearResidual();

  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&        vertex,
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&  neighbour,
  int fromRank) {
  assertionMsg( false, "not implemented yet " );
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::touchVertexLastTime(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&         fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                             fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                             fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                   coarseGridVerticesEnumerator,
  peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  if (fineGridVertex.isInside()) {
    fineGridVertex.setNewOldTemperature(
      _solver.getNewTemperatureForExplicitEulerStep( fineGridH, fineGridVertex.getResidual(), fineGridVertex.getOldTemperature() )
    );
    fineGridVertex.setNewRhs(scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getRhs(fineGridX));
  }

  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex
) {
  assertionMsg( false, "not implemented yet " );
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::beginIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );

  scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().setTime( solverState.getTime() );
  _solver.setTimeStepSize(solverState.getTimeStepSize());
  _solver.clearMeasurements();

  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::endIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  solverState.setUMeasurements(
    _solver.getSolutionInMaximumNorm(),
    _solver.getSolutionInMaximumNormOfGlobalSimulation(),
    _solver.getSolutionUpdateInMaximumNorm(),
    _solver.getSolutionInHNorm(),
    _solver.getSolutionInHNormOfGlobalSimulation(),
    _solver.getSolutionUpdateInHNorm()
  );
  solverState.incNumberOfStencilUpdates( _solver.getNumberOfStencilUpdates() );
}
 
    
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::enterCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                                         fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );

  tarch::la::Vector<TWO_POWER_D,double> rhs;
  tarch::la::Vector<TWO_POWER_D,double> u;

  rhs = peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readRhs(fineGridVerticesEnumerator,fineGridVertices);
  u   = peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readOldU(fineGridVerticesEnumerator,fineGridVertices);

  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::writeResidual(
    fineGridVerticesEnumerator,
    fineGridVertices,
    peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readResidual(fineGridVerticesEnumerator,fineGridVertices) +
    _solver.computeResidualContributionForExplicitEulerStep(
      rhs,u,
      fineGridVerticesEnumerator.getCellSize(),
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readStencil(fineGridVerticesEnumerator,fineGridVertices)
    )
  );

  logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
}



void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PerformExplitEulerTimeStep::leaveCell(
  peano::applications::heatequation::timestepping::SpacetreeGridCell&                     fineGridCell,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                   fineGridVerticesEnumerator,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                   coarseGridVerticesEnumerator,
  peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                fineGridPositionOfCell
) {}
