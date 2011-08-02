/*
 * ReflectingBoundary.cpp
 *
 * @Date: 18.10.2010
 * @Author: eckhardw
 */

#include "ReflectingBoundary.h"
#include "particleContainer/ParticleContainer.h"
#include "Particle.h"

#include <cmath>

double ReflectingBoundary::two_power_1_over_6 = pow(2, 1./6.);

log4cxx::LoggerPtr ReflectingBoundary::logger = log4cxx::Logger::getLogger("Boundary");

ReflectingBoundary::ReflectingBoundary(ParticleContainer& container, ReflectingBoundary::axis_type axis, bool up)
: Boundary(container, axis, up) {

	if (_up) {
		_position = _container.getDomainLength()[axis];
	} else {
		_position = 0.0;
	}

	LOG4CXX_INFO(logger, "Constructed ReflectingBoundary at " << _position);
}

ReflectingBoundary::~ReflectingBoundary() {
}


void ReflectingBoundary::applyBoundary() {
	checkHalo();
	_state = APPLY;
	_container.traverseBoundaryParticles(*this, _axis, _up);
}


void ReflectingBoundary::checkHalo() {
	_state = CHECK;
	_container.traverseHaloParticles(*this, _axis, _up);
}


void ReflectingBoundary::handleParticle(Particle& p) {
	if (_state == CHECK) {
		LOG4CXX_WARN(logger, "Particle in Halo where it should be reflected! Particle: " << p.toString());
	} else {
		if (shouldReflectParticle(p)) {
			//LOG4CXX_TRACE(logger, "Handling particle: " << p.toString() << " with factor " << two_power_1_over_6 << " distance to boundary: " << distance );
			applyReflection(p);
		}
	}
}


bool ReflectingBoundary::shouldReflectParticle(Particle& p) {
	double distance = fabs(_position - p.getX()[_axis]);
	LOG4CXX_TRACE(logger, "Checking particle: " << p.toString());
	return distance < (two_power_1_over_6 * p.getSigma());
}

void ReflectingBoundary::applyReflection(Particle& p) {
	Particle image(p);
	image.getX()[_axis] = _position;
	_forceCalculator.handleParticlePair(p, image);
	LOG4CXX_TRACE(logger, "Particle after boundary calculation: " << p.toString());
}
