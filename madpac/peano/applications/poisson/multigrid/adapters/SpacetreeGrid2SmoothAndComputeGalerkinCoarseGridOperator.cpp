#include "peano/applications/poisson/multigrid/adapters/SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator.h"

#include <limits>


peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator() {
}


peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::~SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator() {
}



void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::createHangingVertex(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&     fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const   coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&      coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&       coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                   fineGridPositionOfVertex
) {

  _map2Smooth.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ComputeGalerkinCoarseGridOperator.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::destroyHangingVertex(
      const peano::applications::poisson::multigrid::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2Smooth.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ComputeGalerkinCoarseGridOperator.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::createInnerVertex(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2Smooth.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ComputeGalerkinCoarseGridOperator.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::createBoundaryVertex(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2Smooth.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ComputeGalerkinCoarseGridOperator.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::destroyVertex(
      const peano::applications::poisson::multigrid::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2Smooth.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ComputeGalerkinCoarseGridOperator.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::createCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2Smooth.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );
  _map2ComputeGalerkinCoarseGridOperator.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::destroyCell(
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2Smooth.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );
  _map2ComputeGalerkinCoarseGridOperator.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}

#ifdef Parallel
void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::mergeWithNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex,
  const peano::applications::poisson::multigrid::SpacetreeGridVertex& neighbour, 
  int fromRank) {
   _map2Smooth.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2ComputeGalerkinCoarseGridOperator.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::touchVertexFirstTime(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2Smooth.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ComputeGalerkinCoarseGridOperator.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::touchVertexLastTime(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2Smooth.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2ComputeGalerkinCoarseGridOperator.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}

#ifdef Parallel
void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::prepareSendToNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex
) {
   _map2Smooth.prepareSendToNeighbour(vertex);
   _map2ComputeGalerkinCoarseGridOperator.prepareSendToNeighbour(vertex);

}
#endif



void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::beginIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
) {

  _map2Smooth.beginIteration( solverState );
  _map2ComputeGalerkinCoarseGridOperator.beginIteration( solverState );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::endIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
) {

  _map2Smooth.endIteration( solverState );
  _map2ComputeGalerkinCoarseGridOperator.endIteration( solverState );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::enterCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2Smooth.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );
  _map2ComputeGalerkinCoarseGridOperator.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SmoothAndComputeGalerkinCoarseGridOperator::leaveCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&           fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {

  _map2Smooth.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );
  _map2ComputeGalerkinCoarseGridOperator.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}
