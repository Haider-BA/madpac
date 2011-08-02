#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/RegularGrid2RegularBlockSolverAdapter.h"

#include <limits>


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::RegularGrid2RegularBlockSolverAdapter() {
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::~RegularGrid2RegularBlockSolverAdapter() {
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {

  _map2RegularBlockSolver.createInnerVertex(x,h,vertex);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {

  _map2RegularBlockSolver.createBoundaryVertex(x,h,vertex);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {

  _map2RegularBlockSolver.destroyVertex(x,h,vertex);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::createCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2RegularBlockSolver.createCell(vertices,cell,enumerator);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::destroyCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2RegularBlockSolver.destroyCell(vertices,cell,enumerator);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::handleCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex* const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2RegularBlockSolver.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::mergeWithNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex,
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2RegularBlockSolver.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::touchVertexFirstTime(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2RegularBlockSolver.touchVertexFirstTime(vertex,x);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::touchVertexLastTime(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2RegularBlockSolver.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::prepareSendToNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex
) {
   _map2RegularBlockSolver.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::beginIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
) {

  _map2RegularBlockSolver.beginIteration(solverState);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAdapter::endIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
) {

  _map2RegularBlockSolver.endIteration(solverState);

}
