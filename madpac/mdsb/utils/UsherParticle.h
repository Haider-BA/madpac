/*
 * UsherParticle.h
 *
 *  Created on: 24.03.2011
 *      Author: ph
 */

#ifndef USHERPARTICLE_H_
#define USHERPARTICLE_H_

class UsherParticle {

public:
	virtual utils::Vector<double, 3>& getX() = 0;
	virtual utils::Vector<double, 3>& getF() = 0;
	virtual double getU() = 0;
	virtual void setU(double u) = 0;

};
#endif /* USHERPARTICLE_H_	 */
