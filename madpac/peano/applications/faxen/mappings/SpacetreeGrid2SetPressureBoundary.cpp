#include "peano/applications/faxen/mappings/SpacetreeGrid2SetPressureBoundary.h"


tarch::logging::Log peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::_log( "peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary" );


peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::SpacetreeGrid2SetPressureBoundary() {
  logTraceIn( "SpacetreeGrid2SetPressureBoundary()" );
  // @todo Insert your code here
  logTraceOut( "SpacetreeGrid2SetPressureBoundary()" );
}


peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::~SpacetreeGrid2SetPressureBoundary() {
  logTraceIn( "~SpacetreeGrid2SetPressureBoundary()" );
  // @todo Insert your code here
  logTraceOut( "~SpacetreeGrid2SetPressureBoundary()" );
}
  
  
void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::createInnerVertex(
      peano::applications::faxen::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createInnerVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex(...)", fineGridVertex );
}



void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::createHangingVertex(
      peano::applications::faxen::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createHangingVertex(...)", fineGridVertex );
}


void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::destroyHangingVertex(
      const peano::applications::faxen::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyHangingVertex(...)", fineGridVertex );
}


void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::createBoundaryVertex(
      peano::applications::faxen::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createBoundaryVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex(...)", fineGridVertex );
}


void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::destroyVertex(
      const peano::applications::faxen::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::faxen::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyVertex(...)", fineGridVertex );
}


void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::createCell(
      peano::applications::faxen::SpacetreeGridCell&                 fineGridCell,
      peano::applications::faxen::SpacetreeGridVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "createCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell(...)", fineGridCell );
}


void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::destroyCell(
      const peano::applications::faxen::SpacetreeGridCell&           fineGridCell,
      peano::applications::faxen::SpacetreeGridVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::SpacetreeGridVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::faxen::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "destroyCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyCell(...)", fineGridCell );
}


void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::touchVertexFirstTime(
      peano::applications::faxen::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::mergeWithNeighbour(
  peano::applications::faxen::SpacetreeGridVertex& vertex, 
  const peano::applications::faxen::SpacetreeGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::touchVertexLastTime(
      peano::applications::faxen::SpacetreeGridVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::prepareSendToNeighbour(
  peano::applications::faxen::SpacetreeGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::beginIteration(
  peano::applications::faxen::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::endIteration(
  peano::applications::faxen::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration(State)", solverState);
}
 
    
void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::enterCell(
      peano::applications::faxen::SpacetreeGridCell&                 fineGridCell,
      peano::applications::faxen::SpacetreeGridVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
}



void peano::applications::faxen::mappings::SpacetreeGrid2SetPressureBoundary::leaveCell(
      peano::applications::faxen::SpacetreeGridCell&           fineGridCell,
      peano::applications::faxen::SpacetreeGridVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::faxen::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "leaveCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "leaveCell(...)", fineGridCell );
}
