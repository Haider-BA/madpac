#include "peano/applications/faxen/lbf/mappings/RegularGrid2SetVelocitiesBoundary.h"
#include "peano/applications/faxen/Flags.h"

tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary" );


peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::RegularGrid2SetVelocitiesBoundary() {
	logTraceIn( "RegularGrid2SetVelocitiesBoundary()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2SetVelocitiesBoundary()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::~RegularGrid2SetVelocitiesBoundary() {
	logTraceIn( "~RegularGrid2SetVelocitiesBoundary()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2SetVelocitiesBoundary()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::handleCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );


	double u_m0 = vertices[enumerator(0)].getU0();
	double u_m1 = vertices[enumerator(1)].getU1();
	double u_m2 = vertices[enumerator(1)].getU0();
	double u_m3 = vertices[enumerator(2)].getU2();
	double u_m4 = vertices[enumerator(3)].getU2();
	double u_m5 = vertices[enumerator(2)].getU0();
	double u_m6 = vertices[enumerator(3)].getU1();
	double u_m7 = vertices[enumerator(3)].getU0();
	double u_loc = cell.getU();

	double v_m0 = vertices[enumerator(0)].getV0();
	double v_m1 = vertices[enumerator(1)].getV1();
	double v_m2 = vertices[enumerator(1)].getV0();
	double v_m3 = vertices[enumerator(2)].getV2();
	double v_m4 = vertices[enumerator(3)].getV2();
	double v_m5 = vertices[enumerator(2)].getV0();
	double v_m6 = vertices[enumerator(3)].getV1();
	double v_m7 = vertices[enumerator(3)].getV0();
	double v_loc = cell.getV();

	/*
	 * Western wall
	 */
	if(vertices[enumerator(0)].getFlag() & UPWALL) {
		u_m0 += u_loc/4 - u_m3/2;
		u_m5 += u_loc/4 - u_m3/2;
		u_m3 = u_loc/2;

		if(vertices[enumerator(2)].getFlag() & UPWALL) {
			v_m0 -= v_m3/2;
			v_m5 -= v_m3/2;
			v_m3 = 0.0;
		}
	}

	/**
	 * Southern wall
	 */
	if(vertices[enumerator(0)].getFlag() & RIGHTWALL){
		if(vertices[enumerator(1)].getFlag() & RIGHTWALL){
			u_m0 -= u_m1/2;
			u_m2 -= u_m1/2;
			u_m1 = 0.0;
		}

		v_m0 += v_loc/4 - v_m1/2;
		v_m2 += v_loc/4 - v_m1/2;
		v_m1 = v_loc/2;
	}

	/**
	 * Eastern wall
	 */
	if(vertices[enumerator(1)].getFlag() & UPWALL){
		u_m0 -= u_loc/4;
		u_m1 -= u_loc/2;
		u_m2 -= u_loc/4;
		u_m3 -= u_loc/2;
		u_m4 -= u_loc/2;
		u_m5 -= u_loc/4;
		u_m6 -= u_loc/2;
		u_m7 -= u_loc/4;
		u_loc = 0.0;

		if(vertices[enumerator(3)].getFlag() & UPWALL) {
			v_m2 -= v_m4/2;
			v_m7 -= v_m4/2;
			v_m4 = 0.0;
		}
	}

	/**
	 * Northern wall
	 */
	if(vertices[enumerator(2)].getFlag() & RIGHTWALL){
		if(vertices[enumerator(3)].getFlag() & RIGHTWALL){
			u_m5 -= u_m6/2;
			u_m7 -= u_m6/2;
			u_m6 = 0.0;
		}

		v_m0 -= v_loc/4;
		v_m1 -= v_loc/2;
		v_m2 -= v_loc/4;
		v_m3 -= v_loc/2;
		v_m4 -= v_loc/2;
		v_m5 -= v_loc/4;
		v_m6 -= v_loc/2;
		v_m7 -= v_loc/4;
		v_loc = 0.0;
	}

	vertices[enumerator(0)].setU0(u_m0);
	vertices[enumerator(1)].setU1(u_m1);
	vertices[enumerator(1)].setU0(u_m2);
	vertices[enumerator(2)].setU2(u_m3);
	vertices[enumerator(3)].setU2(u_m4);
	vertices[enumerator(2)].setU0(u_m5);
	vertices[enumerator(3)].setU1(u_m6);
	vertices[enumerator(3)].setU0(u_m7);
	cell.setU(u_loc);

	vertices[enumerator(0)].setV0(v_m0);
	vertices[enumerator(1)].setV1(v_m1);
	vertices[enumerator(1)].setV0(v_m2);
	vertices[enumerator(2)].setV2(v_m3);
	vertices[enumerator(3)].setV2(v_m4);
	vertices[enumerator(2)].setV0(v_m5);
	vertices[enumerator(3)].setV1(v_m6);
	vertices[enumerator(3)].setV0(v_m7);
	cell.setV(v_loc);

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SetVelocitiesBoundary::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "endIteration()", solverState );
}

