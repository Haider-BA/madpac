#include "peano/applications/faxen/lbf/mappings/RegularGrid2SwitchFromLB2NSE.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/GridManagementService.h"
#include "peano/applications/faxen/lbf/services/ForcesService.h"
#include <cmath>
#include <fstream>
#include <iostream>


tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE" );


peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::RegularGrid2SwitchFromLB2NSE() {
	logTraceIn( "RegularGrid2SwitchFromLB2NSE()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2SwitchFromLB2NSE()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::~RegularGrid2SwitchFromLB2NSE() {
	logTraceIn( "~RegularGrid2SwitchFromLB2NSE()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2SwitchFromLB2NSE()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::handleCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

	// only for 2D implementation
	//	std::cout << "0 vertex number: "<< vertices[enumerator(0)].getVertexNumber() << std::endl;
	//	std::cout << "1 vertex number: "<< vertices[enumerator(1)].getVertexNumber() << std::endl;
	//	std::cout << "2 vertex number: "<< vertices[enumerator(2)].getVertexNumber() << std::endl;
	//	std::cout << "3 vertex number: "<< vertices[enumerator(3)].getVertexNumber() << std::endl;

	// load bottom left vertex
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertices[enumerator(0)].getVertexNumber());
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density0(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
	_p[0] = density0[LB_BLOCK_NUMBER_OF_CELLS-1];

	// load bottom right vertex
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertices[enumerator(1)].getVertexNumber());
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density1(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
	_p[1] = density1[LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE];
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>& velocity1(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
	if(LB_BLOCKSIZE%2 == 0) {
		_u[0] = velocity1[2*LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE-2];
		_u[1] = velocity1[2*LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE];
	} else {
		_u[0] = velocity1[2*LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE];
	}

	//	std::cout << "velocities: " << velocity1 << std::endl;

	// load top left vertex
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertices[enumerator(2)].getVertexNumber());
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density2(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
	_p[2] = density2[LB_BLOCKSIZE-1];
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>& velocity2(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
	if(LB_BLOCKSIZE%2 == 0) {
		_v[0] = velocity2[LB_BLOCK_NUMBER_OF_CELLS-1];
		_v[2] = velocity2[LB_BLOCK_NUMBER_OF_CELLS + 2*LB_BLOCKSIZE - 1];
	} else {
		_v[0] = velocity2[LB_BLOCK_NUMBER_OF_CELLS + LB_BLOCKSIZE - 1];
	}

	// load top right vertex
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertices[enumerator(3)].getVertexNumber());
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density3(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
	_p[3] = density3[0];
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>& velocity3(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
	if(LB_BLOCKSIZE%2 == 0) {
		_u[2] = velocity3[LB_BLOCKSIZE-2];
		_u[3] = velocity3[LB_BLOCKSIZE];
		_v[1] = velocity3[LB_BLOCK_NUMBER_OF_CELLS-2*LB_BLOCKSIZE+1];
		_v[3] = velocity3[LB_BLOCK_NUMBER_OF_CELLS+1];
	} else {
		_u[1] = velocity3[LB_BLOCKSIZE-1];
		_v[1] = velocity3[LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE+1];
	}

	double P_new = ((_p[0]+_p[1]+_p[2]+_p[3])/4)*_dxbydt*_dxbydt*_rho/3;
	double P_old = cell.getP();

	// updating cell's pressure and its averages with neighbors.
	vertices[enumerator(1)].updateP0(P_old,P_new);
	vertices[enumerator(2)].updateP1(P_old,P_new);
	vertices[enumerator(3)].updateP0(P_old,P_new);
	vertices[enumerator(3)].updateP1(P_old,P_new);
	//	std::cout << "p = " << _p << std::endl;
	//	std::cout << "P_new = " << P_new << std::endl;
	cell.setP(P_new);

	double U_new, V_new;
	double U_old = cell.getU();
	double V_old = cell.getV();

	if(LB_BLOCKSIZE%2 == 0) {
		U_new = _dxbydt*(_u[0]+_u[1]+_u[2]+_u[3])/4;
		V_new = _dxbydt*(_v[0]+_v[1]+_v[2]+_v[3])/4;
	} else {
		U_new = _dxbydt*(_u[0]+_u[1])/2;
		V_new = _dxbydt*(_v[0]+_v[1])/2;
	}

	//	std::cout << "u = " << _u << std::endl;
	//	std::cout << "U_new = " << U_new << std::endl;
	//	std::cout << "V = " << _v << std::endl;
	//	std::cout << "V_new = " << V_new << std::endl;

	// updating cell's horizontal velocity and its averages with neighbors.
	vertices[enumerator(0)].updateU0(U_old,U_new);
	vertices[enumerator(1)].updateU1(U_old,U_new);
	vertices[enumerator(1)].updateU0(U_old,U_new);
	vertices[enumerator(2)].updateU2(U_old,U_new);
	vertices[enumerator(3)].updateU2(U_old,U_new);
	vertices[enumerator(2)].updateU0(U_old,U_new);
	vertices[enumerator(3)].updateU1(U_old,U_new);
	vertices[enumerator(3)].updateU0(U_old,U_new);
	cell.setU(U_new);

	// updating cell's vertical velocity and its averages with neighbors.
	vertices[enumerator(0)].updateV0(V_old,V_new);
	vertices[enumerator(1)].updateV1(V_old,V_new);
	vertices[enumerator(1)].updateV0(V_old,V_new);
	vertices[enumerator(2)].updateV2(V_old,V_new);
	vertices[enumerator(3)].updateV2(V_old,V_new);
	vertices[enumerator(2)].updateV0(V_old,V_new);
	vertices[enumerator(3)].updateV1(V_old,V_new);
	vertices[enumerator(3)].updateV0(V_old,V_new);
	cell.setV(V_new);

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	//	std::cout << "touch first, vertex number: "<< vertex.getVertexNumber() << std::endl;
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	// getting the transformation coefficient
	_dxbydt = solverState.getDx()/solverState.getDt();

	// getting density of the fluid
	_rho = solverState.getDensity();

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromLB2NSE::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	logTraceOutWith1Argument( "endIteration()", solverState );
}

