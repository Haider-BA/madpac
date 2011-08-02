/*
 * ParticlesConfiguration.cpp
 *
 *  Created on: May 20, 2011
 *      Author: denis
 */

#include "peano/applications/faxen/lbf/configurations/ParticlesConfiguration.h"
#include "peano/applications/faxen/lbf/configurations/readers.h"
#include "peano/utils/Dimensions.h"
#include <fstream>
#include <string>


namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace configurations {

const std::string ParticlesConfiguration::TAG = "particles-configuration";
const std::string ParticlesConfiguration::INITIALIZATION_FILE = "initialization-file";
const std::string ParticlesConfiguration::VISCOSITY = "viscosity";

tarch::logging::Log ParticlesConfiguration::_log(
		"peano::applications::faxen::lbf::configurations::ParticlesConfiguration"
);

ParticlesConfiguration::ParticlesConfiguration():
																_isValid(true),
																_isDefinedInitFile(false)
{}

ParticlesConfiguration::~ParticlesConfiguration() {}

void ParticlesConfiguration::parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader)
{
	assertion(xmlReader != NULL);

	// get initialization file
	readScalar<std::string>(xmlReader,INITIALIZATION_FILE,_initFile,_isDefinedInitFile,_log);

	// get viscosity
	readScalar<double>(xmlReader,VISCOSITY,_viscosity,_isDefinedViscosity,_log);
}

bool ParticlesConfiguration::isValid() const
{
	return _isValid;
}

bool ParticlesConfiguration::checkConfiguration()
{
	if (_isValid){
		_isValid = _isDefinedInitFile
				& _isDefinedViscosity;
	}
	if (!_isValid){
		_log.error("checkConfiguration()", "Particles' configuration is not valid!");
		exit(EXIT_FAILURE);
	}

	return _isValid;
}

bool ParticlesConfiguration::readParticlesParameters()
{
	if(!_isDefinedInitFile)
		return false;

	std::ifstream infile(_initFile.c_str());
	if(!infile) {
		logError("ParticlesConfiguration","couldn't open initialization file: " << _initFile);
		return false;
	}

	/** reading two explanation lines */
	std::string s;
	getline(infile,s);
	getline(infile,s);

	if(!(infile >> _numberOfParticles)){
		_log.error("ParticlesConfiguration","failed to read number of particles");
		return false;
	}

	double buffer;
	tarch::la::Vector<DIMENSIONS, double> vbuffer;

	for(int i=0; i<_numberOfParticles; i++){
		if(!(infile >> buffer)){
			logError("ParticlesConfiguration","failed to read density of " << i << " particle");
			return false;
		}
		_densities.push_back(buffer);
		logDebug("ParticlesConfiguration","particle's " << i << " density is: " << buffer);

		if(!(infile >> buffer)){
			logError("ParticlesConfiguration","failed to read radius of " << i << " particle");
			return false;
		}
		_radii.push_back(buffer);
		logDebug("ParticlesConfiguration","particle's " << i << " radius is: " << buffer);

		for(int j=0; j<DIMENSIONS; j++){
			if(!(infile >> vbuffer(j))){
				logError("ParticlesConfiguration","failed to read position's "
						<< j << " component of " << i << " particle");
				return false;
			}
		}
		if(DIMENSIONS < 3){
			for(int j=0; j<3-DIMENSIONS;j++){
				if(!(infile >> buffer)){
					logError("ParticlesConfiguration","failed to read position's "
							<< j+DIMENSIONS << " component of " << i << " particle");
					return false;
				}
			}
		}
		_positions.push_back(vbuffer);
		logDebug("ParticlesConfiguration","particle's " << i << " initial position is " << vbuffer(0) << ", " << vbuffer(1));

		for(int j=0; j<DIMENSIONS; j++){
			if(!(infile >> vbuffer(j))){
				logError("ParticlesConfiguration","failed to read velocity's "
						<< j << " component of " << i << " particle");
				return false;
			}
		}
		if(DIMENSIONS < 3){
			for(int j=0; j<3-DIMENSIONS;j++){
				if(!(infile >> buffer)){
					logError("ParticlesConfiguration","failed to read velocity's "
							<< j+DIMENSIONS << " component of " << i << " particle");
					return false;
				}
			}
		}
		_velocities.push_back(vbuffer);
		logDebug("ParticlesConfiguration","particle's " << i << " initial velocity is " << vbuffer(0) << ", " << vbuffer(1));
	}

	return true;
}

double ParticlesConfiguration::getViscosity() const {
	return _viscosity;
}

bool ParticlesConfiguration::isViscosityDefined() const {
	return _isDefinedViscosity;
}

int ParticlesConfiguration::getNumberOfParticles() const
{
	return _numberOfParticles;
}

tarch::la::Vector<DIMENSIONS,double>& ParticlesConfiguration::getVelocity(int particleIndex)
{
	if(particleIndex >= _numberOfParticles){
		logError("getVelocity()","particle's index 'particle's index'("
				<< particleIndex << ") is larger than number of particles ("
				<< _numberOfParticles << ")");
		exit(EXIT_FAILURE);
		return _velocities[0];
	}
	return _velocities[particleIndex];
}

double ParticlesConfiguration::getRadius(int particleIndex) const
{
	if(particleIndex >= _numberOfParticles){
		logError("getRadius()","particle's index 'particle's index'("
				<< particleIndex << ") is larger than number of particles ("
				<< _numberOfParticles << ")");
		exit(EXIT_FAILURE);
		return 0;
	}
	return _radii[particleIndex];
}

double ParticlesConfiguration::getDensity(int particleIndex) const
{
	if(particleIndex >= _numberOfParticles){
		logError("getDensity()","particle's index 'particle's index'("
				<< particleIndex << ") is larger than number of particles ("
				<< _numberOfParticles << ")");
		exit(EXIT_FAILURE);
		return 0;
	}
	return _densities[particleIndex];
}

tarch::la::Vector<DIMENSIONS,double> & ParticlesConfiguration::getPosition(int particleIndex)
{
	if(particleIndex >= _numberOfParticles){
		logError("getPosition()","particle's index 'particle's index'("
				<< particleIndex << ") is larger than number of particles ("
				<< _numberOfParticles << ")");
		exit(EXIT_FAILURE);
		return _positions[0];
	}
	return _positions[particleIndex];
}

void ParticlesConfiguration::setViscosity(double viscosity) {
	_viscosity = viscosity;
	_isDefinedViscosity = true;
}

}

}

}

}

}
