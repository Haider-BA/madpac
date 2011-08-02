/*
 * LBDataTraceService.cpp
 *
 *  Created on: Jul 14, 2011
 *      Author: denis
 */
#include <cmath>
#include <iostream>

#include "LBDataTraceService.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/GridManagementService.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/UserInput.h"

#include "peano/applications/faxen/lbf/interpolation/Interpolation.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace services {

LBDataTraceService::LBDataTraceService() {
	// TODO Auto-generated constructor stub

}

LBDataTraceService::~LBDataTraceService() {
	// TODO Auto-generated destructor stub
}

LBDataTraceService& LBDataTraceService::getInstance(){
	static LBDataTraceService singleton;
	return singleton;
}

void LBDataTraceService::init(
		const double xLength, const double yLength,
		const double xOffset, const double yOffset,
		const double dx, const double dy,
		const double dt, const double rho){
	DataTraceService::init(xLength,yLength,xOffset,yOffset,dx,dy);
	_dx /= LB_BLOCKSIZE;
	_dy /= LB_BLOCKSIZE;
	_imax = ceil(xLength/_dx)+LB_BLOCKSIZE;
	_jmax = ceil(yLength/_dy)+LB_BLOCKSIZE;
	_indXOffset = _indYOffset = LB_BLOCKSIZE/2;
	_dxbydt = _dx/dt;
	_rho = rho;
}

void LBDataTraceService::traceRegularGrid(const tarch::la::Vector<DIMENSIONS,double>& referencePosition){
	if(_isInitialized) {
		// compute index of block's center
		int	indX = floor((referencePosition[0]-_xOffset)/_dx+0.5)+_indXOffset;
		int	indY = floor((referencePosition[1]-_yOffset)/_dy+0.5)+_indYOffset;
//		std::cout << "reference position: " << referencePosition << std::endl;
//		std::cout << "indX & indY: " << indX << ", " << indY  << std::endl;
		traceUV(indX,indY);
		traceP(indX,indY);
	}
}

void LBDataTraceService::traceP(int indX, int indY){
	if(_traceP){
		// read block of densities
		tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density(
				peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
		for(int i=0; i<LB_BLOCKSIZE; i++){
			for(int j=0; j<LB_BLOCKSIZE; j++){
				_p[indX+j][indY+i]=density[i*LB_BLOCKSIZE+j]*_dxbydt*_dxbydt*_rho/3;
			}
		}
	}
}

void LBDataTraceService::traceUV(int indX, int indY){
	// read block of velocities
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>& velocity(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
	if(_traceU){
		for(int i=0; i<LB_BLOCKSIZE; i++){
			for(int j=0; j<LB_BLOCKSIZE; j++){
				_u[indX+j][indY+i]=velocity[2*(i*LB_BLOCKSIZE+j)]*_dxbydt;
//				std::cout << "(" << indX+i << ";" << indY+j << "):" << _u[indX+i][indY+j] << " ";
			}
//			std::cout << std::endl;
		}
	}
	if(_traceV){
		for(int i=0; i<LB_BLOCKSIZE; i++){
			for(int j=0; j<LB_BLOCKSIZE; j++){
				_v[indX+j][indY+i]=velocity[2*(i*LB_BLOCKSIZE+j)+1]*_dxbydt;
			}
		}
	}
}

double LBDataTraceService::getUinPoint(double x, double y){
	return getANYinPoint(_u,x,y);
}

double LBDataTraceService::getVinPoint(double x, double y){
	return getANYinPoint(_v,x,y);
}

double LBDataTraceService::getPinPoint(double x, double y){
	return getANYinPoint(_p,x,y);
}

double LBDataTraceService::getANYinPoint(double **any, double x, double y){
	int indX = floor((x-_xOffset)/_dx-0.5)+_indXOffset;
	int indY = floor((y-_yOffset)/_dy-0.5)+_indYOffset;
	tarch::la::Vector<DIMENSIONS,double> relativePoint;
	tarch::la::Vector<TWO_POWER_D,double> values;
	relativePoint[0] = fmod(x-0.5*_dx-_xOffset,_dx)/_dx;
	relativePoint[1] = fmod(y-0.5*_dy-_yOffset,_dy)/_dy;
//	std::cout << "(x;y) <-> " << "(" << x << ";" << y << ") => ";
//	std::cout << "(i;j) <-> " << "(" << indX << ";" << indY << ") => ";
//	std::cout << "(s;r) <-> " << "(" << relativePoint[0] << ";" << relativePoint[1] << ") => ";
	if((indX>=0) && (indY>=0) && (indX<(_imax-1)) && (indY<(_jmax-1))){
		values[0] = any[indX][indY];
		values[1] = any[indX+1][indY];
		values[2] = any[indX][indY+1];
		values[3] = any[indX+1][indY+1];
		return peano::applications::faxen::lbf::interpolation::interpolateDLinear(relativePoint,values);
	} else {
		return 0.0;
	}
}

}

}

}

}

}
