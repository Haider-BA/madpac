#include "peano/applications/faxen/lbf/mappings/SpacetreeGrid2ComputeVelocitiesDerivatives.h"


tarch::logging::Log peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::_log( "peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives" );


peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::SpacetreeGrid2ComputeVelocitiesDerivatives() {
  logTraceIn( "SpacetreeGrid2ComputeVelocitiesDerivatives()" );
  // @todo Insert your code here
  logTraceOut( "SpacetreeGrid2ComputeVelocitiesDerivatives()" );
}


peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::~SpacetreeGrid2ComputeVelocitiesDerivatives() {
  logTraceIn( "~SpacetreeGrid2ComputeVelocitiesDerivatives()" );
  // @todo Insert your code here
  logTraceOut( "~SpacetreeGrid2ComputeVelocitiesDerivatives()" );
}
  
  
void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::createInnerVertex(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createInnerVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex(...)", fineGridVertex );
}



void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::createHangingVertex(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createHangingVertex(...)", fineGridVertex );
}


void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::destroyHangingVertex(
      const peano::applications::faxen::lbf::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyHangingVertex(...)", fineGridVertex );
}


void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::createBoundaryVertex(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createBoundaryVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex(...)", fineGridVertex );
}


void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::destroyVertex(
      const peano::applications::faxen::lbf::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyVertex(...)", fineGridVertex );
}


void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::createCell(
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "createCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell(...)", fineGridCell );
}


void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::destroyCell(
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "destroyCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyCell(...)", fineGridCell );
}


void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::touchVertexFirstTime(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::mergeWithNeighbour(
  peano::applications::faxen::lbf::SpacetreeGridBlockVertex& vertex, 
  const peano::applications::faxen::lbf::SpacetreeGridBlockVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::touchVertexLastTime(
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::prepareSendToNeighbour(
  peano::applications::faxen::lbf::SpacetreeGridBlockVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::beginIteration(
  peano::applications::faxen::lbf::SpacetreeGridBlockState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::endIteration(
  peano::applications::faxen::lbf::SpacetreeGridBlockState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration(State)", solverState);
}
 
    
void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::enterCell(
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::faxen::lbf::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
}



void peano::applications::faxen::lbf::mappings::SpacetreeGrid2ComputeVelocitiesDerivatives::leaveCell(
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::faxen::lbf::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "leaveCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "leaveCell(...)", fineGridCell );
}
