#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/adapters/RegularGrid2RegularBlockSolverAndVTKOutputAdapter.h"

#include <limits>


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::RegularGrid2RegularBlockSolverAndVTKOutputAdapter() {
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::~RegularGrid2RegularBlockSolverAndVTKOutputAdapter() {
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {

  _map2BlockVTKOutput.createInnerVertex(x,h,vertex);
  _map2RegularBlockSolver.createInnerVertex(x,h,vertex);
  _map2BlockCCAOutput.createInnerVertex(x,h,vertex);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {

  _map2BlockVTKOutput.createBoundaryVertex(x,h,vertex);
  _map2RegularBlockSolver.createBoundaryVertex(x,h,vertex);
  _map2BlockCCAOutput.createBoundaryVertex(x,h,vertex);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {

  _map2BlockVTKOutput.destroyVertex(x,h,vertex);
  _map2RegularBlockSolver.destroyVertex(x,h,vertex);
  _map2BlockCCAOutput.destroyVertex(x,h,vertex);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::createCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2BlockVTKOutput.createCell(vertices,cell,enumerator);
  _map2RegularBlockSolver.createCell(vertices,cell,enumerator);
  _map2BlockCCAOutput.createCell(vertices,cell,enumerator);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::destroyCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2BlockVTKOutput.destroyCell(vertices,cell,enumerator);
  _map2RegularBlockSolver.destroyCell(vertices,cell,enumerator);
  _map2BlockCCAOutput.destroyCell(vertices,cell,enumerator);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::handleCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex* const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2BlockVTKOutput.handleCell(vertices,cell,enumerator);
  _map2RegularBlockSolver.handleCell(vertices,cell,enumerator);
  _map2BlockCCAOutput.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::mergeWithNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex,
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2BlockVTKOutput.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2RegularBlockSolver.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2BlockCCAOutput.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::touchVertexFirstTime(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2BlockVTKOutput.touchVertexFirstTime(vertex,x);
  _map2RegularBlockSolver.touchVertexFirstTime(vertex,x);
  _map2BlockCCAOutput.touchVertexFirstTime(vertex,x);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::touchVertexLastTime(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2BlockVTKOutput.touchVertexLastTime(vertex,x);
  _map2RegularBlockSolver.touchVertexLastTime(vertex,x);
  _map2BlockCCAOutput.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::prepareSendToNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex
) {
   _map2BlockVTKOutput.prepareSendToNeighbour(vertex);
   _map2RegularBlockSolver.prepareSendToNeighbour(vertex);
   _map2BlockCCAOutput.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::beginIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
) {

  _map2BlockVTKOutput.beginIteration(solverState);
  _map2RegularBlockSolver.beginIteration(solverState);
  _map2BlockCCAOutput.beginIteration(solverState);

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter::endIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
) {

  _map2BlockVTKOutput.endIteration(solverState);
  _map2RegularBlockSolver.endIteration(solverState);
  _map2BlockCCAOutput.endIteration(solverState);

}
