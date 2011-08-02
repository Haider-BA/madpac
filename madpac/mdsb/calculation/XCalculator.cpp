/*
 * XCalculator.cpp
 *
 *  Created on: 02.03.2010
 *      Author: eckhardw
 */

#include "XCalculator.h"

extern double delta_t;

XCalculator::XCalculator(double delta_t)
: _delta_t(delta_t) {
}

XCalculator::~XCalculator() {
}

void XCalculator::handleParticle(Particle& p) {
	p.getX() = p.getX() + _delta_t * p.getV() + p.getF() * (0.5 * _delta_t * _delta_t / p.getM());

    p.getOldF() = p.getF();
    p.getF() = 0.0;
}
