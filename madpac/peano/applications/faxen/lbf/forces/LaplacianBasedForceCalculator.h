/*
 * LaplacianBasedForceCalculator.h
 *
 *  Created on: Jun 27, 2011
 *      Author: denis
 */

#ifndef LAPLACIANBASEDFORCECALCULATOR_H_
#define LAPLACIANBASEDFORCECALCULATOR_H_

#include "peano/applications/faxen/lbf/forces/ForceCalculator.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace forces {

class LaplacianBasedForceCalculator: public peano::applications::faxen::lbf::forces::ForceCalculator {
public:
	LaplacianBasedForceCalculator();
	virtual ~LaplacianBasedForceCalculator();

	void initParticlesProxy(services::ParticlesProxy& particle);
	void fillInfoPoints(services::ParticlesProxy& particle);
	tarch::la::Vector<DIMENSIONS,double> computeForces(
			services::ParticlesProxy& particle,
			tarch::la::Vector<DIMENSIONS,double>& particlesVelocity);
	double* getLaplacian(services::ParticlesProxy& particle);
};

}

}

}

}

}

#endif /* LAPLACIANBASEDFORCECALCULATOR_H_ */
