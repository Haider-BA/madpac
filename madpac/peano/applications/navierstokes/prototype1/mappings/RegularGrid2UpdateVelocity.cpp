#include "peano/applications/navierstokes/prototype1/mappings/RegularGrid2UpdateVelocity.h"


tarch::logging::Log peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::_log( "peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity" );


peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::RegularGrid2UpdateVelocity()
  : _elementType(ELEMENT_TYPE_UNDEF)
{
  logTraceIn( "RegularGrid2UpdateVelocity()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2UpdateVelocity()" );
}


peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::~RegularGrid2UpdateVelocity() {
  logTraceIn( "~RegularGrid2UpdateVelocity()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2UpdateVelocity()" );
}

  
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::createCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::destroyCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::handleCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  _h = enumerator.getCellSize();
  assertion( !equals(_h, Vector(0.0)) );

  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex, 
  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::touchVertexFirstTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::touchVertexLastTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );

  if ( vertex.isVertexHoldingARealDoF() ) {
    if( _elementType == EnhancedDivergenceFree ){
      vertex.prepareODEDerivativeEnhancedDivFree( _tau, _h );
    } else if ( _elementType == Dlinear ) {
      vertex.prepareODEDerivativeDlinear( _tau, _h );
    } else {
      logError("touchVertexLastTime", "Undefined element type");
      exit(ASSERTION_EXIT_CODE);
    }
    vertex.handleODETimeUpdate(_tau, _h );
    // For acceleration force computation temporary storage
    // problem with Gauss-Seidel pressure! tmp debug std::cout
    // pressure would needed to be reset, too
    //vertex.resetPressureGradients();
	}

  vertex.resetFValues();
  //No reset for valid initial gradP-Values for next timestep:
	//vertex.resetPressureGradients();

  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::beginIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  _tau = solverState.getOdeTau();
  _elementType = solverState.getElementType();

  _log.info("beginIteration()","start iteration for UpdateVelocity mapping ...");
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2UpdateVelocity::endIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}

