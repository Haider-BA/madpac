#include "peano/applications/heatequation/timestepping/mappings/RegularGrid2PlotSolution.h"
#include "peano/utils/Loop.h"
#include "tarch/multicore/Lock.h"



tarch::logging::Log peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::_log( "peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution" );


peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::RegularGrid2PlotSolution():
  _vertex2IndexMap(),
  _vtkWriter(),
  _vertexWriter(0),
  _cellWriter(0),
  _vertexTemperatureWriter(0),
  _vertexRhsWriter(0),
  _vertexResidualWriter(0) {
}


peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::~RegularGrid2PlotSolution() {
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::plotVertex(
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                          fineGridX
) {
  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);

  if (
    _vertex2IndexMap.find(fineGridX) == _vertex2IndexMap.end()
  ) {
    #if defined(Dim2) || defined(Dim3)
    _vertex2IndexMap[fineGridX] = _vertexWriter->plotVertex(fineGridX);
    #else
    _vertex2IndexMap[fineGridX] = _vertexWriter->plotVertex(tarch::la::Vector<3,double>(fineGridX.data()));
    #endif


    _vertexTemperatureWriter->plotVertex(_vertex2IndexMap[fineGridX],fineGridVertex.getTemperature() );
    _vertexOldTemperatureWriter->plotVertex(_vertex2IndexMap[fineGridX],fineGridVertex.getOldTemperature() );
    _vertexRhsWriter->plotVertex(_vertex2IndexMap[fineGridX],fineGridVertex.getRhs() );
    _vertexResidualWriter->plotVertex(_vertex2IndexMap[fineGridX],fineGridVertex.getResidual() );
    _vertexDiagonalElementWriter->plotVertex(_vertex2IndexMap[fineGridX],_elementMatrix.getDiagonalElement(fineGridVertex.getStencil()) );
  }
}

  
void peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  plotVertex(vertex,x);
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  plotVertex(vertex,x);
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}



void peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);

  assertion( DIMENSIONS==2 || DIMENSIONS==3 );
  int vertexIndex[TWO_POWER_D];
  dfor2(i)
    tarch::la::Vector<DIMENSIONS,double> currentVertexPosition = enumerator.getVertexPosition(i);
    assertion1 ( _vertex2IndexMap.find(currentVertexPosition) != _vertex2IndexMap.end(), currentVertexPosition );
    assertion1( _vertex2IndexMap[currentVertexPosition]>=0, _vertex2IndexMap[currentVertexPosition] );
    vertexIndex[iScalar] = _vertex2IndexMap[currentVertexPosition];
  enddforx

  int cellIndex;
  if (DIMENSIONS==2) {
    cellIndex = _cellWriter->plotQuadrangle(vertexIndex);
  }
  if (DIMENSIONS==3) {
    cellIndex = _cellWriter->plotHexahedron(vertexIndex);
  }

  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  plotVertex(vertex,x);
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  _vtkWriter.clear();

  _vertexWriter     = _vtkWriter.createVertexWriter();
  _cellWriter       = _vtkWriter.createCellWriter();

  _vertexTemperatureWriter     = _vtkWriter.createVertexDataWriter("temperature",1);
  _vertexOldTemperatureWriter  = _vtkWriter.createVertexDataWriter("old-temperature",1);
  _vertexRhsWriter             = _vtkWriter.createVertexDataWriter("rhs",1);
  _vertexResidualWriter        = _vtkWriter.createVertexDataWriter("residual",1);
  _vertexDiagonalElementWriter = _vtkWriter.createVertexDataWriter("diagonal-element",1);

  _vertex2IndexMap.clear();

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2PlotSolution::endIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );

  _vertexWriter->close();
  _cellWriter->close();

  _vertexTemperatureWriter->close();
  _vertexOldTemperatureWriter->close();
  _vertexRhsWriter->close();
  _vertexResidualWriter->close();
  _vertexDiagonalElementWriter->close();

  delete _vertexTemperatureWriter;
  delete _vertexOldTemperatureWriter;
  delete _vertexRhsWriter;
  delete _vertexResidualWriter;
  delete _vertexDiagonalElementWriter;

  _vertexTemperatureWriter = 0;
  _vertexOldTemperatureWriter = 0;
  _vertexRhsWriter = 0;
  _vertexResidualWriter = 0;
  _vertexDiagonalElementWriter = 0;

  std::ostringstream snapshotFileName;
  #ifdef Parallel
  snapshotFileName << "rank-" << tarch::parallel::Node::getInstance().getRank() << "-";
  #endif
  snapshotFileName << "solution-"
                   << solverState.getTimeStep()
                   << ".vtk";
  _vtkWriter.writeToFile( snapshotFileName.str() );

  logTraceOutWith1Argument( "endIteration()", solverState );
}

