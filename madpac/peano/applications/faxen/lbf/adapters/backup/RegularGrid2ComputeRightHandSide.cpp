#include "peano/applications/faxen/lbf/adapters/RegularGrid2ComputeRightHandSide.h"

#include <limits>


peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::RegularGrid2ComputeRightHandSide() {
}


peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::~RegularGrid2ComputeRightHandSide() {
}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2ComputeRightHandSide.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2ComputeRightHandSide.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2ComputeRightHandSide.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::createCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeRightHandSide.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::destroyCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeRightHandSide.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::handleCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeRightHandSide.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::mergeWithNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2ComputeRightHandSide.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::touchVertexFirstTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeRightHandSide.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::touchVertexLastTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeRightHandSide.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::prepareSendToNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
   _map2ComputeRightHandSide.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::beginIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2ComputeRightHandSide.beginIteration(solverState);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeRightHandSide::endIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2ComputeRightHandSide.endIteration(solverState);

}
