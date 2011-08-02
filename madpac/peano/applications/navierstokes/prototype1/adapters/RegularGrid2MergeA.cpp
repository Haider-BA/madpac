#include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2MergeA.h"

#include <limits>


peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::RegularGrid2MergeA() {
}


peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::~RegularGrid2MergeA() {
}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2MergeA.createInnerVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2MergeA.createBoundaryVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2MergeA.destroyVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::createCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2MergeA.createCell(vertices,cell,enumerator);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::destroyCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2MergeA.destroyCell(vertices,cell,enumerator);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::handleCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2MergeA.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex,
  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {
   _map2MergeA.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::touchVertexFirstTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2MergeA.touchVertexFirstTime(vertex,x);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::touchVertexLastTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2MergeA.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
   _map2MergeA.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::beginIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2MergeA.beginIteration(solverState);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2MergeA::endIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2MergeA.endIteration(solverState);

}
