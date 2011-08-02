#include "peano/applications/faxen/mappings/RegularGrid2ComputeVelocitiesDerivatives.h"
#include "peano/applications/faxen/Flags.h"
#include <math.h>


tarch::logging::Log peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::_log( "peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives" );


peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::RegularGrid2ComputeVelocitiesDerivatives() {
	logTraceIn( "RegularGrid2ComputeVelocitiesDerivatives()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2ComputeVelocitiesDerivatives()" );
}


peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::~RegularGrid2ComputeVelocitiesDerivatives() {
	logTraceIn( "~RegularGrid2ComputeVelocitiesDerivatives()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2ComputeVelocitiesDerivatives()" );
}


void peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::createCell(
		peano::applications::faxen::RegularGridVertex const * const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::destroyCell(
		peano::applications::faxen::RegularGridVertex const * const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::handleCell(
		peano::applications::faxen::RegularGridVertex* const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

//	std::cout << "------- cell beginning of damn logging to find damn mistakes -------\n";

	double F_m0 = vertices[enumerator(1)].getF0();
	double F_m1 = vertices[enumerator(2)].getF1();
	double F_m2 = vertices[enumerator(3)].getF1();
	double F_m3 = vertices[enumerator(3)].getF0();
	double F_loc = cell.getF();

//	std::cout << "F_m0, F_m1, F_m2, F_m3, F_loc: "
//			<< F_m0 << "; "
//			<< F_m1 << "; "
//			<< F_m2 << "; "
//			<< F_m3 << "; "
//			<< F_loc << "\n";

	double G_m0 = vertices[enumerator(1)].getG0();
	double G_m1 = vertices[enumerator(2)].getG1();
	double G_m2 = vertices[enumerator(3)].getG1();
	double G_m3 = vertices[enumerator(3)].getG0();
	double G_loc = cell.getG();

//	std::cout << "G_m0, G_m1, G_m2, G_m3, G_loc: "
//				<< G_m0 << "; "
//				<< G_m1 << "; "
//				<< G_m2 << "; "
//				<< G_m3 << "; "
//				<< G_loc << "\n";

	double u_m3 = vertices[enumerator(2)].getU2();
	double u_loc = cell.getU();

	double v_m1 = vertices[enumerator(1)].getV1();
	double v_loc = cell.getV();

//	std::cout << "u_m3 = " << u_m3 << "\n";
//	std::cout << "u_loc = " << u_loc << "\n";
//
//	std::cout << "v_m1 = " << v_m1 << "\n";
//	std::cout << "v_loc = " << v_loc << "\n";

	double uij = u_loc;
	double uip1j = 2*vertices[enumerator(3)].getU2() - u_loc;
	double uim1j = 2*vertices[enumerator(2)].getU2() - u_loc;
	double uijp1 = 2*vertices[enumerator(3)].getU1() - u_loc;
	double uijm1 = 2*vertices[enumerator(1)].getU1() - u_loc;
	double uim1jp1 = u_loc + 4*vertices[enumerator(2)].getU0() -
			2*vertices[enumerator(3)].getU1() -
			2*vertices[enumerator(2)].getU2();

//	std::cout << "uij = "   << uij << "\n";
//	std::cout << "uip1j = " << uip1j << "\n";
//	std::cout << "uim1j = " << uim1j << "\n";
//	std::cout << "uijp1 = " << uijp1 << "\n";
//	std::cout << "uijm1 = " << uijm1 << "\n";
//	std::cout << "uim1jp1 = " << uim1jp1 << "\n";

	double d2Udx2;
	double d2Udy2;
	double dU2dx;
	double dUVdy;

	double vij = v_loc;
	double vip1j = 2*vertices[enumerator(3)].getV2() - v_loc;
	double vim1j = 2*vertices[enumerator(2)].getV2() - v_loc;
	double vijp1 = 2*vertices[enumerator(3)].getV1() - v_loc;
	double vijm1 = 2*vertices[enumerator(1)].getV1() - v_loc;
	double vip1jm1 = v_loc + 4*vertices[enumerator(1)].getV0() -
			2*vertices[enumerator(1)].getV1() -
			2*vertices[enumerator(3)].getV2();

//	std::cout << "vij = "   << vij << "\n";
//	std::cout << "vip1j = " << vip1j << "\n";
//	std::cout << "vim1j = " << vim1j << "\n";
//	std::cout << "vijp1 = " << vijp1 << "\n";
//	std::cout << "vijm1 = " << vijm1 << "\n";
//	std::cout << "vip1jm1 = " << vip1jm1 << "\n";

	double d2Vdx2;
	double d2Vdy2;
	double dUVdx;
	double dV2dy;

	/*
	 * West wall
	 */
	if(vertices[enumerator(0)].getFlag() & UPWALL) {
		F_m1 = u_m3 + (F_loc-u_loc)/2;
	}

	/**
	 * East wall
	 */
	if(vertices[enumerator(1)].getFlag() & UPWALL){
		F_m0 += (u_loc-F_loc)/2;
		F_m1 += (u_loc-F_loc)/2;
		F_m2 += (u_loc-F_loc)/2;
		F_m3 += (u_loc-F_loc)/2;
		F_loc = u_loc;
	} else {
		d2Udx2 = (uip1j-2*uij+uim1j)/(_dx*_dx);
		d2Udy2 = (uijp1-2*uij+uijm1)/(_dy*_dy);
		dU2dx  = (((uij+uip1j)*(uij+uip1j)-(uim1j+uij)*(uim1j+uij))+
				_gamma*(fabs(uij+uip1j)*(uij-uip1j)-fabs(uim1j+uij)*(uim1j-uij)))/(4*_dx);
		dUVdy  = (((vij+vip1j)*(uij+uijp1)-(vijm1+vip1jm1)*(uijm1+uij))+
				_gamma*(fabs(vij+vip1j)*(uij-uijp1)-fabs(vijm1+vip1jm1)*(uijm1-uij)))/(4*_dy);
		double F_loc_new = uij + _dt*((d2Udx2+d2Udy2)/_Re-dU2dx-dUVdy+_gx);

//		std::cout << "d2Udx2 = " << d2Udx2 << "\n";
//		std::cout << "d2Udy2 = " << d2Udy2 << "\n";
//		std::cout << "dU2dx = " << dU2dx << "\n";
//		std::cout << "dUVdy = " << dUVdy << "\n";
//		std::cout << "F_loc_new = " << F_loc_new << "\n";

		F_m0 += (F_loc_new-F_loc)/2;
		F_m1 += (F_loc_new-F_loc)/2;
		F_m2 += (F_loc_new-F_loc)/2;
		F_m3 += (F_loc_new-F_loc)/2;
		F_loc = F_loc_new;
	}

	/**
	 * South wall
	 */
	if(vertices[enumerator(0)].getFlag() & RIGHTWALL){
		G_m1 = v_m1 + (G_loc-v_loc)/2;
	}

	/**
	 * North wall
	 */
	if(vertices[enumerator(2)].getFlag() & RIGHTWALL){

		G_m0 += (v_loc-G_loc)/2;
		G_m1 += (v_loc-G_loc)/2;
		G_m2 += (v_loc-G_loc)/2;
		G_m3 += (v_loc-G_loc)/2;
		G_loc = v_loc;
	} else {
		d2Vdx2 = (vip1j-2*vij+vim1j)/(_dx*_dx);
		d2Vdy2 = (vijp1-2*vij+vijm1)/(_dy*_dy);
		dUVdx  = (((uij+uijp1)*(vij+vip1j)-(uim1j+uim1jp1)*(vim1j+vij))+
				_gamma*(fabs(uij+uijp1)*(vij-vip1j)-fabs(uim1j+uim1jp1)*(vim1j-vij)))/(4*_dx);
		dV2dy  = (((vij+vijp1)*(vij+vijp1)-(vijm1+vij)*(vijm1+vij))+
				_gamma*(fabs(vij+vijp1)*(vij-vijp1)-fabs(vijm1+vij)*(vijm1-vij)))/(4*_dy);
		double G_loc_new = vij+_dt*((d2Vdx2+d2Vdy2)/_Re-dUVdx-dV2dy+_gy);

//		std::cout << "d2Vdx2 = " << d2Vdx2 << "\n";
//		std::cout << "d2Vdy2 = " << d2Vdy2 << "\n";
//		std::cout << "dV2dx = " << dV2dy << "\n";
//		std::cout << "dUVdx = " << dUVdx << "\n";
//		std::cout << "G_loc_new = " << G_loc_new << "\n";

		G_m0 += (G_loc_new-G_loc)/2;
		G_m1 += (G_loc_new-G_loc)/2;
		G_m2 += (G_loc_new-G_loc)/2;
		G_m3 += (G_loc_new-G_loc)/2;
		G_loc = G_loc_new;
	}

//	std::cout << "F_m0, F_m1, F_m2, F_m3, F_loc: "
//			<< F_m0 << "; "
//			<< F_m1 << "; "
//			<< F_m2 << "; "
//			<< F_m3 << "; "
//			<< F_loc << "\n";
//
//	std::cout << "G_m0, G_m1, G_m2, G_m3, G_loc: "
//			<< G_m0 << "; "
//			<< G_m1 << "; "
//			<< G_m2 << "; "
//			<< G_m3 << "; "
//			<< G_loc << "\n";

	vertices[enumerator(1)].setF0(F_m0);
	vertices[enumerator(2)].setF1(F_m1);
	vertices[enumerator(3)].setF1(F_m2);
	vertices[enumerator(3)].setF0(F_m3);
	cell.setF(F_loc);

	vertices[enumerator(1)].setG0(G_m0);
	vertices[enumerator(2)].setG1(G_m1);
	vertices[enumerator(3)].setG1(G_m2);
	vertices[enumerator(3)].setG0(G_m3);
	cell.setG(G_loc);

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::mergeWithNeighbour(
		peano::applications::faxen::RegularGridVertex& vertex,
		const peano::applications::faxen::RegularGridVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::touchVertexFirstTime(
		peano::applications::faxen::RegularGridVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::touchVertexLastTime(
		peano::applications::faxen::RegularGridVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::prepareSendToNeighbour(
		peano::applications::faxen::RegularGridVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::beginIteration(
		peano::applications::faxen::RegularGridState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	_Re = solverState.getReynoldsNumber();
	_gamma = solverState.getUpwindDiffFactor();
	_gx = solverState.getGravityX();
	_gy = solverState.getGravityY();
	_dx = solverState.getDelx();
	_dy = solverState.getDely();
	_dt = solverState.getDelt();

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::mappings::RegularGrid2ComputeVelocitiesDerivatives::endIteration(
		peano::applications::faxen::RegularGridState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "endIteration()", solverState );
}

