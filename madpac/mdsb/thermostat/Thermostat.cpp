/*
 * Thermostat.cpp
 *
 * @Date: 11.11.2010
 * @Author: eckhardw
 */

#include "Thermostat.h"
#include "particleContainer/ParticleContainer.h"
#include "config/Configuration.h"
#include "config/ThermostatConfiguration.h"
#include "particleContainer/MaxwellBoltzmannDistribution.h"
#include <cmath>


log4cxx::LoggerPtr Thermostat::logger = log4cxx::Logger::getLogger("Thermostat");


Thermostat::Thermostat(const ThermostatConfiguration& configuration, unsigned int N, int dimension)
: _initialEnergy(0),
  _endEnergy(0),
  _energyStepping(0),
  _thermostatFrequency(configuration.getThermostatFrequency()),
  _energySteppingFrequency(configuration.getEnergySteppingFrequency()),
  _gamma(configuration.getGamma()),
  _initialMaxwellBoltzmannFactor(0),
  _dimension(dimension)
{
	_initialEnergy = temperatureToEnergy(configuration.getInitialTemperature(), N);
	std::cout << "initialTemp: " << configuration.getInitialTemperature() << " N " << N << " result " << _initialEnergy << std::endl;
	_endEnergy = temperatureToEnergy(configuration.getEndTemperature(), N);
	_energyStepping = temperatureToEnergy(configuration.getTemperatureStepping(), N);
	_initialMaxwellBoltzmannFactor = calculateMaxwellBoltzmannFactor(_initialEnergy, N);
	LOG4CXX_INFO(logger, "Created Thermostat.");
	LOG4CXX_INFO(logger, "initial E="<<_initialEnergy << " frequency="<<_thermostatFrequency<<" end energy="<<_endEnergy << " energy stepping="<<_energyStepping << " stepping frequency="<<_energySteppingFrequency);
	LOG4CXX_DEBUG(logger, "Calculated MaxwellBoltzmannFactor of " << _initialMaxwellBoltzmannFactor);
}

Thermostat::~Thermostat() {
}

void Thermostat::initializeBrownianMotion(ParticleContainer& container) {
	_state = INIT;
	container.traverseParticles(*this);
}



void Thermostat::applyThermostat(ParticleContainer& container, int iteration) {
	_state = SCALE;

	if (iteration % _thermostatFrequency == 0) {
		double actualEnergy = _energyCalculator.calculateEnergy(container);
		double targetEnergy = calculateTargetEnergy(iteration);
		_beta = calculateBeta(actualEnergy, targetEnergy);
		//std::cout << iteration << " " <<actualEnergy<<" "<<targetEnergy<<std::endl;
		LOG4CXX_INFO(logger, "actualEnergy: " << actualEnergy << " targetEnergy: " << targetEnergy << " beta: " << _beta << " gamma " << _gamma);
		container.traverseParticles(*this);
	}
}


void Thermostat::handleParticle(Particle& p) {
	if (_state == SCALE) {
		scaleVelocity(p);
	} else if (_state == INIT) {
		initializeParticle(p);
	} else {
		// error
	}
}


void Thermostat::initializeParticle(Particle& p) {
	MaxwellBoltzmannDistribution(p, _initialMaxwellBoltzmannFactor, _dimension);
}

void Thermostat::scaleVelocity(Particle& p) {
	p.getV() = p.getV() * _beta;
}

double Thermostat::calculateTargetEnergy(int iteration) const {
	if (_energySteppingFrequency == 0) {
		return _initialEnergy;
	}

	double energyEndDifference = fabs(_initialEnergy - _endEnergy);
	unsigned int pastNumberOfSteppings = iteration /_energySteppingFrequency;
	double energyDifference = fabs( pastNumberOfSteppings * _energyStepping);
	if (energyDifference < energyEndDifference) {
		return _initialEnergy + pastNumberOfSteppings * _energyStepping;
	} else {
		return _endEnergy;
	}
}


double Thermostat::calculateBeta(double energyIs, double energyTarget) const {
	return sqrt( 1.0 + _gamma * (energyTarget / energyIs - 1.0));
}

// E = 3 / 2 * N * T
double Thermostat::temperatureToEnergy(double temperature, unsigned int N) const {
	double energy = (((double) _dimension) / 2.0) * ((double)N) * temperature;
	LOG4CXX_TRACE(logger, "TtoE calculated energy of " << energy << "  (T: "<<temperature << " N: " << N << " dim: " << _dimension << ")");
	return energy;
}

double Thermostat::energyToTemperature(double energy, unsigned int N) const {
	return energy / ((((double) _dimension) / 2.0) * N);
}

double Thermostat::calculateMaxwellBoltzmannFactor(double Energy, unsigned int N) const {
	double mass = 1;
	double velocity = 2.0 * Energy / (double)(_dimension * N * mass);
	LOG4CXX_TRACE(logger, "Calculated velocity of " << velocity);
	double result = sqrt(velocity);
	LOG4CXX_TRACE(logger, "Calculated result of " << result);
	return result;
}

double Thermostat::getMBF() {
	return _initialMaxwellBoltzmannFactor;
}

