#include "peano/applications/puregrid/adapters/RegularGrid2PerformOneRefinementWithoutGridSnapshot.h"

#include <limits>


peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::RegularGrid2PerformOneRefinementWithoutGridSnapshot() {
}


peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::~RegularGrid2PerformOneRefinementWithoutGridSnapshot() {
}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::puregrid::RegularGridVertex&  vertex
) {

  _map2PerformOneRefinement.createInnerVertex(x,h,vertex);

}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::puregrid::RegularGridVertex&  vertex
) {

  _map2PerformOneRefinement.createBoundaryVertex(x,h,vertex);

}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::puregrid::RegularGridVertex&  vertex
) {

  _map2PerformOneRefinement.destroyVertex(x,h,vertex);

}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::createCell(
  peano::applications::puregrid::RegularGridVertex const * const vertices,
  peano::applications::puregrid::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformOneRefinement.createCell(vertices,cell,enumerator);

}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::destroyCell(
  peano::applications::puregrid::RegularGridVertex const * const vertices,
  peano::applications::puregrid::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformOneRefinement.destroyCell(vertices,cell,enumerator);

}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::handleCell(
  peano::applications::puregrid::RegularGridVertex* const vertices,
  peano::applications::puregrid::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformOneRefinement.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::mergeWithNeighbour(
  peano::applications::puregrid::RegularGridVertex& vertex,
  const peano::applications::puregrid::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2PerformOneRefinement.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::touchVertexFirstTime(
  peano::applications::puregrid::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2PerformOneRefinement.touchVertexFirstTime(vertex,x);

}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::touchVertexLastTime(
  peano::applications::puregrid::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2PerformOneRefinement.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::prepareSendToNeighbour(
  peano::applications::puregrid::RegularGridVertex& vertex
) {
   _map2PerformOneRefinement.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::beginIteration(
  peano::applications::puregrid::RegularGridState&  solverState
) {

  _map2PerformOneRefinement.beginIteration(solverState);

}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinementWithoutGridSnapshot::endIteration(
  peano::applications::puregrid::RegularGridState&  solverState
) {

  _map2PerformOneRefinement.endIteration(solverState);

}
