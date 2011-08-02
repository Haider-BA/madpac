#include "peano/applications/navierstokes/prototype1/adapters/RegularGrid2UpdateScenario.h"

#include <limits>


peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::RegularGrid2UpdateScenario() {
}


peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::~RegularGrid2UpdateScenario() {
}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2PlotRegularSolutionVTK.createInnerVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2PlotRegularSolutionVTK.createBoundaryVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {

  _map2PlotRegularSolutionVTK.destroyVertex(x,h,vertex);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::createCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PlotRegularSolutionVTK.createCell(vertices,cell,enumerator);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::destroyCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PlotRegularSolutionVTK.destroyCell(vertices,cell,enumerator);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::handleCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PlotRegularSolutionVTK.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex,
  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {
   _map2PlotRegularSolutionVTK.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::touchVertexFirstTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2PlotRegularSolutionVTK.touchVertexFirstTime(vertex,x);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::touchVertexLastTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2PlotRegularSolutionVTK.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
   _map2PlotRegularSolutionVTK.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::beginIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2PlotRegularSolutionVTK.beginIteration(solverState);

}


void peano::applications::navierstokes::prototype1::adapters::RegularGrid2UpdateScenario::endIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {

  _map2PlotRegularSolutionVTK.endIteration(solverState);

}
