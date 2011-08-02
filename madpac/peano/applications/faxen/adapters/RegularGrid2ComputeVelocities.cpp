#include "peano/applications/faxen/adapters/RegularGrid2ComputeVelocities.h"

#include <limits>


peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::RegularGrid2ComputeVelocities() {
}


peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::~RegularGrid2ComputeVelocities() {
}


void peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2ComputeVelocities.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2ComputeVelocities.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2ComputeVelocities.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::createCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeVelocities.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::destroyCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeVelocities.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::handleCell(
  peano::applications::faxen::RegularGridVertex* const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeVelocities.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::mergeWithNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex,
  const peano::applications::faxen::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2ComputeVelocities.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::touchVertexFirstTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeVelocities.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::touchVertexLastTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeVelocities.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::prepareSendToNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex
) {
   _map2ComputeVelocities.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::beginIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2ComputeVelocities.beginIteration(solverState);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeVelocities::endIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2ComputeVelocities.endIteration(solverState);

}
