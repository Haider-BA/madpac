#include "peano/applications/heatequation/timestepping/adapters/RegularGrid2Prolong.h"

#include <limits>


peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::RegularGrid2Prolong() {
}


peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::~RegularGrid2Prolong() {
}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2Prolong.createInnerVertex(x,h,vertex);
  _map2Smooth.createInnerVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2Prolong.createBoundaryVertex(x,h,vertex);
  _map2Smooth.createBoundaryVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2Prolong.destroyVertex(x,h,vertex);
  _map2Smooth.destroyVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2Prolong.createCell(vertices,cell,enumerator);
  _map2Smooth.createCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2Prolong.destroyCell(vertices,cell,enumerator);
  _map2Smooth.destroyCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2Prolong.handleCell(vertices,cell,enumerator);
  _map2Smooth.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex,
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
  int fromRank) {
   _map2Prolong.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2Smooth.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2Prolong.touchVertexFirstTime(vertex,x);
  _map2Smooth.touchVertexFirstTime(vertex,x);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2Prolong.touchVertexLastTime(vertex,x);
  _map2Smooth.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
   _map2Prolong.prepareSendToNeighbour(vertex);
   _map2Smooth.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2Prolong.beginIteration(solverState);
  _map2Smooth.beginIteration(solverState);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2Prolong::endIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2Prolong.endIteration(solverState);
  _map2Smooth.endIteration(solverState);

}
