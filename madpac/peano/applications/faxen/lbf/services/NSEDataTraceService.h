/*
 * NSEDataTraceService.h
 *
 *  Created on: Jul 14, 2011
 *      Author: denis
 */

#ifndef NSEDATATRACESERVICE_H_
#define NSEDATATRACESERVICE_H_

#include "DataTraceService.h"

#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"
#include "peano/applications/faxen/lbf/services/ForcesService.h"

#include "peano/applications/faxen/lbf/RegularGridBlockCell.h"
#include "peano/applications/faxen/lbf/RegularGridBlockVertex.h"
#include "peano/applications/faxen/lbf/RegularGridBlockState.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace services {

class NSEDataTraceService: public peano::applications::faxen::lbf::services::DataTraceService {
public:

	static NSEDataTraceService& getInstance();

	/**
	 * trace NSE grid data
	 */
	void traceRegurlarGrid(
			peano::applications::faxen::lbf::RegularGridBlockVertex**  vertices,
			peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
			const tarch::la::Vector<DIMENSIONS,double>&  centerPoint);

	/**
	 * trace u values on the regular grid
	 */
	void traceU(
			int indX, int indY,
			peano::applications::faxen::lbf::RegularGridBlockCell& cell);

	/**
	 * trace V values on the regular grid
	 */
	void traceV(
			int indX, int indY,
			peano::applications::faxen::lbf::RegularGridBlockCell& cell);

	/**
	 * trace rhs values on the regular grid
	 */
	void traceRHS(
			int indX, int indY,
			peano::applications::faxen::lbf::RegularGridBlockCell& cell);

	/**
	 * trace p values on the regular grid
	 */
	void traceP(
			int indX, int indY,
			peano::applications::faxen::lbf::RegularGridBlockCell& cell);

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
	NSEDataTraceService();
	virtual ~NSEDataTraceService();
};

}

}

}

}

}

#endif /* NSEDATATRACESERVICE_H_ */
