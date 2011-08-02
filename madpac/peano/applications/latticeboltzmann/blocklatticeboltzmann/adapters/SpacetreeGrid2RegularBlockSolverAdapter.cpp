#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/SpacetreeGrid2RegularBlockSolverAdapter.h"

#include <limits>


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::SpacetreeGrid2RegularBlockSolverAdapter() {
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::~SpacetreeGrid2RegularBlockSolverAdapter() {
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::createHangingVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&     fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const   coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&      coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&       coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                   fineGridPositionOfVertex
) {

  _map2RegularBlockSolver.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::destroyHangingVertex(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2RegularBlockSolver.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::createInnerVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2RegularBlockSolver.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::createBoundaryVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2RegularBlockSolver.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::destroyVertex(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2RegularBlockSolver.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::createCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2RegularBlockSolver.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::destroyCell(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2RegularBlockSolver.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::mergeWithNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& vertex,
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& neighbour, 
  int fromRank) {
   _map2RegularBlockSolver.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::touchVertexFirstTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2RegularBlockSolver.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::touchVertexLastTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2RegularBlockSolver.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::prepareSendToNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& vertex
) {
   _map2RegularBlockSolver.prepareSendToNeighbour(vertex);

}
#endif



void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::beginIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState&  solverState
) {

  _map2RegularBlockSolver.beginIteration( solverState );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::endIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState&  solverState
) {

  _map2RegularBlockSolver.endIteration( solverState );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::enterCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2RegularBlockSolver.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::SpacetreeGrid2RegularBlockSolverAdapter::leaveCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {

  _map2RegularBlockSolver.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}
