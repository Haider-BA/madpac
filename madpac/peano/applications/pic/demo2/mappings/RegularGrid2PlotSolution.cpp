#include "peano/applications/pic/demo2/mappings/RegularGrid2PlotSolution.h"
#include "peano/utils/Loop.h"

tarch::logging::Log peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::_log( "peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution" );

void peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::plotVertex(
		const peano::applications::pic::demo2::RegularGridVertex&  GridVertex,
		      const tarch::la::Vector<DIMENSIONS,double>&      GridX
) {

  if (
    _vertex2IndexMap.find(GridX) == _vertex2IndexMap.end()
  ) {
    #if defined(Dim2) || defined(Dim3)
    _vertex2IndexMap[GridX] = _vertexWriter->plotVertex(GridX);
    #else
    _vertex2IndexMap[GridX] = _vertexWriter->plotVertex(tarch::la::Vector<3,double>(GridX.data()));
    #endif


   // _vertexWriter->plotVertex(_vertex2IndexMap[ridX],GridVertex.getP() );
  }
}

peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::RegularGrid2PlotSolution() {
  logTraceIn( "RegularGrid2PlotSolution()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2PlotSolution()" );
}


peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::~RegularGrid2PlotSolution() {
  logTraceIn( "~RegularGrid2PlotSolution()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2PlotSolution()" );
}

  
void peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::pic::demo2::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  plotVertex( vertex, x );
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::pic::demo2::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  plotVertex( vertex, x );
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::pic::demo2::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::createCell(
  peano::applications::pic::demo2::RegularGridVertex const * const vertices,
  peano::applications::pic::demo2::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::destroyCell(
  peano::applications::pic::demo2::RegularGridVertex const * const vertices,
  peano::applications::pic::demo2::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::handleCell(
  peano::applications::pic::demo2::RegularGridVertex* const vertices,
  peano::applications::pic::demo2::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  // @todo Insert your code here
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

	_cellPWriter->plotCell( cellIndex,cell.getP() );
  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::mergeWithNeighbour(
  peano::applications::pic::demo2::RegularGridVertex& vertex, 
  const peano::applications::pic::demo2::RegularGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::touchVertexFirstTime(
  peano::applications::pic::demo2::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  // @todo Insert your code here
  plotVertex(vertex,x);
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::touchVertexLastTime(
  peano::applications::pic::demo2::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::prepareSendToNeighbour(
  peano::applications::pic::demo2::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::beginIteration(
  peano::applications::pic::demo2::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  logTraceInWith1Argument( "beginIteration(State)", solverState );
   _vtkWriter.clear();

    _vertexWriter     = _vtkWriter.createVertexWriter();
    _cellWriter       = _vtkWriter.createCellWriter();

    _cellPWriter  = _vtkWriter.createCellDataWriter( "p" ,1);
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution::endIteration(
  peano::applications::pic::demo2::RegularGridState&  solverState
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

