#include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2InitializeAndSetBoundaryNSE.h"

#include <limits>


peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::SpacetreeGrid2InitializeAndSetBoundaryNSE() {
}


peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::~SpacetreeGrid2InitializeAndSetBoundaryNSE() {
}



void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::createHangingVertex(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&     fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const   coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&      coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&       coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                   fineGridPositionOfVertex
) {

  _map2InitializeNSE.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ExploreBoundaries.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::destroyHangingVertex(
      const peano::applications::faxen::lbf::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2InitializeNSE.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ExploreBoundaries.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::createInnerVertex(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2InitializeNSE.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ExploreBoundaries.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::createBoundaryVertex(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2InitializeNSE.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ExploreBoundaries.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::destroyVertex(
      const peano::applications::faxen::lbf::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2InitializeNSE.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ExploreBoundaries.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::createCell(
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2InitializeNSE.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );
  _map2ExploreBoundaries.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::destroyCell(
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2InitializeNSE.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );
  _map2ExploreBoundaries.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::mergeWithNeighbour(
  peano::applications::faxen::lbf::SpacetreeGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::SpacetreeGridBlockVertex& neighbour, 
  int fromRank) {
   _map2InitializeNSE.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2ExploreBoundaries.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::touchVertexFirstTime(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2InitializeNSE.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ExploreBoundaries.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::touchVertexLastTime(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2InitializeNSE.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ExploreBoundaries.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::prepareSendToNeighbour(
  peano::applications::faxen::lbf::SpacetreeGridBlockVertex& vertex
) {
   _map2InitializeNSE.prepareSendToNeighbour(vertex);
   _map2ExploreBoundaries.prepareSendToNeighbour(vertex);

}
#endif



void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::beginIteration(
  peano::applications::faxen::lbf::SpacetreeGridBlockState&  solverState
) {

  _map2InitializeNSE.beginIteration( solverState );
  _map2ExploreBoundaries.beginIteration( solverState );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::endIteration(
  peano::applications::faxen::lbf::SpacetreeGridBlockState&  solverState
) {

  _map2InitializeNSE.endIteration( solverState );
  _map2ExploreBoundaries.endIteration( solverState );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::enterCell(
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2InitializeNSE.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );
  _map2ExploreBoundaries.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2InitializeAndSetBoundaryNSE::leaveCell(
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {

  _map2InitializeNSE.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );
  _map2ExploreBoundaries.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}
