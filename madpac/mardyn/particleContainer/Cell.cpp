#include "particleContainer/Cell.h"
#include "molecules/Molecule.h"

using namespace std;

Cell::Cell() {
	this->_haloCellState = false;
	this->_boundaryCellState = false;
	this->_innerCellState = false;

	_velocity[0] = -4;
	_velocity[1] = -5;
	_velocity[2] = -6;
}

void Cell::removeAllParticles() {
	this->_particlePointers.clear();
}

void Cell::addParticle(Molecule* particle_ptr) {
	_particlePointers.push_back(particle_ptr);
}

vector<Molecule*>& Cell::getParticlePointers() {
	return this->_particlePointers;
}

void Cell::assingCellToHaloRegion() {
	this->_haloCellState = true;
}

void Cell::assignCellToBoundaryRegion() {
	this->_boundaryCellState = true;
}

void Cell::assignCellToInnerRegion() {
	this->_innerCellState = true;
}

bool Cell::isHaloCell() const {
	return _haloCellState;
}

bool Cell::isBoundaryCell() const {
	return _boundaryCellState;
}

bool Cell::isInnerCell() const {
	return _innerCellState;
}

int Cell::getMoleculeCount() const {
	return _particlePointers.size();
}

bool Cell::deleteMolecule(unsigned long molid) {
	bool found = false;
	vector<Molecule*>::iterator cellit;

	for (cellit = _particlePointers.begin(); cellit != _particlePointers.end(); cellit++) {
		if ((*cellit)->id() == molid) {
			found = true;
			_particlePointers.erase(cellit);
			break;
		}
	}
	return found;
}

void Cell::setVelocity(const double v[3]) {
	for (int i = 0; i < 3; i++) {
		_velocity[i] = v[i];
	}
}

const double* Cell::getVelocity() const {
	return _velocity;
}

void Cell::calcVelocity() {
	vector<Molecule*>::iterator cellit;
	for(int i = 0; i < 3; i++) {
		_velocity[i] = 0;
	}
	for (cellit = _particlePointers.begin(); cellit != _particlePointers.end(); cellit++) {
		for(int i = 0; i < 3; i++) {
			_velocity[i] += (*cellit)->v(i);
		}
	}

	for(int i = 0; i < 3; i++) {
		_velocity[i] /= _particlePointers.size();
	}
}

