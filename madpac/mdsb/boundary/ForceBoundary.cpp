/*
 * ForceBoundary.cpp
 *
 *  Created on: 28.02.2011
 *      Author: ph
 */

#include "ForceBoundary.h"
#include "particleContainer/ParticleContainer.h"
#include <stdlib.h>

#define PI 3.14159

ForceBoundary::ForceBoundary(ParticleContainer& container, Boundary::axis_type axis, bool up): Boundary(container, axis, up)  {
}

ForceBoundary::~ForceBoundary() {
}

void ForceBoundary::applyBoundary() {
	_state = COPY_HALO;
	LOG4CXX_DEBUG(logger, "PBC (" << _axis << "/" << _up <<"): Copy Halo ");
	//todo rm
	if(!(_axis == 0 && _up == true)) {
		_container.traverseHaloParticles(*this, _axis, _up);
	}
	_container.deleteHaloParticles(_axis, _up);
	_state = COPY_BOUNDARY;
	LOG4CXX_DEBUG(logger, "PBC(" << _axis << "/" << _up <<"): Copy Boundary");

	_container.traverseBoundaryParticles(*this, _axis, _up);

}

void ForceBoundary::handleParticle(Particle& p) {
	const utils::Vector<double, 3>& length = _container.getDomainLength();
	if (_state == COPY_HALO) {

		LOG4CXX_DEBUG(logger, "FBC: original particle " << p.toString());
		Particle clone(p);
			if (_up) {
				clone.getX()[_axis] = 2*length[_axis] - p.getX()[_axis];
				clone.getV()[_axis] = -p.getV()[_axis];

			} else {
				clone.getX()[_axis] = -p.getX()[_axis];
				clone.getV()[_axis] = -p.getV()[_axis];
			}
			_container.addParticle(clone);
			LOG4CXX_DEBUG(logger, "FBC: new f particle" << clone.toString());
		} else if (_state == COPY_BOUNDARY) {
			double r_w =0;
			if (_up) {
			//	LOG4CXX_DEBUG(logger, "F up"<<_axis);
				r_w = abs(p.getX()[_axis] - length[_axis]);
			} else {
				//LOG4CXX_DEBUG(logger, "F down"<<_axis);
				r_w = p.getX()[_axis];
			}
			double f_m = calcFm(r_w);
			if(_up)
				f_m *= -1;
			//LOG4CXX_DEBUG(logger, "rw"<<r_w/2.3 << "f_m"<<f_m);
		//	double u_m = calcUm(r_w);
			p.getF()[_axis] += f_m;
			//p.setU(p.getU()+u_m);
			LOG4CXX_DEBUG(logger, "FBC: new f particle" << p.toString());
		}
}

