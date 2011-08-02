#include "peano/applications/faxen/lbf/adapters/SpacetreeGrid2SORStep.h"

#include <limits>


peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::SpacetreeGrid2SORStep() {
}


peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::~SpacetreeGrid2SORStep() {
}



void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::createHangingVertex(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&     fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const   coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&      coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&       coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                   fineGridPositionOfVertex
) {

  _map2SORStep.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::destroyHangingVertex(
      const peano::applications::faxen::lbf::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2SORStep.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::createInnerVertex(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2SORStep.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::createBoundaryVertex(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2SORStep.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::destroyVertex(
      const peano::applications::faxen::lbf::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2SORStep.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::createCell(
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2SORStep.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::destroyCell(
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2SORStep.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::mergeWithNeighbour(
  peano::applications::faxen::lbf::SpacetreeGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::SpacetreeGridBlockVertex& neighbour, 
  int fromRank) {
   _map2SORStep.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::touchVertexFirstTime(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2SORStep.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::touchVertexLastTime(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2SORStep.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::prepareSendToNeighbour(
  peano::applications::faxen::lbf::SpacetreeGridBlockVertex& vertex
) {
   _map2SORStep.prepareSendToNeighbour(vertex);

}
#endif



void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::beginIteration(
  peano::applications::faxen::lbf::SpacetreeGridBlockState&  solverState
) {

  _map2SORStep.beginIteration( solverState );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::endIteration(
  peano::applications::faxen::lbf::SpacetreeGridBlockState&  solverState
) {

  _map2SORStep.endIteration( solverState );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::enterCell(
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2SORStep.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::faxen::lbf::adapters::SpacetreeGrid2SORStep::leaveCell(
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {

  _map2SORStep.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}
