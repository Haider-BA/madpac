#include "peano/applications/faxen/lbf/adapters/RegularGrid2ComputeVelocitiesDerivatives.h"

#include <limits>


peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::RegularGrid2ComputeVelocitiesDerivatives() {
}


peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::~RegularGrid2ComputeVelocitiesDerivatives() {
}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2ComputeVelocitiesDerivatives.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2ComputeVelocitiesDerivatives.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2ComputeVelocitiesDerivatives.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::createCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeVelocitiesDerivatives.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::destroyCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeVelocitiesDerivatives.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::handleCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ComputeVelocitiesDerivatives.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::mergeWithNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2ComputeVelocitiesDerivatives.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::touchVertexFirstTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeVelocitiesDerivatives.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::touchVertexLastTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ComputeVelocitiesDerivatives.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::prepareSendToNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
   _map2ComputeVelocitiesDerivatives.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::beginIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2ComputeVelocitiesDerivatives.beginIteration(solverState);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2ComputeVelocitiesDerivatives::endIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2ComputeVelocitiesDerivatives.endIteration(solverState);

}
