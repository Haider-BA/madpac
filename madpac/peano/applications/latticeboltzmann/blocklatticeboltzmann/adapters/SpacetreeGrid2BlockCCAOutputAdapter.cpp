#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/SpacetreeGrid2BlockCCAOutputAdapter.h"

#include <limits>


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::SpacetreeGrid2BlockCCAOutputAdapter() {
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::~SpacetreeGrid2BlockCCAOutputAdapter() {
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::createHangingVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&     fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const   coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&      coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&       coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                   fineGridPositionOfVertex
) {

  _map2BlockCCAOutput.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::destroyHangingVertex(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2BlockCCAOutput.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::createInnerVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2BlockCCAOutput.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::createBoundaryVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2BlockCCAOutput.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::destroyVertex(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2BlockCCAOutput.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::createCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2BlockCCAOutput.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::destroyCell(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2BlockCCAOutput.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::mergeWithNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& vertex,
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& neighbour, 
  int fromRank) {
   _map2BlockCCAOutput.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::touchVertexFirstTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2BlockCCAOutput.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::touchVertexLastTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2BlockCCAOutput.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::prepareSendToNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& vertex
) {
   _map2BlockCCAOutput.prepareSendToNeighbour(vertex);

}
#endif



void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::beginIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState&  solverState
) {

  _map2BlockCCAOutput.beginIteration( solverState );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::endIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState&  solverState
) {

  _map2BlockCCAOutput.endIteration( solverState );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::enterCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2BlockCCAOutput.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockCCAOutputAdapter::leaveCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {

  _map2BlockCCAOutput.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}
