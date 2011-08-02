#include "peano/applications/faxen/mappings/RegularGrid2PlotSolution.h"
#include <sstream>
#include "peano/utils/Loop.h"

tarch::logging::Log peano::applications::faxen::mappings::RegularGrid2PlotSolution::_log( "peano::applications::faxen::mappings::RegularGrid2PlotSolution" );


peano::applications::faxen::mappings::RegularGrid2PlotSolution::RegularGrid2PlotSolution():
																				  _vertex2IndexMap(),
																				  _vtkWriter(),
																				  _vertexWriter(0),
																				  _cellWriter(0),
																				  _cellPressureWriter(0),
																				  _cellRhsWriter(0),
																				  _vertexFlagWriter(0),
																				  _vertexPressureWriter(0),
																				  _vertexUSpeedWriter(0),
																				  _vertexVSpeedWriter(0)  {
	logTraceIn( "RegularGrid2PlotSolution()" );
	logTraceOut( "RegularGrid2PlotSolution()" );
}


peano::applications::faxen::mappings::RegularGrid2PlotSolution::~RegularGrid2PlotSolution() {
	logTraceIn( "~RegularGrid2PlotSolution()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2PlotSolution()" );
}


void peano::applications::faxen::mappings::RegularGrid2PlotSolution::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2PlotSolution::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2PlotSolution::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::mappings::RegularGrid2PlotSolution::createCell(
		peano::applications::faxen::RegularGridVertex const * const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::mappings::RegularGrid2PlotSolution::destroyCell(
		peano::applications::faxen::RegularGridVertex const * const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::mappings::RegularGrid2PlotSolution::handleCell(
		peano::applications::faxen::RegularGridVertex* const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

	/**
	 * --- inserted manually ---
	 *
	 * This is just cell plot mechanics. As the cells have no properties, it is
	 * exactly the same what the grid plotter which is generated does.
	 */
	assertion( DIMENSIONS==2 || DIMENSIONS==3 );
	int vertexIndex[TWO_POWER_D];
	dfor2(i)
	tarch::la::Vector<DIMENSIONS,double> currentVertexPosition = enumerator.getVertexPosition(i);
	assertion1 ( _vertex2IndexMap.find(currentVertexPosition) != _vertex2IndexMap.end(), currentVertexPosition );
	vertexIndex[iScalar] = _vertex2IndexMap[currentVertexPosition];
	enddforx

	int number = -1;
	if (DIMENSIONS==2) {
		number = _cellWriter->plotQuadrangle(vertexIndex);
	}
	if (DIMENSIONS==3) {
		number = _cellWriter->plotHexahedron(vertexIndex);
	}

	_cellPressureWriter->plotCell(number,cell.getP());
//	_cellRhsWriter->plotCell(number,cell.getRhs());

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2PlotSolution::mergeWithNeighbour(
		peano::applications::faxen::RegularGridVertex& vertex,
		const peano::applications::faxen::RegularGridVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2PlotSolution::touchVertexFirstTime(
		peano::applications::faxen::RegularGridVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

	/**
	 * --- inserted manually ---
	 *
	 * This is now the interesting part. The first few lines in the block resemble
	 * the one inserted by the generated grid plotter. It brings the vertex to
	 * your screen (or vtk file respectively. The lines afterwards then set
	 */
	if ( _vertex2IndexMap.find(x) == _vertex2IndexMap.end() ) {
#if defined(Dim2) || defined(Dim3)
		_vertex2IndexMap[x] = _vertexWriter->plotVertex(x);
#else
		_vertex2IndexMap[x] = _vertexWriter->plotVertex(tarch::la::Vector<3,double>(x.data()));
#endif
//		tarch::la::Vector<2,double> P_m;
//		P_m(0) = vertex.getP0();
//		P_m(1) = vertex.getP1();

		tarch::la::Vector<2,double> VV;
		VV(0) = vertex.getU1();
		VV(1) = vertex.getV2();

		_vertexFlagWriter->plotVertex(_vertex2IndexMap[x],vertex.getFlag());
//		_vertexPressureWriter->plotVertex(_vertex2IndexMap[x],P_m);
		_vertexUSpeedWriter->plotVertex(_vertex2IndexMap[x],vertex.getU1());
		_vertexVSpeedWriter->plotVertex(_vertex2IndexMap[x],vertex.getV2());
		_vertexVelocityWriter->plotVertex(_vertex2IndexMap[x],VV);
	}
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2PlotSolution::touchVertexLastTime(
		peano::applications::faxen::RegularGridVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2PlotSolution::prepareSendToNeighbour(
		peano::applications::faxen::RegularGridVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2PlotSolution::beginIteration(
		peano::applications::faxen::RegularGridState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	/**
	 * --- inserted manually ---
	 *
	 * The second part of this implementation again is straightforward and very
	 * technical. We just create the different writers we need.
	 */
	_vtkWriter.clear();
	_vertex2IndexMap.clear();

	_vertexWriter     = _vtkWriter.createVertexWriter();
	_cellWriter       = _vtkWriter.createCellWriter();

	_cellPressureWriter      = _vtkWriter.createCellDataWriter("pressure_cell",1);
//	_cellRhsWriter           = _vtkWriter.createCellDataWriter("rhs",1);
	_vertexFlagWriter        = _vtkWriter.createVertexDataWriter("flag",1);
//	_vertexPressureWriter    = _vtkWriter.createVertexDataWriter("pressure_vertex",2);
	_vertexUSpeedWriter      = _vtkWriter.createVertexDataWriter("horizontal_speed",1);
	_vertexVSpeedWriter      = _vtkWriter.createVertexDataWriter("vertical_speed",1);
	_vertexVelocityWriter    = _vtkWriter.createVertexDataWriter("velocity",2);

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::mappings::RegularGrid2PlotSolution::endIteration(
		peano::applications::faxen::RegularGridState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );

	std::ostringstream newFilename;
	newFilename << "faxen-solution-on-regular-grid-"
			<< solverState.getFilenameCounterAndIncrementIt()
			<< ".vtk";

	/**
	 * --- inserted manually ---
	 *
	 * Close the data writers, pipe the data to a file, and destroy all the
	 * objects we won't need anymore. This is again technical stuff.
	 */
	_vertexWriter->close();
	_cellWriter->close();

	_cellPressureWriter->close();
//	_cellRhsWriter->close();
	_vertexFlagWriter->close();
//	_vertexPressureWriter->close();
	_vertexUSpeedWriter->close();
	_vertexVSpeedWriter->close();
	_vertexVelocityWriter->close();

	delete _vertexWriter;
	delete _cellWriter;
//	delete _cellRhsWriter;
	delete _cellPressureWriter;
	delete _vertexFlagWriter;
//	delete _vertexPressureWriter;
	delete _vertexUSpeedWriter;
	delete _vertexVSpeedWriter;
	delete _vertexVelocityWriter;

	_vertexWriter         = 0;
	_cellWriter           = 0;
	_cellPressureWriter   = 0;
	_cellRhsWriter        = 0;
	_vertexFlagWriter	  = 0;
	_vertexUSpeedWriter   = 0;
	_vertexVSpeedWriter   = 0;
	_vertexVelocityWriter = 0;

	_vtkWriter.writeToFile( newFilename.str() );

	/**
	 * --- inserted manually ---
	 *
	 * Lets finally tell the user that we've created a file.
	 */
	logInfo( "endIteration()", "wrote solution to " << newFilename.str() );

	logTraceOutWith1Argument( "endIteration()", solverState );
}

