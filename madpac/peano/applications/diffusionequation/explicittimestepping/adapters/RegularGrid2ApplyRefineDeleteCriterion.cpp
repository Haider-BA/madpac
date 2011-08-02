#include "peano/applications/diffusionequation/explicittimestepping/adapters/RegularGrid2ApplyRefineDeleteCriterion.h"

#include <limits>


peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::RegularGrid2ApplyRefineDeleteCriterion() {
}


peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::~RegularGrid2ApplyRefineDeleteCriterion() {
}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2ApplyRefineDeleteCriterion.createInnerVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2ApplyRefineDeleteCriterion.createBoundaryVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2ApplyRefineDeleteCriterion.destroyVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::createCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ApplyRefineDeleteCriterion.createCell(vertices,cell,enumerator);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::destroyCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ApplyRefineDeleteCriterion.destroyCell(vertices,cell,enumerator);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::handleCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex* const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ApplyRefineDeleteCriterion.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::mergeWithNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex,
  const peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2ApplyRefineDeleteCriterion.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::touchVertexFirstTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ApplyRefineDeleteCriterion.touchVertexFirstTime(vertex,x);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::touchVertexLastTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ApplyRefineDeleteCriterion.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::prepareSendToNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex
) {
   _map2ApplyRefineDeleteCriterion.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::beginIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {

  _map2ApplyRefineDeleteCriterion.beginIteration(solverState);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::endIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {

  _map2ApplyRefineDeleteCriterion.endIteration(solverState);

}
