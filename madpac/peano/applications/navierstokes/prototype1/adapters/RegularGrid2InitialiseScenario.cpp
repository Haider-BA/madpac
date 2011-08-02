#include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2InitialiseScenario.h"

#include <limits>


peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::RegularGrid2InitialiseScenario() {
}


peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::~RegularGrid2InitialiseScenario() {
}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2InitialiseScenario.createInnerVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2InitialiseScenario.createBoundaryVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2InitialiseScenario.destroyVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::createCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2InitialiseScenario.createCell(vertices,cell,enumerator);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::destroyCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2InitialiseScenario.destroyCell(vertices,cell,enumerator);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::handleCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2InitialiseScenario.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex,
  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {
   _map2InitialiseScenario.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::touchVertexFirstTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2InitialiseScenario.touchVertexFirstTime(vertex,x);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::touchVertexLastTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2InitialiseScenario.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
   _map2InitialiseScenario.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::beginIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2InitialiseScenario.beginIteration(solverState);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2InitialiseScenario::endIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2InitialiseScenario.endIteration(solverState);

}
