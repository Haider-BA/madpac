#include "peano/applications/pic/demo/mappings/SpacetreeGrid2PlotSolution.h"
#include "peano/utils/Loop.h"


tarch::logging::Log peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::_log( "peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution" );


peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::SpacetreeGrid2PlotSolution() {
  logTraceIn( "SpacetreeGrid2PlotSolution()" );
  // @todo Insert your code here
  logTraceOut( "SpacetreeGrid2PlotSolution()" );
}


peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::~SpacetreeGrid2PlotSolution() {
  logTraceIn( "~SpacetreeGrid2PlotSolution()" );
  // @todo Insert your code here
  logTraceOut( "~SpacetreeGrid2PlotSolution()" );
}
  
  
void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::plotVertex(
  const peano::applications::pic::demo::SpacetreeGridVertex& fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                  fineGridX
) {

  if (
    fineGridVertex.getRefinementControl() != peano::applications::pic::demo::SpacetreeGridVertex::Records::Refined &&
    fineGridVertex.getRefinementControl() != peano::applications::pic::demo::SpacetreeGridVertex::Records::Refining &&
    _vertex2IndexMap.find(fineGridX) == _vertex2IndexMap.end()
  ) {
    #if defined(Dim2) || defined(Dim3)
    _vertex2IndexMap[fineGridX] = _vertexWriter->plotVertex(fineGridX);
    #else
    _vertex2IndexMap[fineGridX] = _vertexWriter->plotVertex(tarch::la::Vector<3,double>(fineGridX.data()));
    #endif
  }
}


void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::createInnerVertex(
      peano::applications::pic::demo::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::pic::demo::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createInnerVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  plotVertex( fineGridVertex, fineGridX );
  logTraceOutWith1Argument( "createInnerVertex(...)", fineGridVertex );
}



void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::createHangingVertex(
      peano::applications::pic::demo::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::pic::demo::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  plotVertex( fineGridVertex, fineGridX );
  logTraceOutWith1Argument( "createHangingVertex(...)", fineGridVertex );
}


void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::destroyHangingVertex(
      const peano::applications::pic::demo::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::pic::demo::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::pic::demo::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyHangingVertex(...)", fineGridVertex );
}


void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::createBoundaryVertex(
      peano::applications::pic::demo::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::pic::demo::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createBoundaryVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  plotVertex( fineGridVertex, fineGridX );
  logTraceOutWith1Argument( "createBoundaryVertex(...)", fineGridVertex );
}


void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::destroyVertex(
      const peano::applications::pic::demo::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::pic::demo::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::pic::demo::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyVertex(...)", fineGridVertex );
}


void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::createCell(
      peano::applications::pic::demo::SpacetreeGridCell&                 fineGridCell,
      peano::applications::pic::demo::SpacetreeGridVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::pic::demo::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "createCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell(...)", fineGridCell );
}


void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::destroyCell(
      const peano::applications::pic::demo::SpacetreeGridCell&           fineGridCell,
      peano::applications::pic::demo::SpacetreeGridVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::pic::demo::SpacetreeGridVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::pic::demo::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "destroyCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyCell(...)", fineGridCell );
}


void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::touchVertexFirstTime(
      peano::applications::pic::demo::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::pic::demo::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  plotVertex( fineGridVertex, fineGridX );
  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::mergeWithNeighbour(
  peano::applications::pic::demo::SpacetreeGridVertex& vertex, 
  const peano::applications::pic::demo::SpacetreeGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::touchVertexLastTime(
      peano::applications::pic::demo::SpacetreeGridVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::pic::demo::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::pic::demo::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::prepareSendToNeighbour(
  peano::applications::pic::demo::SpacetreeGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::beginIteration(
  peano::applications::pic::demo::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );


  _vtkWriter.clear();

  _vertexWriter     = _vtkWriter.createVertexWriter();
  _cellWriter       = _vtkWriter.createCellWriter();

  _cellPWriter  = _vtkWriter.createCellDataWriter( "p" ,1);

  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::endIteration(
  peano::applications::pic::demo::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );


  logTraceInWith1Argument( "endIteration(...)", solverState );

  _vertexWriter->close();
  _cellWriter->close();

  _cellPWriter->close();

  delete _cellPWriter;

  _cellPWriter = 0;

  _vtkWriter.writeToFile( "snapshot.vtk" );

  _vertex2IndexMap.clear();

  logTraceOutWith1Argument( "endIteration(State)", solverState);
}
 
    
void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::enterCell(
      peano::applications::pic::demo::SpacetreeGridCell&                 fineGridCell,
      peano::applications::pic::demo::SpacetreeGridVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::pic::demo::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );

  if ( fineGridCell.isLeaf() ) {
    assertion( DIMENSIONS==2 || DIMENSIONS==3 );
    int vertexIndex[TWO_POWER_D];
     dfor2(i)
      tarch::la::Vector<DIMENSIONS,double> currentVertexPosition = fineGridVerticesEnumerator.getVertexPosition(i);
      assertion1 ( _vertex2IndexMap.find(currentVertexPosition) != _vertex2IndexMap.end(), currentVertexPosition );
      vertexIndex[iScalar] = _vertex2IndexMap[currentVertexPosition];
    enddforx

    int cellIndex;
    if (DIMENSIONS==2) {
      cellIndex = _cellWriter->plotQuadrangle(vertexIndex);
    }
    if (DIMENSIONS==3) {
      cellIndex = _cellWriter->plotHexahedron(vertexIndex);
    }

    _cellPWriter->plotCell( cellIndex,fineGridCell.getP() );
  }

  logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
}



void peano::applications::pic::demo::mappings::SpacetreeGrid2PlotSolution::leaveCell(
      peano::applications::pic::demo::SpacetreeGridCell&           fineGridCell,
      peano::applications::pic::demo::SpacetreeGridVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::pic::demo::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::pic::demo::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "leaveCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "leaveCell(...)", fineGridCell );
}
