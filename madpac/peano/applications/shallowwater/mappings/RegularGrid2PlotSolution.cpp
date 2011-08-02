#include "peano/applications/shallowwater/mappings/RegularGrid2PlotSolution.h"

#include "tarch/Assertions.h"
#include "peano/utils/Loop.h"

tarch::logging::Log peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::_log( "peano::applications::shallowwater::mappings::RegularGrid2PlotSolution" );

#include "scenario/shallowwater/ShallowWaterScenarioService.h"


peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::RegularGrid2PlotSolution():
         _vertex2IndexMap(),
         _vtkWriter(),
         _vertexWriter(0),
         _cellWriter(0),
         _cellHeightWaterWriter(0),
         _cellHeightSeabedWriter(0) {
  logTraceIn( "RegularGrid2PlotSolution()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2PlotSolution()" );
}


peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::~RegularGrid2PlotSolution() {
  logTraceIn( "~RegularGrid2PlotSolution()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2PlotSolution()" );
}

  
void peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::createCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::destroyCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::handleCell(
  peano::applications::shallowwater::RegularGridVertex* const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  int vertexIndex[DIMENSIONS];
  // @ todo index cell
  dfor2(i)
    tarch::la::Vector<DIMENSIONS,double> currentVertexPosition = enumerator.getVertexPosition(i);
    assertion1 ( _vertex2IndexMap.find(currentVertexPosition) != _vertex2IndexMap.end(), currentVertexPosition );
    vertexIndex[iScalar] = _vertex2IndexMap[currentVertexPosition];
  enddforx

  _cellWriter->plotQuadrangle(vertexIndex);

  if (cell.getRecords().getHeightWater() > 0)
     _cellHeightWaterWriter->plotCell(cellCounter, cell.getRecords().getHeightWater()+cell.getRecords().getHeightSeabed());
  else
     _cellHeightWaterWriter->plotCell(cellCounter, 0.);
  _cellHeightSeabedWriter->plotCell(cellCounter, cell.getRecords().getHeightSeabed());

  cellCounter++;

  logTraceOut( "handleCell()" );
}


void peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::touchVertexFirstTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  if ( _vertex2IndexMap.find(x) == _vertex2IndexMap.end() ) {
    #if defined(Dim2)
    _vertex2IndexMap[x] = _vertexWriter->plotVertex(x);
    #else
    _vertex2IndexMap[x] = _vertexWriter->plotVertex(tarch::la::Vector<3,double>(x.data()));
    #endif
  }

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::touchVertexLastTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}


void peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::beginIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  _vtkWriter.clear();
  _vertex2IndexMap.clear();

  _vertexWriter = _vtkWriter.createVertexWriter();
  _cellWriter = _vtkWriter.createCellWriter();

  _cellHeightWaterWriter = _vtkWriter.createCellDataWriter("heightWater",1);
  _cellHeightSeabedWriter = _vtkWriter.createCellDataWriter("heightSeabed",1);

  // @todo: cellCounter?
  cellCounter = 0;

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::endIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );

  std::ostringstream newFilename;
  newFilename << scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getOutputFile() << solverState.getTimeStep() << ".vtk";

  _vertexWriter->close();
  _cellWriter->close();

  _cellHeightWaterWriter->close();
  _cellHeightSeabedWriter->close();

  delete _vertexWriter;
  delete _cellWriter;
  delete _cellHeightWaterWriter;
  delete _cellHeightSeabedWriter;

  _vertexWriter = 0;
  _cellWriter = 0;
  _cellHeightWaterWriter = 0;
  _cellHeightSeabedWriter = 0;

  _vtkWriter.writeToFile( newFilename.str() );

  logInfo ( "endIteration()", "wrote solution to " << newFilename.str());

  logTraceOutWith1Argument( "endIteration()", solverState );
}



int peano::applications::shallowwater::mappings::RegularGrid2PlotSolution::parallelise( int numberOfGridCells ) {
  logTraceInWith1Argument( "parallelise()", numberOfGridCells );

  //dont run in parallel
  int result = 0;

  logTraceOutWith1Argument( "parallelise()", result );
  return result;
}
