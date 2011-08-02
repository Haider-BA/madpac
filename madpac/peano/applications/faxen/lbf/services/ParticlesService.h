/*
 * ParticlesService.h
 *
 *  Created on: May 22, 2011
 *      Author: denis
 */

#ifndef PARTICLESSERVICE_H_
#define PARTICLESSERVICE_H_

#include "tarch/logging/Log.h"
#include "tarch/logging/configurations/LogFilterConfiguration.h"
#include "tarch/logging/configurations/LogOutputFormatConfiguration.h"

#include "peano/applications/faxen/lbf/particles/Particle.h"
#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"
#include <fstream>
#include <string>
#include <vector>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace services {

class ParticlesService {
public:

	static ParticlesService& getInstance();

	/**
	 * Create a new particle;
	 * @param radius Radius of particle;
	 * @param density Density of particle;
	 * @param position Initial position of particle;
	 * @param velocity Initial velocity of particle;
	 * @return new particle's index.
	 */
	int createParticle(double radius, double density,
			tarch::la::Vector<DIMENSIONS,double>& position,
			tarch::la::Vector<DIMENSIONS,double>& velocity);

	/**
	 * Destroy all particles
	 */
	void destroyAllParticles();

	/**
	 * Set particle's viscosity;
	 * @param viscosity Fluid's viscosity for computing forces.
	 */
	void setViscosity(double viscosity);

	/**
	 * Get number of particles.
	 */
	int getNumberOfParticles() const;

	/**
	 * Get viscosity for for force computations.
	 */
	double getViscosity() const;

	/** Get particle's radius;
	 * @param particlesIndex particle's index.
	 */
	double getParticlesRadius(int particlesIndex) const;

	/**
	 * Get particle's density;
	 * @param particlesIndex particle's index.
	 */
	double getParticlesDensity(int particlesIndex) const;

	/**
	 * Get particle's position;
	 * @param particlesIndex particle's index.
	 */
	tarch::la::Vector<DIMENSIONS, double> getParticlesPostion(int particlesIndex);

	/**
	 * Get particle's velocity;
	 * @param particlesIndex particle's index.
	 */
	tarch::la::Vector<DIMENSIONS, double> getParticlesVelocity(int particlesIndex);

	/**
	 * Move particle one step;
	 * @param particlesIndex particle's index;
	 * @param dt size of time step;
	 * @param force force acting on particle.
	 */
	void moveParticleOneStep(int particlesIndex, double dt, tarch::la::Vector<DIMENSIONS,double>& force);

	/**
	 * Save particles current position into .vtk file
	 * @param fileName name of file (without .vtk extension)
	 */
	void savePositionsIntoFile(std::string fileName);

	/**
	 * Write .vtk file header
	 * @param vtkFile .vtk output file
	 */
	void writeVTKHeader(std::ofstream& vtkFile);

	/**
	 * Find an index of particle that has the point inside;
	 * @param point position that is checked for belonging to particle;
	 * @return index of the particle that contains the specified point;
	 * returns -1 if the point is outside all particles.
	 */
	int belongs2Particle(tarch::la::Vector<DIMENSIONS,double>& point);

private:

	ParticlesService();
	~ParticlesService();

	std::vector<peano::applications::faxen::lbf::particle::Particle> _particlesData;
	double _viscosity;

	tarch::logging::Log _log;
};

}

}

}

}

}

#endif /* PARTICLESSERVICE_H_ */
