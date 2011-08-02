#include "peano/applications/faxen/lbf/adapters/RegularGrid2InitializeAndSetBoundary.h"

#include <limits>


peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::RegularGrid2InitializeAndSetBoundary() {
}


peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::~RegularGrid2InitializeAndSetBoundary() {
}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2Initialize.createInnerVertex(x,h,vertex);
  _map2ExploreBoundaries.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2Initialize.createBoundaryVertex(x,h,vertex);
  _map2ExploreBoundaries.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2Initialize.destroyVertex(x,h,vertex);
  _map2ExploreBoundaries.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::createCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2Initialize.createCell(vertices,cell,enumerator);
  _map2ExploreBoundaries.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::destroyCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2Initialize.destroyCell(vertices,cell,enumerator);
  _map2ExploreBoundaries.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::handleCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2Initialize.handleCell(vertices,cell,enumerator);
  _map2ExploreBoundaries.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::mergeWithNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2Initialize.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2ExploreBoundaries.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::touchVertexFirstTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2Initialize.touchVertexFirstTime(vertex,x);
  _map2ExploreBoundaries.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::touchVertexLastTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2Initialize.touchVertexLastTime(vertex,x);
  _map2ExploreBoundaries.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::prepareSendToNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
   _map2Initialize.prepareSendToNeighbour(vertex);
   _map2ExploreBoundaries.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::beginIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2Initialize.beginIteration(solverState);
  _map2ExploreBoundaries.beginIteration(solverState);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundary::endIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2Initialize.endIteration(solverState);
  _map2ExploreBoundaries.endIteration(solverState);

}
