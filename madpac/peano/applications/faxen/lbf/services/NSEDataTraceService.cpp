/*
 * NSEDataTraceService.cpp
 *
 *  Created on: Jul 14, 2011
 *      Author: denis
 */

#include "NSEDataTraceService.h"
#include "peano/applications/faxen/lbf/interpolation/Interpolation.h"
#include <cmath>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace services {

NSEDataTraceService& NSEDataTraceService::getInstance(){
	static NSEDataTraceService singleton;
	return singleton;
}

NSEDataTraceService::NSEDataTraceService() {
	// TODO Auto-generated constructor stub
}

NSEDataTraceService::~NSEDataTraceService() {
	// TODO Auto-generated destructor stub
}

void NSEDataTraceService::traceRegurlarGrid(
		peano::applications::faxen::lbf::RegularGridBlockVertex**  vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const tarch::la::Vector<DIMENSIONS,double>&  centerPoint){
	if(_isInitialized) {
		int indX = floor((centerPoint[0]-_xOffset)/_dx);
		int indY = floor((centerPoint[1]-_yOffset)/_dy);
//		std::cout << "cell center point: " << centerPoint << std::endl;
//		std::cout << "indX & indY: " << indX << ", " << indY  << std::endl;
//		std::cout << "is trace u enabled: " << _traceU << std::endl;
//		std::cout << "is trace v enabled: " << _traceV << std::endl;
//		std::cout << "is trace p enabled: " << _traceP << std::endl;
		traceU(indX,indY,cell);
		traceV(indX,indY,cell);
		traceRHS(indX,indY,cell);
		traceP(indX,indY,cell);
	}
}

void NSEDataTraceService::traceU(
		int indX, int indY,
		peano::applications::faxen::lbf::RegularGridBlockCell& cell
){
	if(_traceU){
		_u[indX][indY] = cell.getU();
//		std::cout << "(" << indX << ";" << indY << "):" << _u[indX][indY] << std::endl;
	}
}

void NSEDataTraceService::traceV(
		int indX, int indY,
		peano::applications::faxen::lbf::RegularGridBlockCell& cell){
	if(_traceV){
		_v[indX][indY] = cell.getV();
	}
}

void NSEDataTraceService::traceRHS(
		int indX, int indY,
		peano::applications::faxen::lbf::RegularGridBlockCell& cell){
	if(_traceRHS){
		_rhs[indX][indY] = cell.getRhs();
	}
}

void NSEDataTraceService::traceP(
		int indX, int indY,
		peano::applications::faxen::lbf::RegularGridBlockCell& cell){
	if(_traceP){
		_p[indX][indY] = cell.getP();
	}
}

double NSEDataTraceService::getUinPoint(double x, double y){
	int indX = floor((x-_xOffset)/_dx)+1;
	int indY = floor((y-_yOffset)/_dy+0.5)+1;
	tarch::la::Vector<DIMENSIONS,double> relativePoint;
	tarch::la::Vector<TWO_POWER_D,double> values;
	relativePoint[0] = fmod(x-_xOffset,_dx)/_dx;
	relativePoint[1] = fmod(y-0.5*_dy-_yOffset,_dy)/_dy;
	if((indX>0) && (indY>0) && (indX<=(_imax-1)) && (indY<=(_jmax-1))){
		values[0] = _u[indX-1][indY-1];
		values[1] = _u[indX][indY-1];
		values[2] = _u[indX-1][indY];
		values[3] = _u[indX][indY];
		return peano::applications::faxen::lbf::interpolation::interpolateDLinear(relativePoint,values);
	} else {
		return 0.0;
	}
}

double NSEDataTraceService::getVinPoint(double x, double y){
	int indX = floor((x-_xOffset)/_dx+0.5);
	int indY = floor((y-_yOffset)/_dy);
	tarch::la::Vector<DIMENSIONS,double> relativePoint;
	tarch::la::Vector<TWO_POWER_D,double> values;
	relativePoint[0] = fmod(x+0.5*_dx-_xOffset,_dx)/_dx;
	relativePoint[1] = fmod(y-_yOffset,_dy)/_dy;
	if((indX>=0) && (indY>=0) && (indX<(_imax-1)) && (indY<(_jmax-1))){
		values[0] = _v[indX][indY];
		values[1] = _v[indX+1][indY];
		values[2] = _v[indX][indY+1];
		values[3] = _v[indX+1][indY+1];
		return peano::applications::faxen::lbf::interpolation::interpolateDLinear(relativePoint,values);
	} else {
		return 0.0;
	}
}

double NSEDataTraceService::getPinPoint(double x, double y){
	int indX = floor((x-_xOffset)/_dx-0.5);
	int indY = floor((y-_yOffset)/_dy-0.5);
	tarch::la::Vector<DIMENSIONS,double> relativePoint;
	tarch::la::Vector<TWO_POWER_D,double> values;
	relativePoint[0] = fmod(x-0.5*_dx-_xOffset,_dx)/_dx;
	relativePoint[1] = fmod(y-0.5*_dy-_yOffset,_dy)/_dy;
	if((indX>=0) && (indY>=0) && (indX<(_imax-1)) && (indY<(_jmax-1))){
		values[0] = _p[indX][indY];
		values[1] = _p[indX+1][indY];
		values[2] = _p[indX][indY+1];
		values[3] = _p[indX+1][indY+1];
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
