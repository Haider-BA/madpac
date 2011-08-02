#include "peano/applications/faxen/lbf/adapters/RegularGrid2Initialize.h"

#include <limits>


peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::RegularGrid2Initialize() {
}


peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::~RegularGrid2Initialize() {
}


void peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2Initialize.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2Initialize.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2Initialize.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::createCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2Initialize.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::destroyCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2Initialize.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::handleCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2Initialize.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::mergeWithNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2Initialize.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::touchVertexFirstTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2Initialize.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::touchVertexLastTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2Initialize.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::prepareSendToNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
   _map2Initialize.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::beginIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2Initialize.beginIteration(solverState);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2Initialize::endIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2Initialize.endIteration(solverState);

}
