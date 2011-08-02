#include "peano/applications/faxen/lbf/mappings/RegularGrid2ComputeVelocities.h"


tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities" );


peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::RegularGrid2ComputeVelocities() {
	logTraceIn( "RegularGrid2ComputeVelocities()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2ComputeVelocities()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::~RegularGrid2ComputeVelocities() {
	logTraceIn( "~RegularGrid2ComputeVelocities()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2ComputeVelocities()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::handleCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

	double Pij = cell.getP();
	double Pip1j = 2*vertices[enumerator(3)].getP1() - Pij;
	double Pijp1 = 2*vertices[enumerator(3)].getP0() - Pij;

	double F = cell.getF();
	double G = cell.getG();

	double u = cell.getU();
	double v = cell.getV();

	double u_new = F - _dt*(Pip1j-Pij)/_dx;
	double v_new = G - _dt*(Pijp1-Pij)/_dy;

	double u_m0 = vertices[enumerator(0)].getU0();
	double u_m1 = vertices[enumerator(1)].getU1();
	double u_m2 = vertices[enumerator(1)].getU0();
	double u_m3 = vertices[enumerator(2)].getU2();
	double u_m4 = vertices[enumerator(3)].getU2();
	double u_m5 = vertices[enumerator(2)].getU0();
	double u_m6 = vertices[enumerator(3)].getU1();
	double u_m7 = vertices[enumerator(3)].getU0();

	u_m0 += (u_new-u)/4;
	u_m1 += (u_new-u)/2;
	u_m2 += (u_new-u)/4;
	u_m3 += (u_new-u)/2;
	u_m4 += (u_new-u)/2;
	u_m5 += (u_new-u)/4;
	u_m6 += (u_new-u)/2;
	u_m7 += (u_new-u)/4;

	vertices[enumerator(0)].setU0(u_m0);
	vertices[enumerator(1)].setU1(u_m1);
	vertices[enumerator(1)].setU0(u_m2);
	vertices[enumerator(2)].setU2(u_m3);
	vertices[enumerator(3)].setU2(u_m4);
	vertices[enumerator(2)].setU0(u_m5);
	vertices[enumerator(3)].setU1(u_m6);
	vertices[enumerator(3)].setU0(u_m7);
	cell.setU(u_new);

	double v_m0 = vertices[enumerator(0)].getV0();
	double v_m1 = vertices[enumerator(1)].getV1();
	double v_m2 = vertices[enumerator(1)].getV0();
	double v_m3 = vertices[enumerator(2)].getV2();
	double v_m4 = vertices[enumerator(3)].getV2();
	double v_m5 = vertices[enumerator(2)].getV0();
	double v_m6 = vertices[enumerator(3)].getV1();
	double v_m7 = vertices[enumerator(3)].getV0();

	v_m0 += (v_new-v)/4;
	v_m1 += (v_new-v)/2;
	v_m2 += (v_new-v)/4;
	v_m3 += (v_new-v)/2;
	v_m4 += (v_new-v)/2;
	v_m5 += (v_new-v)/4;
	v_m6 += (v_new-v)/2;
	v_m7 += (v_new-v)/4;

	vertices[enumerator(0)].setV0(v_m0);
	vertices[enumerator(1)].setV1(v_m1);
	vertices[enumerator(1)].setV0(v_m2);
	vertices[enumerator(2)].setV2(v_m3);
	vertices[enumerator(3)].setV2(v_m4);
	vertices[enumerator(2)].setV0(v_m5);
	vertices[enumerator(3)].setV1(v_m6);
	vertices[enumerator(3)].setV0(v_m7);
	cell.setV(v_new);

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	_dt = solverState.getDelt();
	_dx = solverState.getDelx();
	_dy = solverState.getDely();

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeVelocities::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "endIteration()", solverState );
}

