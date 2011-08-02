/*
 * EnergyCalculator.cpp
 *
 * @Date: 11.11.2010
 * @Author: eckhardw
 */

#include "EnergyCalculator.h"
#include "particleContainer/ParticleContainer.h"

EnergyCalculator::EnergyCalculator() : _energy(0) {
}

EnergyCalculator::~EnergyCalculator() {
}

double EnergyCalculator::calculateEnergy(ParticleContainer& container) {
	_energy = 0;
	container.traverseParticles(*this);
	return _energy;
}

void EnergyCalculator::handleParticle(Particle& p) {
	_energy += 0.5 * p.getM() * p.getV().L2Norm() * p.getV().L2Norm();
}
