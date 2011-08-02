/*
 * FCCCalculator.h
 *
 * @Date: 05.01.2011
 * @Author: eckhardw
 */

#ifndef FCCCALCULATOR_H_
#define FCCCALCULATOR_H_

#include "particleContainer/ParticleContainer.h"
#include "particleContainer/ParticleHandler.h"
#include "particleContainer/ParticlePairsHandler.h"
#include "utils/Vector.h"
#include "log4cxx/logger.h"

/**
 * This class is responsible for calculating all things related to the experiment
 * "propagation of a micro-crack in silver" from the griebel book. Therefore, also
 * most parameters are hard coded.
 *
 * The most central task is the calculation of the Finnis-Sinclair potential, but
 * also the calculation of all other forces of this scenario is done here.
 */
class FCCCalculator : public ParticlePairsHandler, ParticleHandler {

public:

	FCCCalculator(ParticleContainer& container);

	virtual ~FCCCalculator();

	void handleParticlePair(Particle& p1, Particle& p2);

	// calculates the external force and resets S
	void handleParticle(Particle& p);

	void calculateScenarioValues(int iteration);

private:

	static log4cxx::LoggerPtr logger;

	ParticleContainer& _container;

	enum State {CalcS, CalcStress, CalcPotential, calcExternalForceAndResetS};

	State _state;

	int _iteration;

	void calculateStress(Particle& p1, Particle& p2);

	void calculateS(Particle& p1, Particle& p2);

	utils::Vector<double, 3> calculateForce(Particle& p1, Particle& p2);

};

#endif /* FCCCALCULATOR_H_ */
