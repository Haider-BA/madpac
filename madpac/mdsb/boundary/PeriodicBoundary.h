/*
 * PeriodicBoundary.h
 *
 * @Date: 25.11.2010
 * @Author: eckhardw
 */

#ifndef PERIODICBOUNDARY_H_
#define PERIODICBOUNDARY_H_

#include "Boundary.h"

class PeriodicBoundary: public Boundary {

public:

	PeriodicBoundary(ParticleContainer& container, Boundary::axis_type axis, bool up);

	virtual ~PeriodicBoundary();

	virtual void applyBoundary();

	virtual void handleParticle(Particle& p);

private:

	/**
	 * We have to do two iterations:
	 * - COPY_HALO: iterate over halo particles and copy them into the opposite boundary layer
	 *   (those particle have left the domain on our boundary and reenter on the other side)
	 * - COPY_BOUNDARY: iterate over the boundary particles in the opposite boundary and copy them into
	 *   the halo layer on this side.
	 */
	enum state { COPY_HALO, COPY_BOUNDARY };

	state _state;
};

#endif /* PERIODICBOUNDARY_H_ */
