#include "peano/applications/shallowwater/adapters/RegularGrid2GodunovMethodAndPlotSolution.h"

#include <limits>


peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::RegularGrid2GodunovMethodAndPlotSolution() {
}


peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::~RegularGrid2GodunovMethodAndPlotSolution() {
}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {

  _map2GodunovMethod.createInnerVertex(x,h,vertex);
  _map2PlotSolution.createInnerVertex(x,h,vertex);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {

  _map2GodunovMethod.createBoundaryVertex(x,h,vertex);
  _map2PlotSolution.createBoundaryVertex(x,h,vertex);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {

  _map2GodunovMethod.destroyVertex(x,h,vertex);
  _map2PlotSolution.destroyVertex(x,h,vertex);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::createCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2GodunovMethod.createCell(vertices,cell,enumerator);
  _map2PlotSolution.createCell(vertices,cell,enumerator);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::destroyCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2GodunovMethod.destroyCell(vertices,cell,enumerator);
  _map2PlotSolution.destroyCell(vertices,cell,enumerator);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::handleCell(
  peano::applications::shallowwater::RegularGridVertex* const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2GodunovMethod.handleCell(vertices,cell,enumerator);
  _map2PlotSolution.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::mergeWithNeighbour(
  peano::applications::shallowwater::RegularGridVertex& vertex,
  const peano::applications::shallowwater::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2GodunovMethod.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2PlotSolution.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::touchVertexFirstTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2GodunovMethod.touchVertexFirstTime(vertex,x);
  _map2PlotSolution.touchVertexFirstTime(vertex,x);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::touchVertexLastTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2GodunovMethod.touchVertexLastTime(vertex,x);
  _map2PlotSolution.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::prepareSendToNeighbour(
  peano::applications::shallowwater::RegularGridVertex& vertex
) {
   _map2GodunovMethod.prepareSendToNeighbour(vertex);
   _map2PlotSolution.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::beginIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {

  _map2GodunovMethod.beginIteration(solverState);
  _map2PlotSolution.beginIteration(solverState);

}


void peano::applications::shallowwater::adapters::RegularGrid2GodunovMethodAndPlotSolution::endIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {

  _map2GodunovMethod.endIteration(solverState);
  _map2PlotSolution.endIteration(solverState);

}
