/*
 * LinkedCellsTest.cpp
 *
 * @Date: 13.10.2010
 * @Author: eckhardw
 */

#include "LinkedCellsTest.h"
#include "utils/Vector.h"

using namespace utils;

CPPUNIT_TEST_SUITE_REGISTRATION(LinkedCellsTest);

LinkedCellsTest::LinkedCellsTest() {
}

LinkedCellsTest::~LinkedCellsTest() {
}


void LinkedCellsTest::setUp() {
	Vector<double, 3> length(3.0);
	_container = new LinkedCells(1.0, length,3);

	for (int i = 0; i < 4; i++) {
		Particle mol(i);
		mol.getX() = 1.0 + (double(i) + 1.) * 0.1;
		_container->addParticle(mol);
	}

	Particle mol1(4);
	// particle 4 gets sorted into (1/1/1)
	mol1.getX() = 0.6;
	_container->addParticle(mol1);

	Particle mol2(5);
	mol2.getX() = 0.6;
	mol2.getX()[0] = -0.2;
	_container->addParticle(mol2);


	for (int i = 0; i < 6; i++) {
		_singleIndices[i] = false;
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			_pairIndices[i][j] = false;
		}
	}

	_test_update = false;
}


void LinkedCellsTest::tearDown() {
	delete _container;
}


void LinkedCellsTest::testContainerSetup() {
	CPPUNIT_ASSERT_EQUAL(5, _container->getNumParticles());
	utils::Vector<int, 3> dimensions(3);
	CPPUNIT_ASSERT_EQUAL(dimensions, _container->getNumCellsPerDimension());
}


void LinkedCellsTest::testIteration() {
	_container->traverseParticles(*this);

	for (int i = 0; i < 5; i++) {
		std::stringstream str;
		bool result = _singleIndices[i];
		str << "index is " << i << ". with result: " << result;
		CPPUNIT_ASSERT_EQUAL_MESSAGE( str.str(),  true, result);
	}

	// the last particle is in a halo cell and thus should not be traversed
	CPPUNIT_ASSERT(_singleIndices[5] == false);
}


void LinkedCellsTest::testPairs() {
	_container->traversePairs(*this);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i != j) {
				CPPUNIT_ASSERT(_pairIndices[i][j] == true);
			} else {
				CPPUNIT_ASSERT(_pairIndices[i][j] == false);
			}
		}
	}

	// interaktion: 4 - 0; 4 - 5; sonst false
	for (int i = 1; i < 3; i++) {
		for (int j = 4; j < 6; j++) {
			CPPUNIT_ASSERT(_pairIndices[i][j] == false);
			CPPUNIT_ASSERT(_pairIndices[j][i] == false);
		}
	}
	CPPUNIT_ASSERT(_pairIndices[4][5] == true);
	CPPUNIT_ASSERT(_pairIndices[4][0] == true);
}


void LinkedCellsTest::testBoundaryIteration() {
	_container->traverseBoundaryParticles(*this, (Boundary::axis_type)0, false);
	for (int i = 0; i < 6; i++) {
		if (i == 4 ) {
			CPPUNIT_ASSERT(_singleIndices[i] == true);
		} else {
			CPPUNIT_ASSERT(_singleIndices[i] == false);
		}
	}
	tearDown();

	setUp();
	_container->traverseBoundaryParticles(*this, (Boundary::axis_type)1, false);
	for (int i = 0; i < 6; i++) {
		if (i == 4 ) {
			CPPUNIT_ASSERT(_singleIndices[i] == true);
		} else {
			CPPUNIT_ASSERT(_singleIndices[i] == false);
		}
	}
	tearDown();
	setUp();
	_container->traverseBoundaryParticles(*this, (Boundary::axis_type)2, false);
	for (int i = 0; i < 6; i++) {
		if (i == 4 ) {
			CPPUNIT_ASSERT(_singleIndices[i] == true);
		} else {
			CPPUNIT_ASSERT(_singleIndices[i] == false);
		}
	}
	tearDown();
	setUp();

	for (int i = 0; i < 3; i++) {
		_container->traverseBoundaryParticles(*this, (Boundary::axis_type)i, true);
	}
	for (int i = 0; i < 6; i++) {
		CPPUNIT_ASSERT(_singleIndices[i] == false);
	}
}

void LinkedCellsTest::testUpdate() {

	//_container->deleteHaloParticles();
	CPPUNIT_ASSERT_EQUAL(5, _container->getNumParticles());
	//CPPUNIT_FAIL("Revise this test!");
	for (int i = 0; i < 3; i++) {
		_container->traverseBoundaryParticles(*this, (Boundary::axis_type)i, false);
		_container->traverseBoundaryParticles(*this, (Boundary::axis_type)i, true);
	}
	for (int i = 0; i < 6; i++) {
		if (i == 4 ) {
			CPPUNIT_ASSERT(_singleIndices[i] == true);
		} else {
			CPPUNIT_ASSERT(_singleIndices[i] == false);
		}
	}

	// set particle position and update
	for (int i = 0; i < 6; i++) {
		_singleIndices[i] = false;
	}
	_test_update = true;
	_container->traverseParticles(*this);
	_container->update();

	_test_update = false;

	//CPPUNIT_FAIL("Revise this test!");
	for (int i = 0; i < 3; i++) {
		_container->traverseBoundaryParticles(*this, (Boundary::axis_type)i, false);
		_container->traverseBoundaryParticles(*this, (Boundary::axis_type)i, true);
	}
	CPPUNIT_ASSERT_EQUAL(5, _container->getNumParticles());
	for (int i = 0; i < 6; i++) {
		if (i == 2 || i == 4 ) {
			CPPUNIT_ASSERT(_singleIndices[i] == true);
		} else {
			CPPUNIT_ASSERT(_singleIndices[i] == false);
		}
	}
}

void LinkedCellsTest::handleParticle(Particle& p) {

	if (_test_update) {
		if (p.getType() == 2) {
			// particle with index 2 has original coordinates 1.3/1.3/1.3 and lives in cell (2/2/2).
			// Translate it to 2.5 / 1.3 / 1.3 in cell (3 / 2 / 2).
			p.getX()[0] = 2.5;
		}
	} else {
		int id = p.getType();
		_singleIndices[id] = true;
	}
}


void LinkedCellsTest::handleParticlePair(Particle& p1, Particle& p2) {
	int id1 = p1.getType();
	int id2 = p2.getType();
	_pairIndices[id1][id2] = true;
	_pairIndices[id2][id1] = true;
}

