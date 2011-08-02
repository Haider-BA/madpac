#include "peano/applications/heatequation/timestepping/mappings/SpacetreeGrid2CoarseSolution.h"
#include "peano/kernel/spacetreegrid/SingleLevelEnumerator.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::_log( "peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution" );


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::SpacetreeGrid2CoarseSolution() {}


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::~SpacetreeGrid2CoarseSolution() {}
  
  
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::createInnerVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}



void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::createHangingVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::destroyHangingVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::createBoundaryVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::destroyVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::createCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::destroyCell(
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::touchVertexFirstTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::touchVertexLastTime(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&         fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                             fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                             fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                   coarseGridVerticesEnumerator,
  peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                fineGridPositionOfVertex
) {
  if (
    coarseGridVerticesEnumerator.getLevel()<_activeLevel &&
    peano::kernel::spacetreegrid::SingleLevelEnumerator::isVertexPositionAtCoarseVertexsPosition(fineGridPositionOfVertex)
  ) {
    logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

    #ifdef SharedTBB
    CoarseGridAccessSemaphore::scoped_lock localLock(_coarseGridAccessSemaphore);
    #elif SharedOMP
    assertionMsg( false, "here should be a critical section, but I don't know how to implement this!" );
    #endif

    coarseGridVertices[
      coarseGridVerticesEnumerator(
        peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPositionOnCoarserLevel(fineGridPositionOfVertex)
      )
    ].setTemperature(
      fineGridVertex.getTemperature()
    );

    logDebug( "touchVertexLastTime(...)", "reset value of " << coarseGridVertices[ coarseGridVerticesEnumerator( peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPositionOnCoarserLevel(fineGridPositionOfVertex) ) ] );
    logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
  }
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::beginIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );

  _activeLevel = solverState.getActiveLevel();

  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::endIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {}
 
    
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::enterCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2CoarseSolution::leaveCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {}
