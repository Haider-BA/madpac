#include "peano/applications/shallowwater/adapters/RegularGrid2SetupExperimentAndPlotStartSolution.h"

#include <limits>


peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::RegularGrid2SetupExperimentAndPlotStartSolution() {
}


peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::~RegularGrid2SetupExperimentAndPlotStartSolution() {
}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.createInnerVertex(x,h,vertex);
  _map2PlotSolution.createInnerVertex(x,h,vertex);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.createBoundaryVertex(x,h,vertex);
  _map2PlotSolution.createBoundaryVertex(x,h,vertex);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.destroyVertex(x,h,vertex);
  _map2PlotSolution.destroyVertex(x,h,vertex);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::createCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.createCell(vertices,cell,enumerator);
  _map2PlotSolution.createCell(vertices,cell,enumerator);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::destroyCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.destroyCell(vertices,cell,enumerator);
  _map2PlotSolution.destroyCell(vertices,cell,enumerator);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::handleCell(
  peano::applications::shallowwater::RegularGridVertex* const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.handleCell(vertices,cell,enumerator);
  _map2PlotSolution.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::mergeWithNeighbour(
  peano::applications::shallowwater::RegularGridVertex& vertex,
  const peano::applications::shallowwater::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2SetupExperiment.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2PlotSolution.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::touchVertexFirstTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetupExperiment.touchVertexFirstTime(vertex,x);
  _map2PlotSolution.touchVertexFirstTime(vertex,x);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::touchVertexLastTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetupExperiment.touchVertexLastTime(vertex,x);
  _map2PlotSolution.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::prepareSendToNeighbour(
  peano::applications::shallowwater::RegularGridVertex& vertex
) {
   _map2SetupExperiment.prepareSendToNeighbour(vertex);
   _map2PlotSolution.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::beginIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {

  _map2SetupExperiment.beginIteration(solverState);
  _map2PlotSolution.beginIteration(solverState);

}


void peano::applications::shallowwater::adapters::RegularGrid2SetupExperimentAndPlotStartSolution::endIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {

  _map2SetupExperiment.endIteration(solverState);
  _map2PlotSolution.endIteration(solverState);

}