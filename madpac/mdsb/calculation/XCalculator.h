/*
 * XCalculator.h
 *
 *  Created on: 02.03.2010
 *      Author: eckhardw
 */

#ifndef XCALCULATOR_H_
#define XCALCULATOR_H_

#include "particleContainer/ParticleHandler.h"

/**
 * This class calculates the new position of the particles.
 */
class XCalculator: public ParticleHandler {

private:
	double _delta_t;

public:
	XCalculator(double delta_t);

	virtual ~XCalculator();

	void handleParticle(Particle& p);
};

#endif /* XCALCULATOR_H_ */
