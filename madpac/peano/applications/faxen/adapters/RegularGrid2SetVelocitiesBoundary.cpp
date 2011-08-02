#include "peano/applications/faxen/adapters/RegularGrid2SetVelocitiesBoundary.h"

#include <limits>


peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::RegularGrid2SetVelocitiesBoundary() {
}


peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::~RegularGrid2SetVelocitiesBoundary() {
}


void peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2SetVelocitiesBoundary.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2SetVelocitiesBoundary.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2SetVelocitiesBoundary.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::createCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetVelocitiesBoundary.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::destroyCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetVelocitiesBoundary.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::handleCell(
  peano::applications::faxen::RegularGridVertex* const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetVelocitiesBoundary.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::mergeWithNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex,
  const peano::applications::faxen::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2SetVelocitiesBoundary.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::touchVertexFirstTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetVelocitiesBoundary.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::touchVertexLastTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetVelocitiesBoundary.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::prepareSendToNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex
) {
   _map2SetVelocitiesBoundary.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::beginIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2SetVelocitiesBoundary.beginIteration(solverState);

}


void peano::applications::faxen::adapters::RegularGrid2SetVelocitiesBoundary::endIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2SetVelocitiesBoundary.endIteration(solverState);

}
