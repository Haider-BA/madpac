/*
 * DataTraceService.h
 *
 *  Created on: Jul 11, 2011
 *      Author: denis
 */

#ifndef DATATRACESERVICE_H_
#define DATATRACESERVICE_H_

#include <iostream>
#include <string>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace services {

class DataTraceService {
public:
	/**
	 * save matrix into file
	 */
	static void writeMatrix2file(int imax, int jmax, double** const m, std::string filename);

	/**
	 * save row of matrix into file
	 */
	static void writeMatrixRow2file(int imax, int jmax, int row, double** const m, std::string filename);

	/**
	 * save values on line into file
	 */
	static void writeValuesOnLine2file(
			double xStart, double yStart,
			double xEnd, double yEnd,
			int numberOfPoints,
			double* const values,
			std::string filename);

	/**
	 * initialization of trace service
	 */
	void init(
			const double xLength, const double yLength,
			const double xOffset, const double yOffset,
			const double dx, const double dy);

	/**
	 * capture u(horizontal velocity) on line
	 */
	double* traceUOnLine(
			double xStart, double yStart,
			double xEnd, double yEnd,
			int numberOfPoints);

	/**
	 * capture v(vertical velocity) on line
	 */
	double* traceVOnLine(
			double xStart, double yStart,
			double xEnd, double yEnd,
			int numberOfPoints);

	/**
	 * capture pressure on line
	 */
	double* tracePOnLine(
			double xStart, double yStart,
			double xEnd, double yEnd,
			int numberOfPoints);

	/**
	 * get u(horizontal velocity) value in the point
	 */
	virtual double getUinPoint(double x, double y) = 0;

	/**
	 * get v(vertical velocity) value in the point
	 */
	virtual double getVinPoint(double x, double y) = 0;

	/**
	 * get pressure value in the point
	 */
	virtual double getPinPoint(double x, double y) = 0;

	/**
	 * initialization, switching on and off tracing of u-velocity, save U values into file
	 */
	void initUTracing();
	void switchonUTracing(){ if(_isInitialized) _traceU = true; }
	void switchoffUTracing() { _traceU = false; }
	void writeU2file(std::string filename);
	void writeURow2file(int row, std::string filename);

	/**
	 * initializaton, switching on and off tracing of v-velocity, save V values into file
	 */
	void initVTracing();
	void switchonVTracing(){ if(_isInitialized) _traceV = true; }
	void switchoffVTracing(){ _traceV = false; };
	void writeV2file(std::string filename);

	/**
	 * initialization, switching on and off tracing of rhs, save rhs values into file
	 */
	void initRHSTracing();
	void switchonRHSTracing(){ if(_isInitialized) _traceRHS = true; }
	void switchoffRHSTracing(){ _traceRHS = false; };
	void writeRHS2file(std::string filename);

	/**
	 * switching on and off tracing of p-pressure, save p values into file
	 */
	void initPTracing();
	void switchonPTracing(){ if(_isInitialized) _traceP = true; }
	void switchoffPTracing(){ _traceP = false; };
	void writeP2file(std::string filename);

protected:
	DataTraceService();
	virtual ~DataTraceService();

	/**
	 * velocities
	 */
	double **_u, **_v;

	/**
	 * right hand side of pressure equation
	 */
	double **_rhs;

	/**
	 * pressure
	 */
	double **_p;

	/**
	 * mesh sizes
	 */
	double _dx, _dy;

	/**
	 * domain sizes
	 */
	double _xLength, _yLength;

	/**
	 * domain offset
	 */
	double _xOffset, _yOffset;

	/**
	 * resolution
	 */
	int _imax, _jmax;

	/**
	 *  initialization flags
	 */
	bool _isInitialized, _isUInitialized, _isVInitialized, _isRHSInitialized, _isPInitialized;

	/**
	 * tracing flags
	 */
	bool _traceU, _traceV, _traceRHS, _traceP;
};

}

}

}

}

}

#endif /* DATATRACESERVICE_H_ */
