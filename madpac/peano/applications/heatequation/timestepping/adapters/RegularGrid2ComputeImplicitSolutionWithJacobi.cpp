#include "peano/applications/heatequation/timestepping/adapters/RegularGrid2ComputeImplicitSolutionWithJacobi.h"

#include <limits>


peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::RegularGrid2ComputeImplicitSolutionWithJacobi() {
}


peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::~RegularGrid2ComputeImplicitSolutionWithJacobi() {
}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2ComputeImplicitSolutionWithJacobi.createInnerVertex(x,h,vertex);
  _map2CoarseSolution.createInnerVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2ComputeImplicitSolutionWithJacobi.createBoundaryVertex(x,h,vertex);
  _map2CoarseSolution.createBoundaryVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {

  _map2ComputeImplicitSolutionWithJacobi.destroyVertex(x,h,vertex);
  _map2CoarseSolution.destroyVertex(x,h,vertex);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeImplicitSolutionWithJacobi.createCell(vertices,cell,enumerator);
  _map2CoarseSolution.createCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeImplicitSolutionWithJacobi.destroyCell(vertices,cell,enumerator);
  _map2CoarseSolution.destroyCell(vertices,cell,enumerator);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeImplicitSolutionWithJacobi.handleCell(vertices,cell,enumerator);
  _map2CoarseSolution.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex,
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
  int fromRank) {
   _map2ComputeImplicitSolutionWithJacobi.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2CoarseSolution.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeImplicitSolutionWithJacobi.touchVertexFirstTime(vertex,x);
  _map2CoarseSolution.touchVertexFirstTime(vertex,x);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeImplicitSolutionWithJacobi.touchVertexLastTime(vertex,x);
  _map2CoarseSolution.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
   _map2ComputeImplicitSolutionWithJacobi.prepareSendToNeighbour(vertex);
   _map2CoarseSolution.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2ComputeImplicitSolutionWithJacobi.beginIteration(solverState);
  _map2CoarseSolution.beginIteration(solverState);

}


void peano::applications::heatequation::timestepping::adapters::RegularGrid2ComputeImplicitSolutionWithJacobi::endIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {

  _map2ComputeImplicitSolutionWithJacobi.endIteration(solverState);
  _map2CoarseSolution.endIteration(solverState);

}
