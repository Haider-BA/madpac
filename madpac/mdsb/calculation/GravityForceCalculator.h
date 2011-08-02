/*
 * GravityForceCalculator.h
 *
 *  Created on: 02.03.2010
 *      Author: eckhardw
 */

#ifndef FORCECALCULATOR_H_
#define FORCECALCULATOR_H_

#include "particleContainer/ParticlePairsHandler.h"

/**
 * This class calculates the gravitational force between two particles.
 */
class GravityForceCalculator: public ParticlePairsHandler {

public:
	GravityForceCalculator();

	virtual ~GravityForceCalculator();

	void handleParticlePair(Particle& p1, Particle& p2);
};

#endif /* FORCECALCULATOR_H_ */
