/*
 * LBDataTraceService.h
 *
 *  Created on: Jul 14, 2011
 *      Author: denis
 */

#ifndef LBDATATRACESERVICE_H_
#define LBDATATRACESERVICE_H_

#include "DataTraceService.h"
#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace services {

class LBDataTraceService: public peano::applications::faxen::lbf::services::DataTraceService {
public:
	static LBDataTraceService& getInstance();
	/*
	 * save matrix into file
	 */
	static void writeMatrix2file(int imax, int jmax, double** const m, std::string filename);

	/**
	 * initialization of trace service
	 */
	void init(
			const double xLength, const double yLength,
			const double xOffset, const double yOffset,
			const double dx, const double dy,
			const double dt, const double rho);

	/**
	 * trace LB grid data
	 */
	void traceRegularGrid(const tarch::la::Vector<DIMENSIONS,double>&  referencePoint);

	/**
	 * trace velocities
	 */
	void traceUV(int indX, int indY);

	/**
	 * trace p values on the regular grid
	 */
	void traceP(int indX, int indY);

	/**
	 * get u(horizontal velocity) value in the point
	 */
	double getUinPoint(double x, double y);

	/**
	 * get v(vertical velocity) value in the point
	 */
	double getVinPoint(double x, double y);

	/**
	 * get pressure value in the point
	 */
	double getPinPoint(double x, double y);

private:
	LBDataTraceService();
	virtual ~LBDataTraceService();

	/**
	 * interpolate any value in the point (x,y)
	 * all values are saved in the center of cell
	 */
	double getANYinPoint(double **any, double x, double y);

	/**
	 * dx by dt
	 */
	double _dxbydt;

	/**
	 * fluid density
	 */
	double _rho;

	/**
	 * offsets for indices
	 */
	int _indXOffset, _indYOffset;
};

}

}

}

}

}

#endif /* LBDATATRACESERVICE_H_ */
