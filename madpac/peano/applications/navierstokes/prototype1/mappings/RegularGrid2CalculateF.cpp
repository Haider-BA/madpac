#include "peano/applications/navierstokes/prototype1/mappings/RegularGrid2CalculateF.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateFDivFree.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateFDlinear.h"

tarch::logging::Log peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::_log( "peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF" );


peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::RegularGrid2CalculateF() {
  logTraceIn( "RegularGrid2CalculateF()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2CalculateF()" );
}


peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::~RegularGrid2CalculateF() {
  logTraceIn( "~RegularGrid2CalculateF()" );
  logTraceOut( "~RegularGrid2CalculateF()" );
}

  
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::createCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::destroyCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::handleCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  _calculateF->accumulateFValues(vertices, enumerator); //TODO hier h=1.0, position=1.0 ersetzt -  schauen wo man h herkriegt

  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex, 
  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {

}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::touchVertexFirstTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  vertex.resetFValues();

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::touchVertexLastTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );

  if (vertex.getFluidVertexType() != peano::applications::navierstokes::prototype1::DIRICHLET &&
        vertex.getFluidVertexType() != peano::applications::navierstokes::prototype1::MIXED_DIRICHLET_NEUMANN) {
      //inner or Neumann nodes, nothing to do
      assertion1( vertex.getFluidVertexType() == peano::applications::navierstokes::prototype1::INNER  ||
                  vertex.getFluidVertexType() == peano::applications::navierstokes::prototype1::NEUMANN ||
                  vertex.getFluidVertexType() == peano::applications::navierstokes::prototype1::PERIODIC   ||
                  vertex.getFluidVertexType() == peano::applications::navierstokes::prototype1::OUTER,
                  vertex.getFluidVertexType() );
    }
    else if (vertex.getFluidVertexType() == peano::applications::navierstokes::prototype1::DIRICHLET) {
      vertex.setForce(vertex.getF());
      vertex.resetFValues();
    }

  //  else if (vertex.getFluidVertexType() == peano::applications::navierstokes::prototype1::MIXED_DIRICHLET_NEUMANN) {
  //    Vector normalPartOfF;
  //    Vector tangentPartOfF;
  //
  //    if (vertex.getBoundaryPartNumber() == peano::applications::navierstokes::prototype1::WALL_FREE_SLIP_Y ||
  //        vertex.getBoundaryPartNumber() == peano::applications::navierstokes::prototype1::WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN ||
  //        vertex.getBoundaryPartNumber() == peano::applications::navierstokes::prototype1::WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN
  //        ) {
  //        normalPartOfF  = vertex.getF();
  //        tangentPartOfF = vertex.getF();
  //        tangentPartOfF(1) = 0.0;
  //        normalPartOfF(0) = 0.0;
  //        #ifdef Dim3
  //        normalPartOfF(2) = 0.0;
  //        #endif
  //        vertex.setF(tangentPartOfF);
  //        vertex.setForce(normalPartOfF);
  //    }
  //    else if (vertex.getBoundaryPartNumber() == peano::applications::navierstokes::prototype1::WALL_FREE_SLIP_Z) {
  //      assertionMsg(false, "not yet implemented!");
  //    }
  //    else if (vertex.getBoundaryPartNumber() == peano::applications::navierstokes::prototype1::WALL_FREE_SLIP_YZ) {
  //      assertionMsg(false, "not yet implemented!");
  //    }
  //    else {
  //      assertionMsg(false, "Must never appear!");
  //    }
  //  }
  //  else {
  //    assertionMsg(false, "Must never appear!");
  //  }

  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::beginIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  setCalculateF(solverState);


//  _calculateF = new CalculateF(
//      solverState.getScenarioEta()/solverState.getScenarioEta(),
////      solverState.getScenarioHasInflowPressureBoundaryCondition(),
////      solverState.getScenarioHasOutflowPressureBoundaryCondition(),
////      solverState.getInletPressure(),
////      solverState.getOutletPressure,
//      solverState.getScenarioRho()
////      solverState.getGravityVector()
//  );

  _log.info("beginIteration()","start iteration for CalculateF mapping ...");
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::endIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::setCalculateF(
    peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
    )
{
  switch(solverState.getElementType()){
  case peano::applications::navierstokes::prototype1::DivergenceFree:
    _log.debug("setCalculateF","AbstractCalculateF pointer is set to CalculateFDivFree");
    _calculateF = std::auto_ptr<peano::applications::navierstokes::prototype1::fluidnumerics::AbstractCalculateF> (
        new peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree(
            solverState.getScenarioEta()/solverState.getScenarioRho(),
            solverState.getScenarioRho()
        ));  break;
  case peano::applications::navierstokes::prototype1::Dlinear:
    _log.debug("setCalculateF","AbstractCalculateF pointer is set to CalculateFDlinear");
      _calculateF = std::auto_ptr<peano::applications::navierstokes::prototype1::fluidnumerics::AbstractCalculateF> (
          new peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDlinear(
              solverState.getScenarioEta()/solverState.getScenarioRho(),
              solverState.getScenarioRho()
          ));  break;
  default:
    assertionFail("Wrong element type in state. Method RegularGrid2CalculateF::setCalculateF(...)");
    _log.error("peano::applications::navierstokes::prototype1::mappings::RegularGrid2CalculateF::setCalculateF", "Wrong element type in state. Method RegularGrid2CalculateF::setCalculateF(...)");
    exit(ASSERTION_EXIT_CODE);
  }
}


