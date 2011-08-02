#include "peano/applications/diffusionequation/explicittimestepping/adapters/RegularGrid2SetupExperimentAndPlot.h"

#include <limits>


peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::RegularGrid2SetupExperimentAndPlot() {
}


peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::~RegularGrid2SetupExperimentAndPlot() {
}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.createInnerVertex(x,h,vertex);
  _map2PlotSolution.createInnerVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.createBoundaryVertex(x,h,vertex);
  _map2PlotSolution.createBoundaryVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.destroyVertex(x,h,vertex);
  _map2PlotSolution.destroyVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::createCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.createCell(vertices,cell,enumerator);
  _map2PlotSolution.createCell(vertices,cell,enumerator);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::destroyCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.destroyCell(vertices,cell,enumerator);
  _map2PlotSolution.destroyCell(vertices,cell,enumerator);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::handleCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex* const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.handleCell(vertices,cell,enumerator);
  _map2PlotSolution.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::mergeWithNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex,
  const peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2SetupExperiment.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2PlotSolution.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::touchVertexFirstTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetupExperiment.touchVertexFirstTime(vertex,x);
  _map2PlotSolution.touchVertexFirstTime(vertex,x);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::touchVertexLastTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetupExperiment.touchVertexLastTime(vertex,x);
  _map2PlotSolution.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::prepareSendToNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex
) {
   _map2SetupExperiment.prepareSendToNeighbour(vertex);
   _map2PlotSolution.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::beginIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {

  _map2SetupExperiment.beginIteration(solverState);
  _map2PlotSolution.beginIteration(solverState);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2SetupExperimentAndPlot::endIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {

  _map2SetupExperiment.endIteration(solverState);
  _map2PlotSolution.endIteration(solverState);

}
