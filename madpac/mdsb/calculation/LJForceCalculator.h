/*
 * LJForceCalculator.h
 *
 * @Date: 30.09.2010
 * @Author: eckhardw
 */

#ifndef LJFORCECALCULATOR_H_
#define LJFORCECALCULATOR_H_

#include "particleContainer/ParticlePairsHandler.h"
#include "utils/Vector.h"
#include "Particle.h"

/**
 * Implements the force calculation according to the lennard-jones potential.
 */
class LJForceCalculator : public ParticlePairsHandler {

public:
	LJForceCalculator();

	LJForceCalculator(bool setP2);

	virtual ~LJForceCalculator();

	void handleParticlePair(Particle& p1, Particle& p2);

protected:

	utils::Vector<double, 3> calculateForce(Particle& p1, Particle& p2);

	bool _setP2;

};

#endif /* LJFORCECALCULATOR_H_ */
