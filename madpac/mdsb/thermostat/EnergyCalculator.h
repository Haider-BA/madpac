/*
 * EnergyCalculator.h
 *
 * @Date: 11.11.2010
 * @Author: eckhardw
 */

#ifndef ENERGYCALCULATOR_H_
#define ENERGYCALCULATOR_H_

#include "particleContainer/ParticleHandler.h"

class ParticleContainer;

class EnergyCalculator : public ParticleHandler {

public:

	EnergyCalculator();

	virtual ~EnergyCalculator();

	virtual void handleParticle(Particle& p);

	double calculateEnergy(ParticleContainer& container);

private:

	/**
	 * the energy of the phase. When calculateEnergy() is called, this
	 * variable is reset. Then during the traversal of all particles the
	 * energy are summed up and the value of this variable is then returned.
	 */
	double _energy;
};

#endif /* ENERGYCALCULATOR_H_ */
