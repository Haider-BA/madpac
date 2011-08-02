#include "peano/applications/poisson/multigrid/mappings/SpacetreeGrid2SetupExperiment.h"
#include "peano/utils/Loop.h"
#include "peano/toolbox/stencil/StencilFactory.h"

tarch::logging::Log peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::_log( "peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment" );


peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::SpacetreeGrid2SetupExperiment():
  _refinementThreshold(0.5) {
}


peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::~SpacetreeGrid2SetupExperiment() {
}
  
  
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::createInnerVertex(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                       coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                    fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createInnerVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
//  if (tarch::la::volume(fineGridH) > _refinementThreshold) {
//    fineGridVertex.refine();
//  }

  if (coarseGridVerticesEnumerator.getLevel() < 3) {
    fineGridVertex.refine();
  }

  peano::toolbox::stencil::Stencil stencil;

  #ifdef Dim2
  //if(fineGridVertex.getLevel() == 4){
  stencil =
//    kappa_x *
    peano::toolbox::stencil::StencilFactory::stencilProduct(
      peano::toolbox::stencil::StencilFactory::get1DLaplaceStencil(fineGridH(0)),
      peano::toolbox::stencil::StencilFactory::get1DMassStencil(fineGridH(1))
    ) +
//    kappa-y *
    peano::toolbox::stencil::StencilFactory::stencilProduct(
      peano::toolbox::stencil::StencilFactory::get1DMassStencil(fineGridH(0)),
      peano::toolbox::stencil::StencilFactory::get1DLaplaceStencil(fineGridH(1))
    );
  assertionNumericalEquals(stencil(0), -1.0/3.0);
  assertionNumericalEquals(stencil(1), -1.0/3.0);
  assertionNumericalEquals(stencil(2), -1.0/3.0);
  assertionNumericalEquals(stencil(3), -1.0/3.0);
  assertionNumericalEquals(stencil(4),  8.0/3.0);
  assertionNumericalEquals(stencil(5), -1.0/3.0);
  assertionNumericalEquals(stencil(6), -1.0/3.0);
  assertionNumericalEquals(stencil(7), -1.0/3.0);
  assertionNumericalEquals(stencil(8), -1.0/3.0);

  #if defined(Asserts)
  peano::toolbox::stencil::ElementMatrix elementMatrix;
  peano::toolbox::stencil::ElementWiseAssemblyMatrix testMatrix = elementMatrix.getElementWiseAssemblyMatrix( stencil );

  assertionNumericalEquals(testMatrix(0,0),  2.0/3.0);
  assertionNumericalEquals(testMatrix(0,1), -0.5/3.0);
  assertionNumericalEquals(testMatrix(0,2), -0.5/3.0);
  assertionNumericalEquals(testMatrix(0,3), -1.0/3.0);

  assertionNumericalEquals(testMatrix(1,0), -0.5/3.0);
  assertionNumericalEquals(testMatrix(1,1),  2.0/3.0);
  assertionNumericalEquals(testMatrix(1,2), -1.0/3.0);
  assertionNumericalEquals(testMatrix(1,3), -0.5/3.0);

  assertionNumericalEquals(testMatrix(2,0), -0.5/3.0);
  assertionNumericalEquals(testMatrix(2,1), -1.0/3.0);
  assertionNumericalEquals(testMatrix(2,2),  2.0/3.0);
  assertionNumericalEquals(testMatrix(2,3), -0.5/3.0);

  assertionNumericalEquals(testMatrix(3,0), -1.0/3.0);
  assertionNumericalEquals(testMatrix(3,1), -0.5/3.0);
  assertionNumericalEquals(testMatrix(3,2), -0.5/3.0);
  assertionNumericalEquals(testMatrix(3,3),  2.0/3.0);

  //logDebug( "createInnerVertex(...)", testMatrix );
  #endif
//  tarch::la::assignList(stencil) = -1.0/3.0, -1.0/3.0, -1.0/3.0, -1.0/3.0, 8.0/3.0, -1.0/3.0, -1.0/3.0, -1.0/3.0, -1.0/3.0;
  //}
  //else{
  //  tarch::la::assignList(stencil) = 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0;
  //}

  fineGridVertex.setStencil(stencil);

//  double squaredDistanceFromCenter = 0.0;
//  for (int d=0; d<DIMENSIONS; d++) {
//    squaredDistanceFromCenter += (0.5 - fineGridX(d)) * (0.5 - fineGridX(d));
//  }
//  if (squaredDistanceFromCenter<0.24*0.24) {
//    stencil *= 4.2;
//  }

  peano::toolbox::stencil::ProlongationMatrix prolongation;
  tarch::la::assignList(prolongation) = 1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
                                        2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
                                        3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
                                        2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
                                        1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0;
  fineGridVertex.setP(prolongation);

  peano::toolbox::stencil::RestrictionMatrix restriction;
  tarch::la::assignList(restriction) = 1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
                                       2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
                                       3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
                                       2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
                                       1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0;
  fineGridVertex.setR(restriction);

  fineGridVertex.setRhs(1.0, fineGridH);

  #else
  assertionMsg( false, "not implemented yet" );
  #endif

  logTraceOutWith1Argument( "createInnerVertex(...)", fineGridVertex );
}



void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::createHangingVertex(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                       coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                    fineGridPositionOfVertex
) {
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::destroyHangingVertex(
  const peano::applications::poisson::multigrid::SpacetreeGridVertex&   fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                           fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                           fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                 coarseGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                              fineGridPositionOfVertex
) {
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::createBoundaryVertex(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                       coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                    fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createBoundaryVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  //  if (tarch::la::volume(fineGridH) > _refinementThreshold) {
  //    fineGridVertex.refine();
  //  }
    if (coarseGridVerticesEnumerator.getLevel() < 3) {
      fineGridVertex.refine();
    }

    peano::toolbox::stencil::Stencil stencil(0.0);
    fineGridVertex.setStencil(stencil);

    peano::toolbox::stencil::ProlongationMatrix prolongation (0.0);
    fineGridVertex.setP(prolongation);

    peano::toolbox::stencil::RestrictionMatrix restriction(0.0);
    fineGridVertex.setR(restriction);

    fineGridVertex.clearTempAP();
    fineGridVertex.clearTempP();

  logTraceOutWith1Argument( "createBoundaryVertex(...)", fineGridVertex );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::destroyVertex(
      const peano::applications::poisson::multigrid::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyVertex(...)", fineGridVertex );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::createCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "createCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell(...)", fineGridCell );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::destroyCell(
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "destroyCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyCell(...)", fineGridCell );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::touchVertexFirstTime(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::mergeWithNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex, 
  const peano::applications::poisson::multigrid::SpacetreeGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::touchVertexLastTime(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::prepareSendToNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::beginIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::endIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration(State)", solverState);
}
 
    
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::enterCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
}



void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2SetupExperiment::leaveCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&           fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "leaveCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "leaveCell(...)", fineGridCell );
}
