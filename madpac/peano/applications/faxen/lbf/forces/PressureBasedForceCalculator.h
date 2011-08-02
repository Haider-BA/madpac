/*
 * PressureBasedForceCalculator.h
 *
 *  Created on: Jun 27, 2011
 *      Author: denis
 */

#ifndef PRESSUREBASEDFORCECALCULATOR_H_
#define PRESSUREBASEDFORCECALCULATOR_H_

#include "peano/applications/faxen/lbf/forces/ForceCalculator.h"
#include "peano/applications/faxen/lbf/quadrature/GaussianQuadrature.h"
#include "peano/applications/faxen/lbf/services/ForcesService.h"
#include "peano/applications/faxen/lbf/services/ParticlesProxy.h"
#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace forces {

class PressureBasedForceCalculator: public peano::applications::faxen::lbf::forces::ForceCalculator {
public:
	const static int POINTS = 5;				// number of points for Gaussian quadrature

	PressureBasedForceCalculator();
	virtual ~PressureBasedForceCalculator();

	void initParticlesProxy(services::ParticlesProxy& particle);
	void fillInfoPoints(services::ParticlesProxy& particle);
	tarch::la::Vector<DIMENSIONS,double> computeForces(
			services::ParticlesProxy& particle,
			tarch::la::Vector<DIMENSIONS,double>& particlesVelocity);

private:
	quadrature::GaussianQuadrature* _integrator;
};

}

}

}

}

}

#endif /* PRESSUREBASEDFORCECALCULATOR_H_ */
