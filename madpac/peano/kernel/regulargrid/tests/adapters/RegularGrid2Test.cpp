#include "peano/kernel/regulargrid/tests/adapters/RegularGrid2Test.h"
#include "peano/kernel/regulargrid/tests/TestTypes.h"



peano::kernel::regulargrid::tests::adapters::RegularGrid2Test::RegularGrid2Test() {
}


peano::kernel::regulargrid::tests::adapters::RegularGrid2Test::~RegularGrid2Test() {
}


void peano::kernel::regulargrid::tests::adapters::RegularGrid2Test::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::kernel::regulargrid::tests::Vertex&  vertex
) {
}


void peano::kernel::regulargrid::tests::adapters::RegularGrid2Test::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::kernel::regulargrid::tests::Vertex&  vertex
) {
}


void peano::kernel::regulargrid::tests::adapters::RegularGrid2Test::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::kernel::regulargrid::tests::Vertex&  vertex
) {
}


void peano::kernel::regulargrid::tests::adapters::RegularGrid2Test::createCell(
  peano::kernel::regulargrid::tests::Vertex const * const vertices,
  peano::kernel::regulargrid::tests::Cell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}


void peano::kernel::regulargrid::tests::adapters::RegularGrid2Test::destroyCell(
  peano::kernel::regulargrid::tests::Vertex const * const vertices,
  peano::kernel::regulargrid::tests::Cell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}


void peano::kernel::regulargrid::tests::adapters::RegularGrid2Test::handleCell(
  peano::kernel::regulargrid::tests::Vertex* const       vertices,
  peano::kernel::regulargrid::tests::Cell&               cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}


void peano::kernel::regulargrid::tests::adapters::RegularGrid2Test::touchVertexFirstTime(
  peano::kernel::regulargrid::tests::Vertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
}


void peano::kernel::regulargrid::tests::adapters::RegularGrid2Test::touchVertexLastTime(
  peano::kernel::regulargrid::tests::Vertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
}


void peano::kernel::regulargrid::tests::adapters::RegularGrid2Test::beginIteration(
  peano::kernel::regulargrid::tests::State&  solverState
) {
}


void peano::kernel::regulargrid::tests::adapters::RegularGrid2Test::endIteration(
  peano::kernel::regulargrid::tests::State&  solverState
) {
}
