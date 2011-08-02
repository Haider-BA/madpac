#include "peano/applications/poisson/multigrid/mappings/SpacetreeGrid2ComputeGalerkinCoarseGridOperator.h"

tarch::logging::Log peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::_log( "peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator" );

peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::SpacetreeGrid2ComputeGalerkinCoarseGridOperator(){
//  logTraceIn( "SpacetreeGrid2ComputeGalerkinCoarseGridOperator()" );
//  // @todo Insert your code here
//  logTraceOut( "SpacetreeGrid2ComputeGalerkinCoarseGridOperator()" );
}


peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::~SpacetreeGrid2ComputeGalerkinCoarseGridOperator() {
//  logTraceIn( "~SpacetreeGrid2ComputeGalerkinCoarseGridOperator()" );
//  // @todo Insert your code here
//  logTraceOut( "~SpacetreeGrid2ComputeGalerkinCoarseGridOperator()" );
}
  
  
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::createInnerVertex(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&        fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&    coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
//  logTraceInWith6Arguments( "createInnerVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
//  // @todo Insert your code here
//  logTraceOutWith1Argument( "createInnerVertex(...)", fineGridVertex );
}



void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::createHangingVertex(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&        fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&    coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
//  logTraceInWith6Arguments( "createHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
//  // @todo Insert your code here
//  logTraceOutWith1Argument( "createHangingVertex(...)", fineGridVertex );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::destroyHangingVertex(
      const peano::applications::poisson::multigrid::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                           fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                           fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                 coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                              fineGridPositionOfVertex
) {
//  logTraceInWith6Arguments( "destroyHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
//  // @todo Insert your code here
//  logTraceOutWith1Argument( "destroyHangingVertex(...)", fineGridVertex );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::createBoundaryVertex(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&        fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&    coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
//  logTraceInWith6Arguments( "createBoundaryVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
//  // @todo Insert your code here
//  logTraceOutWith1Argument( "createBoundaryVertex(...)", fineGridVertex );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::destroyVertex(
      const peano::applications::poisson::multigrid::SpacetreeGridVertex&  fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&    coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
//  logTraceInWith6Arguments( "destroyVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
//  // @todo Insert your code here
//  logTraceOutWith1Argument( "destroyVertex(...)", fineGridVertex );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::createCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&          fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex *       fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&    coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
//  logTraceInWith4Arguments( "createCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
//  // @todo Insert your code here
//  logTraceOutWith1Argument( "createCell(...)", fineGridCell );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::destroyCell(
      const peano::applications::poisson::multigrid::SpacetreeGridCell&    fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&          coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
//  logTraceInWith4Arguments( "destroyCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
//  // @todo Insert your code here
//  logTraceOutWith1Argument( "destroyCell(...)", fineGridCell );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::touchVertexFirstTime(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&        fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&    coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  if (fineGridVertex.getRefinementControl() == SpacetreeGridVertex::Records::Refined){
	  // Clear the stencil for next grid level (i.e. the coarse grid stencil of the next level which is now the fine grid stencil)
	  fineGridVertex.clearStencil();
  }

  // Clear TempP and TempAP
  fineGridVertex.clearTempP();
  fineGridVertex.clearTempAP();

  fineGridVertex.setTempP(_galerkin.calculateTempP(
      peano::applications::poisson::multigrid::SpacetreeGridVertex::readP(coarseGridVerticesEnumerator, coarseGridVertices),
      fineGridPositionOfVertex));

  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::mergeWithNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex, 
  const peano::applications::poisson::multigrid::SpacetreeGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::touchVertexLastTime(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&  fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&    coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double>  stencilIncrements =_galerkin.calculateRAP(
      fineGridVertex.getTempAP(),
      peano::applications::poisson::multigrid::SpacetreeGridVertex::readR(coarseGridVerticesEnumerator, coarseGridVertices),
      fineGridPositionOfVertex);

  peano::applications::poisson::multigrid::SpacetreeGridVertex::writeStencil(coarseGridVerticesEnumerator, coarseGridVertices,
      peano::applications::poisson::multigrid::SpacetreeGridVertex::readStencil(coarseGridVerticesEnumerator, coarseGridVertices)  + stencilIncrements);

  //if (coarseGridVertices[0].isInside() && coarseGridVertices[1].isInside() && coarseGridVertices[2].isInside() && coarseGridVertices[3].isInside()) {
    validateCoarseGridVertex(fineGridVertex,fineGridH);
  //}

  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::prepareSendToNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::beginIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
) {
//  logTraceInWith1Argument( "beginIteration(State)", solverState );
//  // @todo Insert your code here
//  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::endIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
) {
//  logTraceInWith1Argument( "endIteration(State)", solverState );
//  // @todo Insert your code here
//  logTraceOutWith1Argument( "endIteration(State)", solverState);
}
 
    
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::enterCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&          fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&    coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  dfor2(k)
    logDebug( "enterCell(...)", "  -" << fineGridVertices[fineGridVerticesEnumerator(k)].toString() );
  enddforx

  tarch::la::Matrix<TWO_POWER_D, TWO_POWER_D, double> elementWiseAssemblyMatrix
    = _elementMatrix.getElementWiseAssemblyMatrix(peano::applications::poisson::multigrid::SpacetreeGridVertex::readStencil(fineGridVerticesEnumerator, fineGridVertices));

  tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double> tempAPIncrement = _galerkin.calculateTempAP(
    peano::applications::poisson::multigrid::SpacetreeGridVertex::readTempP(fineGridVerticesEnumerator, fineGridVertices),
    elementWiseAssemblyMatrix);

  peano::applications::poisson::multigrid::SpacetreeGridVertex::writeTempAP(fineGridVerticesEnumerator, fineGridVertices,
		  peano::applications::poisson::multigrid::SpacetreeGridVertex::readTempAP(fineGridVerticesEnumerator, fineGridVertices) + tempAPIncrement);

  logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
  dfor2(k)
    logDebug( "enterCell(...)", "  -" << fineGridVertices[fineGridVerticesEnumerator(k)].toString() );
  enddforx
}



void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::leaveCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&    fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&    coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {
  //logTraceInWith4Arguments( "leaveCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );

  //logTraceOutWith1Argument( "leaveCell(...)", fineGridCell );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2ComputeGalerkinCoarseGridOperator::validateCoarseGridVertex(
  const peano::applications::poisson::multigrid::SpacetreeGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&                          h
) {
  #if defined(Dim2) && defined(Debug)
  if (vertex.isInside()) {
    peano::toolbox::stencil::Stencil directDiscretisationStencil;
    directDiscretisationStencil =
  //    kappa_x *
      peano::toolbox::stencil::StencilFactory::stencilProduct(
        peano::toolbox::stencil::StencilFactory::get1DLaplaceStencil(h(0)),
        peano::toolbox::stencil::StencilFactory::get1DMassStencil(h(1))
      ) +
  //    kappa-y *
      peano::toolbox::stencil::StencilFactory::stencilProduct(
        peano::toolbox::stencil::StencilFactory::get1DMassStencil(h(0)),
        peano::toolbox::stencil::StencilFactory::get1DLaplaceStencil(h(1))
      );

    for (int i=0; i<THREE_POWER_D; i++) {
      assertionNumericalEquals5( vertex.getStencil(i), directDiscretisationStencil(i), vertex.getTempP(), vertex.getTempAP(), vertex.getX(), vertex.getStencil(), vertex.getLevel());
    }
  }
  #endif
}
