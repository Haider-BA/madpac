#include "peano/applications/faxen/lbf/adapters/RegularGrid2InitializeNSE.h"

#include <limits>


peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::RegularGrid2InitializeNSE() {
}


peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::~RegularGrid2InitializeNSE() {
}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2InitializeNSE.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2InitializeNSE.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2InitializeNSE.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::createCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2InitializeNSE.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::destroyCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2InitializeNSE.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::handleCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2InitializeNSE.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::mergeWithNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2InitializeNSE.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::touchVertexFirstTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2InitializeNSE.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::touchVertexLastTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2InitializeNSE.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::prepareSendToNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
   _map2InitializeNSE.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::beginIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2InitializeNSE.beginIteration(solverState);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2InitializeNSE::endIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2InitializeNSE.endIteration(solverState);

}
