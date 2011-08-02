#include "peano/applications/heatequation/timestepping/mappings/SpacetreeGrid2PlotSolution.h"
#include "peano/utils/Loop.h"
#include "tarch/multicore/Lock.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::_log( "peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution" );


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::SpacetreeGrid2PlotSolution():
  _vertex2IndexMap(),
  _vtkWriter(),
  _vertexWriter(0),
  _cellWriter(0),
  _vertexTemperatureWriter(0),
  _vertexRhsWriter(0),
  _vertexResidualWriter(0),
  _vertexDiagonalElementWriter(0),
  _vertexSurplusWriter(0),
  _vertexLevelWriter(0) {
}


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::~SpacetreeGrid2PlotSolution() {
}
  


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::plotVertex(
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&  fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                            fineGridX,
  int                                                                                    level
) {
  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);

  if (
    fineGridVertex.getRefinementControl() != peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::Records::Refined &&
    fineGridVertex.getRefinementControl() != peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::Records::Refining &&
    _vertex2IndexMap.find(fineGridX) == _vertex2IndexMap.end()
  ) {
    logTraceInWith2Arguments( "plotVertex(...)", fineGridVertex, fineGridX );

    #if defined(Dim2) || defined(Dim3)
    _vertex2IndexMap[fineGridX] = _vertexWriter->plotVertex(fineGridX);
    #else
    _vertex2IndexMap[fineGridX] = _vertexWriter->plotVertex(tarch::la::Vector<3,double>(fineGridX.data()));
    #endif

    assertion1( fineGridVertex.getTemperature()     < std::numeric_limits<double>::infinity(), fineGridVertex.getTemperature() );
    assertion1( fineGridVertex.getOldTemperature()  < std::numeric_limits<double>::infinity(), fineGridVertex.getOldTemperature() );
    assertion1( fineGridVertex.getRhs()             < std::numeric_limits<double>::infinity(), fineGridVertex.getRhs() );
    assertion1( fineGridVertex.getResidual()        < std::numeric_limits<double>::infinity(), fineGridVertex.getResidual() );
    assertion1( tarch::la::max(fineGridVertex.getStencil())       < std::numeric_limits<double>::infinity(), fineGridVertex.getStencil() );

    _vertexTemperatureWriter->plotVertex(_vertex2IndexMap[fineGridX],fineGridVertex.getTemperature() );
    _vertexOldTemperatureWriter->plotVertex(_vertex2IndexMap[fineGridX],fineGridVertex.getOldTemperature() );
    _vertexRhsWriter->plotVertex(_vertex2IndexMap[fineGridX],fineGridVertex.getRhs() );
    _vertexResidualWriter->plotVertex(_vertex2IndexMap[fineGridX],fineGridVertex.getResidual() );
    _vertexDiagonalElementWriter->plotVertex(_vertex2IndexMap[fineGridX],_elementMatrix.getDiagonalElement(fineGridVertex.getStencil()) );
    if ( tarch::la::max( fineGridVertex.getLinearSurplus() )==std::numeric_limits<double>::infinity()) {
      _vertexSurplusWriter->plotVertex(_vertex2IndexMap[fineGridX],0.0 );
    }
    else {
      _vertexSurplusWriter->plotVertex(_vertex2IndexMap[fineGridX],fineGridVertex.getLinearSurplus() );
    }

    _vertexLevelWriter->plotVertex(_vertex2IndexMap[fineGridX],level );

    logTraceOut( "plotVertex(...)" );
  }
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::createInnerVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
}



void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::createHangingVertex(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {
  logTraceInWith2Arguments( "createHangingVertex(...)", fineGridVertex, fineGridX );

  fineGridVertex.initialiseHangingNode();

  _solver.interpolateWithDLinearShapeFunctions(
    fineGridVertex,
    coarseGridVertices,
    coarseGridVerticesEnumerator,
    fineGridPositionOfVertex
  );

  plotVertex(fineGridVertex,fineGridX,coarseGridVerticesEnumerator.getLevel()+1);

  logTraceOut( "createHangingVertex(...)" );
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::destroyHangingVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::createBoundaryVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::destroyVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::createCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::destroyCell(
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::touchVertexFirstTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  plotVertex(fineGridVertex,fineGridX,coarseGridVerticesEnumerator.getLevel()+1);
  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::touchVertexLastTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::beginIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );

  _vtkWriter.clear();

  _vertexWriter     = _vtkWriter.createVertexWriter();
  _cellWriter       = _vtkWriter.createCellWriter();

  _vertexTemperatureWriter     = _vtkWriter.createVertexDataWriter("temperature",1);
  _vertexOldTemperatureWriter  = _vtkWriter.createVertexDataWriter("old-temperature",1);
  _vertexRhsWriter             = _vtkWriter.createVertexDataWriter("rhs",1);
  _vertexResidualWriter        = _vtkWriter.createVertexDataWriter("residual",1);
  _vertexDiagonalElementWriter = _vtkWriter.createVertexDataWriter("diagonal-element",1);
  _vertexSurplusWriter         = _vtkWriter.createVertexDataWriter("surplus",DIMENSIONS);
  _vertexLevelWriter           = _vtkWriter.createVertexDataWriter("level",1);

  #ifdef Parallel
  _cellDeltaWriter   = _vtkWriter.createCellDataWriter( "delta", 1 );
  _cellWeightWriter  = _vtkWriter.createCellDataWriter( "weight", 1 );
  #endif

  _vertex2IndexMap.clear();

  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::endIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );

  _vertexWriter->close();
  _cellWriter->close();

  _vertexTemperatureWriter->close();
  _vertexOldTemperatureWriter->close();
  _vertexRhsWriter->close();
  _vertexResidualWriter->close();
  _vertexDiagonalElementWriter->close();
  _vertexSurplusWriter->close();
  _vertexLevelWriter->close();

  delete _vertexTemperatureWriter;
  delete _vertexOldTemperatureWriter;
  delete _vertexRhsWriter;
  delete _vertexResidualWriter;
  delete _vertexDiagonalElementWriter;
  delete _vertexSurplusWriter;
  delete _vertexLevelWriter;

  _vertexTemperatureWriter       = 0;
  _vertexOldTemperatureWriter    = 0;
  _vertexRhsWriter               = 0;
  _vertexResidualWriter          = 0;
  _vertexDiagonalElementWriter   = 0;
  _vertexSurplusWriter           = 0;
  _vertexLevelWriter             = 0;

  #ifdef Parallel
  _cellDeltaWriter->close();
  _cellWeightWriter->close();

  delete _cellDeltaWriter;
  delete _cellWeightWriter;

  _cellDeltaWriter  = 0;
  _cellWeightWriter = 0;
  #endif

  std::ostringstream snapshotFileName;
  #ifdef Parallel
  snapshotFileName << "rank-" << tarch::parallel::Node::getInstance().getRank() << "-";
  #endif
  snapshotFileName << "solution-"
                   << solverState.getTimeStep()
                   << ".vtk";
  _vtkWriter.writeToFile( snapshotFileName.str() );

  _vertex2IndexMap.clear();

  logTraceOutWith1Argument( "endIteration(State)", solverState);
}
 
    
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::enterCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );

  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);

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

    #ifdef Parallel
    _cellDeltaWriter->plotCell( cellIndex,fineGridCell.getDelta() );
    _cellWeightWriter->plotCell( cellIndex,fineGridCell.getWeight() );
    #endif
  }

  logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
}



void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2PlotSolution::leaveCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {
}
