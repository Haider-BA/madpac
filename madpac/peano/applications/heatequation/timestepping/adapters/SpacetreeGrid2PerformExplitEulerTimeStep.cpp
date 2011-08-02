#include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2PerformExplitEulerTimeStep.h"

#include <limits>


peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::SpacetreeGrid2PerformExplitEulerTimeStep() {
}


peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::~SpacetreeGrid2PerformExplitEulerTimeStep() {
}



void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::createHangingVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&     fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const   coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&      coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&       coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                   fineGridPositionOfVertex
) {

  _map2PerformExplitEulerTimeStep.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::destroyHangingVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2PerformExplitEulerTimeStep.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::createInnerVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2PerformExplitEulerTimeStep.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::createBoundaryVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2PerformExplitEulerTimeStep.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::destroyVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2PerformExplitEulerTimeStep.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::createCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2PerformExplitEulerTimeStep.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::destroyCell(
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2PerformExplitEulerTimeStep.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex,
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& neighbour, 
  int fromRank) {
   _map2PerformExplitEulerTimeStep.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::touchVertexFirstTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2PerformExplitEulerTimeStep.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::touchVertexLastTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2PerformExplitEulerTimeStep.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex
) {
   _map2PerformExplitEulerTimeStep.prepareSendToNeighbour(vertex);

}
#endif



void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::beginIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {

  _map2PerformExplitEulerTimeStep.beginIteration( solverState );

}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::endIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {

  _map2PerformExplitEulerTimeStep.endIteration( solverState );

}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::enterCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2PerformExplitEulerTimeStep.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PerformExplitEulerTimeStep::leaveCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {

  _map2PerformExplitEulerTimeStep.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}
