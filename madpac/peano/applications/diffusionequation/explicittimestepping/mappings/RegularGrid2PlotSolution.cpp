#include "peano/applications/diffusionequation/explicittimestepping/mappings/RegularGrid2PlotSolution.h"
#include "peano/utils/Loop.h"
#include "tarch/multicore/Lock.h"


tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::_log( "peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution" );


peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::RegularGrid2PlotSolution():
    _vertex2IndexMap(),
    _vtkWriter(),
    _vertexWriter(0),
    _cellWriter(0),
    _vertexTemperatureWriter(0),
    _vertexRhsWriter(0) {
}


peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::~RegularGrid2PlotSolution() {
}

  
void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::createCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}



void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::destroyCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::handleCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex* const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);

  assertion( DIMENSIONS==2 || DIMENSIONS==3 );
  int vertexIndex[TWO_POWER_D];
  dfor2(i)
    tarch::la::Vector<DIMENSIONS,double> currentVertexPosition = enumerator.getVertexPosition(i);
    assertion2 ( _vertex2IndexMap.find(currentVertexPosition) != _vertex2IndexMap.end(), currentVertexPosition, vertices[enumerator(i)] );
    assertion2( _vertex2IndexMap[currentVertexPosition]>=0, _vertex2IndexMap[currentVertexPosition], vertices[enumerator(i)] );
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
void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::mergeWithNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex,
  const peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& neighbour,
  int fromRank) {
}
#endif

void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::touchVertexFirstTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);

  if (
    _vertex2IndexMap.find(x) == _vertex2IndexMap.end()
  ) {
    #if defined(Dim2) || defined(Dim3)
    _vertex2IndexMap[x] = _vertexWriter->plotVertex(x);
    #else
    _vertex2IndexMap[x] = _vertexWriter->plotVertex(tarch::la::Vector<3,double>(x.data()));
    #endif

    _vertexTemperatureWriter->plotVertex(_vertex2IndexMap[x],vertex.getTemperature() );
    _vertexRhsWriter->plotVertex(_vertex2IndexMap[x],vertex.getRhs() );
    _vertexDiagonalElementWriter->plotVertex(_vertex2IndexMap[x],_elementMatrix.getDiagonalElement(vertex.getStencil()) );
  }

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::touchVertexLastTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
}


#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::prepareSendToNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex
) {
}
#endif


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::beginIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  _vtkWriter.clear();

  _vertexWriter     = _vtkWriter.createVertexWriter();
  _cellWriter       = _vtkWriter.createCellWriter();

  _vertexTemperatureWriter     = _vtkWriter.createVertexDataWriter("temperature",1);
  _vertexRhsWriter             = _vtkWriter.createVertexDataWriter("rhs",1);
  _vertexDiagonalElementWriter = _vtkWriter.createVertexDataWriter("diagonal-element",1);

  _vertex2IndexMap.clear();

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2PlotSolution::endIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );

  _vertexWriter->close();
  _cellWriter->close();

  _vertexTemperatureWriter->close();
  _vertexRhsWriter->close();
  _vertexDiagonalElementWriter->close();

  delete _vertexTemperatureWriter;
  delete _vertexRhsWriter;
  delete _vertexDiagonalElementWriter;

  _vertexTemperatureWriter = 0;
  _vertexRhsWriter = 0;
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

