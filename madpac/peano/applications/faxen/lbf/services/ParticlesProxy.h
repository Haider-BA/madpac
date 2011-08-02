/*
 * ParticlesProxy.h
 *
 *  Created on: Jun 5, 2011
 *      Author: denis
 */

#ifndef PARTICLESPROXY_H_
#define PARTICLESPROXY_H_

#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"
#include <vector>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace services {

/**
 * Particles proxy structure for keeping radius, position and
 * interpolation points for force computations;
 * @param radius radius of particle;
 * @param isFixed is true when particle is fixed (went out of the domain);
 * @param infoPoints points at which interpolated values for
 *        pressure and velocity are computed, first point in
 *        the vector always refer to the position of the
 *        particle's center;
 * @param velocities vector keeps velocities of fluid in corresponding
 *        infoPoints;
 * @param pressures vector keeps pressures of fluid in corresponding
 *        infoPoints.
 */
struct ParticlesProxy{
	double radius;
	bool isFixed;
	std::vector<tarch::la::Vector<DIMENSIONS,double> > infoPoints;
	std::vector<tarch::la::Vector<DIMENSIONS,double> > velocities;
	std::vector<double> pressures;
};

}

}

}

}

}

#endif /* PARTICLESPROXY_H_ */
