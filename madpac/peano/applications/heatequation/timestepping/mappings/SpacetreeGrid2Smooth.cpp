#include "peano/applications/heatequation/timestepping/mappings/SpacetreeGrid2Smooth.h"
#include "peano/kernel/spacetreegrid/aspects/VertexStateAnalysis.h"
#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::_log( "peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth" );


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::SpacetreeGrid2Smooth() {
}


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::~SpacetreeGrid2Smooth() {
}
  
  
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::createInnerVertex(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {
  _solver.interpolateWithDLinearShapeFunctions(
    fineGridVertex,
    coarseGridVertices,
    coarseGridVerticesEnumerator,
    fineGridPositionOfVertex
  );

  fineGridVertex.initialiseInnerVertex(
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getThermalDiffusivity(fineGridX),
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getRhs(fineGridX),
    fineGridH
  );
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::createHangingVertex(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {
  if (_activeLevel >= coarseGridVerticesEnumerator.getLevel()+1) {
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
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::destroyHangingVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::createBoundaryVertex(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {
  fineGridVertex.initialiseBoundaryVertex(
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getInitialValue(fineGridX)
  );

  if (_activeLevel > coarseGridVerticesEnumerator.getLevel()+1) {
    _solver.computeHierarchicalSurplus(
      fineGridVertex,
      coarseGridVertices,
      coarseGridVerticesEnumerator,
      fineGridPositionOfVertex
    );
  }
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::destroyVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::createCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::destroyCell(
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::touchVertexFirstTime(
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
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::touchVertexLastTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  bool isCurrentActiveGrid =
    coarseGridVerticesEnumerator.getLevel()+1==_activeLevel &&
    fineGridVertex.isInside();
  bool isCoarserLevelThanCurrentFineGridButBelongsToFineGrid =
    fineGridVertex.getRefinementControl()==SpacetreeGridSingleStepVertex::Records::Unrefined &&
    coarseGridVerticesEnumerator.getLevel()+1<_activeLevel &&
    fineGridVertex.isInside();
  if ( isCurrentActiveGrid || isCoarserLevelThanCurrentFineGridButBelongsToFineGrid ) {
    logTraceInWith9Arguments( "touchVertexLastTime(...)", isCurrentActiveGrid, isCoarserLevelThanCurrentFineGridButBelongsToFineGrid, _activeLevel, fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

    fineGridVertex.setTemperature(
      _solver.getNewTemperatureForImplicitEulerStep(
        fineGridH,
        fineGridVertex.getResidual(),
        fineGridVertex.getStencil(),
        fineGridVertex.getTemperature()
      )
    );
    logTraceOutWith2Arguments( "touchVertexLastTime(...)", fineGridVertex, _activeLevel );
  }
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::beginIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );

  _activeLevel = solverState.getActiveLevel();

  _solver.clearMeasurements();
  _solver.setTimeStepSize(solverState.getTimeStepSize());
  _solver.setOmega( solverState.getRelaxationFactor() );

  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::endIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );

  if (solverState.isActiveLevelFinestLevel()) {
    solverState.setUMeasurements(
      _solver.getSolutionInMaximumNorm(),
      _solver.getSolutionInMaximumNormOfGlobalSimulation(),
      _solver.getSolutionUpdateInMaximumNorm(),
      _solver.getSolutionInHNorm(),
      _solver.getSolutionInHNormOfGlobalSimulation(),
      _solver.getSolutionUpdateInHNorm()
    );
  }

  solverState.incNumberOfStencilUpdates( _solver.getNumberOfStencilUpdates() );

  logTraceOutWith1Argument( "endIteration(State)", solverState);
}
 
    
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::enterCell(
  peano::applications::heatequation::timestepping::SpacetreeGridCell&                           fineGridCell,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         fineGridVerticesEnumerator,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfCell
) {
  bool isCurrentActiveGrid =
    fineGridVerticesEnumerator.getLevel()==_activeLevel;
  bool isCoarserLevelThanCurrentFineGridButBelongsToFineGrid =
    !fineGridCell.isRefined() &&
    fineGridVerticesEnumerator.getLevel()<_activeLevel;
  bool isCoarserLevelThanCurrentFineGridButIsAdjacentToFineGrid =
    fineGridCell.isRefined() &&
    peano::kernel::spacetreegrid::aspects::VertexStateAnalysis::doesOneVertexCarryRefinementFlag(fineGridVertices,fineGridVerticesEnumerator,peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::Records::Unrefined) &&
    fineGridVerticesEnumerator.getLevel()<_activeLevel;
  if ( isCurrentActiveGrid || isCoarserLevelThanCurrentFineGridButBelongsToFineGrid || isCoarserLevelThanCurrentFineGridButIsAdjacentToFineGrid ) {
    logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
    #ifdef Debug
    dfor2(k)
      logDebug( "enterCell(...)", "  - vertex " << kScalar << "=" << fineGridVertices[fineGridVerticesEnumerator(k)] );
    enddforx
    #endif

    _solver.computeResidualOnCell(fineGridVertices,fineGridVerticesEnumerator);

    logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
    #ifdef Debug
    dfor2(k)
      logDebug( "enterCell(...)", "  - vertex " << kScalar << "=" << fineGridVertices[fineGridVerticesEnumerator(k)] );
    enddforx
    #endif
  }
}



void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Smooth::leaveCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {}
