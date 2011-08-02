#include "peano/applications/poisson/multigrid/mappings/SpacetreeGrid2Smooth.h"
#include "peano/utils/Loop.h"


tarch::logging::Log peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::_log( "peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth" );


peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::SpacetreeGrid2Smooth():
  smoother(0.8) {
}


peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::~SpacetreeGrid2Smooth() {
}
  
  
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::createInnerVertex(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&                fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                  fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                  fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const   coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                        coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                     fineGridPositionOfVertex
) {
}



void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::createHangingVertex(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&                fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                  fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                  fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const   coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                        coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                     fineGridPositionOfVertex
) {
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::destroyHangingVertex(
  const peano::applications::poisson::multigrid::SpacetreeGridVertex&   fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                           fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                           fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                 coarseGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                              fineGridPositionOfVertex
) {
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::createBoundaryVertex(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&                fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                  fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                  fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const   coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                        coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                     fineGridPositionOfVertex
) {
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::destroyVertex(
  const peano::applications::poisson::multigrid::SpacetreeGridVertex&         fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                       coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                    fineGridPositionOfVertex
) {
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::createCell(
  peano::applications::poisson::multigrid::SpacetreeGridCell&                 fineGridCell,
  peano::applications::poisson::multigrid::SpacetreeGridVertex *              fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                       fineGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                       coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                    fineGridPositionOfCell
) {
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::destroyCell(
  const peano::applications::poisson::multigrid::SpacetreeGridCell&           fineGridCell,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                       fineGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridVertex * const        coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                       coarseGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridCell&                 coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                    fineGridPositionOfCell
) {
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::touchVertexFirstTime(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                       coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                    fineGridPositionOfVertex
){
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  fineGridVertex.clearResidual();

  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::mergeWithNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex, 
  const peano::applications::poisson::multigrid::SpacetreeGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::touchVertexLastTime(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&         fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                           fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                           fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                 coarseGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                              fineGridPositionOfVertex
){
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  if (fineGridVertex.isInside()) {
    fineGridVertex.setU(smoother.getNewValueOfJacobiStep(
      fineGridVertex.getU(),
      fineGridVertex.getResidual(),
      fineGridVertex.getDiagonalElementOfStencil())
    );
  }

  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::prepareSendToNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::beginIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
) {
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::endIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
) {
}
 
    
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::enterCell(
  peano::applications::poisson::multigrid::SpacetreeGridCell&                  fineGridCell,
  peano::applications::poisson::multigrid::SpacetreeGridVertex * const         fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                        fineGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const   coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                        coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                     fineGridPositionOfCell
) {
  logTraceInWith4Arguments("enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell);

  if (!fineGridCell.isRefined()) {
    tarch::la::Matrix<NUMBER_OF_VERTICES_PER_ELEMENT,NUMBER_OF_VERTICES_PER_ELEMENT, double>
      elementWiseAssemblyMatrix = _elementMatrix.getElementWiseAssemblyMatrix(SpacetreeGridVertex::readStencil(fineGridVerticesEnumerator, fineGridVertices));

#ifdef Asserts
  if(fineGridVertices[fineGridVerticesEnumerator(0)].isInside()){
    peano::toolbox::stencil::Stencil teststencil =
        _elementMatrix.reconstructStencil(elementWiseAssemblyMatrix);

    assertionVectorNumericalEquals(teststencil, fineGridVertices[fineGridVerticesEnumerator(0)].getStencil());
  }
#endif

    tarch::la::Vector<TWO_POWER_D,double> residual = SpacetreeGridVertex::readResidual(fineGridVerticesEnumerator, fineGridVertices);
    tarch::la::Vector<TWO_POWER_D,double> u        = SpacetreeGridVertex::readU(fineGridVerticesEnumerator, fineGridVertices);

    residual -= elementWiseAssemblyMatrix * u;

    SpacetreeGridVertex::writeResidual(fineGridVerticesEnumerator, fineGridVertices, residual);
  }

  logTraceOutWith1Argument("enterCell(...)", fineGridCell);
}



void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2Smooth::leaveCell(
  peano::applications::poisson::multigrid::SpacetreeGridCell&           fineGridCell,
  peano::applications::poisson::multigrid::SpacetreeGridVertex * const  fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                 fineGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                 coarseGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                              fineGridPositionOfCell
) {
}
