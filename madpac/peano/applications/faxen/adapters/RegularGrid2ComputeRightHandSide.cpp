#include "peano/applications/faxen/adapters/RegularGrid2ComputeRightHandSide.h"

#include <limits>


peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::RegularGrid2ComputeRightHandSide() {
}


peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::~RegularGrid2ComputeRightHandSide() {
}


void peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2ComputeRightHandSide.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2ComputeRightHandSide.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2ComputeRightHandSide.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::createCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeRightHandSide.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::destroyCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeRightHandSide.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::handleCell(
  peano::applications::faxen::RegularGridVertex* const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeRightHandSide.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::mergeWithNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex,
  const peano::applications::faxen::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2ComputeRightHandSide.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::touchVertexFirstTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeRightHandSide.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::touchVertexLastTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeRightHandSide.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::prepareSendToNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex
) {
   _map2ComputeRightHandSide.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::beginIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2ComputeRightHandSide.beginIteration(solverState);

}


void peano::applications::faxen::adapters::RegularGrid2ComputeRightHandSide::endIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2ComputeRightHandSide.endIteration(solverState);

}
