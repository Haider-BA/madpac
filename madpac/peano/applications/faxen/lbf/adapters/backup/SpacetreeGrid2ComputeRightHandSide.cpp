#include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2ComputeRightHandSide.h"

#include <limits>


peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::SpacetreeGrid2ComputeRightHandSide() {
}


peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::~SpacetreeGrid2ComputeRightHandSide() {
}



void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::createHangingVertex(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&     fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const   coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&      coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&       coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                   fineGridPositionOfVertex
) {

  _map2ComputeRightHandSide.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::destroyHangingVertex(
      const peano::applications::faxen::lbf::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2ComputeRightHandSide.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::createInnerVertex(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2ComputeRightHandSide.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::createBoundaryVertex(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2ComputeRightHandSide.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::destroyVertex(
      const peano::applications::faxen::lbf::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2ComputeRightHandSide.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::createCell(
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2ComputeRightHandSide.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::destroyCell(
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2ComputeRightHandSide.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::mergeWithNeighbour(
  peano::applications::faxen::lbf::SpacetreeGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::SpacetreeGridBlockVertex& neighbour, 
  int fromRank) {
   _map2ComputeRightHandSide.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::touchVertexFirstTime(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2ComputeRightHandSide.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::touchVertexLastTime(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2ComputeRightHandSide.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::prepareSendToNeighbour(
  peano::applications::faxen::lbf::SpacetreeGridBlockVertex& vertex
) {
   _map2ComputeRightHandSide.prepareSendToNeighbour(vertex);

}
#endif



void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::beginIteration(
  peano::applications::faxen::lbf::SpacetreeGridBlockState&  solverState
) {

  _map2ComputeRightHandSide.beginIteration( solverState );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::endIteration(
  peano::applications::faxen::lbf::SpacetreeGridBlockState&  solverState
) {

  _map2ComputeRightHandSide.endIteration( solverState );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::enterCell(
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2ComputeRightHandSide.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2ComputeRightHandSide::leaveCell(
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {

  _map2ComputeRightHandSide.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}
