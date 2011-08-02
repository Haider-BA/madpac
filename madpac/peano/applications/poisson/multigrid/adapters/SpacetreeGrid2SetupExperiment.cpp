#include "peano/applications/poisson/multigrid/adapters/SpacetreeGrid2SetupExperiment.h"

#include <limits>


peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::SpacetreeGrid2SetupExperiment() {
}


peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::~SpacetreeGrid2SetupExperiment() {
}



void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::createHangingVertex(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&     fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const   coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&      coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&       coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                   fineGridPositionOfVertex
) {

  _map2SetupExperiment.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::destroyHangingVertex(
      const peano::applications::poisson::multigrid::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2SetupExperiment.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::createInnerVertex(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2SetupExperiment.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::createBoundaryVertex(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2SetupExperiment.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::destroyVertex(
      const peano::applications::poisson::multigrid::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2SetupExperiment.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::createCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2SetupExperiment.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::destroyCell(
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2SetupExperiment.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}

#ifdef Parallel
void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::mergeWithNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex,
  const peano::applications::poisson::multigrid::SpacetreeGridVertex& neighbour, 
  int fromRank) {
   _map2SetupExperiment.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::touchVertexFirstTime(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2SetupExperiment.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::touchVertexLastTime(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2SetupExperiment.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}

#ifdef Parallel
void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::prepareSendToNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex
) {
   _map2SetupExperiment.prepareSendToNeighbour(vertex);

}
#endif



void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::beginIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
) {

  _map2SetupExperiment.beginIteration( solverState );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::endIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
) {

  _map2SetupExperiment.endIteration( solverState );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::enterCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2SetupExperiment.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperiment::leaveCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&           fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {

  _map2SetupExperiment.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}
