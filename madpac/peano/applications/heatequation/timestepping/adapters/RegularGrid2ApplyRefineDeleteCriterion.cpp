#include "peano/applications/heatequation/timestepping/adapters/RegularGrid2ApplyRefineDeleteCriterion.h"

#include <limits>


peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::RegularGrid2ApplyRefineDeleteCriterion() {
}


peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::~RegularGrid2ApplyRefineDeleteCriterion() {
}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2ApplyRefineDeleteCriterion.createInnerVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2ApplyRefineDeleteCriterion.createBoundaryVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2ApplyRefineDeleteCriterion.destroyVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ApplyRefineDeleteCriterion.createCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ApplyRefineDeleteCriterion.destroyCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ApplyRefineDeleteCriterion.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex,
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
  int fromRank) {
   _map2ApplyRefineDeleteCriterion.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ApplyRefineDeleteCriterion.touchVertexFirstTime(vertex,x);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ApplyRefineDeleteCriterion.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
   _map2ApplyRefineDeleteCriterion.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2ApplyRefineDeleteCriterion.beginIteration(solverState);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion::endIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2ApplyRefineDeleteCriterion.endIteration(solverState);

}
