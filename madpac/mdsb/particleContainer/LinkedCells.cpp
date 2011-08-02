/*
 * LinkedCells.cpp
 *
 * @Date: 11.10.2010
 * @Author: eckhardw
 */

#include "utils/Vector.h"
#include "utils/Assertion.h"
#include "LinkedCells.h"



#include "boundary/ForceBoundary.h"
#include "particleContainer/MaxwellBoltzmannDistribution.h"


#include <sstream>
#include <cmath>


using namespace std; // { using namespace __gnu_cxx; }

log4cxx::LoggerPtr LinkedCells::logger = log4cxx::Logger::getLogger("LinkedCells");



LinkedCells::LinkedCells(double cutOffRadius, utils::Vector<double, 3> length, int dim) : _cutOffRadius(cutOffRadius), _length(length), _dim(dim) {
	usher = new Usher(this, 1.0,_dim);
	_gV = 0.0;

	LOG4CXX_INFO(logger, "Constructing LinkedCells with cutoff-radius " << _cutOffRadius);

	for (int i = 0; i < 3; i++) {
		double numCells = _length[i] / _cutOffRadius;
		LOG4CXX_DEBUG(logger, "numCells in double precision at " << i << ":  " << numCells);
		_numCellsPerDim[i] = ceil(numCells-pow(10.0,-10.0));
		if (abs(((double)_numCellsPerDim[i]) * cutOffRadius - length[i]) >pow(10.0,-10.0) ) {
			LOG4CXX_ERROR(logger, "Cutoff-Radius and size of domain don't result in integer cell numbers! Cutoff: " << cutOffRadius << " numCells: " << _numCellsPerDim[i]);
			exit(1);
		}

	}
	int numInnerCells = _numCellsPerDim[0] * _numCellsPerDim[1] * _numCellsPerDim[2];
	LOG4CXX_INFO(logger, "#cells in domain: " << numInnerCells);
	if (numInnerCells <=0) {
		LOG4CXX_ERROR(logger, "Effectivly there are no cells in domain!");
		exit(1);
	}
	LOG4CXX_INFO(logger, "#cells per Dimension " << _numCellsPerDim.toString());
	_numCells = (_numCellsPerDim[0]+2) * (_numCellsPerDim[1]+2) * (_numCellsPerDim[2]+2);
	LOG4CXX_INFO(logger, "#cells total " << _numCells);
	_cells = new Cell[_numCells];

	initializeNeighbourPairOffsets();
	initializeCellStatus();

}


LinkedCells::~LinkedCells() {
	delete[] _cells;
}


void LinkedCells::addParticle(Particle& p) {
	int x = p.getX()[0] / _cutOffRadius + 1;
	int y = p.getX()[1] / _cutOffRadius + 1;
	int z = p.getX()[2] / _cutOffRadius + 1;
	LOG4CXX_DEBUG(logger, "Adding Particle to cell (" << x << "," << y << "," << z << ")" << p.toString());

	unsigned int index = calculateCellIndex(x, y, z);
	ASSERT3(index < _numCells, index, _numCells, p.toString());
	LOG4CXX_TRACE(logger, "Index: " << index);

	if(0> index || index >= _numCells) {
		UCalculator ucalc;

		traversePairs(ucalc);
		std::cout << "W!!!!!!!!  I "<< index << "P: " << p.toString()<< std::endl;
	}else
		_cells[index].addParticle(p);
	LOG4CXX_TRACE(logger, "Add finished.");
}


int LinkedCells::getNumParticles() const {
	int count = 0;
//	for (int k = 0; k < _numCellsPerDim[2] + 2; k++) {
//			for (int j = 0; j < _numCellsPerDim[1] + 2; j++) {
//				for (int i = 0; i < _numCellsPerDim[0] + 2; i++) {

	for (int k = 1; k < _numCellsPerDim[2] + 1; k++) {
		for (int j = 1; j < _numCellsPerDim[1] + 1; j++) {
			for (int i = 1; i < _numCellsPerDim[0] + 1; i++) {
				unsigned int index = calculateCellIndex(i, j, k);
#ifdef DEBUG
				ASSERT(index < _numCells, index, _numCells);
				LOG4CXX_TRACE(logger, "GetNumParticles: index is " << index);
#endif
				count += _cells[index].getNumParticles();
			}
		}
	}
	return count;
}


void LinkedCells::traverseParticles(ParticleHandler& particleHandler) {
	for (int i = 0; i < (int)_numCells; i++) {

		if (_cells[i].isHaloCell()) {
			continue;
		}

		LOG4CXX_TRACE(logger, "TraverseParticles of cell " << i << " size: " << _cells[i].getNumParticles() << " isHalo: " << _cells[i].isHaloCell());
		_cells[i].traverseParticles(particleHandler);
	}
}

void LinkedCells::cellwiseThermostat(Thermostat* thermostat, int iteration) {
	for (int i = 0; i < (int)_numCells; i++) {

		if (_cells[i].isHaloCell()) {
			continue;
		}

	//	LOG4CXX_TRACE(logger, "TraverseParticles of cell " << i << " size: " << _cells[i].getNumParticles() << " isHalo: " << _cells[i].isHaloCell());
		thermostat->applyThermostat(_cells[i],iteration);

	}
}


void LinkedCells::traverseParticles(Particle& p, ParticlePairsHandler& particleHandler) {
	utils::Vector<int, 3> cell;
	cell[0] = p.getX()[0] / _cutOffRadius + 1;
	 cell[1] = p.getX()[1] / _cutOffRadius + 1;
	 cell[2] = p.getX()[2] / _cutOffRadius + 1;

	utils::Vector<int, 27> cells;



	int index=0;
		for(int k = -1; k < 2; k++)
			for (int j = -1; j <  2; j++)
				for (int i = -1; i <  2; i++) {
						cells[index] = calculateCellIndex(cell[0]+i, cell[1]+j, cell[2]+k);
						index++;
				}

	//	std::cout << index << std::endl;
if(false) {
		 if (_cells[cells[13]].isBoundaryCell()) {
			for(int axis=0;axis<_dim;axis++) {
				double r_w =_cutOffRadius;
				if (cell[axis] == _numCellsPerDim[axis]) {
					r_w = abs(p.getX()[axis] - getDomainLength()[axis]);
				} else if(cell[axis] == 0){
					r_w = p.getX()[axis];
				}
				if(r_w<_cutOffRadius) {
					p.getF()[axis] = p.getF()[axis] + ForceBoundary::calcFm(r_w);
					p.setU(p.getU() + ForceBoundary::calcUm(r_w));
				}
			}
		}
}
	for (int i = 0; i < 27; i++) {
		//std::cout << "cell:" <<cells[i] << std::endl;
	/*	if (_cells[cells[i]].isHaloCell()) {

				int axis = -1;
				switch(i) {
				case 4:
				case 22:
					axis = 2;
					break;
				case 10:
				case 16:
					axis = 1;
					break;
				case 12:
				case 14:
					axis = 0;
					break;

				}
				if(axis>-1) {
					bool up = true;
					if(i <13)
						up = false;
					double r_w =_cutOffRadius;
					if (up) {
						r_w = abs(p.getX()[axis] - getDomainLength()[axis]);
					} else {
						r_w = p.getX()[axis];
					}
					p.getF()[axis] = p.getF()[axis] + ForceBoundary::calcFm(r_w);
					p.setU(p.getU() + ForceBoundary::calcUm(r_w));
				}
				continue;

		}*/
		if(false) {
		if (_cells[cells[i]].isHaloCell()) {
			continue;
		}

		}

		int numParticles = _cells[cells[i]].getNumParticles();
		LOG4CXX_TRACE(logger, "TraverseParticles of cell " << cells[i] << " size: " << numParticles << " isHalo: " << _cells[cells[i]].isHaloCell());
		for (int particleIndex = 0; particleIndex < numParticles; particleIndex++) {
			Particle& p2 = _cells[cells[i]].getParticle(particleIndex);
			if ((p.getX() - p2.getX()).L2Norm() < _cutOffRadius) {
				particleHandler.handleParticlePair(p, p2);
			}
		}
	}
}

/**
 * Documentation and nice Picture: iterate over forward-cells (therefor the unsymmetry in the cell loop
 */
void LinkedCells::traversePairs(ParticlePairsHandler& particlePairsHandler) {
	for (int k = 0; k < _numCellsPerDim[2] + 1; k++) {
		for (int j = 0; j < _numCellsPerDim[1] + 1; j++) {
			for (int i = 0; i < _numCellsPerDim[0] + 1; i++) {
				traverseCurrentCellPairs(particlePairsHandler, i, j, k);
				LOG4CXX_TRACE(logger, "TraversePairs: currentCell finished ("<<i<<","<<j<<","<<k<<")");
				traverseNeighbouringCellPairs(particlePairsHandler, i, j, k);
				LOG4CXX_TRACE(logger, "TraversePairs: neighbouringCells finished ("<<i<<","<<j<<","<<k<<")" );
			}
		}
	}
}


void LinkedCells::traverseCurrentCellPairs(ParticlePairsHandler& particlePairsHandler, int x, int y, int z) {
	unsigned int currentCellIndex = calculateCellIndex(x, y, z);
	ASSERT(currentCellIndex < _numCells, currentCellIndex, _numCells);
	_cells[currentCellIndex].traversePairs(particlePairsHandler);
}


void LinkedCells::traverseNeighbouringCellPairs(ParticlePairsHandler& particlePairsHandler, int x, int y, int z) {
	unsigned int currentCellIndex = calculateCellIndex(x, y, z);
	ASSERT(currentCellIndex < _numCells, currentCellIndex, _numCells);

	for (int i = 0; i < numNeighbourPairOffsets; i++) {
#ifdef DEBUG
		LOG4CXX_TRACE(logger, "TraversePairs: neighbours for cell ("<<x<<","<<y<<","<<z<<") index: " << currentCellIndex );
		LOG4CXX_TRACE(logger, "TraversePairs: neighbourCellPair: (" << (currentCellIndex + _neighbourPairOffsets[i][0]) << ","<< (currentCellIndex + _neighbourPairOffsets[i][1]) << ")");
		ASSERT(currentCellIndex + _neighbourPairOffsets[i][0] < _numCells, currentCellIndex + _neighbourPairOffsets[i][0], _numCells);
		ASSERT(currentCellIndex + _neighbourPairOffsets[i][1] < _numCells, currentCellIndex + _neighbourPairOffsets[i][1], _numCells);
#endif
		Cell& firstCell = _cells[currentCellIndex + _neighbourPairOffsets[i][0]];
		int numParticles = firstCell.getNumParticles();

		Cell& secondCell = _cells[currentCellIndex + _neighbourPairOffsets[i][1]];
		int numNeighbouringParticles = secondCell.getNumParticles();

		// iterate over all particle pairs
		for (int l = 0; l < numParticles; l++) {
			for (int m = 0; m < numNeighbouringParticles; m++) {
				Particle& p1 = firstCell.getParticle(l);
				Particle& p2 = secondCell.getParticle(m);
#ifdef DEBUG
				LOG4CXX_TRACE(logger, p1.toString());
				LOG4CXX_TRACE(logger, p2.toString());
				LOG4CXX_TRACE(logger, "Distance between p1 and p2: " << ((p1.getX() - p2.getX()).L2Norm()));
#endif
				if ((p1.getX() - p2.getX()).L2Norm() < _cutOffRadius) {
					particlePairsHandler.handleParticlePair(p1, p2);
				}
			}
		}
	}
}

std::string LinkedCells::toString() const {
	std::stringstream stream;
	for (int k = 1; k < _numCellsPerDim[2] + 2; k++) {
		for (int j = 1; j < _numCellsPerDim[1] + 2; j++) {
			for (int i = 1; i < _numCellsPerDim[0] + 2; i++) {
				unsigned int index = calculateCellIndex(i, j, k);
				ASSERT(index < _numCells, index, _numCells);
				int numParticles = _cells[index].getNumParticles();
				//stream << "TraverseParticles of cell " << index << " size: " << numParticles;
				for (int particleIndex = 0; particleIndex < numParticles; particleIndex++) {
					stream << (_cells[index].getParticle(particleIndex)).toString();
				}
			}
		}
	}
	return stream.str();
}



void LinkedCells::update() {

	for (int k = 1; k < _numCellsPerDim[2] + 2; k++) {
		for (int j = 1; j < _numCellsPerDim[1] + 2; j++) {
			for (int i = 1; i < _numCellsPerDim[0] + 2; i++) {

				unsigned int index = calculateCellIndex(i, j, k);
				ASSERT(index < _numCells, index, _numCells);
				int numParticles = _cells[index].getNumParticles();

				int particleIndex = 0;
				while ( particleIndex < numParticles) {
					Particle& p = _cells[index].getParticle(particleIndex);
					int x = p.getX()[0] / _cutOffRadius + 1;
					int y = p.getX()[1] / _cutOffRadius + 1;
					int z = p.getX()[2] / _cutOffRadius + 1;

					if (x != i || y != j || z != k) {
					LOG4CXX_TRACE(logger, "Moving Particle " << p.toString() << "from ("<<i <<","<<j<<","<<k << ") to ("<<x <<","<<y<<","<< z<<")");
						addParticle(p);
						_cells[index].deleteParticle(&p);
						numParticles--;
					} else {
						particleIndex++;
					}
				}
			}
		}
	}
}

void LinkedCells::deleteHaloParticles() {
	for (int i = 0; i < (signed int) _numCells; i++) {
		if (_cells[i].isHaloCell()) {
			_cells[i].deleteParticles();
		}
	}
}

void LinkedCells::deleteHaloParticles(Boundary::axis_type axis, bool up) {
	utils::Vector<int, 3> counter = 0;

	LOG4CXX_TRACE(logger, "CellsPerDim: " << _numCellsPerDim.toString());

	for (counter[2] = 0; counter[2] < _numCellsPerDim[2] + 2; counter[2]++) {
		for (counter[1] = 0; counter[1] < _numCellsPerDim[1] + 2; counter[1]++) {
			for (counter[0] = 0; counter[0] < _numCellsPerDim[0] + 2; counter[0]++) {

				if (isOnBoundary(counter, axis, up, -1)) {
					unsigned int index = calculateCellIndex(counter[0], counter[1], counter[2]);
					ASSERT(index < _numCells, index, _numCells);
					LOG4CXX_TRACE(logger, "deleteHaloParticles at axis " << axis << " up: " << up << " at coordinates: "<<counter.toString() );
					_cells[index].deleteParticles();
				}
			}
		}
	}
}

bool LinkedCells::isOnBoundary(utils::Vector<int, 3>& coordinates, Boundary::axis_type axis, bool up, int mode) {
	if (up) {
		if (coordinates[axis] == _numCellsPerDim[axis] - mode) {
			return true;
		} else {
			return false;
		}
	} else {
		if (coordinates[axis] == 1 + mode) {
			return true;
		} else {
			return false;
		}
	}
}

/**
 * For the periodic boundaries to work, they have to be applied in the order x, y, z
 */
void LinkedCells::traverseBoundaryParticles(ParticleHandler& particleHandler, Boundary::axis_type axis, bool up) {
	LinkedCells::traverseBoundaryParticles(particleHandler, axis, up, 0);
}

void LinkedCells::traverseBoundaryParticles(ParticleHandler& particleHandler, Boundary::axis_type axis, bool up, int mode) {

	LOG4CXX_DEBUG(logger, "TraverseBoundaryParticles of axis: " << axis << " up: " << up);

	utils::Vector<int, 3> startIndex = 1+mode;

	utils::Vector<int, 3> endIndex = _numCellsPerDim;
	endIndex[0] -= mode;
	endIndex[1] -= mode;
	endIndex[2] -= mode;
	if (axis != Boundary::X) {
		startIndex[0] = 0;
		endIndex[0] = _numCellsPerDim[0]+1;

		// equivalent to axis == Z
		if (axis != Boundary::Y) {
			startIndex[1] = 0;
			endIndex[1] = _numCellsPerDim[1]+1;
		}

	}
	if(_dim == 2) {
		startIndex[2] = 1;
		endIndex[2] = startIndex[2];
	}

	utils::Vector<int, 3> counter;
	for (counter[2] = startIndex[2]; counter[2] < endIndex[2] + 1; counter[2]++) {
		for (counter[1] = startIndex[1]; counter[1] < endIndex[1] + 1; counter[1]++) {
			for (counter[0] = startIndex[0]; counter[0] < endIndex[0] + 1; counter[0]++) {
				if (isOnBoundary(counter, axis, up, mode)) {
					int index = calculateCellIndex(counter[0], counter[1], counter[2]);
					LOG4CXX_DEBUG(logger, "TraverseBoundaryParticles of cell " << counter.toString() << " size: " << _cells[index].getNumParticles());
					for (int i = 0; i < _cells[index].getNumParticles(); i++) {
						particleHandler.handleParticle(_cells[index].getParticle(i));
					}
				}
			}
		}
	}
}

void LinkedCells::getSphere(std::vector<utils::Vector<int, 3> >& v, int deltaA, int deltaB) {
	//std::vector<utils::Vector<int, 3> > v;
	//container->sphereSelector(tmp,-1);
	for(int i = deltaA;i<=deltaB;i++)
		getSphere(v, i);
	std::sort(v.begin(),v.end());
	/*
	std::cout << tmp.size() << std::endl;
	utils::Vector<int, 3> last;
	last = tmp[0];
	for(int i=1;i<tmp.size();i++) {
		if(last == tmp[i]){
			tmp.erase(tmp.begin()+i);
			i--;
		}
		else
			last = tmp[i];
	}
	std::cout << tmp.size() << std::endl;
*/
}


void LinkedCells::getSphere(std::vector<utils::Vector<int, 3> >& v, int delta) {

	utils::Vector<int, 3> startIndex = 1+delta;
	utils::Vector<int, 3> endIndex = _numCellsPerDim;
	endIndex[0] -= delta;
	endIndex[1] -= delta;
	endIndex[2] -= delta;
	int dim = 2;//_dim;//todo
	if(dim == 2) {
		startIndex[2] = 1;
		endIndex[2] = startIndex[2];
	}
	int i;
	bool b;

	utils::Vector<int, 3> counter;
	for (counter[2] = startIndex[2]; counter[2] < endIndex[2] + 1; counter[2]++) {
		for (counter[1] = startIndex[1]; counter[1] < endIndex[1] + 1; counter[1]++) {
			for (counter[0] = startIndex[0]; counter[0] < endIndex[0] + 1; counter[0]++) {
				b = false;
				for(i=0;i<dim;i++)
					b |= isOnBoundary(counter, (Boundary::axis_type)i, true, delta) || isOnBoundary(counter, (Boundary::axis_type)i, false, delta);
				if (b) {					int index = calculateCellIndex(counter[0], counter[1], counter[2]);
					v.push_back(counter);
				}
			}
		}
	}
}


void LinkedCells::traverseHaloParticles(ParticleHandler& particleHandler, Boundary::axis_type axis, bool up) {
	LinkedCells::traverseBoundaryParticles(particleHandler, axis, up, -1);
}


utils::Vector<double, 3> LinkedCells::getDomainLength() {
	return _length;
}


utils::Vector<int, 3> LinkedCells::getNumCellsPerDimension() {
	return _numCellsPerDim;
}


unsigned int LinkedCells::calculateCellIndex(int x, int y, int z) const {
	unsigned int index = z * (_numCellsPerDim[1]+2) * (_numCellsPerDim[0]+2) + y * (_numCellsPerDim[0]+2) + x;
	return index;
}


void LinkedCells::initializeCellStatus() {
	for (int k = 0; k < _numCellsPerDim[2] + 2; k++) {
		for (int j = 0; j < _numCellsPerDim[1] + 2; j++) {
			for (int i = 0; i < _numCellsPerDim[0] + 2; i++) {
				unsigned int index = calculateCellIndex(i, j, k);
				if (i == 0 || j == 0 || k == 0 || i == _numCellsPerDim[0]+1 || j == _numCellsPerDim[1]+1 || k == _numCellsPerDim[2]+1) {
					unsigned int index = calculateCellIndex(i, j, k);
					ASSERT(index < _numCells, index, _numCells);
					_cells[index].setHaloCell();
				} else if (i == 1 || j == 1 || k == 1 || i == _numCellsPerDim[0] || j == _numCellsPerDim[1] || k == _numCellsPerDim[2]) {
					int index = calculateCellIndex(i, j, k);
					_cells[index].setBoundaryCell();
				}

			}
		}
	}
}

void LinkedCells::initializeNeighbourPairOffsets() {
	_neighbourPairOffsets[0][0] = 0;
	_neighbourPairOffsets[0][1] = calculateCellIndex(1, 0, 0);
	_neighbourPairOffsets[1][0] = 0;
	_neighbourPairOffsets[1][1] = calculateCellIndex(1, 1, 0);
	_neighbourPairOffsets[2][0] = 0;
	_neighbourPairOffsets[2][1] = calculateCellIndex(0, 1, 0);
	_neighbourPairOffsets[3][0] = 0;
	_neighbourPairOffsets[3][1] = calculateCellIndex(0, 0, 1);
	_neighbourPairOffsets[4][0] = 0;
	_neighbourPairOffsets[4][1] = calculateCellIndex(1, 0, 1);
	_neighbourPairOffsets[5][0] = 0;
	_neighbourPairOffsets[5][1] = calculateCellIndex(0, 1, 1);
	_neighbourPairOffsets[6][0] = 0;
	_neighbourPairOffsets[6][1] = calculateCellIndex(1, 1, 1);
	_neighbourPairOffsets[7][0] = calculateCellIndex(1, 0, 0);
	_neighbourPairOffsets[7][1] = calculateCellIndex(0, 1, 0);
	_neighbourPairOffsets[8][0] = calculateCellIndex(1, 0, 0);
	_neighbourPairOffsets[8][1] = calculateCellIndex(0, 1, 1);
	_neighbourPairOffsets[9][0] = calculateCellIndex(1, 0, 0);
	_neighbourPairOffsets[9][1] = calculateCellIndex(0, 0, 1);
	// our new neighbours ;)
	_neighbourPairOffsets[10][0] = calculateCellIndex(0, 1, 0);
	_neighbourPairOffsets[10][1] = calculateCellIndex(1, 0, 1);
	_neighbourPairOffsets[11][0] = calculateCellIndex(0, 1, 0);
	_neighbourPairOffsets[11][1] = calculateCellIndex(0, 0, 1);
	_neighbourPairOffsets[12][0] = calculateCellIndex(1, 1, 0);
	_neighbourPairOffsets[12][1] = calculateCellIndex(0, 0, 1);
}

std::ostream& operator<<(std::ostream& stream, LinkedCells& container) {
	stream << container.toString();
	return stream;
}

double LinkedCells::getRho(utils::Vector<int, 3> cell) {
	int index = calculateCellIndex(cell[0],cell[1],cell[2]);
	return _cells[index].getRho();

}

void LinkedCells::setRho(double rho, utils::Vector<int, 3> cell) {
	int index = calculateCellIndex(cell[0],cell[1],cell[2]);
	double V = _cutOffRadius*_cutOffRadius;
	if(_dim == 3)
		V *= _cutOffRadius;
	double m = 0.0;
	int numP = _cells[index].getNumParticles();
	if(numP>0)
		m = 1.0;//_cells[index].getParticle(0).getM();
	double minRho = 0.9*rho;
	double maxRho = 1.1*rho;

	int minWnumP = round(minRho*V/m);
	int maxWnumP = round(maxRho*V/m);


	while(_cells[index].getNumParticles()<minWnumP)
		addP(cell);
	while(_cells[index].getNumParticles()>maxWnumP) {
		_cells[index].deleteParticle(&(_cells[index].getParticle(round(((double)rand()/(double)RAND_MAX*(double)_cells[index].getNumParticles())))));
	}
}

utils::Vector<double, 3>  LinkedCells::getV(utils::Vector<int, 3> cell) {
	int index = calculateCellIndex(cell[0],cell[1],cell[2]);
	return _cells[index].getV();
}

void LinkedCells::setV(utils::Vector<double, 3> v, utils::Vector<int, 3> cell) {
	int index = calculateCellIndex(cell[0],cell[1],cell[2]);
	_cells[index].setV(v);
}
/*
utils::Vector<double, 3> LinkedCells::getRandPoint(utils::Vector<double, 3>& minX,utils::Vector<double, 3>& maxX) {
	utils::Vector<double, 3> x;
	x[0] = ((double)rand()*maxX[0]/(double)RAND_MAX);
	x[1] = ((double)rand()*maxX[1]/(double)RAND_MAX);
	if(_dim == 2)
		x[2]=0.5;
	else
		x[2] = ((double)rand()*maxX[2]/(double)RAND_MAX);
	x = x + minX;
	return x;
}*/

utils::Vector<double, 3> LinkedCells::getMinX(utils::Vector<int, 3>& cell) {
	utils::Vector<double, 3> x;
	for(int i=0;i<3;i++)
		x[i] = (double)(cell[i]-1)*_cutOffRadius;
	return x;
}

utils::Vector<double, 3> LinkedCells::getMaxX(utils::Vector<int, 3>& cell) {
	utils::Vector<double, 3> x;
	for(int i=0;i<3;i++)
		x[i] = (double)(cell[i])*_cutOffRadius;
	return x;
}

bool LinkedCells::addP(utils::Vector<int, 3>& cell) {
	utils::Vector<double, 3>  minX = getMinX(cell);
	utils::Vector<double, 3>  maxX = getMaxX(cell);
//	std::cout << minX << " " << _U0 << std::endl;
	return addP(minX,maxX);
}

bool LinkedCells::addP() {
	utils::Vector<double, 3> minX = 0.0;
	utils::Vector<double, 3>  maxX = getDomainLength();
	return addP(minX,maxX);
}

bool LinkedCells::addP(utils::Vector<double, 3>& minX,utils::Vector<double, 3>& maxX) {
	double x[] = {0.0,0.0,0.0};
	double v[] = {0.0,0.0,0.0};
	double m = 1.0;
	double epsilon = 1.0;
	double sigma = 1.0;
	int _type_id = getNumParticles();
	Particle p(x, v, m, epsilon, sigma, _type_id);
	//std::cout << "USHER " << std::endl;
	bool b = usher->addP(p,minX,maxX);
	if(b) addParticle(p);
	return b;
}


double LinkedCells::getRho() {
	utils::Vector<double, 3> domainSize = getDomainLength();
	int numP = getNumParticles();
	double V = domainSize[0]*domainSize[1];

	if(_dim == 3)
		V *= domainSize[2];

	return numP/V;
}


double LinkedCells::getU() {
	UCalculator ucalc;
	traversePairs(ucalc);
	double u =0.0;
	//int n;
	for(int i=0;i<_numCells;i++) {
		u += _cells[i].getNresetU();
	}
	return u/getNumParticles();
}

double LinkedCells::getU0() {
	Particle p = _cells[calculateCellIndex(2,2,1)].getParticle(0);
	UCalculator ucalc;

	traverseParticles(p,ucalc);
	double u = p.getU();
	std::cout << "U0: " << u<< std::endl;

	p.setU(0.0);
	return u;
}

void LinkedCells::setU0(double u0) {
	//_U0 = u0;
	usher->setU0(u0);
}

void LinkedCells::calcF(Particle& p) {
	LJForceCalculator fcalc(false);
	traverseParticles(p, fcalc);
}

void LinkedCells::calcU(Particle& p) {

	traverseParticles(p, ucalc);
}

void LinkedCells::calcV(Particle& p) {

	double e = _energyCalculator.calculateEnergy(*this);
	//std::cout << "calcV Eold:"  << getU() <<" Enew:"  << p.getU()  << std::endl;
	MaxwellBoltzmannDistribution(p, e /*e-(p.getU()-getU())*(double)getNumParticles()*/ ,getNumParticles(), _dim); //c
	p.vadd(_gV[0],_gV[1],_gV[2]);
}


void LinkedCells::delP() {
	int index = round(((double)rand()/(double)RAND_MAX*(double)(_numCells-1)));
	while(_cells[index].getNumParticles()==0)
		index = round(((double)rand()/(double)RAND_MAX*(double)(_numCells-1)));
	_cells[index].deleteParticle(&(_cells[index].getParticle(round((double)rand()/(double)RAND_MAX*(double)(_cells[index].getNumParticles()-1)))));

}

void LinkedCells::delP(utils::Vector<int, 3> cell) {
	int index = calculateCellIndex(cell[0],cell[1],cell[2]);
	_cells[index].deleteParticle(&(_cells[index].getParticle(round((double)rand()/(double)RAND_MAX*(double)(_cells[index].getNumParticles()-1)))));
}



double LinkedCells::getCutOffRadius() {
	return _cutOffRadius;
}
