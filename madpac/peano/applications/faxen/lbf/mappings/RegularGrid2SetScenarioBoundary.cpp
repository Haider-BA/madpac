#include "peano/applications/faxen/lbf/mappings/RegularGrid2SetScenarioBoundary.h"
#include "peano/applications/faxen/lbf/services/ScenarioService.h"


tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary" );


peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::RegularGrid2SetScenarioBoundary() {
	logTraceIn( "RegularGrid2SetScenarioBoundary()" );

	_cellVertices = new peano::applications::faxen::lbf::RegularGridBlockVertex*[TWO_POWER_D];

	logTraceOut( "RegularGrid2SetScenarioBoundary()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::~RegularGrid2SetScenarioBoundary() {
	logTraceIn( "~RegularGrid2SetScenarioBoundary()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2SetScenarioBoundary()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::handleCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
	tarch::la::Vector<DIMENSIONS, double> zeroPoint = enumerator.getVertexPosition(0);
	tarch::la::Vector<DIMENSIONS, double> cellSize = enumerator.getCellSize();

	// only 2D case
	_cellVertices[0] = &vertices[enumerator(0)];
	_cellVertices[1] = &vertices[enumerator(1)];
	_cellVertices[2] = &vertices[enumerator(2)];
	_cellVertices[3] = &vertices[enumerator(3)];

	peano::applications::faxen::lbf::services::ScenarioService::getInstance().
			setVelocityBoundaryConditionOnCell(_cellVertices,cell,zeroPoint,cellSize);

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

	peano::applications::faxen::lbf::services::ScenarioService::getInstance().
			setVelocityBoundaryConditionOnVertex(vertex,x,_meshSize);

	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	_meshSize[0] = solverState.getDelx();
	_meshSize[1] = solverState.getDely();

	_width = solverState.getXlength();
	_height = solverState.getYlength();

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetScenarioBoundary::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "endIteration()", solverState );
}

