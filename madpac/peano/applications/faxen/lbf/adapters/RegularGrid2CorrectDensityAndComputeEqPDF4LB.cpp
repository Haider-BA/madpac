#include "peano/applications/faxen/lbf/adapters/RegularGrid2CorrectDensityAndComputeEqPDF4LB.h"

#include <limits>


peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::RegularGrid2CorrectDensityAndComputeEqPDF4LB() {
}


peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::~RegularGrid2CorrectDensityAndComputeEqPDF4LB() {
}


void peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2CorrectDensity4LB.createInnerVertex(x,h,vertex);
  _map2ComputeEqPDF4LB.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2CorrectDensity4LB.createBoundaryVertex(x,h,vertex);
  _map2ComputeEqPDF4LB.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2CorrectDensity4LB.destroyVertex(x,h,vertex);
  _map2ComputeEqPDF4LB.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::createCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2CorrectDensity4LB.createCell(vertices,cell,enumerator);
  _map2ComputeEqPDF4LB.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::destroyCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2CorrectDensity4LB.destroyCell(vertices,cell,enumerator);
  _map2ComputeEqPDF4LB.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::handleCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2CorrectDensity4LB.handleCell(vertices,cell,enumerator);
  _map2ComputeEqPDF4LB.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::mergeWithNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2CorrectDensity4LB.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2ComputeEqPDF4LB.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::touchVertexFirstTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2CorrectDensity4LB.touchVertexFirstTime(vertex,x);
  _map2ComputeEqPDF4LB.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::touchVertexLastTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2CorrectDensity4LB.touchVertexLastTime(vertex,x);
  _map2ComputeEqPDF4LB.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::prepareSendToNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
   _map2CorrectDensity4LB.prepareSendToNeighbour(vertex);
   _map2ComputeEqPDF4LB.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::beginIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2CorrectDensity4LB.beginIteration(solverState);
  _map2ComputeEqPDF4LB.beginIteration(solverState);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2CorrectDensityAndComputeEqPDF4LB::endIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2CorrectDensity4LB.endIteration(solverState);
  _map2ComputeEqPDF4LB.endIteration(solverState);

}
