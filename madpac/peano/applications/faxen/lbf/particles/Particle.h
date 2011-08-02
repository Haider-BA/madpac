/*
 * Particle.h
 *
 *  Created on: May 20, 2011
 *      Author: denis
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

#include <vector>
#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace particle {

class Particle {
private:
	double _density;
	double _radius;
	double _mass;
	tarch::la::Vector<DIMENSIONS,double> _velocity;
	tarch::la::Vector<DIMENSIONS,double> _position;
	std::vector<tarch::la::Vector<DIMENSIONS,double> > _trajectory;
	void updateMass();
public:
	Particle();
	virtual ~Particle();

	/** get and set density of particle */
	double getDensity() const;
	void setDensity(double _density);

	/** get and set radius of particle */
	double getRadius() const;
	void setRadius(double _radius);

	/** get and set velocity of particle */
	tarch::la::Vector<DIMENSIONS,double>& getVelocity();
	void setVelocity(tarch::la::Vector<DIMENSIONS,double>& velocity);

	/** get and set position of particle */
	tarch::la::Vector<DIMENSIONS,double>& getPosition();
	void setPosition(tarch::la::Vector<DIMENSIONS,double>& position);

	/** get trajectory of particle */
	std::vector<tarch::la::Vector<DIMENSIONS,double> >& getTrajectory();

	/** move particle for one time step*/
	void moveOneStep(double dt, tarch::la::Vector<DIMENSIONS,double> &force);

	/** is point inside the particle */
	bool isPointInside(tarch::la::Vector<DIMENSIONS,double>& point);
};

}

}

}

}

}

#endif /* Particle_H_ */
