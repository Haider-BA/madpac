/*
 * OutflowBoundary.cpp
 *
 * @Date: 24.11.2010
 * @Author: eckhardw
 */

#include "OutflowBoundary.h"
#include "particleContainer/ParticleContainer.h"
#include "utils/Assertion.h"

OutflowBoundary::OutflowBoundary(ParticleContainer& container, Boundary::axis_type axis, bool up)
: Boundary(container, axis, up) {

}

OutflowBoundary::~OutflowBoundary() {

}

void OutflowBoundary::applyBoundary() {
	_container.deleteHaloParticles(_axis, _up);
}

void OutflowBoundary::handleParticle(Particle& p) {
	// Note: here it obvious that it is a design flaw that class Boundary inherits from ParticleHandler! ;)
	ASSERT(false, "must not be called!", "");
}
