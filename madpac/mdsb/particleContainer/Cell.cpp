/*
 * Cell.cpp
 *
 * @Date: 14.10.2010
 * @Author: eckhardw
 */

#include "Cell.h"
#include "utils/Assertion.h"


log4cxx::LoggerPtr Cell::logger = log4cxx::Logger::getLogger("LinkedCells.Cell");

Configuration& Cell::config = Configuration::getInstance();


Cell::Cell() : _isBoundaryCell(false), _isHaloCell(false) {
}

Cell::~Cell() {
}


void Cell::addParticle(Particle& p) {
	_particles.push_back(p);
}

void Cell::deleteParticle(Particle* p) {
	std::vector<Particle>::iterator it = _particles.begin();
	while (it != _particles.end()) {
		LOG4CXX_TRACE(logger, "Cell::deleteParticle() searching particle");
		if (p == &(*it)) {
			_particles.erase(it);
			LOG4CXX_DEBUG(logger, "Deleted particle from cell.");
			break;
		}
		it++;
	}
}



void Cell::deleteParticles() {
	_particles.clear();
}

int Cell::getNumParticles() const {
	return _particles.size();
}

Particle& Cell::getParticle(unsigned int index) {
#ifdef DEBUG
	ASSERT(index < _particles.size(), index, _particles.size());
#endif
	return _particles[index];
}

bool Cell::isBoundaryCell() const {
	return _isBoundaryCell;
}

void Cell::setBoundaryCell() {
	_isBoundaryCell = true;
}

bool Cell::isHaloCell() const {
	return _isHaloCell;
}

void Cell::setHaloCell() {
	_isHaloCell = true;
}

utils::Vector<double, 3> Cell::getDomainLength(){
	utils::Vector<double, 3> e = config.getCutoffRadius();
	return e;
}

/*
void Cell::setCutOffRadius(double cutOffRadius) {
	ASSERT(==,cutOffRadius, _config.getCutoffRadius());
	_cutOffRadius = cutOffRadius;
}
*/
void Cell::traverseParticles(ParticleHandler& particleHandler) {

		int numParticles = _particles.size();
		for (int particleIndex = 0; particleIndex < numParticles; particleIndex++) {
			particleHandler.handleParticle(_particles[particleIndex]);
		}
	}

utils::Vector<double, 3>  Cell::getV() {
	utils::Vector<double, 3> v = 0.0;
	for (int i = 0; i < getNumParticles(); i++) {
		v = v + _particles[i].getV();
	}
	v = v * (1.0/(double)getNumParticles());
	return v;
}

double Cell::getNresetU() {
	double u =0.0;
	for (int i = 0; i < getNumParticles(); i++) {
		u += _particles[i].getU();

		_particles[i].setU(0.0);
	}
	//std::cout << "CU"  << isBoundaryCell() <<" "<< isHaloCell()<< " " << u << std::endl;
	return u;
}

void Cell::setV(utils::Vector<double, 3> v) {
	double alpha = 0.02;//0.1; // todo
	double beta = 1.0;
	utils::Vector<double, 3> vd = getV();

	for (int i = 0; i < getNumParticles(); i++) {
		_particles[i].getV() = _particles[i].getV()*beta + alpha * (v-vd);
		if(config.getDimension() == 2)
				_particles[i].getV()[2] = 0;
	}

}

double Cell::getRho() {
	double _cutOffRadius = config.getCutoffRadius();
	double V = _cutOffRadius*_cutOffRadius;
	if(config.getDimension() == 3)
		V *= _cutOffRadius;
	double m = 0.0;
	int numP = getNumParticles();
	if(numP>0)
		m = _particles[0].getM();
//	if(!isHaloCell() && numP*m/V > 0.6)
	//	std::cout <<"m" << m << " V" << V <<  " numP" << numP << " "<< numP*m/V << std::endl;
	return numP*m/V;

}






void Cell::traversePairs(ParticlePairsHandler& particlePairsHandler) {
/*	unsigned int currentCellIndex = calculateCellIndex(x, y, z);
	ASSERT(currentCellIndex < _numCells, currentCellIndex, _numCells);
	Cell& currentCell = _cells[currentCellIndex];
	*/

	int numParticles = _particles.size();

	for (int i = 0; i < numParticles; i++) {
		for (int j = i+1; j < numParticles; j++) {
			if (i != j) {
				Particle& p1 = _particles[i];//currentCell.getParticle(i);
				Particle& p2 = _particles[j];//currentCell.getParticle(j);

#ifdef DEBUG
				LOG4CXX_TRACE(logger, p1.toString());
				LOG4CXX_TRACE(logger, p2.toString());
				LOG4CXX_TRACE(logger, "Distance between p1 and p2: " << ((p1.getX() - p2.getX()).L2Norm()));
#endif


				if ((p1.getX() - p2.getX()).L2Norm() < config.getCutoffRadius()) {
					particlePairsHandler.handleParticlePair(p1, p2);
					LOG4CXX_TRACE(logger, "TraverseCurrentCellPairs: in cutoff radius: " <<  p1.toString());
				}
			}
		}
	}


}
