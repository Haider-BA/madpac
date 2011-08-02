#include "peano/applications/heatequation/timestepping/adapters/RegularGrid2Smooth.h"

#include <limits>


peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::RegularGrid2Smooth() {
}


peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::~RegularGrid2Smooth() {
}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2Smooth.createInnerVertex(x,h,vertex);
  _map2CoarseSolution.createInnerVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2Smooth.createBoundaryVertex(x,h,vertex);
  _map2CoarseSolution.createBoundaryVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2Smooth.destroyVertex(x,h,vertex);
  _map2CoarseSolution.destroyVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2Smooth.createCell(vertices,cell,enumerator);
  _map2CoarseSolution.createCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2Smooth.destroyCell(vertices,cell,enumerator);
  _map2CoarseSolution.destroyCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2Smooth.handleCell(vertices,cell,enumerator);
  _map2CoarseSolution.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex,
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
  int fromRank) {
   _map2Smooth.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2CoarseSolution.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2Smooth.touchVertexFirstTime(vertex,x);
  _map2CoarseSolution.touchVertexFirstTime(vertex,x);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2Smooth.touchVertexLastTime(vertex,x);
  _map2CoarseSolution.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
   _map2Smooth.prepareSendToNeighbour(vertex);
   _map2CoarseSolution.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2Smooth.beginIteration(solverState);
  _map2CoarseSolution.beginIteration(solverState);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Smooth::endIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2Smooth.endIteration(solverState);
  _map2CoarseSolution.endIteration(solverState);

}
