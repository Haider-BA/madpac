#include "peano/applications/faxen/lbf/mappings/RegularGrid2BlockVTKOutput.h"


tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput" );


peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::RegularGrid2BlockVTKOutput():
						_multiLevelSimData(NULL),
						_vertex2IndexMap(),
						_vtkWriter(),
						_vertexWriter(NULL),
						_cellWriter(NULL),
						_densityWriter(NULL),
						_velocityWriter(NULL)
//#if (defined(Debug) && (!defined(Parallel)))
,_blockCounter(0),
_blockIdWriter(NULL)
//#endif
{
	logTraceIn( "RegularGrid2BlockVTKOutput()" );
	logTraceOut( "RegularGrid2BlockVTKOutput()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::~RegularGrid2BlockVTKOutput() {
	logTraceIn( "~RegularGrid2BlockVTKOutput()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2BlockVTKOutput()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	vertex.createVertex(x,h);
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	vertex.createVertex(x,h);
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	vertex.destroyVertex();
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::handleCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertex.getVertexNumber());
	std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double >& velocity(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
	tarch::la::Vector<DIMENSIONS,double> velocityBuffer(0.0);
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
	tarch::la::Vector<DIMENSIONS,double> position(0.0);
	tarch::la::Vector<DIMENSIONS,double> currentVertexPosition(0.0);
	int vertexIndex[TWO_POWER_D];
	int cellCounter = 0;
	int vertexCounter = 0;
	int cellNumber;

#if (DIMENSIONS == 3)
	for (int zc = 0; zc < LB_BLOCKSIZE; zc++){
		position(2) = x(2) - 0.5*LB_BLOCKSIZE*_h(2) + zc*_h(2);
#endif
		for (int yc= 0; yc < LB_BLOCKSIZE; yc++){
			position(1) = x(1) - 0.5*LB_BLOCKSIZE*_h(1) + yc*_h(1);
			for (int xc=0; xc < LB_BLOCKSIZE; xc++){
				position(0) = x(0) - 0.5*LB_BLOCKSIZE*_h(0) + xc*_h(0);

				// if the current cell is inner, plot it and its vertices
				if (inner[cellCounter]){
					logDebug("touchVertexFirstTime()", "Cell " << cellCounter << " at position " << position << "," << _h << " is an inner cell");
					// vertex plotting
					vertexCounter = 0;
#if (DIMENSIONS == 3)
					for (int zv = 0; zv < 2; zv++){
						currentVertexPosition(2) = position(2) + _h(2)*zv;
#endif
						for (int yv = 0; yv < 2; yv++){
							currentVertexPosition(1) = position(1) + _h(1)*yv;
							for (int xv = 0; xv < 2; xv++){
								currentVertexPosition(0) = position(0) + _h(0)*xv;
								// if this vertex is not already in map, put it in and plot it
								if (_vertex2IndexMap.find(currentVertexPosition) == _vertex2IndexMap.end()){
									int vertexNumber = _vertexWriter->plotVertex(currentVertexPosition);
									_vertex2IndexMap[currentVertexPosition] = vertexNumber;
									vertexIndex[vertexCounter] = vertexNumber;
									// otherwise: just get its number
								} else {
									vertexIndex[vertexCounter] = _vertex2IndexMap.find(currentVertexPosition)->second;
								}
								vertexCounter++;
							}
						}
#if (DIMENSIONS == 3)
					}
#endif

					// cell plotting
#if (DIMENSIONS == 2)
					cellNumber = _cellWriter->plotQuadrangle(vertexIndex);
#elif (DIMENSIONS == 3)
					cellNumber = _cellWriter->plotHexahedron(vertexIndex);
#else
#error "Only 2D/ 3D supported!"
#endif

					// get velocity and put it into buffer
					for (int d = 0; d < DIMENSIONS; d++){
						velocityBuffer[d] = velocity[cellCounter*DIMENSIONS+d];
					}
					_densityWriter->plotCell(cellNumber,density[cellCounter]);
					_velocityWriter->plotCell(cellNumber,velocityBuffer);

					//#if defined(Debug) && (!defined(Parallel))
					// write block id
					_blockIdWriter->plotCell(cellNumber,_blockCounter);
					//#endif
				} // end is inner cell

				cellCounter++;
			}
		}
#if (DIMENSIONS == 3)
	}
#endif

	//#if defined(Debug) && (!defined(Parallel))
	// increment blockCounter
	_blockCounter++;
	//#endif

	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	// set multi-level simulation data
	_multiLevelSimData = std::auto_ptr<peano::applications::latticeboltzmann::MultiLevelSimData>(
			new peano::applications::latticeboltzmann::MultiLevelSimData(solverState)
	);
	// determine meshsize
	_h = tarch::la::Vector<DIMENSIONS,double>(
			_multiLevelSimData->getSimData(_multiLevelSimData->getSimData(0).getLevel()).getDx()
			*tarch::la::Vector<DIMENSIONS,double>(1.0)
	);

	_vtkWriter.clear();
	_vertex2IndexMap.clear();

	_vertexWriter     = _vtkWriter.createVertexWriter();
	_cellWriter       = _vtkWriter.createCellWriter();

	_densityWriter = _vtkWriter.createCellDataWriter("density",1);
	_velocityWriter    = _vtkWriter.createCellDataWriter("velocity",3);

	//#if defined(Debug) && (!defined(Parallel))
	_blockCounter = 0;
	_blockIdWriter = _vtkWriter.createCellDataWriter("block-id",1);
	//#endif

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2BlockVTKOutput::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );

	std::ostringstream newFilename;
	// add timestep-1 to the name (the timestep has already been incremented in triggerPlotting() of the state)
	newFilename << solverState.getVTKFilename() << "_"
#ifdef Parallel
			<< tarch::parallel::Node::getInstance().getRank() << "_"
#endif
			<< solverState.getTimestep()-1
			<< ".vtk";

	_vertexWriter->close();
	_cellWriter->close();

	_densityWriter->close();
	_velocityWriter->close();

	//#if defined(Debug) && (!defined(Parallel))
	_blockIdWriter->close();
	//#endif

	delete _vertexWriter;
	delete _cellWriter;
	delete _densityWriter;
	delete _velocityWriter;
	//#if defined(Debug) && (!defined(Parallel))
	delete _blockIdWriter;
	//#endif

	_vertexWriter         = NULL;
	_cellWriter           = NULL;
	_densityWriter = NULL;
	_velocityWriter    = NULL;
	//#if defined(Debug) && (!defined(Parallel))
	_blockIdWriter = NULL;
	//#endif

	_vtkWriter.writeToFile( newFilename.str() );

	logTraceOutWith1Argument( "endIteration()", solverState );
}

