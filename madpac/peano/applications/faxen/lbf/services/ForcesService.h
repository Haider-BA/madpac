/*
 * ForcesService.h
 *
 *  Created on: May 29, 2011
 */

#ifndef FORCESSERVICE_H_
#define FORCESSERVICE_H_

#include "tarch/logging/Log.h"
#include "tarch/logging/configurations/LogFilterConfiguration.h"
#include "tarch/logging/configurations/LogOutputFormatConfiguration.h"

#include "peano/applications/faxen/lbf/RegularGridBlockCell.h"
#include "peano/applications/faxen/lbf/RegularGridBlockVertex.h"
#include "peano/applications/faxen/lbf/RegularGridBlockState.h"

#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"
#include <vector>

#include "peano/applications/faxen/lbf/services/ParticlesProxy.h"
#include "peano/applications/faxen/lbf/forces/ForceCalculator.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace services {

class ForcesService {
public:
	static ForcesService& getInstance();

	void loadDataFromParticlesService();

	/**
	 * Setting of force calculator -
	 * different strategies for computing forces
	 * can be applied;
	 * @param forceCalculator concrete implementation of
	 *                        Force Calculator;
	 */
	void setForceCalculator(forces::ForceCalculator* forceCalculator);

	/**
	 * Update positions of particles ->
	 * update information points.
	 */
	void update();

	/**
	 * Compute forces and move
	 * all not fixed particles
	 * @param dt time step size
	 */
	void moveParticles(double dt);

	/**
	 * If any of info points is inside the cell
	 * compute interpolated values for pressures
	 * and velocities in these points.
	 */
	void checkCell(
			peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
			peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
			tarch::la::Vector<DIMENSIONS,double>& zeroPoint,
			tarch::la::Vector<DIMENSIONS,double>& cellSize);

	tarch::la::Vector<DIMENSIONS,double> getRelativeCoordinatesPressure(
			int zone, tarch::la::Vector<DIMENSIONS,double>& infoPoint,
			tarch::la::Vector<DIMENSIONS,double>& zeroPoint,
			tarch::la::Vector<DIMENSIONS,double>& cellSize);

	tarch::la::Vector<DIMENSIONS,double> getBarycentricCoordinatesPressure(
			int zone, tarch::la::Vector<DIMENSIONS,double>& infoPoint,
			tarch::la::Vector<DIMENSIONS,double>& zeroPoint,
			tarch::la::Vector<DIMENSIONS,double>& cellSize);

	tarch::la::Vector<DIMENSIONS,double> getRelativeCoordinatesU(
			int zone, tarch::la::Vector<DIMENSIONS,double>& infoPoint,
			tarch::la::Vector<DIMENSIONS,double>& zeroPoint,
			tarch::la::Vector<DIMENSIONS,double>& cellSize);

	tarch::la::Vector<DIMENSIONS,double> getRelativeCoordinatesV(
			int zone, tarch::la::Vector<DIMENSIONS,double>& infoPoint,
			tarch::la::Vector<DIMENSIONS,double>& zeroPoint,
			tarch::la::Vector<DIMENSIONS,double>& cellSize);

	double interpolatePressure(
			int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
			peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
			peano::applications::faxen::lbf::RegularGridBlockCell& cell);

	double interpolateBarycentricPressure(
			int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
			peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
			peano::applications::faxen::lbf::RegularGridBlockCell& cell);

	double interpolateU(
			int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
			peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
			peano::applications::faxen::lbf::RegularGridBlockCell& cell);

	double interpolateV(
			int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
			peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
			peano::applications::faxen::lbf::RegularGridBlockCell& cell);

private:
	ForcesService();
	virtual ~ForcesService();

	/**
	 * Force Calculator - abstract class
	 * used to choose different force computing algorithms;
	 * (Strategy pattern is used for this purpose).
	 */
	forces::ForceCalculator* _forceCalculator;

	/** attribute for keeping points for interpolation*/
	std::vector<ParticlesProxy> _particles;

	tarch::logging::Log _log;
};

}

}

}

}

}

#endif /* FORCESSERVICE_H_ */
