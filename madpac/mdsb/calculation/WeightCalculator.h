/*
 * WeightCalculator.h
 *
 * @Date: 19.10.2010
 * @Author: eckhardw
 */

#ifndef WEIGHTCALCULATOR_H_
#define WEIGHTCALCULATOR_H_

#include "particleContainer/ParticleHandler.h"
#include "boundary/Boundary.h"

class Particle;

class WeightCalculator: public ParticleHandler {

public:

	WeightCalculator(Boundary::axis_type axis, double gravityFactor);

	virtual ~WeightCalculator();

	void handleParticle(Particle& p);

private:

	Boundary::axis_type _axis;

	double _gravityFactor;
};

#endif /* WEIGHTCALCULATOR_H_ */
