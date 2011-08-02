#include "peano/applications/navierstokes/prototype1/adapters/SpacetreeGrid2GaussSeidelForEnhancedDivFree.h"

#include <limits>


peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::SpacetreeGrid2GaussSeidelForEnhancedDivFree() {
}


peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::~SpacetreeGrid2GaussSeidelForEnhancedDivFree() {
}



void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::createHangingVertex(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&     fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const   coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&      coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&       coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                   fineGridPositionOfVertex
) {

  _map2MergePressureGradientUpdate.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2GaussSeidelForEnhancedDivFree.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::destroyHangingVertex(
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2MergePressureGradientUpdate.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2GaussSeidelForEnhancedDivFree.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::createInnerVertex(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2MergePressureGradientUpdate.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2GaussSeidelForEnhancedDivFree.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::createBoundaryVertex(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2MergePressureGradientUpdate.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2GaussSeidelForEnhancedDivFree.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::destroyVertex(
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2MergePressureGradientUpdate.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2GaussSeidelForEnhancedDivFree.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::createCell(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&                 fineGridCell,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2MergePressureGradientUpdate.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );
  _map2GaussSeidelForEnhancedDivFree.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::destroyCell(
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           fineGridCell,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2MergePressureGradientUpdate.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );
  _map2GaussSeidelForEnhancedDivFree.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit& vertex,
  const peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {
   _map2MergePressureGradientUpdate.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2GaussSeidelForEnhancedDivFree.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::touchVertexFirstTime(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2MergePressureGradientUpdate.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2GaussSeidelForEnhancedDivFree.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::touchVertexLastTime(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2MergePressureGradientUpdate.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );
  _map2GaussSeidelForEnhancedDivFree.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
   _map2MergePressureGradientUpdate.prepareSendToNeighbour(vertex);
   _map2GaussSeidelForEnhancedDivFree.prepareSendToNeighbour(vertex);

}
#endif



void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::beginIteration(
  peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2MergePressureGradientUpdate.beginIteration( solverState );
  _map2GaussSeidelForEnhancedDivFree.beginIteration( solverState );

}


void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::endIteration(
  peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2MergePressureGradientUpdate.endIteration( solverState );
  _map2GaussSeidelForEnhancedDivFree.endIteration( solverState );

}


void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::enterCell(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&                 fineGridCell,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2MergePressureGradientUpdate.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );
  _map2GaussSeidelForEnhancedDivFree.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2GaussSeidelForEnhancedDivFree::leaveCell(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           fineGridCell,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {

  _map2MergePressureGradientUpdate.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );
  _map2GaussSeidelForEnhancedDivFree.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}
