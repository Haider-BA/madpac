/*
 * Boundary.h
 *
 * @Date: 16.11.2010
 * @Author: eckhardw
 */

#ifndef BOUNDARY_H_
#define BOUNDARY_H_

#include "particleContainer/ParticleHandler.h"

class ParticleContainer;

class Boundary :  public ParticleHandler {

public:

	enum axis_type { X = 0, Y = 1, Z = 2};

	Boundary(ParticleContainer& container, axis_type axis, bool up);

	virtual ~Boundary();

	virtual void applyBoundary() = 0;

	virtual void handleParticle(Particle& p) = 0;

protected:

	/**
	 * Axis, which is orthogonal to this boundary (i.e. if set to X, then
	 * the boundary is parallel to the yz-plane, thus orthogonal to the x-axis)
	 */
	axis_type _axis;

	/**
	 * is this boundary at the upper end of the domain, i.e. towards the higher
	 * coordinates along the axis?
	 */
	bool _up;

	ParticleContainer& _container;

	static log4cxx::LoggerPtr logger;

};

#endif /* BOUNDARY_H_ */
