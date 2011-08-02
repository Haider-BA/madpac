#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/RegularGrid2BlockCCAOutputAdapter.h"

#include <limits>


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::RegularGrid2BlockCCAOutputAdapter() {
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::~RegularGrid2BlockCCAOutputAdapter() {
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {

  _map2BlockCCAOutput.createInnerVertex(x,h,vertex);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {

  _map2BlockCCAOutput.createBoundaryVertex(x,h,vertex);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {

  _map2BlockCCAOutput.destroyVertex(x,h,vertex);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::createCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2BlockCCAOutput.createCell(vertices,cell,enumerator);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::destroyCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2BlockCCAOutput.destroyCell(vertices,cell,enumerator);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::handleCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex* const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2BlockCCAOutput.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::mergeWithNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex,
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2BlockCCAOutput.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::touchVertexFirstTime(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2BlockCCAOutput.touchVertexFirstTime(vertex,x);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::touchVertexLastTime(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2BlockCCAOutput.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::prepareSendToNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex
) {
   _map2BlockCCAOutput.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::beginIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
) {

  _map2BlockCCAOutput.beginIteration(solverState);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockCCAOutputAdapter::endIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
) {

  _map2BlockCCAOutput.endIteration(solverState);

}
