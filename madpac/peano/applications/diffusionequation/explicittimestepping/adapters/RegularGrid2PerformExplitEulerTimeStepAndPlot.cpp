#include "peano/applications/diffusionequation/explicittimestepping/adapters/RegularGrid2PerformExplitEulerTimeStepAndPlot.h"

#include <limits>


peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::RegularGrid2PerformExplitEulerTimeStepAndPlot() {
}


peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::~RegularGrid2PerformExplitEulerTimeStepAndPlot() {
}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2PerformExplitEulerTimeStep.createInnerVertex(x,h,vertex);
  _map2PlotSolution.createInnerVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2PerformExplitEulerTimeStep.createBoundaryVertex(x,h,vertex);
  _map2PlotSolution.createBoundaryVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2PerformExplitEulerTimeStep.destroyVertex(x,h,vertex);
  _map2PlotSolution.destroyVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::createCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformExplitEulerTimeStep.createCell(vertices,cell,enumerator);
  _map2PlotSolution.createCell(vertices,cell,enumerator);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::destroyCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformExplitEulerTimeStep.destroyCell(vertices,cell,enumerator);
  _map2PlotSolution.destroyCell(vertices,cell,enumerator);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::handleCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex* const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformExplitEulerTimeStep.handleCell(vertices,cell,enumerator);
  _map2PlotSolution.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::mergeWithNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex,
  const peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2PerformExplitEulerTimeStep.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2PlotSolution.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::touchVertexFirstTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2PerformExplitEulerTimeStep.touchVertexFirstTime(vertex,x);
  _map2PlotSolution.touchVertexFirstTime(vertex,x);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::touchVertexLastTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2PerformExplitEulerTimeStep.touchVertexLastTime(vertex,x);
  _map2PlotSolution.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::prepareSendToNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex
) {
   _map2PerformExplitEulerTimeStep.prepareSendToNeighbour(vertex);
   _map2PlotSolution.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::beginIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {

  _map2PerformExplitEulerTimeStep.beginIteration(solverState);
  _map2PlotSolution.beginIteration(solverState);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PerformExplitEulerTimeStepAndPlot::endIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {

  _map2PerformExplitEulerTimeStep.endIteration(solverState);
  _map2PlotSolution.endIteration(solverState);

}
