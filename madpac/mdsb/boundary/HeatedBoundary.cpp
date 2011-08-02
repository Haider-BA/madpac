/*
 * HeatedBoundary.cpp
 *
 * @Date: 26.11.2010
 * @Author: eckhardw
 */

#include "HeatedBoundary.h"

HeatedBoundary::HeatedBoundary(ParticleContainer& container, Boundary::axis_type axis, bool up)
: ReflectingBoundary(container, axis, up) {
}

HeatedBoundary::~HeatedBoundary() {
}

void HeatedBoundary::handleParticle(Particle& p) {
	checkHalo();
	if (shouldReflectParticle(p)) {
		applyReflection(p);
		// the particle moves down into the domain
		if (_up && p.getV()[_axis] < 0) {
			p.getV()[_axis] = p.getV()[_axis] * 1.05;
		} else if (!_up && p.getV()[_axis] > 0) {
			p.getV()[_axis] = p.getV()[_axis] * 1.05;
		}
	}
}
