#include "peano/applications/faxen/mappings/RegularGrid2SetPressureBoundary.h"
#include "peano/applications/faxen/Flags.h"


tarch::logging::Log peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::_log( "peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary" );


peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::RegularGrid2SetPressureBoundary() {
	logTraceIn( "RegularGrid2SetPressureBoundary()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2SetPressureBoundary()" );
}


peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::~RegularGrid2SetPressureBoundary() {
	logTraceIn( "~RegularGrid2SetPressureBoundary()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2SetPressureBoundary()" );
}


void peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::createCell(
		peano::applications::faxen::RegularGridVertex const * const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::destroyCell(
		peano::applications::faxen::RegularGridVertex const * const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::handleCell(
		peano::applications::faxen::RegularGridVertex* const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

	double P_m0 = vertices[enumerator(1)].getP0();
	double P_m1 = vertices[enumerator(2)].getP1();
	double P_m2 = vertices[enumerator(3)].getP1();
	double P_m3 = vertices[enumerator(3)].getP0();
	double P_loc = cell.getP();

	/**
	 * Western wall
	 */
	if(vertices[enumerator(0)].getFlag() & UPWALL) {

//		// outer corners
//		if((vertices[enumerator(0)].getFlag()&LEFTWALL) ||
//				(vertices[enumerator(2)].getFlag()&LEFTWALL)){
//			P_m1 += P_loc/4;
//		}
//		// plane wall
//		else {
//			P_m1 += P_loc/2;
//		}

		P_m1 = P_loc;

		 vertices[enumerator(2)].setP1(P_m1);
	}

	/**
	 * Eastern wall
	 */
	if(vertices[enumerator(1)].getFlag() & UPWALL) {

//		// outer corners
//		if((vertices[enumerator(1)].getFlag()&RIGHTWALL) ||
//				(vertices[enumerator(3)].getFlag()&RIGHTWALL)){
//			P_m2 += P_loc/4;
//		}
//		// plane wall
//		else {
//			P_m2 += P_loc/2;
//		}
		P_m2 = P_loc;

		vertices[enumerator(3)].setP1(P_m2);
	}

	/**
	 * Southern wall
	 */
	if(vertices[enumerator(0)].getFlag() & RIGHTWALL) {

//		// outer corners
//		if((vertices[enumerator(0)].getFlag()&DOWNWALL) ||
//				(vertices[enumerator(1)].getFlag()&DOWNWALL)){
//			P_m0 += P_loc/4;
//		}
//		// plane wall
//		else {
//			P_m0 += P_loc/2;
//		}
		P_m0 = P_loc;

		vertices[enumerator(1)].setP0(P_m0);
	}

	/**
	 * Northern wall
	 */
	if(vertices[enumerator(2)].getFlag() & RIGHTWALL) {

//		// outer corners
//		if((vertices[enumerator(2)].getFlag()&UPWALL) ||
//				(vertices[enumerator(3)].getFlag()&UPWALL)){
//			P_m3 += P_loc/4;
//		}
//		// plane wall
//		else {
//			P_m3 += P_loc/2;
//		}

		P_m3 = P_loc;

		vertices[enumerator(3)].setP0(P_m3);
	}

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::mergeWithNeighbour(
		peano::applications::faxen::RegularGridVertex& vertex,
		const peano::applications::faxen::RegularGridVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::touchVertexFirstTime(
		peano::applications::faxen::RegularGridVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::touchVertexLastTime(
		peano::applications::faxen::RegularGridVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::prepareSendToNeighbour(
		peano::applications::faxen::RegularGridVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::beginIteration(
		peano::applications::faxen::RegularGridState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::mappings::RegularGrid2SetPressureBoundary::endIteration(
		peano::applications::faxen::RegularGridState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "endIteration()", solverState );
}

