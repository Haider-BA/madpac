#include "peano/applications/faxen/lbf/adapters/RegularGrid2SwitchFromNSE2LB.h"

#include <limits>


peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::RegularGrid2SwitchFromNSE2LB() {
}


peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::~RegularGrid2SwitchFromNSE2LB() {
}


void peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2SwitchFromNSE2LB.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2SwitchFromNSE2LB.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2SwitchFromNSE2LB.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::createCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SwitchFromNSE2LB.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::destroyCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SwitchFromNSE2LB.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::handleCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SwitchFromNSE2LB.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::mergeWithNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2SwitchFromNSE2LB.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::touchVertexFirstTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SwitchFromNSE2LB.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::touchVertexLastTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SwitchFromNSE2LB.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::prepareSendToNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
   _map2SwitchFromNSE2LB.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::beginIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2SwitchFromNSE2LB.beginIteration(solverState);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2SwitchFromNSE2LB::endIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2SwitchFromNSE2LB.endIteration(solverState);

}
