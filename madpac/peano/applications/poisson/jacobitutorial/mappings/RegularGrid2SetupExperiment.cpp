#include "peano/applications/poisson/jacobitutorial/mappings/RegularGrid2SetupExperiment.h"


tarch::logging::Log peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::_log( "peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment" );


double peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::getRhs(
    const tarch::la::Vector<DIMENSIONS,double>&  x
  ) const {
  double result = DIMENSIONS;
  result *= tarch::la::PI * tarch::la::PI;
  for (int d=0; d<DIMENSIONS; d++) {
    result *= std::sin( tarch::la::PI * x(d) );
  }
  return result;
}


peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::RegularGrid2SetupExperiment() {
  logTraceIn( "RegularGrid2SetupExperiment()" );
  logTraceOut( "RegularGrid2SetupExperiment()" );
}


peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::~RegularGrid2SetupExperiment() {
  logTraceIn( "~RegularGrid2SetupExperiment()" );
  logTraceOut( "~RegularGrid2SetupExperiment()" );
}

  
void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  vertex.init(0.0,getRhs(x),h);
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  vertex.init(0.0,getRhs(x),h);
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  logTraceOut( "destroyVertex()" );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::createCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex const * const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::destroyCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex const * const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  logTraceOut( "destroyCell()" );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::handleCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex* const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::mergeWithNeighbour(
  peano::applications::poisson::jacobitutorial::RegularGridVertex& vertex, 
  const peano::applications::poisson::jacobitutorial::RegularGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::touchVertexFirstTime(
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::touchVertexLastTime(
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::prepareSendToNeighbour(
  peano::applications::poisson::jacobitutorial::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::beginIteration(
  peano::applications::poisson::jacobitutorial::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment::endIteration(
  peano::applications::poisson::jacobitutorial::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  logTraceOutWith1Argument( "endIteration()", solverState );
}

