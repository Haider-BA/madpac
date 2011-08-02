/*
 * Thermostat.h
 *
 * @Date: 11.11.2010
 * @Author: eckhardw
 */

#ifndef THERMOSTAT_H_
#define THERMOSTAT_H_

#include "EnergyCalculator.h"
#include "particleContainer/ParticleHandler.h"

#include <log4cxx/logger.h>

class ParticleContainer;
class ThermostatConfiguration;

/**
 * Internally the thermostat calculates with energies to avoid the repeated
 * conversions between temperatures and energies.
 */
class Thermostat : ParticleHandler {

	friend class ThermostatTest;

public:

	Thermostat(const ThermostatConfiguration& configuration, unsigned int N, int dimension);

	virtual ~Thermostat();

	void applyThermostat(ParticleContainer& container, int iteration);

	void initializeBrownianMotion(ParticleContainer& container);

	virtual void handleParticle(Particle& p);

	double getMBF();

private:

	double temperatureToEnergy(double temperature, unsigned int N) const;

	double energyToTemperature(double energy, unsigned int N) const;

	double calculateMaxwellBoltzmannFactor(double Energy, unsigned int N) const;

	void initializeParticle(Particle& p);

	void scaleVelocity(Particle& p);

	/**
	 * calculate the factor by which the velocities have to be scaled.
	 */
	double calculateBeta(double energyIs, double energyTarget) const;

	double calculateTargetEnergy(int iteration) const;

	enum state {SCALE, INIT};

	state _state;

	EnergyCalculator _energyCalculator;

	/**
	 * scaling factor for the velocities. It is calculated in applyThermostat
	 * and then used during the traversal of the container.
	 */
	double _beta;

	/**
	 * The initial temperature to which the phase is initialized. If no endEnergy
	 * is used (i.e. energySteppingFrequency == 0), the thermostat will try
	 * to keep the phase at that temperature constantly.
	 */
	double _initialEnergy;

	/**
	 * The target energy at the end of cooling or heating.
	 */
	double _endEnergy;

	/**
	 * Indicates in which steps the energy should be in- or decreased.
	 */
	double _energyStepping;

	/**
	 * The thermostat is applied every #thermostatFrequency iterations.
	 */
	unsigned int _thermostatFrequency;

	/**
	 * The target energy is changed every #temperatureSteppingFrequency iterations.
	 *
	 * If target
	 */
	unsigned int _energySteppingFrequency;

	/**
	 * determines the percentage up to which the temperature is scaled
	 * (see Griebel et al. Numerical Simulation in Molecular Dynamics,
	 * ch. 3.7 Thermostats, Ensembles, and Applications, p.87f)
	 *
	 * A factor of 1.0 will cause the molecule velocities be scaled
	 * immediately to a given energy value. For values between 0.0 and 1.0,
	 * the temperature in the system will slowly adapt to the given values...
	 */
	double _gamma;

	double _initialMaxwellBoltzmannFactor;

	unsigned int _dimension;

	static log4cxx::LoggerPtr logger;
};

#endif /* THERMOSTAT_H_ */
