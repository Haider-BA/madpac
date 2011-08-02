/*
 * LinkedCells3dTest.cpp
 *
 * @Date: 04.01.2011
 * @Author: eckhardw
 */

#include "LinkedCells3dTest.h"
#include "calculation/SmoothedLJForceCalculator.h"
#include "particleContainer/CuboidInitializer.h"

#include <cmath>

CPPUNIT_TEST_SUITE_REGISTRATION(LinkedCells3dTest);

LinkedCells3dTest::LinkedCells3dTest() {

}

LinkedCells3dTest::~LinkedCells3dTest() {
}


void LinkedCells3dTest::setUp() {
	MaterialConfig material(1.0, 1.0, 1.0);
	_config = new CuboidConfiguration(0.6, 0.0, 4, 1.2, material);

	_container_cutoff_1_2 = new LinkedCells(1.20000001, 4.80000004,3);
	_boundaries_cutoff_1_2.push_back(new PeriodicBoundary(*_container_cutoff_1_2, Boundary::X, false));
	_boundaries_cutoff_1_2.push_back(new PeriodicBoundary(*_container_cutoff_1_2, Boundary::X, true));
	_boundaries_cutoff_1_2.push_back(new PeriodicBoundary(*_container_cutoff_1_2, Boundary::Y, false));
	_boundaries_cutoff_1_2.push_back(new PeriodicBoundary(*_container_cutoff_1_2, Boundary::Y, true));
	_boundaries_cutoff_1_2.push_back(new PeriodicBoundary(*_container_cutoff_1_2, Boundary::Z, false));
	_boundaries_cutoff_1_2.push_back(new PeriodicBoundary(*_container_cutoff_1_2, Boundary::Z, true));

	_container_cutoff_1_5 = new LinkedCells(2.3999, 4.7998,3);
	_boundaries_cutoff_1_5.push_back(new PeriodicBoundary(*_container_cutoff_1_5, Boundary::X, false));
	_boundaries_cutoff_1_5.push_back(new PeriodicBoundary(*_container_cutoff_1_5, Boundary::X, true));
	_boundaries_cutoff_1_5.push_back(new PeriodicBoundary(*_container_cutoff_1_5, Boundary::Y, false));
	_boundaries_cutoff_1_5.push_back(new PeriodicBoundary(*_container_cutoff_1_5, Boundary::Y, true));
	_boundaries_cutoff_1_5.push_back(new PeriodicBoundary(*_container_cutoff_1_5, Boundary::Z, false));
	_boundaries_cutoff_1_5.push_back(new PeriodicBoundary(*_container_cutoff_1_5, Boundary::Z, true));

	CuboidInitializer initializer(*_config);
	initializer.initialize(*_container_cutoff_1_2);
	initializer.initialize(*_container_cutoff_1_5);
}

void LinkedCells3dTest::tearDown() {
	delete _config;
	delete _container_cutoff_1_2;
	delete _container_cutoff_1_5;

	for (unsigned int i = 0; i < _boundaries_cutoff_1_2.size(); i++) {
		delete _boundaries_cutoff_1_2[i];
	}

	for (unsigned int i = 0; i < _boundaries_cutoff_1_5.size(); i++) {
		delete _boundaries_cutoff_1_5[i];
	}
}

void LinkedCells3dTest::testPairCutoff_1_2() {
	CPPUNIT_ASSERT_EQUAL(64, _container_cutoff_1_2->getNumParticles());

	_counter = 0;
	_container_cutoff_1_2->traversePairs(*this);
	CPPUNIT_ASSERT_EQUAL(144, _counter);

	for (unsigned int i = 0; i < _boundaries_cutoff_1_2.size(); i++) {
		_boundaries_cutoff_1_2[i]->applyBoundary();
	}

	_counter = 0;
	_container_cutoff_1_2->traversePairs(*this);
	CPPUNIT_ASSERT_EQUAL(225, _counter);

	SmoothedLJForceCalculator calculator(1.0, 1.2000001);
	_container_cutoff_1_2->traversePairs(calculator);
	_referenceForce = 0;
	_container_cutoff_1_2->traverseParticles(*this);
}

void LinkedCells3dTest::testPairCutoff_1_5() {
	CPPUNIT_ASSERT_EQUAL(64, _container_cutoff_1_5->getNumParticles());

	_counter = 0;
	_container_cutoff_1_5->traversePairs(*this);
	CPPUNIT_ASSERT_EQUAL(468, _counter);

	SmoothedLJForceCalculator calculator(1.0, 1.200000001);
	_container_cutoff_1_2->traversePairs(calculator);
	_referenceForce = 0;
	_container_cutoff_1_2->traverseParticles(*this);
}


void LinkedCells3dTest::handleParticlePair(Particle& p1, Particle& p2) {
	//std::cout << " Handle: P1" << p1 << std::endl << "    P2 " << p2 << " count: " << _counter << std::endl;
	_counter = _counter + 1;
}


void LinkedCells3dTest::handleParticle(Particle& p) {
	for (int i = 0; i < 3; i++) {
		CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE(p.toString(), _referenceForce, p.getF()[i], 0.000005);
//		if (fabs(p.getF()[i]) - _referenceForce > 0.0001 ) {
//			std::cout << "particle wrong: " << p << std::endl;
//		}
	}
}
