#include "peano/applications/faxen/mappings/RegularGrid2ComputeRightHandSide.h"


tarch::logging::Log peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::_log( "peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide" );


peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::RegularGrid2ComputeRightHandSide() {
  logTraceIn( "RegularGrid2ComputeRightHandSide()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2ComputeRightHandSide()" );
}


peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::~RegularGrid2ComputeRightHandSide() {
  logTraceIn( "~RegularGrid2ComputeRightHandSide()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2ComputeRightHandSide()" );
}

  
void peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::createCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::destroyCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::handleCell(
  peano::applications::faxen::RegularGridVertex* const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

//  std::cout << "---- cell damn logging for rhs to find damn mistakes ----\n";

  double rhs_loc;
  double Fij   = cell.getF();
  double Fim1j = 2*vertices[enumerator(2)].getF1() - Fij;
  double Gij   = cell.getG();
  double Gijm1 = 2*vertices[enumerator(1)].getG0() - Gij;

  rhs_loc = ((Fij-Fim1j)/_dx+(Gij-Gijm1)/_dy)/_dt;

//  std::cout << "Fim1j and Fij: " << Fim1j << "; " << Fij << "\n" ;
//  std::cout << "Gijm1 and Gij: " << Gijm1 << "; " << Gij << "\n" ;
//  std::cout << "RHS          : " << rhs_loc << "\n" ;

  cell.setRhs(rhs_loc);

  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::mergeWithNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex,
  const peano::applications::faxen::RegularGridVertex& neighbour,
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::touchVertexFirstTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::touchVertexLastTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::prepareSendToNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::beginIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  _dx = solverState.getDelx();
  _dy = solverState.getDely();
  _dt = solverState.getDelt();

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::mappings::RegularGrid2ComputeRightHandSide::endIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}

