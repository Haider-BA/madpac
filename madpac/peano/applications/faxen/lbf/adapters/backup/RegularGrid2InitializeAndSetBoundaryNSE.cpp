#include "peano/applications/faxen/lbf/adapters/RegularGrid2InitializeAndSetBoundaryNSE.h"

#include <limits>


peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::RegularGrid2InitializeAndSetBoundaryNSE() {
}


peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::~RegularGrid2InitializeAndSetBoundaryNSE() {
}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2InitializeNSE.createInnerVertex(x,h,vertex);
  _map2ExploreBoundaries.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2InitializeNSE.createBoundaryVertex(x,h,vertex);
  _map2ExploreBoundaries.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2InitializeNSE.destroyVertex(x,h,vertex);
  _map2ExploreBoundaries.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::createCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2InitializeNSE.createCell(vertices,cell,enumerator);
  _map2ExploreBoundaries.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::destroyCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2InitializeNSE.destroyCell(vertices,cell,enumerator);
  _map2ExploreBoundaries.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::handleCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2InitializeNSE.handleCell(vertices,cell,enumerator);
  _map2ExploreBoundaries.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::mergeWithNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2InitializeNSE.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2ExploreBoundaries.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::touchVertexFirstTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2InitializeNSE.touchVertexFirstTime(vertex,x);
  _map2ExploreBoundaries.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::touchVertexLastTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2InitializeNSE.touchVertexLastTime(vertex,x);
  _map2ExploreBoundaries.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::prepareSendToNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
   _map2InitializeNSE.prepareSendToNeighbour(vertex);
   _map2ExploreBoundaries.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::beginIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2InitializeNSE.beginIteration(solverState);
  _map2ExploreBoundaries.beginIteration(solverState);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeAndSetBoundaryNSE::endIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2InitializeNSE.endIteration(solverState);
  _map2ExploreBoundaries.endIteration(solverState);

}
