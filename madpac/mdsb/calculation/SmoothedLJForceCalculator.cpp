/*
 * SmoothedLJForceCalculator.cpp
 *
 * @Date: 20.12.2010
 * @Author: eckhardw
 */

#include "SmoothedLJForceCalculator.h"
#include "utils/Assertion.h"

log4cxx::LoggerPtr SmoothedLJForceCalculator::logger = log4cxx::Logger::getLogger("SmoothedLJForceCalculator");

SmoothedLJForceCalculator::SmoothedLJForceCalculator(double r_l, double r_cutoff)
: _r_cutoff(r_cutoff), _r_l(r_l)
{
}

SmoothedLJForceCalculator::~SmoothedLJForceCalculator() { }


void SmoothedLJForceCalculator::handleParticlePair(Particle& p1, Particle& p2) {
	utils::Vector<double, 3> distance_vector = p2.getX() - p1.getX();
	double r = distance_vector.L2Norm();
	double s = calculateSmoothingFactor(r);

	double s_dash = calculateDerivedSmoothingFactor(r);

	ASSERT(s >= -0.0000001, s, 0);
	LOG4CXX_DEBUG(logger, "SmoothingFactor is " << s);
	utils::Vector<double, 3> potential_part = calculatePotential(p1, p2) * s_dash;

	utils::Vector<double,3> force = calculateForce(p1, p2) * s + potential_part;
	p1.getF() = p1.getF() + force;
	p2.getF() = p2.getF() - force;
}


double SmoothedLJForceCalculator::calculateSmoothingFactor(double r) {
	if (r <= _r_l) {
		return 1;
	}

	ASSERT(r <= _r_cutoff, r, _r_cutoff);
	static double pow3 = pow((_r_cutoff - _r_l), 3);
	return 1 - (r - _r_l) * (r - _r_l) * (3 * _r_cutoff - _r_l - 2 * r) / pow3;
}


double SmoothedLJForceCalculator::calculateDerivedSmoothingFactor(double r) {
	if (r <= _r_l || r > _r_cutoff) {
		return 0;
	}

	static double six_over_pow3 = - 6.0 / pow((_r_cutoff - _r_l), 3);
	return six_over_pow3 * (- r * r + r * (_r_l + _r_cutoff) - _r_l * _r_cutoff);
}


utils::Vector<double, 3> SmoothedLJForceCalculator::calculatePotential(Particle& p1, Particle& p2) {
	utils::Vector<double, 3> distance_vector = p2.getX() - p1.getX();
	double r = distance_vector.L2Norm();

	double sigma = (p1.getSigma() + p2.getSigma()) / 2.0;
	double epsilon = sqrt(p1.getEspilon() * p2.getEspilon());

	double pow6_term = sigma / r;
	pow6_term = pow(pow6_term, 6);

	return (4.0 * epsilon * (pow6_term * pow6_term - pow6_term)) * (distance_vector * (1.0 / r));

}
