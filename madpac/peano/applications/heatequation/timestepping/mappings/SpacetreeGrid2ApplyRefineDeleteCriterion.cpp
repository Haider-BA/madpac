#include "peano/applications/heatequation/timestepping/mappings/SpacetreeGrid2ApplyRefineDeleteCriterion.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::_log( "peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion" );


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::SpacetreeGrid2ApplyRefineDeleteCriterion():
  _surplusCalculator(0.1,0.1,0.1,0.1) {
}


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::~SpacetreeGrid2ApplyRefineDeleteCriterion() {}
  
  
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::createInnerVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
}



void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::createHangingVertex(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {
  fineGridVertex.clearSurplusMeasurements();
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::destroyHangingVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::createBoundaryVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::destroyVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::createCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::destroyCell(
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  fineGridVertex.clearSurplusMeasurements();

  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::touchVertexLastTime(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&         fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                             fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                             fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                   coarseGridVerticesEnumerator,
  peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  if ( fineGridVertex.isInside() ) {
    switch (
      _surplusCalculator.analyse(
        fineGridVertex.getLinearSurplus(),
        fineGridVertex.getResidual(),
        fineGridVertex.getRefinementControl()==peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::Records::Refined,
        fineGridH
      )
    ) {
      case peano::toolbox::solver::SurplusCalculator::Delete:
        fineGridVertex.erase();
        break;
      case peano::toolbox::solver::SurplusCalculator::Refine:
        fineGridVertex.refine();
        break;
      case peano::toolbox::solver::SurplusCalculator::NoAction:
        break;
    }
  }
  // boundary block
  else if (
    fineGridVertex.getRefinementControl()==peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::Records::Unrefined &&
    fineGridH(0) > _surplusCalculator.getMaximumMeshWidth()
  ) {
    fineGridVertex.refine();
  }

  // project up to coarser level
  if (
    fineGridVertex.isInside()
  ) {
    peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::writeLinearSurplus(
      coarseGridVerticesEnumerator,
      coarseGridVertices,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readLinearSurplus(
        coarseGridVerticesEnumerator,
        coarseGridVertices
      ) +
      _surplusCalculator.getLinearSurplusContributionFromFineGrid(
        fineGridVertex.getLinearSurplus(),
        fineGridVertex.getRefinementControl()==peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::Records::Unrefined
      )
    );
  }

  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::beginIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );

  _surplusCalculator.setMinMaxMeshWidth(solverState.getMinimalAllowedMeshSize(),solverState.getMaximalAllowedMeshSize());
  _activeLevel     = solverState.getActiveLevel();
  _multigrid.clearNumberOfStencilUpdates();
  _surplusCalculator.clearMeasurements();

  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::endIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );
  solverState.incNumberOfStencilUpdates( _multigrid.getNumberOfStencilUpdates() );
  logTraceOutWith1Argument( "endIteration(State)", solverState);
}
 
    
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::enterCell(
  peano::applications::heatequation::timestepping::SpacetreeGridCell&                           fineGridCell,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         fineGridVerticesEnumerator,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );

  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::writeLinearSurplus(
    fineGridVerticesEnumerator,
    fineGridVertices,
    _surplusCalculator.getNewLinearSurplus(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readU(fineGridVerticesEnumerator,fineGridVertices),
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readLinearSurplus(fineGridVerticesEnumerator,fineGridVertices)
    )
  );

  logTraceOut( "enterCell(...)" );
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ApplyRefineDeleteCriterion::leaveCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {}
