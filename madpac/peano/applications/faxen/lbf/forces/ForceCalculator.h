/*
 * ForceCalculator.h
 *
 *  Created on: May 29, 2011
 *      Author: denis
 */

#ifndef FORCECALCULATOR_H_
#define FORCECALCULATOR_H_

#include "peano/applications/faxen/lbf/services/ParticlesProxy.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace forces {

class ForceCalculator {
protected:
	bool _usePressureData;
public:
	ForceCalculator();
	virtual ~ForceCalculator();

	/**
	 * resize all vector to the number of info points
	 */
	virtual void initParticlesProxy(services::ParticlesProxy& particle) = 0;

	/**
	 * specify the position of the particles where interpolated values
	 * are computed
	 */
	virtual void fillInfoPoints(services::ParticlesProxy& particle) = 0;

	/**
	 * compute forces for the particle
	 */
	virtual tarch::la::Vector<DIMENSIONS,double> computeForces(
			services::ParticlesProxy& particle,
			tarch::la::Vector<DIMENSIONS,double>& particlesVelocity) = 0;

	bool usePressureData(){
		return _usePressureData;
	}
};

}

}

}

}

}

#endif /* FORCECALCULATOR_H_ */
