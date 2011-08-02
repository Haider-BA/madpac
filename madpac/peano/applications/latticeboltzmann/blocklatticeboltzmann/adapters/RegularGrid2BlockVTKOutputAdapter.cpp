#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/RegularGrid2BlockVTKOutputAdapter.h"

#include <limits>


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::RegularGrid2BlockVTKOutputAdapter() {
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::~RegularGrid2BlockVTKOutputAdapter() {
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {

  _map2BlockVTKOutput.createInnerVertex(x,h,vertex);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {

  _map2BlockVTKOutput.createBoundaryVertex(x,h,vertex);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {

  _map2BlockVTKOutput.destroyVertex(x,h,vertex);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::createCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2BlockVTKOutput.createCell(vertices,cell,enumerator);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::destroyCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2BlockVTKOutput.destroyCell(vertices,cell,enumerator);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::handleCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex* const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2BlockVTKOutput.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::mergeWithNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex,
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2BlockVTKOutput.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::touchVertexFirstTime(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2BlockVTKOutput.touchVertexFirstTime(vertex,x);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::touchVertexLastTime(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2BlockVTKOutput.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::prepareSendToNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex
) {
   _map2BlockVTKOutput.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::beginIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
) {

  _map2BlockVTKOutput.beginIteration(solverState);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2BlockVTKOutputAdapter::endIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
) {

  _map2BlockVTKOutput.endIteration(solverState);

}
