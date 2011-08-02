/*
 * LinkedCellsTest.h
 *
 * @Date: 13.10.2010
 * @Author: eckhardw
 */

#ifndef LINKEDCELLSTEST_H_
#define LINKEDCELLSTEST_H_

#include "particleContainer/LinkedCells.h"
#include <cppunit/extensions/HelperMacros.h>


/**
 * This class is a test for the linked cell container. At the same moment, it
 * implements all the handler interfaces to be able to test the iteration methods.
 */
class LinkedCellsTest : public CppUnit::TestFixture, ParticleHandler, ParticlePairsHandler {

	CPPUNIT_TEST_SUITE(LinkedCellsTest);
	CPPUNIT_TEST(testContainerSetup);
	CPPUNIT_TEST(testIteration);
	CPPUNIT_TEST(testPairs);
	CPPUNIT_TEST(testBoundaryIteration);
	CPPUNIT_TEST(testUpdate);
	CPPUNIT_TEST_SUITE_END();

public:

	LinkedCellsTest();

	virtual ~LinkedCellsTest();

	/**
	 * set up the container with molecules in the following way:
	 * 4 particles are in the center cell (i.e. cell 2/2/2).
	 * 1 particle is in cell (1/1/1)
	 * 1 particle is in the boundary cell (0/1/1)
	 */
	void setUp();

	/**
	 * delete the container
	 */
	void tearDown();

	void testContainerSetup();

	void testIteration();

	/**
	 * 6 molecules in total, 4 the same cell, within the cutoff-radius,
	 * one cell in the halo region
	 */
	void testPairs();

	void testBoundaryIteration();

	void testUpdate();

	void handleParticle(Particle& p);

	void handleParticlePair(Particle& p1, Particle& p2);


private:

	LinkedCells* _container;

	// we test with up to 6 molecules
	bool _singleIndices[6];

	bool _pairIndices[6][6];

	/**
	 * if this flag is set to true, the handleParticleMethod will delete particles
	 * number 1 and 5, otherwise it will mark boolean entries in _singleIndices;
	 */
	bool _test_update;
};

#endif /* LINKEDCELLSTEST_H_ */
