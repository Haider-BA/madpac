/*
 * UCalculator.h
 *
 *  Created on: 24.02.2011
 *      Author: ph
 */

#ifndef UCALCULATOR_H_
#define UCALCULATOR_H_

#include "particleContainer/ParticlePairsHandler.h"

#include "particleContainer/ParticleHandler.h"
#include "utils/Vector.h"
#include "Particle.h"

class UCalculator  : public ParticlePairsHandler  {
public:
	UCalculator();
	virtual ~UCalculator();
	void handleParticlePair(Particle& p1, Particle& p2);

	//void setP1(Particle& p1);

protected:
	//Particle& _P1;

	double calculateForce(Particle& p1, Particle& p2);
};

#endif /* UCALCULATOR_H_ */







