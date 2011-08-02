/*
 * PeriodicBoundary.cpp
 *
 * @Date: 25.11.2010
 * @Author: eckhardw
 */

#include "PeriodicBoundary.h"
#include "particleContainer/ParticleContainer.h"
#include "utils/Assertion.h"

PeriodicBoundary::PeriodicBoundary(ParticleContainer& container, Boundary::axis_type axis, bool up)
: Boundary(container, axis, up) {

}

PeriodicBoundary::~PeriodicBoundary() {
}


void PeriodicBoundary::applyBoundary() {
	_state = COPY_HALO;
	LOG4CXX_DEBUG(logger, "PBC (" << _axis << "/" << _up <<"): Copy Halo ");
	_container.traverseHaloParticles(*this, _axis, _up);
	_container.deleteHaloParticles(_axis, _up);
	_state = COPY_BOUNDARY;
	LOG4CXX_DEBUG(logger, "PBC(" << _axis << "/" << _up <<"): Copy Boundary");
	_container.traverseBoundaryParticles(*this, _axis, !_up);
}

void PeriodicBoundary::handleParticle(Particle& p) {
	Particle clone(p);
	const utils::Vector<double, 3>& length = _container.getDomainLength();

	if (_state == COPY_HALO) {
		if (_up) {
			clone.getX()[_axis] = clone.getX()[_axis] - length[_axis];
			clone.getOldX()[_axis] = clone.getOldX()[_axis] - length[_axis];
		} else {
			clone.getX()[_axis] = clone.getX()[_axis] + length[_axis];
			clone.getOldX()[_axis] = clone.getOldX()[_axis] + length[_axis];
		}
	} else if (_state == COPY_BOUNDARY) {
		if (_up) {
			clone.getX()[_axis] = clone.getX()[_axis] + length[_axis];
		} else {
			clone.getX()[_axis] = clone.getX()[_axis] - length[_axis];
		}
	} else {
		ASSERT(false, "No valid state set!", "");
	}

	LOG4CXX_DEBUG(logger, "PBC: original particle " << p.toString());
	LOG4CXX_DEBUG(logger, "PBC: clone " << clone.toString());
	_container.addParticle(clone);
}
