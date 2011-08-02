#include "peano/applications/puregrid/mappings/SpacetreeGrid2PerformOneRefinement.h"

#include "peano/geometry/services/GeometryService.h"

tarch::logging::Log peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::_log( "peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement" );


peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::SpacetreeGrid2PerformOneRefinement() {
  logTraceIn( "SpacetreeGrid2PerformOneRefinement()" );
  logTraceOut( "SpacetreeGrid2PerformOneRefinement()" );
}


peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::~SpacetreeGrid2PerformOneRefinement() {
  logTraceIn( "~SpacetreeGrid2PerformOneRefinement()" );
  logTraceOut( "~SpacetreeGrid2PerformOneRefinement()" );
}
  
  
void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::createInnerVertex(
  peano::applications::puregrid::SpacetreeGridVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                       fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                       fineGridH,
  peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
  const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfVertex
) {
}


void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::createHangingVertex(
  peano::applications::puregrid::SpacetreeGridVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                       fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                       fineGridH,
  peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
  const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfVertex
) {
}


void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::destroyHangingVertex(
  const peano::applications::puregrid::SpacetreeGridVertex&   fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                 fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                 fineGridH,
  peano::applications::puregrid::SpacetreeGridVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&       coarseGridVerticesEnumerator,
  peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                    fineGridPositionOfVertex
) {
}


void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::createBoundaryVertex(
  peano::applications::puregrid::SpacetreeGridVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                       fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                       fineGridH,
  peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
  const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfVertex
) {
}


void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::destroyVertex(
  const peano::applications::puregrid::SpacetreeGridVertex&         fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                       fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                       fineGridH,
  peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
  const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfVertex
) {
}


void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::createCell(
  peano::applications::puregrid::SpacetreeGridCell&                 fineGridCell,
  peano::applications::puregrid::SpacetreeGridVertex *              fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
  peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
  const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
}


void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::destroyCell(
  const peano::applications::puregrid::SpacetreeGridCell&           fineGridCell,
  peano::applications::puregrid::SpacetreeGridVertex const * const  fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
  peano::applications::puregrid::SpacetreeGridVertex * const        coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
  peano::applications::puregrid::SpacetreeGridCell&                 coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
}


void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::touchVertexFirstTime(
      peano::applications::puregrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                       fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                       fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::mergeWithNeighbour(
  peano::applications::puregrid::SpacetreeGridVertex& vertex, 
  const peano::applications::puregrid::SpacetreeGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::touchVertexLastTime(
  peano::applications::puregrid::SpacetreeGridVertex&         fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                 fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                 fineGridH,
  peano::applications::puregrid::SpacetreeGridVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&       coarseGridVerticesEnumerator,
  peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                    fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  #ifdef Dim2
  const double RefinementTreshold = 0.00005 * 0.00005;
  #elif Dim3
  const double RefinementTreshold = 0.001 * 0.001;
  #endif

  if (
    _numberOfAllowedRefinements>0 &&
    fineGridVertex.getRefinementControl()==peano::applications::puregrid::SpacetreeGridVertex::Records::Unrefined &&
    !peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyInside(fineGridX,fineGridH) &&
    tarch::la::volume(fineGridH)>RefinementTreshold
  ) {
    fineGridVertex.refine();
    _numberOfAllowedRefinements--;
  }

  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}


#ifdef Parallel
void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::prepareSendToNeighbour(
  peano::applications::puregrid::SpacetreeGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::beginIteration(
  peano::applications::puregrid::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );
  _numberOfAllowedRefinements = solverState.getMaximumNumberOfRefinements();
  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::endIteration(
  peano::applications::puregrid::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );

  assertion1(
    _numberOfAllowedRefinements == solverState.getMaximumNumberOfRefinements() ||
    !solverState.isGridStationary(),
    solverState.toString()
  );

  logTraceOutWith1Argument( "endIteration(State)", solverState);
}
 
    
void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::enterCell(
      peano::applications::puregrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::puregrid::SpacetreeGridVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             fineGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
}


void peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement::leaveCell(
  peano::applications::puregrid::SpacetreeGridCell&           fineGridCell,
  peano::applications::puregrid::SpacetreeGridVertex * const  fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&       fineGridVerticesEnumerator,
  peano::applications::puregrid::SpacetreeGridVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&       coarseGridVerticesEnumerator,
  peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                    fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "leaveCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  logTraceOutWith1Argument( "leaveCell(...)", fineGridCell );
}
