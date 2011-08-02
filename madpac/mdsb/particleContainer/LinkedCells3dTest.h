/*
 * LinkedCells3dTest.h
 *
 * @Date: 04.01.2011
 * @Author: eckhardw
 */

#ifndef LINKEDCELLS3DTEST_H_
#define LINKEDCELLS3DTEST_H_

#include "boundary/PeriodicBoundary.h"
#include "config/CuboidConfiguration.h"
#include "particleContainer/LinkedCells.h"
#include <cppunit/extensions/HelperMacros.h>

#include <vector>

/**
 * This class tests the 3d-traversal of the molecule pairs, as well as the
 * force calculation with the smoothed lj-potential.
 */
class LinkedCells3dTest : public CppUnit::TestFixture, ParticleHandler, ParticlePairsHandler {

	CPPUNIT_TEST_SUITE(LinkedCells3dTest);
	CPPUNIT_TEST(testPairCutoff_1_2);
	CPPUNIT_TEST(testPairCutoff_1_5);
	CPPUNIT_TEST_SUITE_END();

public:

	LinkedCells3dTest();

	virtual ~LinkedCells3dTest();

	void setUp();

	void tearDown();

	void testPairCutoff_1_2();

	void testPairCutoff_1_5();

	void handleParticlePair(Particle& p1, Particle& p2);

	void handleParticle(Particle& p);

private:

	std::vector<PeriodicBoundary*> _boundaries_cutoff_1_2;

	std::vector<PeriodicBoundary*> _boundaries_cutoff_1_5;

	CuboidConfiguration* _config;

	LinkedCells* _container_cutoff_1_2;

	LinkedCells* _container_cutoff_1_5;

	// counter to count, how often the pair traversal functions are called
	int _counter;

	double _referenceForce;
};

#endif /* LINKEDCELLS3DTEST_H_ */
