#include "peano/applications/faxen/adapters/RegularGrid2ComputeResidualNorm.h"

#include <limits>


peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::RegularGrid2ComputeResidualNorm() {
}


peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::~RegularGrid2ComputeResidualNorm() {
}


void peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2ComputeResidualNorm.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2ComputeResidualNorm.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2ComputeResidualNorm.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::createCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeResidualNorm.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::destroyCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeResidualNorm.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::handleCell(
  peano::applications::faxen::RegularGridVertex* const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeResidualNorm.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::mergeWithNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex,
  const peano::applications::faxen::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2ComputeResidualNorm.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::touchVertexFirstTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeResidualNorm.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::touchVertexLastTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeResidualNorm.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::prepareSendToNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex
) {
   _map2ComputeResidualNorm.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::beginIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2ComputeResidualNorm.beginIteration(solverState);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeResidualNorm::endIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2ComputeResidualNorm.endIteration(solverState);

}
