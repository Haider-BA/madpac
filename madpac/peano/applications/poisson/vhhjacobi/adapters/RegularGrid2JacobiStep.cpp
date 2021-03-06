#include "peano/applications/poisson/vhhjacobi/adapters/RegularGrid2JacobiStep.h"

#include <limits>


peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::RegularGrid2JacobiStep() {
}


peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::~RegularGrid2JacobiStep() {
}


void peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex
) {

  _map2JacobiStep.createInnerVertex(x,h,vertex);

}


void peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex
) {

  _map2JacobiStep.createBoundaryVertex(x,h,vertex);

}


void peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex
) {

  _map2JacobiStep.destroyVertex(x,h,vertex);

}


void peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::createCell(
  peano::applications::poisson::vhhjacobi::RegularGridVertex const * const vertices,
  peano::applications::poisson::vhhjacobi::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2JacobiStep.createCell(vertices,cell,enumerator);

}


void peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::destroyCell(
  peano::applications::poisson::vhhjacobi::RegularGridVertex const * const vertices,
  peano::applications::poisson::vhhjacobi::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2JacobiStep.destroyCell(vertices,cell,enumerator);

}


void peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::handleCell(
  peano::applications::poisson::vhhjacobi::RegularGridVertex* const vertices,
  peano::applications::poisson::vhhjacobi::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2JacobiStep.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::mergeWithNeighbour(
  peano::applications::poisson::vhhjacobi::RegularGridVertex& vertex,
  const peano::applications::poisson::vhhjacobi::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2JacobiStep.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::touchVertexFirstTime(
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2JacobiStep.touchVertexFirstTime(vertex,x);

}


void peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::touchVertexLastTime(
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2JacobiStep.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::prepareSendToNeighbour(
  peano::applications::poisson::vhhjacobi::RegularGridVertex& vertex
) {
   _map2JacobiStep.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::beginIteration(
  peano::applications::poisson::vhhjacobi::RegularGridState&  solverState
) {

  _map2JacobiStep.beginIteration(solverState);

}


void peano::applications::poisson::vhhjacobi::adapters::RegularGrid2JacobiStep::endIteration(
  peano::applications::poisson::vhhjacobi::RegularGridState&  solverState
) {

  _map2JacobiStep.endIteration(solverState);

}
