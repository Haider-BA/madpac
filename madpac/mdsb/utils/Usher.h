/*
 * Usher.h
 *
 *  Created on: 24.03.2011
 *      Author: ph
 */

#ifndef USHER_H_
#define USHER_H_
#include "Vector.h"
#include "Particle.h"
#include "UsherContainer.h"

class Usher {

public:
	Usher(UsherContainer *container, double sigma, int dim);
	virtual ~Usher();
	bool addP(Particle& p, utils::Vector<double, 3>& minX,utils::Vector<double, 3>& maxX);
	void setU0(double u0);

private:
	UsherContainer *_container;
	double _U0;
	double _sigma;
	int _dim;
	int _maxOuterIterations;
	int _maxInnerIterations;
	utils::Vector<double, 3> getRandPoint(utils::Vector<double, 3>& minX,utils::Vector<double, 3>& maxX);

};

#endif /* USHER_H_ */
