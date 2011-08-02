/*
 * PeriodicBoundaryTest.cpp
 *
 * @Date: 21.12.2010
 * @Author: eckhardw
 */

#include "boundary/PeriodicBoundaryTest.h"
#include "boundary/PeriodicBoundary.h"
#include "Particle.h"

#include <vector>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(PeriodicBoundaryTest);

PeriodicBoundaryTest::PeriodicBoundaryTest() {
}

PeriodicBoundaryTest::~PeriodicBoundaryTest() {
}


void PeriodicBoundaryTest::setUp() {
	utils::Vector<double, 3> length2d(3.0);
	length2d[2] = 1.0;
	_container2d = new LinkedCells(1.0, length2d,2);
	Particle m(1);
	m.getX() = 0.5;
	_container2d->addParticle(m);

	utils::Vector<double, 3> length3d(3.0);
	_container3d  = new LinkedCells(1.0, length3d,3);
}

void PeriodicBoundaryTest::handleParticle(Particle& p) {
	_numHaloParticles++;
}

/**
 * For this test, we place a particle in a corner in the boundary. It should get
 * copied 3 times.
 */
void PeriodicBoundaryTest::test2dBoundaries() {
	vector<PeriodicBoundary*> boundaries;
	PeriodicBoundary* pb1 = new PeriodicBoundary(*_container2d, Boundary::X, false);
	boundaries.push_back(pb1);
	PeriodicBoundary* pb2 = new PeriodicBoundary(*_container2d, Boundary::X, true);
	boundaries.push_back(pb2);
	PeriodicBoundary* pb3 = new PeriodicBoundary(*_container2d, Boundary::Y, false);
	boundaries.push_back(pb3);
	PeriodicBoundary* pb4 = new PeriodicBoundary(*_container2d, Boundary::Y, true);
	boundaries.push_back(pb4);

	for (int i = 0; i < 4; i++) {
		boundaries[i]->applyBoundary();
		delete boundaries[i];
	}

	_numHaloParticles = 0;
	_container2d->traverseHaloParticles(*this, Boundary::X, false);
	_container2d->traverseHaloParticles(*this, Boundary::X, true);
	_container2d->traverseHaloParticles(*this, Boundary::Y, false);
	_container2d->traverseHaloParticles(*this, Boundary::Y, true);

	// we count the particle in the corner in the halo twice, so the count has to
	// equal 4
	CPPUNIT_ASSERT_EQUAL(4, _numHaloParticles);
}

void PeriodicBoundaryTest::test3dBoundaries() {

}
