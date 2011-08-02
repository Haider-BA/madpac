#include "peano/applications/faxen/lbf/adapters/RegularGrid2SetPressureBoundary.h"

#include <limits>


peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::RegularGrid2SetPressureBoundary() {
}


peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::~RegularGrid2SetPressureBoundary() {
}


void peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2SetPressureBoundary.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2SetPressureBoundary.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2SetPressureBoundary.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::createCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetPressureBoundary.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::destroyCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetPressureBoundary.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::handleCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetPressureBoundary.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::mergeWithNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2SetPressureBoundary.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::touchVertexFirstTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetPressureBoundary.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::touchVertexLastTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetPressureBoundary.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::prepareSendToNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
   _map2SetPressureBoundary.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::beginIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2SetPressureBoundary.beginIteration(solverState);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SetPressureBoundary::endIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2SetPressureBoundary.endIteration(solverState);

}
