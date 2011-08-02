/*
 * HeatedBoundary.h
 *
 * @Date: 26.11.2010
 * @Author: eckhardw
 */

#ifndef HEATEDBOUNDARY_H_
#define HEATEDBOUNDARY_H_

#include "ReflectingBoundary.h"

class HeatedBoundary: public ReflectingBoundary {

public:

	HeatedBoundary(ParticleContainer& container, Boundary::axis_type axis, bool up);

	virtual ~HeatedBoundary();

	virtual void handleParticle(Particle& p);
};

#endif /* HEATEDBOUNDARY_H_ */
