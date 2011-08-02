/*
 * UCalculator.cpp
 *
 *  Created on: 24.02.2011
 *      Author: ph
 */

#include "UCalculator.h"
#include "utils/Vector.h"
#include <cmath>

UCalculator::UCalculator() {

}

UCalculator::~UCalculator() {
	// TODO Auto-generated destructor stub
}




void UCalculator::handleParticlePair(Particle& p1, Particle& p2) {
	if(!(p1.getX().operator ==(p2.getX()))) {
		double force = calculateForce(p1, p2);
		p1.setU(p1.getU() + force);
	}
	//std::cout<<_P1.getU()<< std::endl;
	//p2.setU(p2.getU() + force);


}
/*
void UCalculator::setP1(Particle& p1) {

	_P1 = p1;
	_P1.setU(0.0);

}
*/
double UCalculator::calculateForce(Particle& p1, Particle& p2) {
	utils::Vector<double, 3> distance_vector = p2.getX() - p1.getX();
	double r = distance_vector.L2Norm();

	double sigma = (p1.getSigma() + p2.getSigma()) / 2.0;
	double epsilon = sqrt(p1.getEspilon() * p2.getEspilon());

	double pow6_term = sigma / r;
	pow6_term = pow(pow6_term, 6);

	return (double)(4. * epsilon * ( pow6_term * pow6_term - pow6_term));
}
