#include "peano/applications/faxen/adapters/RegularGrid2ControlTimeStep.h"

#include <limits>


peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::RegularGrid2ControlTimeStep() {
}


peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::~RegularGrid2ControlTimeStep() {
}


void peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2ControlTimeStep.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2ControlTimeStep.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {

  _map2ControlTimeStep.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::createCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ControlTimeStep.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::destroyCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ControlTimeStep.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::handleCell(
  peano::applications::faxen::RegularGridVertex* const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2ControlTimeStep.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::mergeWithNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex,
  const peano::applications::faxen::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2ControlTimeStep.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::touchVertexFirstTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ControlTimeStep.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::touchVertexLastTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2ControlTimeStep.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::prepareSendToNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex
) {
   _map2ControlTimeStep.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::beginIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2ControlTimeStep.beginIteration(solverState);

}


void peano::applications::faxen::adapters::RegularGrid2ControlTimeStep::endIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {

  _map2ControlTimeStep.endIteration(solverState);

}
