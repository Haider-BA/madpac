#include "peano/applications/shallowwater/adapters/RegularGrid2GodunovMethod.h"

#include <limits>


peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::RegularGrid2GodunovMethod() {
}


peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::~RegularGrid2GodunovMethod() {
}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {

  _map2GodunovMethod.createInnerVertex(x,h,vertex);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {

  _map2GodunovMethod.createBoundaryVertex(x,h,vertex);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {

  _map2GodunovMethod.destroyVertex(x,h,vertex);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::createCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2GodunovMethod.createCell(vertices,cell,enumerator);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::destroyCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2GodunovMethod.destroyCell(vertices,cell,enumerator);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::handleCell(
  peano::applications::shallowwater::RegularGridVertex* const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2GodunovMethod.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::mergeWithNeighbour(
  peano::applications::shallowwater::RegularGridVertex& vertex,
  const peano::applications::shallowwater::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2GodunovMethod.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::touchVertexFirstTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2GodunovMethod.touchVertexFirstTime(vertex,x);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::touchVertexLastTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2GodunovMethod.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::prepareSendToNeighbour(
  peano::applications::shallowwater::RegularGridVertex& vertex
) {
   _map2GodunovMethod.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::beginIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {

  _map2GodunovMethod.beginIteration(solverState);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethod::endIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {

  _map2GodunovMethod.endIteration(solverState);

}
