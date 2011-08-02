#include "peano/applications/heatequation/timestepping/mappings/SpacetreeGrid2Prolong.h"
#include "peano/utils/Loop.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::_log( "peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong" );


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::SpacetreeGrid2Prolong() {}


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::~SpacetreeGrid2Prolong() {}
  
  
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::createInnerVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}



void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::createHangingVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::destroyHangingVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::createBoundaryVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::destroyVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::createCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::destroyCell(
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {
  if (coarseGridVerticesEnumerator.getLevel()+1==_activeLevel ) {
    logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

    tarch::la::Vector<TWO_POWER_D,double> coarseGridValues = SpacetreeGridSingleStepVertex::readU(coarseGridVerticesEnumerator,coarseGridVertices);

    dfor2(k)
      const double contribution =
        coarseGridValues(kScalar) *
        _multigrid.computeContributionWeightOfInterGridTransfer(
          k,
          coarseGridVertices[ coarseGridVerticesEnumerator(k) ].getProlongationStencil(),
          fineGridPositionOfVertex
        );
      fineGridVertex.setTemperature( fineGridVertex.getTemperature()+ contribution );
      logDebug( "touchVertexFirstTime(...)", "contribution from parent " << k << "=" << contribution );
    enddforx

    logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
  }
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::touchVertexLastTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::beginIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );

  solverState.moveActiveLevelToFinerGrid();
  _activeLevel = solverState.getActiveLevel();
  _multigrid.clearNumberOfStencilUpdates();

  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::endIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  solverState.incNumberOfStencilUpdates( _multigrid.getNumberOfStencilUpdates() );
}
 
    
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::enterCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}



void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2Prolong::leaveCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {}
