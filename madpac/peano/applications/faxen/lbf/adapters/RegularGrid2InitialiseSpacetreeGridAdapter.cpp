#include "peano/applications/faxen/lbf/adapters/RegularGrid2InitialiseSpacetreeGridAdapter.h"

#include <limits>


peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::RegularGrid2InitialiseSpacetreeGridAdapter() {
}


peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::~RegularGrid2InitialiseSpacetreeGridAdapter() {
}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2InitialiseSpacetreeGrid.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2InitialiseSpacetreeGrid.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2InitialiseSpacetreeGrid.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::createCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2InitialiseSpacetreeGrid.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::destroyCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2InitialiseSpacetreeGrid.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::handleCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2InitialiseSpacetreeGrid.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::mergeWithNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2InitialiseSpacetreeGrid.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::touchVertexFirstTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2InitialiseSpacetreeGrid.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::touchVertexLastTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2InitialiseSpacetreeGrid.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::prepareSendToNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
   _map2InitialiseSpacetreeGrid.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::beginIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2InitialiseSpacetreeGrid.beginIteration(solverState);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitialiseSpacetreeGridAdapter::endIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2InitialiseSpacetreeGrid.endIteration(solverState);

}
