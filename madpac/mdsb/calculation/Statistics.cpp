/*
 * Statistics.cpp
 *
 * @Date: 20.12.2010
 * @Author: eckhardw
 */

#include "Statistics.h"
#include "particleContainer/ParticleContainer.h"
#include "utils/Assertion.h"
#include <fstream>

using namespace std;

log4cxx::LoggerPtr Statistics::logger = log4cxx::Logger::getLogger("Statistics");

Statistics::Statistics(double r_cutoff) : _saveX(true), _r_cutoff(r_cutoff) {
}

Statistics::~Statistics() {
}


void Statistics::calculateStatistics(ParticleContainer& container, int iteration) {

	int frequency = 2000;

//	if ((iteration + 50) % frequency == 0) {
//		_saveX = true;
//		container.traverseParticles(*this);
//		LOG4CXX_DEBUG(logger, "Saved oldX at iteration "<< iteration);
//	}

	if ((iteration + 25) % frequency == 0) {
//	  _saveX = false;
//	  _diffusionFactor = 0;
//	  container.traverseParticles(*this);
//	  LOG4CXX_DEBUG(logger, "calculated diffusion of " << _diffusionFactor << " at iteration " << iteration);
	  _saveX = true;
	  // reset x
	  container.traverseParticles(*this);
	  LOG4CXX_DEBUG(logger, "Saved oldX at iteration "<< iteration);
	}

	//if ((iteration + 1) % frequency == 0) {
//		// reset counter and count particle pair distances
//		for (int i = 0; i < _numIntervalls; i++) {
//			_distanceCount[i] = 0;
//		}
		//container.traversePairs(*this);
	//}

	if (iteration == 1 || iteration % frequency == 0) {
    _saveX = false;
    container.traverseParticles(*this);
		_diffusionFactor = _diffusionFactor / container.getNumParticles();

		// reset counter and count particle pair distances
		for (int i = 0; i < _numIntervalls; i++) {
		  _distanceCount[i] = 0;
		}
		// count particlePairDistances
		container.traversePairs(*this);
		writeFile(iteration);
	}
}

void Statistics::handleParticlePair(Particle& p1, Particle& p2) {
	utils::Vector<double, 3> distance_vector = p2.getX() - p1.getX();
	double r = distance_vector.L2Norm();

	int index = (r / _r_cutoff) * _numIntervalls;

	//LOG4CXX_DEBUG(logger, "particle with distance: " << r << " index " << index);
#ifdef DEBUG
	if (! (index < _numIntervalls)) {
	  LOG4CXX_WARN(logger, "Distance: " << r << " cutoff: " << _r_cutoff);
	  ASSERT(index < _numIntervalls, index, _numIntervalls);
	}
#else
	ASSERT(index < _numIntervalls, index, _numIntervalls);
#endif
	_distanceCount[index]++;
}

void Statistics::handleParticle(Particle& p) {
	if (_saveX) {
		p.getOldX() = p.getX();
	} else {
		double squareDistance = (p.getX() - p.getOldX()).L2Norm();
		LOG4CXX_TRACE(logger, "Updated diffusion factor. Distance is " << squareDistance );
		LOG4CXX_TRACE(logger, "Particle: " << p.toString());
		squareDistance *= squareDistance;
		_diffusionFactor += squareDistance;
	}
}

void Statistics::writeFile(int iteration) {
	std::ofstream file("statistics.csv", ios_base::app | ios_base::out);
	LOG4CXX_DEBUG(logger, "Writing file...");

	for (int i = 0; i < _numIntervalls; i++) {
		double volume = pow((double(i+1)) * _r_cutoff / _numIntervalls, 3) - pow((double (i)) * _r_cutoff / _numIntervalls, 3);
		double value =  (double (_distanceCount[i]) / 2) / volume;
		file << value << ";";
	}
	file << std::endl;
	file.close();

	std::ofstream diffusionFile("diffusion.csv", ios_base::app | ios_base::out);
	diffusionFile << iteration << "; " << _diffusionFactor << ";" << endl;
}
