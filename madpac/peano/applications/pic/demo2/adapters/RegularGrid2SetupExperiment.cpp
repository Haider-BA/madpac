#include "peano/applications/pic/demo2/adapters/RegularGrid2SetupExperiment.h"

#include <limits>


peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::RegularGrid2SetupExperiment() {
}


peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::~RegularGrid2SetupExperiment() {
}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::pic::demo2::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.createInnerVertex(x,h,vertex);

}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::pic::demo2::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.createBoundaryVertex(x,h,vertex);

}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::pic::demo2::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.destroyVertex(x,h,vertex);

}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::createCell(
  peano::applications::pic::demo2::RegularGridVertex const * const vertices,
  peano::applications::pic::demo2::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.createCell(vertices,cell,enumerator);

}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::destroyCell(
  peano::applications::pic::demo2::RegularGridVertex const * const vertices,
  peano::applications::pic::demo2::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.destroyCell(vertices,cell,enumerator);

}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::handleCell(
  peano::applications::pic::demo2::RegularGridVertex* const vertices,
  peano::applications::pic::demo2::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::mergeWithNeighbour(
  peano::applications::pic::demo2::RegularGridVertex& vertex,
  const peano::applications::pic::demo2::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2SetupExperiment.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::touchVertexFirstTime(
  peano::applications::pic::demo2::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetupExperiment.touchVertexFirstTime(vertex,x);

}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::touchVertexLastTime(
  peano::applications::pic::demo2::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetupExperiment.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::prepareSendToNeighbour(
  peano::applications::pic::demo2::RegularGridVertex& vertex
) {
   _map2SetupExperiment.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::beginIteration(
  peano::applications::pic::demo2::RegularGridState&  solverState
) {

  _map2SetupExperiment.beginIteration(solverState);

}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment::endIteration(
  peano::applications::pic::demo2::RegularGridState&  solverState
) {

  _map2SetupExperiment.endIteration(solverState);

}
