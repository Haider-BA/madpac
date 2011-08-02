#include "peano/applications/faxen/lbf/mappings/RegularGrid2MoveParticles.h"
#include "peano/applications/faxen/lbf/services/ForcesService.h"


tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles" );


peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::RegularGrid2MoveParticles() {
	logTraceIn( "RegularGrid2MoveParticles()" );

	_cellVertices = new peano::applications::faxen::lbf::RegularGridBlockVertex*[TWO_POWER_D];

	logTraceOut( "RegularGrid2MoveParticles()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::~RegularGrid2MoveParticles() {
	logTraceIn( "~RegularGrid2MoveParticles()" );

	delete[] _cellVertices;

	logTraceOut( "~RegularGrid2MoveParticles()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::handleCell(
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

	peano::applications::faxen::lbf::services::ForcesService::getInstance().checkCell(_cellVertices,
			cell,zeroPoint,cellSize);

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	peano::applications::faxen::lbf::services::ForcesService::getInstance().update();

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2MoveParticles::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	peano::applications::faxen::lbf::services::ForcesService::getInstance().moveParticles(solverState.getDelt());
	logTraceOutWith1Argument( "endIteration()", solverState );
}

