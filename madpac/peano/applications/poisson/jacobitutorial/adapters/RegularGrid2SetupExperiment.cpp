#include "peano/applications/poisson/jacobitutorial/adapters/RegularGrid2SetupExperiment.h"

#include <limits>


peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::RegularGrid2SetupExperiment() {
}


peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::~RegularGrid2SetupExperiment() {
}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.createInnerVertex(x,h,vertex);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.createBoundaryVertex(x,h,vertex);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.destroyVertex(x,h,vertex);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::createCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex const * const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.createCell(vertices,cell,enumerator);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::destroyCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex const * const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.destroyCell(vertices,cell,enumerator);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::handleCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex* const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::mergeWithNeighbour(
  peano::applications::poisson::jacobitutorial::RegularGridVertex& vertex,
  const peano::applications::poisson::jacobitutorial::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2SetupExperiment.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::touchVertexFirstTime(
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetupExperiment.touchVertexFirstTime(vertex,x);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::touchVertexLastTime(
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetupExperiment.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::prepareSendToNeighbour(
  peano::applications::poisson::jacobitutorial::RegularGridVertex& vertex
) {
   _map2SetupExperiment.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::beginIteration(
  peano::applications::poisson::jacobitutorial::RegularGridState&  solverState
) {

  _map2SetupExperiment.beginIteration(solverState);

}


void peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment::endIteration(
  peano::applications::poisson::jacobitutorial::RegularGridState&  solverState
) {

  _map2SetupExperiment.endIteration(solverState);

}
