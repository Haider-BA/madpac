#include "peano/applications/faxen/mappings/RegularGrid2SORStep.h"


tarch::logging::Log peano::applications::faxen::mappings::RegularGrid2SORStep::_log( "peano::applications::faxen::mappings::RegularGrid2SORStep" );


peano::applications::faxen::mappings::RegularGrid2SORStep::RegularGrid2SORStep() {
  logTraceIn( "RegularGrid2SORStep()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2SORStep()" );
}


peano::applications::faxen::mappings::RegularGrid2SORStep::~RegularGrid2SORStep() {
  logTraceIn( "~RegularGrid2SORStep()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2SORStep()" );
}

  
void peano::applications::faxen::mappings::RegularGrid2SORStep::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2SORStep::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2SORStep::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::mappings::RegularGrid2SORStep::createCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::mappings::RegularGrid2SORStep::destroyCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::mappings::RegularGrid2SORStep::handleCell(
  peano::applications::faxen::RegularGridVertex* const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  double Pij = cell.getP();
  double Pip1j = 2*vertices[enumerator(3)].getP1() - Pij;
  double Pim1j = 2*vertices[enumerator(2)].getP1() - Pij;
  double Pijp1 = 2*vertices[enumerator(3)].getP0() - Pij;
  double Pijm1 = 2*vertices[enumerator(1)].getP0() - Pij;
  double rhs   = cell.getRhs();

  double Pij_new = (1-_omega)*Pij + _omega*((Pip1j+Pim1j)/(_dx*_dx)+(Pijp1+Pijm1)/(_dy*_dy)-rhs)/
  								(2*((1/(_dx*_dx)+1/(_dy*_dy))));

  double P_m0 = vertices[enumerator(1)].getP0();
  double P_m1 = vertices[enumerator(2)].getP1();
  double P_m2 = vertices[enumerator(3)].getP1();
  double P_m3 = vertices[enumerator(3)].getP0();

  P_m0 += (Pij_new-Pij)/2;
  P_m1 += (Pij_new-Pij)/2;
  P_m2 += (Pij_new-Pij)/2;
  P_m3 += (Pij_new-Pij)/2;

  vertices[enumerator(1)].setP0(P_m0);
  vertices[enumerator(2)].setP1(P_m1);
  vertices[enumerator(3)].setP1(P_m2);
  vertices[enumerator(3)].setP0(P_m3);
  cell.setP(Pij_new);

  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2SORStep::mergeWithNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex,
  const peano::applications::faxen::RegularGridVertex& neighbour,
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2SORStep::touchVertexFirstTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2SORStep::touchVertexLastTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2SORStep::prepareSendToNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2SORStep::beginIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  _omega = solverState.getRelaxationFactor();
  _dx = solverState.getDelx();
  _dy = solverState.getDely();

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::mappings::RegularGrid2SORStep::endIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}

