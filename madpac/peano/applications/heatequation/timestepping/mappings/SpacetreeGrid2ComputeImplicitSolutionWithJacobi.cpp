#include "peano/applications/heatequation/timestepping/mappings/SpacetreeGrid2ComputeImplicitSolutionWithJacobi.h"
#include "peano/kernel/spacetreegrid/aspects/VertexStateAnalysis.h"
#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"
#include "peano/toolbox/stencil/StencilFactory.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::_log( "peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi" );


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::SpacetreeGrid2ComputeImplicitSolutionWithJacobi() {}


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::~SpacetreeGrid2ComputeImplicitSolutionWithJacobi() {}
  
  
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::createInnerVertex(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::createHangingVertex(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {
  logTraceInWith1Argument( "createHangingVertex(...)", fineGridVertex );

  fineGridVertex.initialiseHangingNode();

  _solver.interpolateWithDLinearShapeFunctions(
    fineGridVertex,
    coarseGridVertices,
    coarseGridVerticesEnumerator,
    fineGridPositionOfVertex
  );

  logTraceOutWith1Argument( "createHangingVertex(...)", fineGridVertex );
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::destroyHangingVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::createBoundaryVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  fineGridVertex.initialiseBoundaryVertex(
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getInitialValue(fineGridX)
  );
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::destroyVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::createCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::destroyCell(
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  fineGridVertex.clearResidual();

  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::touchVertexLastTime(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&         fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                             fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                             fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                   coarseGridVerticesEnumerator,
  peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  if (fineGridVertex.getRefinementControl()==peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::Records::Unrefined) {
    fineGridVertex.setTemperature(
      _solver.getNewTemperatureForImplicitEulerStep(
        fineGridH,
        fineGridVertex.getResidual(),
        fineGridVertex.getStencil(),
        fineGridVertex.getTemperature()
      )
    );
  }

  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::beginIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );

  _solver.clearMeasurements();
  _solver.setTimeStepSize(solverState.getTimeStepSize());
  _solver.setOmega( solverState.getRelaxationFactor() );

  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::endIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );

  solverState.setUMeasurements(
    _solver.getSolutionInMaximumNorm(),
    _solver.getSolutionInMaximumNormOfGlobalSimulation(),
    _solver.getSolutionUpdateInMaximumNorm(),
    _solver.getSolutionInHNorm(),
    _solver.getSolutionInHNormOfGlobalSimulation(),
    _solver.getSolutionUpdateInHNorm()
  );

  solverState.incNumberOfStencilUpdates( _solver.getNumberOfStencilUpdates() );

  logTraceOutWith1Argument( "endIteration(State)", solverState);
}
 
    
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::enterCell(
  peano::applications::heatequation::timestepping::SpacetreeGridCell&                           fineGridCell,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         fineGridVerticesEnumerator,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfCell
) {
  bool belongsToFineGrid =
    !fineGridCell.isRefined();
  bool isCoarserLevelButIsAdjacentToFineGrid =
    fineGridCell.isRefined() &&
    peano::kernel::spacetreegrid::aspects::VertexStateAnalysis::doesOneVertexCarryRefinementFlag(fineGridVertices,fineGridVerticesEnumerator,peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::Records::Unrefined);
  if ( belongsToFineGrid || isCoarserLevelButIsAdjacentToFineGrid ) {
    logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
    _solver.computeResidualOnCell(fineGridVertices,fineGridVerticesEnumerator);
    logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
  }
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi::leaveCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {}
