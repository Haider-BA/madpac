/*
 * SmoothedLJForceCalculator.h
 *
 * @Date: 20.12.2010
 * @Author: eckhardw
 */

#ifndef SMOOTHEDLJFORCECALCULATOR_H_
#define SMOOTHEDLJFORCECALCULATOR_H_

#include "calculation/LJForceCalculator.h"
#include "Particle.h"
#include <log4cxx/logger.h>

class SmoothedLJForceCalculator: public LJForceCalculator {

public:

	SmoothedLJForceCalculator(double r_l, double r_cutoff);

	virtual ~SmoothedLJForceCalculator();

	virtual void handleParticlePair(Particle& p1, Particle& p2);

private:

	// calculate the smoothing function for the potential
	double calculateSmoothingFactor(double r);

	// calculate the derived smoothing function for the potential
	double calculateDerivedSmoothingFactor(double r);

	utils::Vector<double, 3> calculatePotential(Particle& p1, Particle& p2);

	const double _r_cutoff;
	const double _r_l;

	static log4cxx::LoggerPtr logger;
};

#endif /* SMOOTHEDLJFORCECALCULATOR_H_ */
