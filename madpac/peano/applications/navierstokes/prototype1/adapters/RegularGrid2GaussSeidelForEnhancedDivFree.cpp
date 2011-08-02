#include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2GaussSeidelForEnhancedDivFree.h"

#include <limits>


peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::RegularGrid2GaussSeidelForEnhancedDivFree() {
}


peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::~RegularGrid2GaussSeidelForEnhancedDivFree() {
}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2MergePressureGradientUpdate.createInnerVertex(x,h,vertex);
  _map2GaussSeidelForEnhancedDivFree.createInnerVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2MergePressureGradientUpdate.createBoundaryVertex(x,h,vertex);
  _map2GaussSeidelForEnhancedDivFree.createBoundaryVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2MergePressureGradientUpdate.destroyVertex(x,h,vertex);
  _map2GaussSeidelForEnhancedDivFree.destroyVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::createCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2MergePressureGradientUpdate.createCell(vertices,cell,enumerator);
  _map2GaussSeidelForEnhancedDivFree.createCell(vertices,cell,enumerator);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::destroyCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2MergePressureGradientUpdate.destroyCell(vertices,cell,enumerator);
  _map2GaussSeidelForEnhancedDivFree.destroyCell(vertices,cell,enumerator);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::handleCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2MergePressureGradientUpdate.handleCell(vertices,cell,enumerator);
  _map2GaussSeidelForEnhancedDivFree.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex,
  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {
   _map2MergePressureGradientUpdate.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2GaussSeidelForEnhancedDivFree.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::touchVertexFirstTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2MergePressureGradientUpdate.touchVertexFirstTime(vertex,x);
  _map2GaussSeidelForEnhancedDivFree.touchVertexFirstTime(vertex,x);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::touchVertexLastTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2MergePressureGradientUpdate.touchVertexLastTime(vertex,x);
  _map2GaussSeidelForEnhancedDivFree.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
   _map2MergePressureGradientUpdate.prepareSendToNeighbour(vertex);
   _map2GaussSeidelForEnhancedDivFree.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::beginIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2MergePressureGradientUpdate.beginIteration(solverState);
  _map2GaussSeidelForEnhancedDivFree.beginIteration(solverState);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2GaussSeidelForEnhancedDivFree::endIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2MergePressureGradientUpdate.endIteration(solverState);
  _map2GaussSeidelForEnhancedDivFree.endIteration(solverState);

}
