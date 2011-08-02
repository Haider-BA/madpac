
#ifndef PARTICLE_CONTAINER_H
#define PARTICLE_CONTAINER_H

#include "particleContainer/ParticleHandler.h"
#include "particleContainer/ParticlePairsHandler.h"

#include "boundary/Boundary.h"

/**
 * Interface for particleContainers
 */
class ParticleContainer {

public:

	/**
	 * add particle by value to this container (i.e. the argument
	 * may be deleted or changed any other way after adding)
	 *
	 * Particles may be outside of the domain, then they are stored to
	 * the ghost layer.
	 */
	virtual void addParticle(Particle& p) = 0;

	/**
	 * Number of the particles, excluding the particles in the halo.
	 */
	virtual int getNumParticles() const = 0;

	/**
	 * Traverse all particles inside the domain (i.e. excluding the particles outside).
	 */
	virtual void traverseParticles(ParticleHandler& particleHandler) = 0;

	/**
	 * Traverse all pairs of particles according to the linked cells
	 */
	virtual void traversePairs(ParticlePairsHandler& particlePairsHandler) = 0;

	/**
	 * Traverse all boundary particles, i.e. the particles which are in the
	 * cells next to the border of the computational domain.
	 */
	//virtual void traverseBoundaryParticles(ParticleHandler& particleHandler) = 0;

	virtual void traverseBoundaryParticles(ParticleHandler& particleHandler, Boundary::axis_type axis, bool up) = 0;

	virtual void traverseHaloParticles(ParticleHandler& particleHandler, Boundary::axis_type axis, bool up) = 0;

	virtual void deleteHaloParticles() = 0;

	virtual void deleteHaloParticles(Boundary::axis_type axis, bool up) = 0;

	/**
	 * sort the molecules into the right cells again after they have moved.
	 */
	virtual void update() = 0;

	virtual utils::Vector<double, 3> getDomainLength() = 0;

	virtual void setGV(utils::Vector<double, 3> gv) = 0;


	/*virtual double getRho(utils::Vector<int, 3> cell) = 0;
	virtual void setRho(double rho, utils::Vector<int, 3> cell) = 0;
	virtual utils::Vector<double, 3> getV(utils::Vector<int, 3> cell) = 0;
	virtual void setV(utils::Vector<double, 3> v, utils::Vector<int, 3> cell) = 0;
	virtual void addP() =0;
	virtual double getU0() = 0;*/
};

#endif
