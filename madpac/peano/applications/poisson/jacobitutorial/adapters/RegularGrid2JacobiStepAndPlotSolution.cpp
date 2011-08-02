#include "peano/applications/poisson/jacobitutorial/adapters/RegularGrid2JacobiStepAndPlotSolution.h"

#include <limits>


peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::RegularGrid2JacobiStepAndPlotSolution() {
}


peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::~RegularGrid2JacobiStepAndPlotSolution() {
}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {

  _map2JacobiStep.createInnerVertex(x,h,vertex);
  _map2PlotSolution.createInnerVertex(x,h,vertex);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {

  _map2JacobiStep.createBoundaryVertex(x,h,vertex);
  _map2PlotSolution.createBoundaryVertex(x,h,vertex);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {

  _map2JacobiStep.destroyVertex(x,h,vertex);
  _map2PlotSolution.destroyVertex(x,h,vertex);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::createCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex const * const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2JacobiStep.createCell(vertices,cell,enumerator);
  _map2PlotSolution.createCell(vertices,cell,enumerator);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::destroyCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex const * const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2JacobiStep.destroyCell(vertices,cell,enumerator);
  _map2PlotSolution.destroyCell(vertices,cell,enumerator);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::handleCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex* const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2JacobiStep.handleCell(vertices,cell,enumerator);
  _map2PlotSolution.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::mergeWithNeighbour(
  peano::applications::poisson::jacobitutorial::RegularGridVertex& vertex,
  const peano::applications::poisson::jacobitutorial::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2JacobiStep.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2PlotSolution.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::touchVertexFirstTime(
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2JacobiStep.touchVertexFirstTime(vertex,x);
  _map2PlotSolution.touchVertexFirstTime(vertex,x);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::touchVertexLastTime(
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2JacobiStep.touchVertexLastTime(vertex,x);
  _map2PlotSolution.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::prepareSendToNeighbour(
  peano::applications::poisson::jacobitutorial::RegularGridVertex& vertex
) {
   _map2JacobiStep.prepareSendToNeighbour(vertex);
   _map2PlotSolution.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::beginIteration(
  peano::applications::poisson::jacobitutorial::RegularGridState&  solverState
) {

  _map2JacobiStep.beginIteration(solverState);
  _map2PlotSolution.beginIteration(solverState);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2JacobiStepAndPlotSolution::endIteration(
  peano::applications::poisson::jacobitutorial::RegularGridState&  solverState
) {

  _map2JacobiStep.endIteration(solverState);
  _map2PlotSolution.endIteration(solverState);

}
