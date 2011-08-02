/*
 * GravityForceCalculator.cpp
 *
 *  Created on: 02.03.2010
 *      Author: eckhardw
 */

#include "GravityForceCalculator.h"
#include <iostream>

using namespace std;

GravityForceCalculator::GravityForceCalculator() { }

GravityForceCalculator::~GravityForceCalculator() {
}

void GravityForceCalculator::handleParticlePair(Particle& p1, Particle& p2) {
    if (&p1 == &p2) {
    	return;
    }

    double dist = (p2.getX() - p1.getX()).L2Norm();
    double force = p1.getM() * p2.getM() / (pow(dist, 3));

    p1.getF() = p1.getF() + (p2.getX() - p1.getX()) * force;
    p2.getF() = p2.getF() - (p2.getX() - p1.getX()) * force;
}
