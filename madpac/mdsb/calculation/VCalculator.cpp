/*
 * VCalculator.cpp
 *
 *  Created on: 02.03.2010
 *      Author: eckhardw
 */

#include "VCalculator.h"
#include "utils/Assertion.h"
#include <iostream>

log4cxx::LoggerPtr VCalculator::logger = log4cxx::Logger::getLogger("VCalculator");

VCalculator::VCalculator(double delta_t, double cutoff)
: _delta_t(delta_t), _cutoff(cutoff) {

}

VCalculator::~VCalculator() {
}

void VCalculator::handleParticle(Particle& p) {

#ifdef DEBUG
    double max_distance = (p.getV() * _delta_t).L2Norm();
    if(max_distance > _cutoff) {
    	LOG4CXX_ERROR(logger, p.toString());
    	ASSERT3(max_distance < _cutoff, max_distance, _cutoff, "Velocity a priory too high!");
    }
#endif

    p.getV() = p.getV() + (p.getF() + p.getOldF()) * (_delta_t * 0.5 / p.getM());
    _gV = _gV + p.getV();
#ifdef DEBUG
    max_distance = (p.getV() * _delta_t).L2Norm();
    if(max_distance > _cutoff) {
    	LOG4CXX_ERROR(logger, p.toString());
    	ASSERT(max_distance < _cutoff, max_distance, _cutoff);
    }
#endif

}
