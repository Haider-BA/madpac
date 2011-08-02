#include "peano/applications/poisson/vhhjacobi/mappings/RegularGrid2JacobiStep.h"
#include "peano/toolbox/solver/VirtualHierarchicalHRefinement.h"


tarch::logging::Log peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::_log( "peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep" );


peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::RegularGrid2JacobiStep() {
  _vhhRefinement = new peano::toolbox::solver::VirtualHierarchicalHRefinement(10);
}


peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::~RegularGrid2JacobiStep() {
  delete _vhhRefinement;
}

  
void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex
) {
}


void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex
) {
}


void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex
) {
}


void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::createCell(
  peano::applications::poisson::vhhjacobi::RegularGridVertex const * const vertices,
  peano::applications::poisson::vhhjacobi::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}



void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::destroyCell(
  peano::applications::poisson::vhhjacobi::RegularGridVertex const * const vertices,
  peano::applications::poisson::vhhjacobi::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}


void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::handleCell(
  peano::applications::poisson::vhhjacobi::RegularGridVertex* const vertices,
  peano::applications::poisson::vhhjacobi::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  tarch::la::Vector<TWO_POWER_D,double> residual = RegularGridVertex::readResidual( enumerator, vertices );
  tarch::la::Vector<TWO_POWER_D,double> u        = RegularGridVertex::readU( enumerator, vertices );

  _vhhRefinement->computeVirtualHierarchicalHRefinement(
    u,
    RegularGridCell::getStencil(),
    RegularGridVertex::readRhs(enumerator, vertices),
    0.8
  );

  // @todo RK: Plot result as well

  residual += cell.applyStencil(u);


  RegularGridVertex::writeResidual( enumerator, vertices, residual );

  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::mergeWithNeighbour(
  peano::applications::poisson::vhhjacobi::RegularGridVertex& vertex, 
  const peano::applications::poisson::vhhjacobi::RegularGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif


void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::touchVertexFirstTime(
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  vertex.clearResidual();

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::touchVertexLastTime(
  peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );

  const double relaxationFactor = 0.8;

  vertex.update( relaxationFactor );

  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::prepareSendToNeighbour(
  peano::applications::poisson::vhhjacobi::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::beginIteration(
  peano::applications::poisson::vhhjacobi::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  RegularGridCell::initStencil();

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::poisson::vhhjacobi::mappings::RegularGrid2JacobiStep::endIteration(
  peano::applications::poisson::vhhjacobi::RegularGridState&  solverState
) {
}

