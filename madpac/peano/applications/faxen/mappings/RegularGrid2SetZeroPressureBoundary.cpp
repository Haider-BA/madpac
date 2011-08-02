#include "peano/applications/faxen/mappings/RegularGrid2SetZeroPressureBoundary.h"
#include "peano/applications/faxen/Flags.h"

tarch::logging::Log peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::_log( "peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary" );


peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::RegularGrid2SetZeroPressureBoundary() {
	logTraceIn( "RegularGrid2SetZeroPressureBoundary()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2SetZeroPressureBoundary()" );
}


peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::~RegularGrid2SetZeroPressureBoundary() {
	logTraceIn( "~RegularGrid2SetZeroPressureBoundary()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2SetZeroPressureBoundary()" );
}


void peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::createCell(
		peano::applications::faxen::RegularGridVertex const * const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::destroyCell(
		peano::applications::faxen::RegularGridVertex const * const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::handleCell(
		peano::applications::faxen::RegularGridVertex* const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

//	double P_m0 = vertices[enumerator(1)].getP0();
//	double P_m1 = vertices[enumerator(2)].getP1();
//	double P_m2 = vertices[enumerator(3)].getP1();
//	double P_m3 = vertices[enumerator(3)].getP0();
	double P_loc = cell.getP();

	/**
	 * Western wall
	 */
	if(vertices[enumerator(0)].getFlag() & UPWALL) {
		vertices[enumerator(2)].setP1(P_loc/2);
	}

	/**
	 * Southern wall
	 */
	if(vertices[enumerator(0)].getFlag() & RIGHTWALL){
		vertices[enumerator(1)].setP0(P_loc/2);
	}

	/**
	 * Eastern wall
	 */
	if(vertices[enumerator(1)].getFlag() & UPWALL){
		vertices[enumerator(3)].setP1(P_loc/2);
	}

	/**
	 * Northern wall
	 */
	if(vertices[enumerator(2)].getFlag() & RIGHTWALL){
		vertices[enumerator(3)].setP0(P_loc/2);
	}

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::mergeWithNeighbour(
		peano::applications::faxen::RegularGridVertex& vertex,
		const peano::applications::faxen::RegularGridVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::touchVertexFirstTime(
		peano::applications::faxen::RegularGridVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::touchVertexLastTime(
		peano::applications::faxen::RegularGridVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::prepareSendToNeighbour(
		peano::applications::faxen::RegularGridVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::beginIteration(
		peano::applications::faxen::RegularGridState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::mappings::RegularGrid2SetZeroPressureBoundary::endIteration(
		peano::applications::faxen::RegularGridState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "endIteration()", solverState );
}

