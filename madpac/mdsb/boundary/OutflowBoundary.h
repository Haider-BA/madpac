/*
 * OutflowBoundary.h
 *
 * @Date: 24.11.2010
 * @Author: eckhardw
 */

#ifndef OUTFLOWBOUNDARY_H_
#define OUTFLOWBOUNDARY_H_

#include "boundary/Boundary.h"

class OutflowBoundary :public Boundary {

public:

	OutflowBoundary(ParticleContainer& container, Boundary::axis_type axis, bool up);

	virtual ~OutflowBoundary();

	virtual void applyBoundary();

	virtual void handleParticle(Particle& p);

};

#endif /* OUTFLOWBOUNDARY_H_ */
