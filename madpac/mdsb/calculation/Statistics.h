/*
 * Statistics.h
 *
 * @Date: 20.12.2010
 * @Author: eckhardw
 */

#ifndef STATISTICS_H_
#define STATISTICS_H_

#include "particleContainer/ParticlePairsHandler.h"
#include "particleContainer/ParticleHandler.h"
#include "log4cxx/logger.h"

class ParticleContainer;

class Statistics: public ParticlePairsHandler, public ParticleHandler {
public:

	Statistics(double r_cutoff);

	virtual ~Statistics();

	void calculateStatistics(ParticleContainer& container, int iteration);

	void handleParticlePair(Particle& p1, Particle& p2);

	void handleParticle(Particle& p);

	void writeFile(int iteration);

private:

	bool _saveX;

	const double _r_cutoff;

	/** sum up the diffusion during the traversal and divide
	 *  by the number of particles after the traversal.
	 */
	double _diffusionFactor;

	static const int _numIntervalls = 50;

	int _distanceCount[_numIntervalls];

	static log4cxx::LoggerPtr logger;
};

#endif /* STATISTICS_H_ */
