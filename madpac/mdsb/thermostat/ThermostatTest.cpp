/*
 * ThermostatTest.cpp
 *
 * @Date: 15.11.2010
 * @Author: eckhardw
 */

#include "ThermostatTest.h"
#include "thermostat/Thermostat.h"
#include "thermostat/EnergyCalculator.h"
#include "utils/Vector.h"

using namespace utils;

CPPUNIT_TEST_SUITE_REGISTRATION(ThermostatTest);

ThermostatTest::ThermostatTest() {
}

ThermostatTest::~ThermostatTest() {
}


void ThermostatTest::setUp() {
	Vector<double, 3> length(3.0);
	_container = new LinkedCells(1.0, length,3);

	for (int i = 0; i < 4; i++) {
		Particle mol(0.0, 0.0, 2.0, 1.0, 1.0, i);
		mol.getX() = 1.0 + (double(i) + 1.) * 0.1;
		mol.getV() = (double) i + 2;
		_container->addParticle(mol);
	}

	_configuration = new ThermostatConfiguration;
	_configuration->setInitialTemperature(20);
	_configuration->setThermostatFrequency(10);
	_configuration->setEnergySteppingFrequency(0);
	_configuration->setGamma(1.0);

	_temperatureSteppingConfiguration = new ThermostatConfiguration;
	_temperatureSteppingConfiguration->setInitialTemperature(20);
	_temperatureSteppingConfiguration->setThermostatFrequency(10);

	_temperatureSteppingConfiguration->setEnergySteppingFrequency(20);
	_temperatureSteppingConfiguration->setTemperatureStepping(-5);
	_temperatureSteppingConfiguration->setEndTemperature(10);

//	_configuration->setInitialTemperature(20);
//	_configuration->setThermostatFrequency(10);
//	_configuration->setEnergySteppingFrequency(0);
}


void ThermostatTest::tearDown() {
	delete _configuration;
	delete _temperatureSteppingConfiguration;
}


void ThermostatTest::testEnergyCalculation() {
	EnergyCalculator ec;
	double energy = ec.calculateEnergy(*_container);
	CPPUNIT_ASSERT_EQUAL(162., energy);
}

void ThermostatTest::testConversion() {
	Thermostat thermostat(*_configuration, 4, 3);
	double energy = thermostat.temperatureToEnergy(10, 4);
	CPPUNIT_ASSERT_EQUAL(60., energy);

	double temperature = thermostat.energyToTemperature(60, 4);
	CPPUNIT_ASSERT_EQUAL(10., temperature);
}


void ThermostatTest::testInitialization() {
	int N = 1000;
	Vector<double, 3> length(3.0);
	LinkedCells container(1.0, length,3);
	Thermostat thermostat(*_configuration, N, 2);

	for (int i = 0; i < N; i++) {
			Particle mol(0.0, 0.0, 1.0, 1.0, 1.0, i);
			container.addParticle(mol);
	}

	thermostat.initializeBrownianMotion(container);

	EnergyCalculator ec;
	double energy = ec.calculateEnergy(container);
	double temperature = thermostat.energyToTemperature(energy, N);
	CPPUNIT_ASSERT_DOUBLES_EQUAL(20., temperature, 0.2);
}



void ThermostatTest::testVelocityScaling() {
	int N = 100;
	Vector<double, 3> length(3.0);
	LinkedCells container(1.0, length,3);
	Thermostat thermostat(*_configuration, N, 2);

	for (int i = 0; i < N; i++) {
			Particle mol(0.0, 0.0, 1.0, 1.0, 1.0, i);
			container.addParticle(mol);
	}

	thermostat.initializeBrownianMotion(container);
	//thermostat._initialEnergy = 50000.0;
	thermostat.applyThermostat(container, 10);

	EnergyCalculator ec;
	double energy = ec.calculateEnergy(container);
	double temperature = thermostat.energyToTemperature(energy, N);
	CPPUNIT_ASSERT_DOUBLES_EQUAL(20., temperature, 0.00001);
}

void ThermostatTest::testCalculateTargetEnergy() {
	Thermostat thermostat(*_temperatureSteppingConfiguration, 5, 2);
	double target = thermostat.calculateTargetEnergy(10);
	target = thermostat.energyToTemperature(target, 5);
	CPPUNIT_ASSERT_EQUAL(20., target);


}

