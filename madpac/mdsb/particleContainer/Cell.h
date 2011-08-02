/*
 * Cell.h
 *
 * @Date: 14.10.2010
 * @Author: eckhardw
 */

#ifndef CELL_H_
#define CELL_H_

#include <Particle.h>
#include <log4cxx/logger.h>
#include "config/Configuration.h"
#include "particleContainer/ParticleContainer.h"
#include "particleContainer/ParticlePairsHandler.h"
#include "particleContainer/ParticleHandler.h"

class Cell : public ParticleContainer {

public:

	Cell();

	virtual ~Cell();

//	utils::Vector<int, 3> tmp;

	/**
	 * add the particle by value to this cell
	 */
	void addParticle(Particle& p);

	int getNumParticles() const;

	/**
	 * return the particle at the specified index.
	 * Only in DEBUG-Mode, the index is checked.
	 */
	Particle& getParticle(unsigned int index);

	void deleteParticle(Particle* p);

	/**
	 * delete all particles from this cell.
	 */
	void deleteParticles();

	bool isBoundaryCell() const;

	/**
	 * Set this cell to be a boundary cell.
	 */
	void setBoundaryCell();

	bool isHaloCell() const;

	/**
	 * Set this cell to be a halo cell.
	 */
	void setHaloCell();

	void traverseParticles(ParticleHandler& particleHandler);
	void traversePairs(ParticlePairsHandler& particlePairsHandler);
	utils::Vector<double, 3>  getV();
	void setV(utils::Vector<double, 3> v);
	double getRho();
	double getNresetU();


	utils::Vector<double, 3> getDomainLength();


//	void setCutOffRadius(double cutOffRadius);


	//todo:
	void traverseBoundaryParticles(ParticleHandler& particleHandler, Boundary::axis_type axis, bool up) {}

	void traverseHaloParticles(ParticleHandler& particleHandler, Boundary::axis_type axis, bool up){}

	void deleteHaloParticles() {}


	void deleteHaloParticles(Boundary::axis_type axis, bool up){}


	/**
	 * sort the molecules into the right cells again after they have moved.
	 */
	void update() {}

	void setGV(utils::Vector<double, 3> gv) {

	}

private:

	std::vector<Particle> _particles;

	/**
	 * indicate if this cell is a boundary cell.
	 */
	bool _isBoundaryCell;

	/**
	 * indicate if this cell is a halo cell.
	 */
	bool _isHaloCell;

//	double _cutOffRadius;

	static log4cxx::LoggerPtr logger;
	static Configuration& config;



};

#endif /* CELL_H_ */
