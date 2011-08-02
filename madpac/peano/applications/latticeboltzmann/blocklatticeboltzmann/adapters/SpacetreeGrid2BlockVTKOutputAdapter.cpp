#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/SpacetreeGrid2BlockVTKOutputAdapter.h"

#include <limits>


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::SpacetreeGrid2BlockVTKOutputAdapter() {
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::~SpacetreeGrid2BlockVTKOutputAdapter() {
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::createHangingVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&     fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const   coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&      coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&       coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                   fineGridPositionOfVertex
) {

  _map2BlockVTKOutput.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::destroyHangingVertex(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2BlockVTKOutput.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::createInnerVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2BlockVTKOutput.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::createBoundaryVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2BlockVTKOutput.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::destroyVertex(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2BlockVTKOutput.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::createCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2BlockVTKOutput.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::destroyCell(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2BlockVTKOutput.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::mergeWithNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& vertex,
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& neighbour, 
  int fromRank) {
   _map2BlockVTKOutput.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::touchVertexFirstTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2BlockVTKOutput.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::touchVertexLastTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2BlockVTKOutput.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::prepareSendToNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& vertex
) {
   _map2BlockVTKOutput.prepareSendToNeighbour(vertex);

}
#endif



void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::beginIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState&  solverState
) {

  _map2BlockVTKOutput.beginIteration( solverState );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::endIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState&  solverState
) {

  _map2BlockVTKOutput.endIteration( solverState );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::enterCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2BlockVTKOutput.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2BlockVTKOutputAdapter::leaveCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {

  _map2BlockVTKOutput.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}
