#include "peano/applications/pic/demo2/mappings/SpacetreeGrid2SetupExperiment.h"


tarch::logging::Log peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::_log( "peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment" );


peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::SpacetreeGrid2SetupExperiment() {
  logTraceIn( "SpacetreeGrid2SetupExperiment()" );
  // @todo Insert your code here
  logTraceOut( "SpacetreeGrid2SetupExperiment()" );
}


peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::~SpacetreeGrid2SetupExperiment() {
  logTraceIn( "~SpacetreeGrid2SetupExperiment()" );
  // @todo Insert your code here
  logTraceOut( "~SpacetreeGrid2SetupExperiment()" );
}
  
  
void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::createInnerVertex(
      peano::applications::pic::demo2::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createInnerVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  if (fineGridH(0)>0.1) fineGridVertex.refine();
  logTraceOutWith1Argument( "createInnerVertex(...)", fineGridVertex );
}



void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::createHangingVertex(
      peano::applications::pic::demo2::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here

  logTraceOutWith1Argument( "createHangingVertex(...)", fineGridVertex );
}


void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::destroyHangingVertex(
      const peano::applications::pic::demo2::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyHangingVertex(...)", fineGridVertex );
}


void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::createBoundaryVertex(
      peano::applications::pic::demo2::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createBoundaryVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  if (fineGridH(0)>0.01) fineGridVertex.refine();
  logTraceOutWith1Argument( "createBoundaryVertex(...)", fineGridVertex );
}


void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::destroyVertex(
      const peano::applications::pic::demo2::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyVertex(...)", fineGridVertex );
}


void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::createCell(
      peano::applications::pic::demo2::SpacetreeGridCell&                 fineGridCell,
      peano::applications::pic::demo2::SpacetreeGridVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "createCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  const double centerX = 0.3;
    const double centerY = 0.7;
    const double h       = 0.2;

    if (
      fineGridVerticesEnumerator.getCellCenter()(0)>centerX-h &&
      fineGridVerticesEnumerator.getCellCenter()(0)<centerX+h &&
      fineGridVerticesEnumerator.getCellCenter()(1)>centerY-h &&
      fineGridVerticesEnumerator.getCellCenter()(1)<centerY+h
    ) {
      fineGridCell.init(1.0);
    }
    else {
      fineGridCell.init(0.0);
    }

    logTraceOutWith1Argument( "createCell(...)", fineGridCell );
}


void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::destroyCell(
      const peano::applications::pic::demo2::SpacetreeGridCell&           fineGridCell,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "destroyCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyCell(...)", fineGridCell );
}


void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::touchVertexFirstTime(
      peano::applications::pic::demo2::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here

  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::mergeWithNeighbour(
  peano::applications::pic::demo2::SpacetreeGridVertex& vertex, 
  const peano::applications::pic::demo2::SpacetreeGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::touchVertexLastTime(
      peano::applications::pic::demo2::SpacetreeGridVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::prepareSendToNeighbour(
  peano::applications::pic::demo2::SpacetreeGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::beginIteration(
  peano::applications::pic::demo2::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::endIteration(
  peano::applications::pic::demo2::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration(State)", solverState);
}
 
    
void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::enterCell(
      peano::applications::pic::demo2::SpacetreeGridCell&                 fineGridCell,
      peano::applications::pic::demo2::SpacetreeGridVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
}



void peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment::leaveCell(
      peano::applications::pic::demo2::SpacetreeGridCell&           fineGridCell,
      peano::applications::pic::demo2::SpacetreeGridVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "leaveCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "leaveCell(...)", fineGridCell );
}
