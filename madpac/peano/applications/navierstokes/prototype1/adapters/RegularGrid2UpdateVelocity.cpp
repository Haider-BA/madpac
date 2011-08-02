#include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2UpdateVelocity.h"

#include <limits>


peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::RegularGrid2UpdateVelocity() {
}


peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::~RegularGrid2UpdateVelocity() {
}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2MergePressureGradientUpdate.createInnerVertex(x,h,vertex);
  _map2UpdateVelocity.createInnerVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2MergePressureGradientUpdate.createBoundaryVertex(x,h,vertex);
  _map2UpdateVelocity.createBoundaryVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2MergePressureGradientUpdate.destroyVertex(x,h,vertex);
  _map2UpdateVelocity.destroyVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::createCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2MergePressureGradientUpdate.createCell(vertices,cell,enumerator);
  _map2UpdateVelocity.createCell(vertices,cell,enumerator);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::destroyCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2MergePressureGradientUpdate.destroyCell(vertices,cell,enumerator);
  _map2UpdateVelocity.destroyCell(vertices,cell,enumerator);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::handleCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2MergePressureGradientUpdate.handleCell(vertices,cell,enumerator);
  _map2UpdateVelocity.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex,
  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {
   _map2MergePressureGradientUpdate.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2UpdateVelocity.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::touchVertexFirstTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2MergePressureGradientUpdate.touchVertexFirstTime(vertex,x);
  _map2UpdateVelocity.touchVertexFirstTime(vertex,x);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::touchVertexLastTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2MergePressureGradientUpdate.touchVertexLastTime(vertex,x);
  _map2UpdateVelocity.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
   _map2MergePressureGradientUpdate.prepareSendToNeighbour(vertex);
   _map2UpdateVelocity.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::beginIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2MergePressureGradientUpdate.beginIteration(solverState);
  _map2UpdateVelocity.beginIteration(solverState);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateVelocity::endIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2MergePressureGradientUpdate.endIteration(solverState);
  _map2UpdateVelocity.endIteration(solverState);

}
