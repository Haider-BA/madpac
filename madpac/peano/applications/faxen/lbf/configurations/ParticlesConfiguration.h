/*
 * ParticlesConfiguration.h
 *
 *  Created on: May 20, 2011
 *      Author: Denis
 */

#ifndef PARTICLESCONFIGURATION_H_
#define PARTICLESCONFIGURATION_H_

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include "tarch/irr/XML.h"
#include "tarch/la/Vector.h"
#include <vector>
#include <string>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace configurations {

class ParticlesConfiguration {
public:
	static const std::string TAG;

	/**
	 * obligatory parameters
	 */
	static const std::string INITIALIZATION_FILE;

	/**
	 * viscosity can be either specified explicitly or
	 * extracted from Lattice Boltzmann configuration
	 */
	static const std::string VISCOSITY;


	ParticlesConfiguration();
	virtual ~ParticlesConfiguration();

	/** parses the configuration input */
	void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader);

	/**
	 * read particles' individual parameters (density, radius, initial position, initial velocity)
	 * returns true if all necessary parameters are specified and false otherwise.
	 */
	bool readParticlesParameters();

	/** returns the _isValid flag */
	bool isValid() const;

	/** checks the configuration after input (-> parseSubtag() ) and (-> readParticlesParameters) */
	bool checkConfiguration();

	// get()-functions
	double getViscosity() const;
	bool isViscosityDefined() const;
	int getNumberOfParticles() const;
	double getRadius(int particleIndex) const;
	double getDensity(int particleIndex) const;
	tarch::la::Vector<DIMENSIONS,double>& getPosition(int particleIndex);
	tarch::la::Vector<DIMENSIONS,double>& getVelocity(int particleIndex);

	// set()-functions
	void setViscosity(double viscosity);

private:
	/** true, if configuration is valid and false otherwise */
	bool _isValid;

	/** initialization file */
	std::string _initFile;
	bool _isDefinedInitFile;

	/** viscosity */
	double _viscosity;
	bool _isDefinedViscosity;

	/** number of particles */
	int _numberOfParticles;

	/** particles' densities */
	std::vector<double> _densities;

	/** particles' radii */
	std::vector<double> _radii;

	/** particles' initial positions */
	std::vector<tarch::la::Vector<DIMENSIONS,double> > _positions;

	/** particles' initial velocities*/
	std::vector<tarch::la::Vector<DIMENSIONS,double> > _velocities;

	/** for logging */
	static tarch::logging::Log _log;
};

}

}

}

}

}

#endif /* PARTICLESCONFIGURATION_H_ */
