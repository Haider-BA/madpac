#include "peano/applications/poisson/multigrid/mappings/SpacetreeGrid2PlotSolution.h"
#include "peano/utils/Loop.h"


tarch::logging::Log peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::_log( "peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution" );


peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::SpacetreeGrid2PlotSolution():
  _vertex2IndexMap(),
  _vtkWriter(),
  _vertexWriter(0),
  _cellWriter(0),
  _vertexResidualWriter(0),
  _vertexValueWriter(0),
  _vertexRhsWriter(0) {
  logTraceIn( "SpacetreeGrid2PlotSolution()" );
  iterationCount = 0;
  logTraceOut( "SpacetreeGrid2PlotSolution()" );
}


peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::~SpacetreeGrid2PlotSolution() {
  logTraceIn( "~SpacetreeGrid2PlotSolution()" );
  logTraceOut( "~SpacetreeGrid2PlotSolution()" );
}
  
  
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::createInnerVertex(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createInnerVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  logTraceOutWith1Argument( "createInnerVertex(...)", fineGridVertex );
}



void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::createHangingVertex(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&                fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                  fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                  fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const   coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                        coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                     fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  plotVertex(fineGridVertex, fineGridX);

  logTraceOutWith1Argument( "createHangingVertex(...)", fineGridVertex );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::destroyHangingVertex(
  const peano::applications::poisson::multigrid::SpacetreeGridVertex&   fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                           fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                           fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                 coarseGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                              fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  logTraceOutWith1Argument( "destroyHangingVertex(...)", fineGridVertex );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::createBoundaryVertex(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                       coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                    fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createBoundaryVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  logTraceOutWith1Argument( "createBoundaryVertex(...)", fineGridVertex );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::destroyVertex(
  const peano::applications::poisson::multigrid::SpacetreeGridVertex&   fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  logTraceOutWith1Argument( "destroyVertex(...)", fineGridVertex );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::createCell(
  peano::applications::poisson::multigrid::SpacetreeGridCell&          fineGridCell,
  peano::applications::poisson::multigrid::SpacetreeGridVertex *       fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&    coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "createCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  logTraceOutWith1Argument( "createCell(...)", fineGridCell );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::destroyCell(
  const peano::applications::poisson::multigrid::SpacetreeGridCell&           fineGridCell,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                       fineGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridVertex * const        coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                       coarseGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridCell&                 coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                    fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "destroyCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  logTraceOutWith1Argument( "destroyCell(...)", fineGridCell );
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::plotVertex(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&  fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX
) {
  if ( fineGridVertex.getRefinementControl() == SpacetreeGridVertex::Records::Unrefined ) {
    #ifdef SharedTBB
    Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
    #elif SharedOMP
    assertionMsg( false, "here should be a critical section, but I don't know how to implement this. If you implement it, please add it to the templates, too." );
    #endif
    if ( _vertex2IndexMap.find(fineGridX) == _vertex2IndexMap.end() ) {
      #if defined(Dim2) || defined(Dim3)
      _vertex2IndexMap[fineGridX] = _vertexWriter->plotVertex(fineGridX);
      #else
      _vertex2IndexMap[fineGridX] = _vertexWriter->plotVertex(tarch::la::Vector<3,double>(fineGridX.data()));
      #endif

      if (fineGridVertex.isHangingNode()) {
        _vertexResidualWriter->plotVertex(_vertex2IndexMap[fineGridX],0.0);
        _vertexValueWriter->plotVertex(_vertex2IndexMap[fineGridX],0.0);
        // @todo For a smooth plot, it might make sense to set the 'right' rhs, i.e.
        //       the rhs belonging to a persistent vertex at this very position.
        _vertexRhsWriter->plotVertex(_vertex2IndexMap[fineGridX],0.0);
      }
      else {
        _vertexResidualWriter->plotVertex(_vertex2IndexMap[fineGridX],fineGridVertex.getResidual());
        _vertexValueWriter->plotVertex(_vertex2IndexMap[fineGridX],fineGridVertex.getU());
        _vertexRhsWriter->plotVertex(_vertex2IndexMap[fineGridX],fineGridVertex.getRhs());
      }
    }
  }
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::touchVertexFirstTime(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                 fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                       coarseGridVerticesEnumerator,
  const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                    fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  plotVertex(fineGridVertex, fineGridX);

  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::mergeWithNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex, 
  const peano::applications::poisson::multigrid::SpacetreeGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::touchVertexLastTime(
  peano::applications::poisson::multigrid::SpacetreeGridVertex&         fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                           fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                           fineGridH,
  peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                 coarseGridVerticesEnumerator,
  peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                              fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::prepareSendToNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::beginIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );

  _vtkWriter.clear();
  _vertex2IndexMap.clear();

  _vertexWriter     = _vtkWriter.createVertexWriter();
  _cellWriter       = _vtkWriter.createCellWriter();

  _vertexResidualWriter = _vtkWriter.createVertexDataWriter("residual",1);
  _vertexValueWriter    = _vtkWriter.createVertexDataWriter("value",1);
  _vertexRhsWriter      = _vtkWriter.createVertexDataWriter("rhs",1);

  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::endIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );

  std::ostringstream newFilename;
  newFilename << "solution-plot" << iterationCount << ".vtk";

  iterationCount++;

  /**
   * --- inserted manually ---
   *
   * Close the data writers, pipe the data to a file, and destroy all the
   * objects we won't need anymore. This is again technical stuff.
   */
  _vertexWriter->close();
  _cellWriter->close();

  _vertexResidualWriter->close();
  _vertexValueWriter->close();
  _vertexRhsWriter->close();

  delete _vertexWriter;
  delete _cellWriter;
  delete _vertexResidualWriter;
  delete _vertexValueWriter;
  delete _vertexRhsWriter;

  _vertexWriter         = 0;
  _cellWriter           = 0;
  _vertexResidualWriter = 0;
  _vertexValueWriter    = 0;
  _vertexRhsWriter      = 0;

  _vtkWriter.writeToFile( newFilename.str() );

  logTraceOutWith1Argument( "endIteration(State)", solverState);
}
 
    
void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::enterCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );

  if (!fineGridCell.isRefined()) {
    #ifdef SharedTBB
    Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
    #elif SharedOMP
    assertionMsg( false, "here should be a critical section, but I don't know how to implement this. If you implement it, please add it to the templates, too." );
    #endif

    assertion( DIMENSIONS==2 || DIMENSIONS==3 );
    int vertexIndex[TWO_POWER_D];
    dfor2(i)
      tarch::la::Vector<DIMENSIONS,double> currentVertexPosition = fineGridVerticesEnumerator.getVertexPosition(i);
      assertion2 ( _vertex2IndexMap.find(currentVertexPosition) != _vertex2IndexMap.end(), currentVertexPosition, fineGridVertices[fineGridVerticesEnumerator(i)].toString() );
      vertexIndex[iScalar] = _vertex2IndexMap[currentVertexPosition];
    enddforx

    if (DIMENSIONS==2) {
      _cellWriter->plotQuadrangle(vertexIndex);
    }
    if (DIMENSIONS==3) {
      _cellWriter->plotHexahedron(vertexIndex);
    }
  }

  logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
}



void peano::applications::poisson::multigrid::mappings::SpacetreeGrid2PlotSolution::leaveCell(
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
