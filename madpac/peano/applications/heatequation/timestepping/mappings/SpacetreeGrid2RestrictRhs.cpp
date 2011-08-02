#include "peano/applications/heatequation/timestepping/mappings/SpacetreeGrid2RestrictRhs.h"
#include "peano/utils/Loop.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::_log( "peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs" );


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::SpacetreeGrid2RestrictRhs() {}


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::~SpacetreeGrid2RestrictRhs() {}
  
  
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::createInnerVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}



void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::createHangingVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::destroyHangingVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::createBoundaryVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::destroyVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::createCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::destroyCell(
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {
  if (coarseGridVerticesEnumerator.getLevel()+1==_activeLevel-1) {
    logTraceInWith8Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex, coarseGridVerticesEnumerator.getLevel(), _activeLevel );

    #ifdef SharedTBB
    CoarseGridAccessSemaphore::scoped_lock localLock(_coarseGridAccessSemaphore);
    #elif SharedOMP
    assertionMsg( false, "here should be a critical section, but I don't know how to implement this!" );
    #endif

    fineGridVertex.setNewRhs(0.0);

    logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
  }
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::touchVertexLastTime(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&         fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                             fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                             fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                   coarseGridVerticesEnumerator,
  peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                fineGridPositionOfVertex
) {
  if (
    coarseGridVerticesEnumerator.getLevel()+1==_activeLevel &&
    fineGridVertex.isInside()
  ) {
    logTraceInWith8Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex, coarseGridVerticesEnumerator.getLevel(), _activeLevel );

    #ifdef SharedTBB
    CoarseGridAccessSemaphore::scoped_lock localLock(_coarseGridAccessSemaphore);
    #elif SharedOMP
    assertionMsg( false, "here should be a critical section, but I don't know how to implement this!" );
    #endif

    tarch::la::Vector<TWO_POWER_D,double> coarseGridValues =
      SpacetreeGridSingleStepVertex::readRhs(coarseGridVerticesEnumerator,coarseGridVertices);

    dfor2(k)
      coarseGridValues(kScalar) +=
        fineGridVertex.getResidual()*
        _multigrid.computeContributionWeightOfInterGridTransfer(
          k,
          coarseGridVertices[ coarseGridVerticesEnumerator(k) ].getRestrictionStencil(),
          fineGridPositionOfVertex
        );
    enddforx

    logDebug( "touchVertexLastTime(...)", "restricted residual = " << coarseGridValues );

    SpacetreeGridSingleStepVertex::writeRhs(coarseGridVerticesEnumerator,coarseGridVertices,coarseGridValues);

    logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
  }
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::beginIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );

  _activeLevel = solverState.getActiveLevel();
  _multigrid.clearNumberOfStencilUpdates();

  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::endIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );

  solverState.moveActiveLevelToCoarserGrid();
  solverState.incNumberOfStencilUpdates(_multigrid.getNumberOfStencilUpdates());

  logTraceOutWith1Argument( "endIteration(State)", solverState);
}
 
    
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::enterCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}



void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2RestrictRhs::leaveCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {}
