/*
 * ReflectingBoundary.h
 *
 * @Date: 18.10.2010
 * @Author: eckhardw
 */

#ifndef REFLECTING_BOUNDARY_H_
#define REFLECTING_BOUNDARY_H_

#include "boundary/Boundary.h"
#include <particleContainer/ParticleHandler.h>
#include "calculation/LJForceCalculator.h"

#include <log4cxx/logger.h>

class ReflectingBoundary : public Boundary {

public:

	ReflectingBoundary(ParticleContainer& container, Boundary::axis_type axis, bool up);

	virtual ~ReflectingBoundary();

	virtual void applyBoundary();

	/**
	 * Iterate over the boundary particles and apply the boundary then
	 */
	virtual void handleParticle(Particle& p);

protected:
	bool shouldReflectParticle(Particle& p);

	void applyReflection(Particle& p);

	/**
	 * check the halo region, as it should be always empty when there is a
	 * reflecting boundary.
	 */
	void checkHalo();

private:

	double _position;

	enum State { CHECK, APPLY };

	State _state;

	LJForceCalculator _forceCalculator;

	static double two_power_1_over_6;

	static log4cxx::LoggerPtr logger;

};

#endif /* BOUNDARY_H_ */
