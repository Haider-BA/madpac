#include "peano/applications/faxen/adapters/RegularGrid2SetZeroPressureBoundary.h"

#include <limits>


peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::RegularGrid2SetZeroPressureBoundary() {
}


peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::~RegularGrid2SetZeroPressureBoundary() {
}


void peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2SetZeroPressureBoundary.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2SetZeroPressureBoundary.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2SetZeroPressureBoundary.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::createCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetZeroPressureBoundary.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::destroyCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetZeroPressureBoundary.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::handleCell(
  peano::applications::faxen::RegularGridVertex* const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetZeroPressureBoundary.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::mergeWithNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex,
  const peano::applications::faxen::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2SetZeroPressureBoundary.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::touchVertexFirstTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetZeroPressureBoundary.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::touchVertexLastTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetZeroPressureBoundary.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::prepareSendToNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex
) {
   _map2SetZeroPressureBoundary.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::beginIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2SetZeroPressureBoundary.beginIteration(solverState);

}


void peano::applications::faxen::adapters::RegularGrid2SetZeroPressureBoundary::endIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2SetZeroPressureBoundary.endIteration(solverState);

}
