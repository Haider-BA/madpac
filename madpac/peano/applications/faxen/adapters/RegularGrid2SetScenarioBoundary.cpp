#include "peano/applications/faxen/adapters/RegularGrid2SetScenarioBoundary.h"

#include <limits>


peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::RegularGrid2SetScenarioBoundary() {
}


peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::~RegularGrid2SetScenarioBoundary() {
}


void peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2SetScenarioBoundary.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2SetScenarioBoundary.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2SetScenarioBoundary.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::createCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetScenarioBoundary.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::destroyCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetScenarioBoundary.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::handleCell(
  peano::applications::faxen::RegularGridVertex* const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetScenarioBoundary.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::mergeWithNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex,
  const peano::applications::faxen::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2SetScenarioBoundary.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::touchVertexFirstTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetScenarioBoundary.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::touchVertexLastTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetScenarioBoundary.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::prepareSendToNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex
) {
   _map2SetScenarioBoundary.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::beginIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2SetScenarioBoundary.beginIteration(solverState);

}


void peano::applications::faxen::adapters::RegularGrid2SetScenarioBoundary::endIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2SetScenarioBoundary.endIteration(solverState);

}
