#include "peano/applications/faxen/lbf/mappings/RegularGrid2SwitchFromLB2NSE.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/GridManagementService.h"
#include "peano/applications/faxen/lbf/services/ParticlesService.h"
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

	/*
	 * positions of LB cells that are used for velocities interpolation
	 * for NSE grid
	 */
	tarch::la::Vector<DIMENSIONS,double> positionU0;
	tarch::la::Vector<DIMENSIONS,double> positionU1;
	tarch::la::Vector<DIMENSIONS,double> positionU2;
	tarch::la::Vector<DIMENSIONS,double> positionU3;

	tarch::la::Vector<DIMENSIONS,double> positionV0;
	tarch::la::Vector<DIMENSIONS,double> positionV1;
	tarch::la::Vector<DIMENSIONS,double> positionV2;
	tarch::la::Vector<DIMENSIONS,double> positionV3;

	// cellSize
	tarch::la::Vector<DIMENSIONS,double> cellSize = enumerator.getCellSize();

	// cellCenter
	tarch::la::Vector<DIMENSIONS,double> cellCenter = enumerator.getCellCenter();

	// particles index
	int index;

	if(LB_BLOCKSIZE%2 == 0) {
		positionU0[0] = cellCenter[0] + cellSize[0]/2 - _dx/2;
		positionU0[1] = cellCenter[1] - _dx/2;

		positionU1[0] = cellCenter[0] + cellSize[0]/2 + _dx/2;
		positionU1[1] = cellCenter[1] - _dx/2;

		positionU2[0] = cellCenter[0] + cellSize[0]/2 - _dx/2;
		positionU2[1] = cellCenter[1] + _dx/2;

		positionU3[0] = cellCenter[0] + cellSize[0]/2 + _dx/2;
		positionU3[1] = cellCenter[1] + _dx/2;

		positionV0[0] = cellCenter[0] - _dx/2;
		positionV0[1] = cellCenter[1] + cellSize[1]/2 - _dx/2;

		positionV1[0] = cellCenter[0] + _dx/2;
		positionV1[1] = cellCenter[1] + cellSize[1]/2 - _dx/2;

		positionV2[0] = cellCenter[0] - _dx/2;
		positionV2[1] = cellCenter[1] + cellSize[1]/2 + _dx/2;

		positionV3[0] = cellCenter[0] +_dx/2;
		positionV3[1] = cellCenter[1] + cellSize[1]/2 + _dx/2;
	} else {

		positionU0[0] = cellCenter[0] + cellSize[0]/2;
		positionU0[1] = cellCenter[1] - _dx/2;

		positionU1[0] = cellCenter[0] + cellSize[0]/2;
		positionU1[1] = cellCenter[1] + _dx/2;

		positionV0[0] = cellCenter[0] - _dx/2;
		positionV0[1] = cellCenter[1] + cellSize[1]/2;

		positionV1[0] = cellCenter[0] + _dx/2;
		positionV1[1] = cellCenter[1] + cellSize[1]/2;
	}

	// load bottom left vertex
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertices[enumerator(0)].getVertexNumber());
	std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner0(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density0(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
	_p[0] = inner0[LB_BLOCK_NUMBER_OF_CELLS-1] ? density0[LB_BLOCK_NUMBER_OF_CELLS-1] : 0.0;

	// load bottom right vertex
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertices[enumerator(1)].getVertexNumber());
	std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner1(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density1(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
	_p[1] = inner1[LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE] ? density1[LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE] : 0.0;


	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>& velocity1(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
	if(LB_BLOCKSIZE%2 == 0) {

		if( (index=peano::applications::faxen::lbf::services::ParticlesService::getInstance().belongs2Particle(positionU0)) != -1 ){
			_u[0] = peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesVelocity(index)[0]/_dxbydt;
		} else {
			_u[0] = inner1[(2*LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE-2)/2] ? velocity1[2*LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE-2] : 0.0;
		}

		if( (index=peano::applications::faxen::lbf::services::ParticlesService::getInstance().belongs2Particle(positionU1)) != -1 ){
			_u[1] = peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesVelocity(index)[0]/_dxbydt;
		} else {
			_u[1] = inner1[(2*LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE)/2] ? velocity1[2*LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE] : 0.0;
		}

	} else {
		if( (index=peano::applications::faxen::lbf::services::ParticlesService::getInstance().belongs2Particle(positionU0)) != -1 ){
			_u[0] = peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesVelocity(index)[0]/_dxbydt;
		} else {
			_u[0] = inner1[(2*LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE)/2] ? velocity1[2*LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE] : 0.0;
		}
	}

	// load top left vertex
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertices[enumerator(2)].getVertexNumber());
	std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner2(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density2(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
	_p[2] = inner2[LB_BLOCKSIZE-1] ? density2[LB_BLOCKSIZE-1] : 0.0;

	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>& velocity2(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
	if(LB_BLOCKSIZE%2 == 0) {
		if( (index=peano::applications::faxen::lbf::services::ParticlesService::getInstance().belongs2Particle(positionV0)) != -1 ){
			_v[0] = peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesVelocity(index)[1]/_dxbydt;
		} else {
			_v[0] = inner2[(LB_BLOCK_NUMBER_OF_CELLS-1)/2] ? velocity2[LB_BLOCK_NUMBER_OF_CELLS-1] : 0.0;
		}

		if( (index=peano::applications::faxen::lbf::services::ParticlesService::getInstance().belongs2Particle(positionV2)) != -1 ){
			_v[2] = peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesVelocity(index)[1]/_dxbydt;
		} else {
			_v[2] = inner2[(LB_BLOCK_NUMBER_OF_CELLS+2*LB_BLOCKSIZE-1)/2] ? velocity2[LB_BLOCK_NUMBER_OF_CELLS+2*LB_BLOCKSIZE-1] : 0.0;
		}

	} else {
		if( (index=peano::applications::faxen::lbf::services::ParticlesService::getInstance().belongs2Particle(positionV0)) != -1 ){
			_v[0] = peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesVelocity(index)[1]/_dxbydt;
		} else {
			_v[0] = inner2[(LB_BLOCK_NUMBER_OF_CELLS+LB_BLOCKSIZE-1)/2] ? velocity2[LB_BLOCK_NUMBER_OF_CELLS+LB_BLOCKSIZE-1] : 0.0;
		}
	}

	// load top right vertex
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertices[enumerator(3)].getVertexNumber());
	std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner3(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density3(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
	_p[3] = inner3[0] ? density3[0] : 0.0;

	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>& velocity3(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
	if(LB_BLOCKSIZE%2 == 0) {
		if( (index=peano::applications::faxen::lbf::services::ParticlesService::getInstance().belongs2Particle(positionU2)) != -1 ){
			_u[2] = peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesVelocity(index)[0]/_dxbydt;
		} else {
			_u[2] = inner3[(LB_BLOCKSIZE-2)/2] ? velocity3[LB_BLOCKSIZE-2] : 0.0;
		}

		if( (index=peano::applications::faxen::lbf::services::ParticlesService::getInstance().belongs2Particle(positionU3)) != -1 ){
			_u[3] = peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesVelocity(index)[0]/_dxbydt;
		} else {
			_u[3] = inner3[LB_BLOCKSIZE/2] ? velocity3[LB_BLOCKSIZE] : 0.0;
		}

		if( (index=peano::applications::faxen::lbf::services::ParticlesService::getInstance().belongs2Particle(positionV1)) != -1 ){
			_v[1] = peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesVelocity(index)[1]/_dxbydt;
		} else {
			_v[1] = inner3[(LB_BLOCK_NUMBER_OF_CELLS-2*LB_BLOCKSIZE+1)/2] ? velocity3[LB_BLOCK_NUMBER_OF_CELLS-2*LB_BLOCKSIZE+1] : 0.0;
		}

		if( (index=peano::applications::faxen::lbf::services::ParticlesService::getInstance().belongs2Particle(positionV3)) != -1 ){
			_v[3] = peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesVelocity(index)[1]/_dxbydt;
		} else {
			_v[3] = inner3[(LB_BLOCK_NUMBER_OF_CELLS+1)/2] ? velocity3[LB_BLOCK_NUMBER_OF_CELLS+1] : 0.0;
		}

	} else {
		if( (index=peano::applications::faxen::lbf::services::ParticlesService::getInstance().belongs2Particle(positionU1)) != -1 ){
			_u[1] = peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesVelocity(index)[0]/_dxbydt;
		} else {
			_u[1] = inner3[(LB_BLOCKSIZE-1)/2] ? velocity3[LB_BLOCKSIZE-1] : 0.0;
		}

		if( (index=peano::applications::faxen::lbf::services::ParticlesService::getInstance().belongs2Particle(positionV1)) != -1 ){
			_v[1] = peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesVelocity(index)[1]/_dxbydt;
		} else {
			_v[1] = inner3[(LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE+1)/2] ? velocity3[LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCKSIZE+1] : 0.0;
		}
	}

	double P_new = ((_p[0]+_p[1]+_p[2]+_p[3])/4)*_dxbydt*_dxbydt*_rho/3;
	double P_old = cell.getP();

	// updating cell's pressure and its averages with neighbors.
	vertices[enumerator(1)].updateP0(P_old,P_new);
	vertices[enumerator(2)].updateP1(P_old,P_new);
	vertices[enumerator(3)].updateP0(P_old,P_new);
	vertices[enumerator(3)].updateP1(P_old,P_new);
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

	// getting the size of LB cell edge
	_dx = solverState.getDx();

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

