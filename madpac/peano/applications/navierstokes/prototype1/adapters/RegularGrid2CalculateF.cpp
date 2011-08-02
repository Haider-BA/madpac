#include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2CalculateF.h"

#include <limits>


peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::RegularGrid2CalculateF() {
}


peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::~RegularGrid2CalculateF() {
}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2CalculateF.createInnerVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2CalculateF.createBoundaryVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2CalculateF.destroyVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::createCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2CalculateF.createCell(vertices,cell,enumerator);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::destroyCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2CalculateF.destroyCell(vertices,cell,enumerator);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::handleCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2CalculateF.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex,
  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {
   _map2CalculateF.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::touchVertexFirstTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2CalculateF.touchVertexFirstTime(vertex,x);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::touchVertexLastTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2CalculateF.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
   _map2CalculateF.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::beginIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2CalculateF.beginIteration(solverState);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2CalculateF::endIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2CalculateF.endIteration(solverState);

}
