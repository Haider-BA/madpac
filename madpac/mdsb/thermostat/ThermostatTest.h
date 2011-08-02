/*
 * ThermostatTest.h
 *
 * @Date: 15.11.2010
 * @Author: eckhardw
 */

#ifndef THERMOSTATTEST_H_
#define THERMOSTATTEST_H_

#include "thermostat/Thermostat.h"
#include "config/ThermostatConfiguration.h"
#include <cppunit/extensions/HelperMacros.h>
#include "particleContainer/LinkedCells.h"

class ThermostatTest : public CppUnit::TestFixture {

	CPPUNIT_TEST_SUITE(ThermostatTest);
	CPPUNIT_TEST(testEnergyCalculation);
	CPPUNIT_TEST(testConversion);
	CPPUNIT_TEST(testInitialization);
	CPPUNIT_TEST(testVelocityScaling);
	CPPUNIT_TEST(testCalculateTargetEnergy);
	CPPUNIT_TEST_SUITE_END();


public:

	ThermostatTest();

	virtual ~ThermostatTest();

	void setUp();

	void tearDown();

	void testEnergyCalculation();

	void testConversion();

	void testInitialization();

	void testVelocityScaling();

	void testCalculateTargetEnergy();

private:

	LinkedCells* _container;

	ThermostatConfiguration* _configuration;

	ThermostatConfiguration* _temperatureSteppingConfiguration;

};

#endif /* THERMOSTATTEST_H_ */
