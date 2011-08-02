/*
 * LegacyForceCalculator.h
 *
 *  Created on: Jun 27, 2011
 *      Author: denis
 */

#ifndef LEGACYFORCECALCULATOR_H_
#define LEGACYFORCECALCULATOR_H_

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

class LegacyForceCalculator: public peano::applications::faxen::lbf::forces::ForceCalculator {
public:
	const static int POINTS = 5;				// number of points for Gaussian quadrature

	LegacyForceCalculator();
	virtual ~LegacyForceCalculator();

	void initParticlesProxy(services::ParticlesProxy& particle);
	void fillInfoPoints(services::ParticlesProxy& particle);
	tarch::la::Vector<DIMENSIONS,double> computeForces(
			services::ParticlesProxy& particle,
			tarch::la::Vector<DIMENSIONS,double>& particlesVelocity);
	double* getLaplacian(services::ParticlesProxy& particle);

private:
	quadrature::GaussianQuadrature* _integrator;
};

}

}

}

}

}

#endif /* LEGACYFORCECALCULATOR_H_ */
