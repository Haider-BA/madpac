/*
 * DataTraceService.cpp
 *
 *  Created on: Jul 11, 2011
 *      Author: denis
 */
#include <cmath>
#include <iostream>
#include <fstream>

#include "DataTraceService.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace services {

DataTraceService::DataTraceService():
		_isInitialized(false),
		_traceU(false),
		_traceV(false),
		_traceRHS(false),
		_traceP(false)
{
}

DataTraceService::~DataTraceService() {
	if(_traceU)	  delete[] _u;
	if(_traceV)   delete[] _v;
	if(_traceRHS) delete[] _rhs;
	if(_traceP)   delete[] _p;
}

void DataTraceService::init(
		const double xLength, const double yLength,
		const double xOffset, const double yOffset,
		const double dx, const double dy){
	_xLength = xLength;
	_yLength = yLength;
	_xOffset = xOffset;
	_yOffset = yOffset;
	_dx = dx;
	_dy = dy;
	_imax = ceil(xLength/dx);
	_jmax = ceil(yLength/dy);
	_isInitialized = true;
}

void DataTraceService::writeMatrix2file(int imax, int jmax, double** const m, std::string filename){
	std::ofstream file;
	file.open(filename.c_str());
	file << imax << " " << jmax << std::endl;
	for(int i=0; i<imax; i++){
		for(int j=0; j<jmax; j++){
			file << m[i][j] << " ";
		}
		file << std::endl;
	}
	file.close();
}

void DataTraceService::writeMatrixRow2file(int imax, int jmax, int row, double** const m, std::string filename){
	if((row>0) && (row<imax)){
		std::ofstream file;
		file.open(filename.c_str());
		file << "row: " << row << std::endl;
		for(int j=0; j<jmax; j++){
			file << j << " " << m[row][j] << std::endl;
		}
		file.close();
	}
}

void DataTraceService::writeValuesOnLine2file(
		double xStart, double yStart,
		double xEnd, double yEnd,
		int numberOfPoints,
		double* const values,
		std::string filename){
	std::ofstream file;
	file.open(filename.c_str());
	double dx = (xEnd-xStart)/(numberOfPoints-1);
	double dy = (yEnd-yStart)/(numberOfPoints-1);
	double dl = sqrt(dx*dx+dy*dy);
	double l = 0.0;
	for(int i=0; i<numberOfPoints; i++){
		file << l << " " << values[i] << std::endl;
		l += dl;
	}
	file.close();
}

double* DataTraceService::traceUOnLine(
		double xStart, double yStart,
		double xEnd, double yEnd,
		int numberOfPoints){
	double* u = new double[numberOfPoints];
	if(_isUInitialized){
		double dx = (xEnd-xStart)/(numberOfPoints-1);
		double dy = (yEnd-yStart)/(numberOfPoints-1);

		for(int i=0; i<numberOfPoints; i++){
			u[i] = getUinPoint(xStart+dx*i,yStart+dy*i);
		}
	}
	return u;
}

double* DataTraceService::traceVOnLine(
		double xStart, double yStart,
		double xEnd, double yEnd,
		int numberOfPoints){
	double* v = new double[numberOfPoints];
	if(_isUInitialized){
		double dx = (xEnd-xStart)/(numberOfPoints-1);
		double dy = (yEnd-yStart)/(numberOfPoints-1);

		for(int i=0; i<numberOfPoints; i++){
			v[i] = getVinPoint(xStart+dx*i,yStart+dy*i);
		}
	}
	return v;
}

double* DataTraceService::tracePOnLine(
		double xStart, double yStart,
		double xEnd, double yEnd,
		int numberOfPoints){
	double* p = new double[numberOfPoints];
	if(_isUInitialized){
		double dx = (xEnd-xStart)/(numberOfPoints-1);
		double dy = (yEnd-yStart)/(numberOfPoints-1);

		for(int i=0; i<numberOfPoints; i++){
			p[i] = getPinPoint(xStart+dx*i,yStart+dy*i);
		}
	}
	return p;
}

void DataTraceService::initUTracing(){
	if(_isInitialized & !_isUInitialized){
		_u = new double*[_imax];
		for(int i=0; i<_imax; i++){
			_u[i] = new double[_jmax];
		}
		_isUInitialized = true;
	}
}

void DataTraceService::writeU2file(std::string filename){
	if(_isUInitialized)	writeMatrix2file(_imax,_jmax,_u,filename);
}

void DataTraceService::writeURow2file(int row, std::string filename){
	if(_isUInitialized) writeMatrixRow2file(_imax,_jmax,row,_u,filename);
}


void DataTraceService::initVTracing(){
	if(_isInitialized & !_isVInitialized){
		_v = new double*[_imax];
		for(int i=0; i<_imax; i++){
			_v[i] = new double[_jmax];
		}
		_isVInitialized = true;
	}
}

void DataTraceService::writeV2file(std::string filename){
	if(_isVInitialized) writeMatrix2file(_imax,_jmax,_v,filename);
}

void DataTraceService::initRHSTracing(){
	if(_isInitialized & !_isRHSInitialized){
		_rhs = new double*[_imax];
		for(int i=0; i<_imax; i++){
			_rhs[i] = new double[_jmax];
		}
		_isRHSInitialized = true;
	}
}

void DataTraceService::writeRHS2file(std::string filename){
	if(_isRHSInitialized) writeMatrix2file(_imax,_jmax,_rhs,filename);
}

void DataTraceService::initPTracing(){
	if(_isInitialized & !_isPInitialized){
		_p = new double*[_imax];
		for(int i=0; i<_imax; i++){
			_p[i] = new double[_jmax];
		}
		_isPInitialized = true;
	}
}

void DataTraceService::writeP2file(std::string filename){
	if(_isPInitialized) writeMatrix2file(_imax,_jmax,_p,filename);
}

}

}

}

}

}
