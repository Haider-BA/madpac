#include "peano/applications/heatequation/timestepping/adapters/RegularGrid2SetupOneLevelOfExperiment.h"

#include <limits>


peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::RegularGrid2SetupOneLevelOfExperiment() {
}


peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::~RegularGrid2SetupOneLevelOfExperiment() {
}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2SetupOneLevelOfExperiment.createInnerVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2SetupOneLevelOfExperiment.createBoundaryVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2SetupOneLevelOfExperiment.destroyVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupOneLevelOfExperiment.createCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupOneLevelOfExperiment.destroyCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupOneLevelOfExperiment.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex,
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
  int fromRank) {
   _map2SetupOneLevelOfExperiment.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetupOneLevelOfExperiment.touchVertexFirstTime(vertex,x);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetupOneLevelOfExperiment.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
   _map2SetupOneLevelOfExperiment.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2SetupOneLevelOfExperiment.beginIteration(solverState);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2SetupOneLevelOfExperiment::endIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2SetupOneLevelOfExperiment.endIteration(solverState);

}
