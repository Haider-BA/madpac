#include "peano/applications/faxen/lbf/adapters/RegularGrid2DynamicRefinementForSpacetreeGridAdapter.h"

#include <limits>


peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::RegularGrid2DynamicRefinementForSpacetreeGridAdapter() {
}


peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::~RegularGrid2DynamicRefinementForSpacetreeGridAdapter() {
}


void peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2DynamicRefinementForSpacetreeGrid.createInnerVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2DynamicRefinementForSpacetreeGrid.createBoundaryVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {

  _map2DynamicRefinementForSpacetreeGrid.destroyVertex(x,h,vertex);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::createCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2DynamicRefinementForSpacetreeGrid.createCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::destroyCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2DynamicRefinementForSpacetreeGrid.destroyCell(vertices,cell,enumerator);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::handleCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2DynamicRefinementForSpacetreeGrid.handleCell(vertices,cell,enumerator);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::mergeWithNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour, 
  int fromRank) {
   _map2DynamicRefinementForSpacetreeGrid.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::touchVertexFirstTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2DynamicRefinementForSpacetreeGrid.touchVertexFirstTime(vertex,x);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::touchVertexLastTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2DynamicRefinementForSpacetreeGrid.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::prepareSendToNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
   _map2DynamicRefinementForSpacetreeGrid.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::beginIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2DynamicRefinementForSpacetreeGrid.beginIteration(solverState);

}


void peano::applications::faxen::lbf::adapters::RegularGrid2DynamicRefinementForSpacetreeGridAdapter::endIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {

  _map2DynamicRefinementForSpacetreeGrid.endIteration(solverState);

}
