/*
 * LJForceCalculator.cpp
 *
 * @Date: 30.09.2010
 * @Author: eckhardw
 */

#include "LJForceCalculator.h"
#include "utils/Vector.h"
#include <cmath>

LJForceCalculator::LJForceCalculator(): _setP2(true){
}

LJForceCalculator::LJForceCalculator(bool setP2): _setP2(setP2){
}

LJForceCalculator::~LJForceCalculator() {
}

void LJForceCalculator::handleParticlePair(Particle& p1, Particle& p2) {

	utils::Vector<double,3> force = calculateForce(p1, p2);
	p1.getF() = p1.getF() + force;
	if(_setP2) p2.getF() = p2.getF() - force;
}


utils::Vector<double, 3> LJForceCalculator::calculateForce(Particle& p1, Particle& p2) {
	utils::Vector<double, 3> distance_vector = p2.getX() - p1.getX();
	double r = distance_vector.L2Norm();

	double sigma = (p1.getSigma() + p2.getSigma()) / 2.0;
	double epsilon = sqrt(p1.getEspilon() * p2.getEspilon());

	double pow6_term = sigma / r;
	pow6_term = pow(pow6_term, 6);

	return (double)(24. * epsilon / r * (pow6_term - 2.0 * pow6_term * pow6_term)) * (distance_vector * (1.0 / r));
}
