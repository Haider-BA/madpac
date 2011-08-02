#include "peano/applications/diffusionequation/explicittimestepping/adapters/RegularGrid2PerformExplitEulerTimeStep.h"

#include <limits>


peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::RegularGrid2PerformExplitEulerTimeStep() {
}


peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::~RegularGrid2PerformExplitEulerTimeStep() {
}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2PerformExplitEulerTimeStep.createInnerVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2PerformExplitEulerTimeStep.createBoundaryVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2PerformExplitEulerTimeStep.destroyVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::createCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformExplitEulerTimeStep.createCell(vertices,cell,enumerator);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::destroyCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformExplitEulerTimeStep.destroyCell(vertices,cell,enumerator);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::handleCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex* const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformExplitEulerTimeStep.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::mergeWithNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex,
  const peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2PerformExplitEulerTimeStep.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::touchVertexFirstTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2PerformExplitEulerTimeStep.touchVertexFirstTime(vertex,x);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::touchVertexLastTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2PerformExplitEulerTimeStep.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::prepareSendToNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex
) {
   _map2PerformExplitEulerTimeStep.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::beginIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {

  _map2PerformExplitEulerTimeStep.beginIteration(solverState);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStep::endIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {

  _map2PerformExplitEulerTimeStep.endIteration(solverState);

}
