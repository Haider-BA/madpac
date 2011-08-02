#include "peano/applications/faxen/lbf/mappings/RegularGrid2CorrectDensity4LB.h"


tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB" );


peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::RegularGrid2CorrectDensity4LB() {
	logTraceIn( "RegularGrid2CorrectDensity4LB()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2CorrectDensity4LB()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::~RegularGrid2CorrectDensity4LB() {
	logTraceIn( "~RegularGrid2CorrectDensity4LB()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2CorrectDensity4LB()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::handleCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

	// correct densities for the bottom left vertex
	correctDensity4LBCell(vertices,enumerator,0);

	// correct densities for the bottom right vertex
	correctDensity4LBCell(vertices,enumerator,1);

	// correct densities for the top left vertex
	correctDensity4LBCell(vertices,enumerator,2);

	// correct densities for the top right vertex
	correctDensity4LBCell(vertices,enumerator,3);

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	// save fluid density
	_rho = solverState.getDensity();

	// save average LB density after NSE data extraction
	_avrDensity = solverState.getAvrExtractedDensity();

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "endIteration()", solverState );
}

void peano::applications::faxen::lbf::mappings::RegularGrid2CorrectDensity4LB::correctDensity4LBCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator,
		int vertexNumber
){
	int correction = LB_BLOCKSIZE%2;
	int origin;

	switch(vertexNumber) {
	case 0:
		origin = LB_BLOCK_NUMBER_OF_CELLS + LB_BLOCKSIZE*(1-correction)-correction;
		break;
	case 1:
		origin = LB_BLOCK_NUMBER_OF_CELLS - LB_BLOCKSIZE*correction;
		break;
	case 2:
		origin = LB_BLOCKSIZE - correction;
		break;
	case 3:
		origin = 0;
		break;
	default:
		return;
	}

	// load vertex
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertices[enumerator(vertexNumber)].getVertexNumber());
	// densities
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
	// location flag
	std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());

	// correct density values in each LB cell in one quarter of block
	for(int yc=0;yc<LB_BLOCKSIZE/2+correction;yc++){
		for(int xc=0;xc<LB_BLOCKSIZE/2+correction;xc++){
			// correct densities only in inner LB cells
			if(inner[origin/2+yc*LB_BLOCKSIZE+xc]){
				density[origin/2+yc*LB_BLOCKSIZE+xc] += _rho - _avrDensity;
			}
		}
	}
}

