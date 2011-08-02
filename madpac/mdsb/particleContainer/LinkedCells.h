/*
 * LinkedCells.h
 *
 * @Date: 11.10.2010
 * @Author: eckhardw
 */

#ifndef LINKEDCELLS_H_
#define LINKEDCELLS_H_

#include "Particle.h"
#include "particleContainer/ParticleContainer.h"
#include "particleContainer/ParticlePairsHandler.h"
#include "particleContainer/ParticleHandler.h"
#include "particleContainer/Cell.h"
#include "config/Configuration.h"
#include "particleContainer/MaxwellBoltzmannDistribution.h"

#include "thermostat/Thermostat.h"
#include "utils/UsherContainer.h"


#include "calculation/UCalculator.h"
#include "calculation/LJForceCalculator.h"
#include "utils/Usher.h"

#include <log4cxx/logger.h>

#include <iostream>



/**
 * Implementation of the Linked Cells Datastructure.
 *
 * The container has only a size, it's left lower front corner is implicitly (0/0/0).
 * It contains also a layer of halo cells, which are outside the domain.
 *
 * boundary: the boundary cells, but still inside the domain
 * halo: outside of the domain
 *
 */
class LinkedCells : public UsherContainer, public ParticleContainer {

public:

	/**
	 * length[x][y][z]
	 */
	LinkedCells(double cutOffRadius, utils::Vector<double, 3> length, int dim);

	virtual ~LinkedCells();

	/**
	 * add particle by value to this container (i.e. the argument
	 * may be deleted or changed any other way after adding)
	 *
	 * Particles may be outside of the domain, then they are stored to
	 * the ghost layer.
	 */
	void addParticle(Particle& p);

	/**
	 * Number of the particles, excluding the particles in the halo.
	 */
	int getNumParticles() const;

	/**
	 * Traverse all particles inside the domain (i.e. excluding the particles outside).
	 */
	void traverseParticles(ParticleHandler& particleHandler);
	void traverseParticles(Particle& p, ParticlePairsHandler& particleHandler);
	void cellwiseThermostat(Thermostat* thermostat, int iteration);


	/**
	 * Traverse all pairs of particles according to the linked cells
	 */
	void traversePairs(ParticlePairsHandler& particlePairsHandler);

	std::string toString() const;

	/**
	 * Traverse all boundary particles, i.e. the particles which are in the
	 * cells next to the border of the computational domain.
	 */
	//void traverseBoundaryParticles(ParticleHandler& particleHandler);

	void traverseBoundaryParticles(ParticleHandler& particleHandler, Boundary::axis_type axis, bool up);

	void traverseBoundaryParticles(ParticleHandler& particleHandler, Boundary::axis_type axis, bool up, int mode);


	void traverseHaloParticles(ParticleHandler& particleHandler, Boundary::axis_type axis, bool up);


	void deleteHaloParticles();

	void deleteHaloParticles(Boundary::axis_type axis, bool up);
	void getSphere(std::vector<utils::Vector<int, 3> >& v, int delta);
	void getSphere(std::vector<utils::Vector<int, 3> >& v, int deltaA, int deltaB);

	/**
	 * sort the molecules into the right cells again after they have moved.
	 */
	void update();

	/**
	 * returns the size / length of the domain.
	 */
	utils::Vector<double, 3> getDomainLength();

	/**
	 * returns the number of cells per dimension.
	 */
	utils::Vector<int, 3> getNumCellsPerDimension();

	double getRho(utils::Vector<int, 3> cell);
	void setRho(double rho, utils::Vector<int, 3> cell);
	utils::Vector<double, 3> getV(utils::Vector<int, 3> cell);
	void setV(utils::Vector<double, 3> v, utils::Vector<int, 3> cell);
	bool addP();
	double getU0();
	double getU();
	double getRho();
	void delP();
	void delP(utils::Vector<int, 3> cell);
	void setU0(double u0);
	bool addP(utils::Vector<int, 3>& cell);
	void calcU(Particle& p);
	void calcF(Particle& p);
	void calcV(Particle& p);

	double getCutOffRadius();

	void setGV(utils::Vector<double, 3> gv) {
	  _gV = gv;
	}




private:
	bool addP(utils::Vector<double, 3>& minX,utils::Vector<double, 3>& maxX);
	utils::Vector<double, 3> getRandPoint(utils::Vector<double, 3>& minX,utils::Vector<double, 3>& maxX);
	utils::Vector<double, 3> getMinX(utils::Vector<int, 3>& cell);
	utils::Vector<double, 3> getMaxX(utils::Vector<int, 3>& cell);
	Usher *usher;
	EnergyCalculator _energyCalculator;
	UCalculator ucalc;
	utils::Vector<double, 3> _gV;



	/**
	 * Determine if the cell denoted by coordinates is in the halo region.
	 */
	//bool isInHalo(utils::Vector<int, 3>& coordinates, Boundary::axis_type axis, bool up);

	/**
	 * Determine if the cell denoted by coordinates is on the boundary.
	 */
	//bool isOnBoundary(utils::Vector<int, 3>& coordinates, Boundary::axis_type axis, bool up);

	bool isOnBoundary(utils::Vector<int, 3>& coordinates, Boundary::axis_type axis, bool up, int mode);


	/**
	 * Calculate the cell index of a cell, given its coordinates
	 * (the coordinates also counting the halo cells)
	 *
	 * @Note: this method performs no error checking, as more descriptive error
	 *        messages are possible from the context where this method was called.
	 */
	unsigned int calculateCellIndex(int x, int y, int z) const;

	void traverseCurrentCellPairs(ParticlePairsHandler& particlePairsHandler, int x, int y, int z);

	void traverseNeighbouringCellPairs(ParticlePairsHandler& particlePairsHandler, int x, int y, int z);

	void initializeNeighbourPairOffsets();

	void initializeCellStatus();

	/**
	 * The cutoff radius (which also determines the length of the cells).
	 */
	double _cutOffRadius;

	//double _U0;

	/**
	 * the length of the domain. 0:x 1:y 2:z
	 */
	utils::Vector<double, 3> _length;

	/**
	 * 0:x 1:y 2:z
	 */
	utils::Vector<int, 3> _numCellsPerDim;

	/**
	 * The total number of cells, including halo cells.
	 */
	unsigned int _numCells;

	int _dim;


	/**
	 * Linearized array with x inner, z outer
	 * 0:x 1:y 2:z
	 */
	Cell* _cells;


	static log4cxx::LoggerPtr logger;

	/**
	 * Number of forward neighbours, i.e. the number of cells, for or with which
	 * the molecule pairs have to be calculated.
	 */
	static const int numNeighbourPairOffsets = 13;

	/**
	 * The offsets for the neighbouring cells.
	 */
	int _neighbourPairOffsets[numNeighbourPairOffsets][2];



};


std::ostream& operator<<(std::ostream& stream, LinkedCells& container);


#endif /* LINKEDCELLS_H_ */
