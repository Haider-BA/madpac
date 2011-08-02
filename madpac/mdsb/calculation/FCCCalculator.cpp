/*
 * FCCCalculator.cpp
 *
 * @Date: 05.01.2011
 * @Author: eckhardw
 */

#include "FCCCalculator.h"
#include "utils/Assertion.h"

using namespace utils;

log4cxx::LoggerPtr FCCCalculator::logger = log4cxx::Logger::getLogger("FCCCalculator");

FCCCalculator::FCCCalculator(ParticleContainer& container)
: _container(container){

}

FCCCalculator::~FCCCalculator() {
}

void FCCCalculator::calculateScenarioValues(int iteration) {
	_iteration = iteration;

	_state = calcExternalForceAndResetS;
	_container.traverseParticles(*this);
	_state = CalcS;
	_container.traversePairs(*this);
	_state = CalcPotential;
	_container.traversePairs(*this);
	_state = CalcStress;
	_container.traversePairs(*this);
}


void FCCCalculator::handleParticlePair(Particle& p1, Particle& p2) {

	switch (_state) {
		case CalcS:
			calculateS(p1, p2);
			break;

		case CalcPotential: {
			utils::Vector<double, 3> f(0.0);
			f = calculateForce(p1, p2);
			p1.getF() = p1.getF() + f;
			p2.getF() = p2.getF() - f;
			break;
		}

		case CalcStress:
			calculateStress(p1, p2);
			break;

		default:
			ASSERT(false, "Case not specified right!", _state);
	}
}

void FCCCalculator::handleParticle(Particle& p) {
	p.setS(0.0);
	p.setFlag(false);

	//	if (_iteration >= 10000) {
	//
	//		if (_iteration == 10000) {
	//			LOG4CXX_INFO(logger, "Applying Boundary and Torsion forces!");
	//		}


	double force = 3.0;
	if (p.getX()[0] < 20) {
		p.setFlag(true);

		double position = p.getX()[1];
		double middle = _container.getDomainLength()[1] / 2.0;

		// position / middle gives us a factor in [0;2], by subtracting 1.0
		// we get a signed factor between [-1;1]
		double factor = position / middle - 1.0;
		ASSERT(factor >= -1, factor, -1);
		ASSERT(factor <= 1, factor, 1);

		p.getF()[1] = p.getF()[1] + factor * force;
	}


	double wallDistance = 10;
	double wallForce = 30.0;

	if (p.getX()[1] < wallDistance) {
		p.setFlag(true);
		p.getF()[1] = p.getF()[1] - wallForce;
#ifdef DEBUG
		LOG4CXX_DEBUG(logger, "applying boundary force to " << p.toString());
#endif
	}

	else if (p.getX()[1] > _container.getDomainLength()[1] - wallDistance) {
		p.setFlag(true);
		p.getF()[1] = p.getF()[1] + wallForce;
#ifdef DEBUG
		LOG4CXX_DEBUG(logger, "applying boundary force to " << p.toString());
#endif
	}

	//}
}




void FCCCalculator::calculateStress(Particle& p1, Particle& p2) {
	Vector<double, 3> distance = p2.getX() - p1.getX();
	Vector<double, 3> force = calculateForce(p1, p2);

	// actually, the stress is a 3x3 tensor. As we need only the maximum of it
	// in some norm, we calculate the frobenius-norm directly.
	double stress = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			stress += (distance[i] * force[j]) * (distance[i] * force[j]);
		}
	}
	sqrt(stress);

	p1.setStress(p1.getStress() + stress);
	p2.setStress(p2.getStress() + stress);
}


void FCCCalculator::calculateS(Particle& p1, Particle& p2) {
	double distance = (p2.getX() - p1.getX()).L2Norm();
	double S_ij = pow(1.0 / distance, 6);
	p1.setS(p1.getS() + S_ij);
	p2.setS(p2.getS() + S_ij);
}


utils::Vector<double, 3> FCCCalculator::calculateForce(Particle& p1, Particle& p2) {
	Vector<double, 3> result(0.0);
	//double c = 10.7;
	double c = 144.41;

	utils::Vector<double, 3> distance_vector = p2.getX() - p1.getX();
	double r = distance_vector.L2Norm();

	double pow_6_term = pow(1.0 / r, 6);
	double parenthesis = 12 * pow_6_term - c * 3.0 * (1.0 / sqrt(p1.getS()) + 1.0 / sqrt(p2.getS()));

	result = (-1.0) * pow_6_term * parenthesis * (distance_vector * (1.0 / (r*r)));

#ifdef DEBUG
	LOG4CXX_TRACE(logger, "Calculated Force for particles: " << result.toString());
	LOG4CXX_TRACE(logger, p1.toString());
	LOG4CXX_TRACE(logger, p2.toString());
#endif

	return result;
}

