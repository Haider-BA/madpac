#include "peano/applications/shallowwater/adapters/RegularGrid2SetupExperiment.h"

#include <limits>


peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::RegularGrid2SetupExperiment() {
}


peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::~RegularGrid2SetupExperiment() {
}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.createInnerVertex(x,h,vertex);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.createBoundaryVertex(x,h,vertex);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.destroyVertex(x,h,vertex);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::createCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.createCell(vertices,cell,enumerator);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::destroyCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.destroyCell(vertices,cell,enumerator);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::handleCell(
  peano::applications::shallowwater::RegularGridVertex* const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::mergeWithNeighbour(
  peano::applications::shallowwater::RegularGridVertex& vertex,
  const peano::applications::shallowwater::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2SetupExperiment.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::touchVertexFirstTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetupExperiment.touchVertexFirstTime(vertex,x);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::touchVertexLastTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetupExperiment.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::prepareSendToNeighbour(
  peano::applications::shallowwater::RegularGridVertex& vertex
) {
   _map2SetupExperiment.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::beginIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {

  _map2SetupExperiment.beginIteration(solverState);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperiment::endIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {

  _map2SetupExperiment.endIteration(solverState);

}
