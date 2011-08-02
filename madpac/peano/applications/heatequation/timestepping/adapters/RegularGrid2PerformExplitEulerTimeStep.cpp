#include "peano/applications/heatequation/timestepping/adapters/RegularGrid2PerformExplitEulerTimeStep.h"

#include <limits>


peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::RegularGrid2PerformExplitEulerTimeStep() {
}


peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::~RegularGrid2PerformExplitEulerTimeStep() {
}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2PerformExplitEulerTimeStep.createInnerVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2PerformExplitEulerTimeStep.createBoundaryVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2PerformExplitEulerTimeStep.destroyVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformExplitEulerTimeStep.createCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformExplitEulerTimeStep.destroyCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformExplitEulerTimeStep.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex,
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
  int fromRank) {
   _map2PerformExplitEulerTimeStep.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2PerformExplitEulerTimeStep.touchVertexFirstTime(vertex,x);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2PerformExplitEulerTimeStep.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
   _map2PerformExplitEulerTimeStep.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2PerformExplitEulerTimeStep.beginIteration(solverState);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::endIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2PerformExplitEulerTimeStep.endIteration(solverState);

}
