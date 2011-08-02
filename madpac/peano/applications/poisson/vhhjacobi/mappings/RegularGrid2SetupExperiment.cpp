#include "peano/applications/poisson/vhhjacobi/mappings/RegularGrid2SetupExperiment.h"


tarch::logging::Log peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::_log( "peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment" );


double peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::getRhs(
  const tarch::la::Vector<DIMENSIONS,double>&  x
) const {
  double result = DIMENSIONS;
  result *= tarch::la::PI * tarch::la::PI;
  for (int d=0; d<DIMENSIONS; d++) {
    result *= std::sin( tarch::la::PI * x(d) );
  }
  return result;
}


peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::RegularGrid2SetupExperiment() {
}


peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::~RegularGrid2SetupExperiment() {
}

  
void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );

  vertex.init(0.0,getRhs(x),h);

  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );

  vertex.init(0.0,getRhs(x),h);

  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex
) {
}


void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::createCell(
  peano::applications::poisson::vhhjacobi::RegularGridVertex const * const vertices,
  peano::applications::poisson::vhhjacobi::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}



void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::destroyCell(
  peano::applications::poisson::vhhjacobi::RegularGridVertex const * const vertices,
  peano::applications::poisson::vhhjacobi::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}


void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::handleCell(
  peano::applications::poisson::vhhjacobi::RegularGridVertex* const vertices,
  peano::applications::poisson::vhhjacobi::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}

#ifdef Parallel
void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::mergeWithNeighbour(
  peano::applications::poisson::vhhjacobi::RegularGridVertex& vertex, 
  const peano::applications::poisson::vhhjacobi::RegularGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::touchVertexFirstTime(
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
}


void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::touchVertexLastTime(
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
}

#ifdef Parallel
void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::prepareSendToNeighbour(
  peano::applications::poisson::vhhjacobi::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::beginIteration(
  peano::applications::poisson::vhhjacobi::RegularGridState&  solverState
) {
}


void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2SetupExperiment::endIteration(
  peano::applications::poisson::vhhjacobi::RegularGridState&  solverState
) {
}

