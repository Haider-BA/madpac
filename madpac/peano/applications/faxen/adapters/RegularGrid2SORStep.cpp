#include "peano/applications/faxen/adapters/RegularGrid2SORStep.h"

#include <limits>


peano::applications::faxen::adapters::RegularGrid2SORStep::RegularGrid2SORStep() {
}


peano::applications::faxen::adapters::RegularGrid2SORStep::~RegularGrid2SORStep() {
}


void peano::applications::faxen::adapters::RegularGrid2SORStep::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2SORStep.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2SORStep::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2SORStep.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2SORStep::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2SORStep.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2SORStep::createCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SORStep.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2SORStep::destroyCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SORStep.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2SORStep::handleCell(
  peano::applications::faxen::RegularGridVertex* const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SORStep.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2SORStep::mergeWithNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex,
  const peano::applications::faxen::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2SORStep.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2SORStep::touchVertexFirstTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SORStep.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::adapters::RegularGrid2SORStep::touchVertexLastTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SORStep.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2SORStep::prepareSendToNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex
) {
   _map2SORStep.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2SORStep::beginIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2SORStep.beginIteration(solverState);

}


void peano::applications::faxen::adapters::RegularGrid2SORStep::endIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2SORStep.endIteration(solverState);

}
