/*
 * PeriodicBoundaryTest.h
 *
 * @Date: 21.12.2010
 * @Author: eckhardw
 */

#ifndef PERIODICBOUNDARYTEST_H_
#define PERIODICBOUNDARYTEST_H_

#include "particleContainer/LinkedCells.h"
#include "particleContainer/ParticleHandler.h"
#include <cppunit/extensions/HelperMacros.h>

class PeriodicBoundaryTest: public CppUnit::TestCase, ParticleHandler {

	CPPUNIT_TEST_SUITE(PeriodicBoundaryTest);
	CPPUNIT_TEST(test2dBoundaries);
	CPPUNIT_TEST(test3dBoundaries);
	CPPUNIT_TEST_SUITE_END();

public:

	PeriodicBoundaryTest();

	virtual ~PeriodicBoundaryTest();

	void setUp();

	void test2dBoundaries();

	void test3dBoundaries();

	void handleParticle(Particle& p);

private:
	LinkedCells* _container2d;
	LinkedCells* _container3d;

	int _numHaloParticles;
};

#endif /* PERIODICBOUNDARYTEST_H_ */
