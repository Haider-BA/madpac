/*
 * WeightCalculator.cpp
 *
 * @Date: 19.10.2010
 * @Author: eckhardw
 */

#include "WeightCalculator.h"
#include "Particle.h"

WeightCalculator::WeightCalculator(Boundary::axis_type axis, double gravityFactor)
: _axis(axis), _gravityFactor(gravityFactor) {
}

WeightCalculator::~WeightCalculator() {
}

void WeightCalculator::handleParticle(Particle& p) {
	p.getF()[_axis] = p.getF()[_axis] + p.getM() * _gravityFactor;
}
