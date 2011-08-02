#include "peano/applications/diffusionequation/explicittimestepping/adapters/RegularGrid2PlotSolution.h"

#include <limits>


peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::RegularGrid2PlotSolution() {
}


peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::~RegularGrid2PlotSolution() {
}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2PlotSolution.createInnerVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2PlotSolution.createBoundaryVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {

  _map2PlotSolution.destroyVertex(x,h,vertex);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::createCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PlotSolution.createCell(vertices,cell,enumerator);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::destroyCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PlotSolution.destroyCell(vertices,cell,enumerator);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::handleCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex* const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PlotSolution.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::mergeWithNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex,
  const peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2PlotSolution.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::touchVertexFirstTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2PlotSolution.touchVertexFirstTime(vertex,x);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::touchVertexLastTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2PlotSolution.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::prepareSendToNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex
) {
   _map2PlotSolution.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::beginIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {

  _map2PlotSolution.beginIteration(solverState);

}


void peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2PlotSolution::endIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {

  _map2PlotSolution.endIteration(solverState);

}
