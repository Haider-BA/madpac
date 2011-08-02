#include "peano/applications/navierstokes/prototype1/mappings/RegularGrid2CalculatePPERHS.h"

#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculatePPERHSEnhancedDivFree.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculatePPERHSDlinear.h"

tarch::logging::Log peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::_log( "peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS" );


peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::RegularGrid2CalculatePPERHS() {
  logTraceIn( "RegularGrid2CalculatePPERHS()" );


  logTraceOut( "RegularGrid2CalculatePPERHS()" );
}


peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::~RegularGrid2CalculatePPERHS() {
  logTraceIn( "~RegularGrid2CalculatePPERHS()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2CalculatePPERHS()" );
}

  
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::createCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::destroyCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::handleCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  _adaptee->calculateCellPPERightHandSide(vertices, enumerator, cell);

  ////TODO unterweg
  //std::cout << "unterweg: RHS(" << enumerator.getCellCenter() << ") = " << cell.getRhsPPE() << std::endl;
  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex, 
  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::touchVertexFirstTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::touchVertexLastTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::beginIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  switch(solverState.getElementType()){
    case peano::applications::navierstokes::prototype1::DivergenceFree:
      _log.debug("beginIteration","AbstractCalculatePPERHS pointer is set to CalculateFEnhancedDivFree");
      _adaptee = std::auto_ptr<peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSEnhancedDivFree>(
          new peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSEnhancedDivFree(
              1.0, //Magic number ;-) TODO Set an appropriate adjustment factor here
              solverState.getOdeTau()
          )
      );  break;
    case peano::applications::navierstokes::prototype1::Dlinear:
      _log.debug("beginIteration","AbstractCalculatePPERHS pointer is set to CalculateFDlinear");
      _adaptee = std::auto_ptr<peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSDlinear>(
          new peano::applications::navierstokes::prototype1::fluidnumerics::CalculatePPERHSDlinear(
              1.0, //Magic number ;-) TODO Set an appropriate adjustment factor here
              solverState.getOdeTau()
          )
      );  break;
    default:
      assertionFail("Wrong element type in state. Method RegularGrid2CalculateF::setCalculateF(...)");
      _log.error("peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::setCalculateF", "Wrong element type in state. Method RegularGrid2CalculateF::setCalculateF(...)");
      exit(ASSERTION_EXIT_CODE);
    }

  _log.info("beginIteration()","start iteration for CalculatePPERHS mapping ...");
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculatePPERHS::endIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );

  _adaptee.reset();

  logTraceOutWith1Argument( "endIteration()", solverState );
}

