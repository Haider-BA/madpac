/*
 * UsherContainer.h
 *
 *  Created on: 24.03.2011
 *      Author: ph
 */

#ifndef USHERCONTAINER_H_
#define USHERCONTAINER_H_

class UsherContainer {

public:
	virtual void calcU(Particle& p) = 0;
	virtual void calcF(Particle& p) = 0;
	virtual void calcV(Particle& p) = 0;
	//virtual void addParticle(Particle& p) = 0;
	virtual double getRho() = 0;

};
#endif /* USHERCONTAINER_H_	 */
