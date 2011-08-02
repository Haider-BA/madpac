#include "peano/applications/heatequation/timestepping/adapters/RegularGrid2Coarse.h"

#include <limits>


peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::RegularGrid2Coarse() {
}


peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::~RegularGrid2Coarse() {
}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2ComputeHierarchicalSurplus.createInnerVertex(x,h,vertex);
  _map2ComputeHierarchicalResidual.createInnerVertex(x,h,vertex);
  _map2RestrictRhs.createInnerVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2ComputeHierarchicalSurplus.createBoundaryVertex(x,h,vertex);
  _map2ComputeHierarchicalResidual.createBoundaryVertex(x,h,vertex);
  _map2RestrictRhs.createBoundaryVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2ComputeHierarchicalSurplus.destroyVertex(x,h,vertex);
  _map2ComputeHierarchicalResidual.destroyVertex(x,h,vertex);
  _map2RestrictRhs.destroyVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeHierarchicalSurplus.createCell(vertices,cell,enumerator);
  _map2ComputeHierarchicalResidual.createCell(vertices,cell,enumerator);
  _map2RestrictRhs.createCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeHierarchicalSurplus.destroyCell(vertices,cell,enumerator);
  _map2ComputeHierarchicalResidual.destroyCell(vertices,cell,enumerator);
  _map2RestrictRhs.destroyCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeHierarchicalSurplus.handleCell(vertices,cell,enumerator);
  _map2ComputeHierarchicalResidual.handleCell(vertices,cell,enumerator);
  _map2RestrictRhs.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex,
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
  int fromRank) {
   _map2ComputeHierarchicalSurplus.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2ComputeHierarchicalResidual.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2RestrictRhs.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeHierarchicalSurplus.touchVertexFirstTime(vertex,x);
  _map2ComputeHierarchicalResidual.touchVertexFirstTime(vertex,x);
  _map2RestrictRhs.touchVertexFirstTime(vertex,x);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeHierarchicalSurplus.touchVertexLastTime(vertex,x);
  _map2ComputeHierarchicalResidual.touchVertexLastTime(vertex,x);
  _map2RestrictRhs.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
   _map2ComputeHierarchicalSurplus.prepareSendToNeighbour(vertex);
   _map2ComputeHierarchicalResidual.prepareSendToNeighbour(vertex);
   _map2RestrictRhs.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2ComputeHierarchicalSurplus.beginIteration(solverState);
  _map2ComputeHierarchicalResidual.beginIteration(solverState);
  _map2RestrictRhs.beginIteration(solverState);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse::endIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2ComputeHierarchicalSurplus.endIteration(solverState);
  _map2ComputeHierarchicalResidual.endIteration(solverState);
  _map2RestrictRhs.endIteration(solverState);

}
