/*
 * VCalculator.h
 *
 *  Created on: 02.03.2010
 *      Author: eckhardw
 */

#ifndef VCALCULATOR_H_
#define VCALCULATOR_H_

#include "particleContainer/ParticleHandler.h"

#include <log4cxx/logger.h>

/**
 * This class calculates the velocity
 */
class VCalculator: public ParticleHandler {

private:
	double _delta_t;

	// needed for debugging purposes to check maximum speed
	double _cutoff;

	static log4cxx::LoggerPtr logger;


	utils::Vector<double, 3> _gV;

public:
	 void resetGV() {
	  _gV = 0.0;
	}

	      utils::Vector<double, 3> getGV() {
	        return _gV;
	      }


	VCalculator(double delta_t, double cutoff);

	virtual ~VCalculator();

	void handleParticle(Particle& p);
};

#endif /* VCALCULATOR_H_ */
