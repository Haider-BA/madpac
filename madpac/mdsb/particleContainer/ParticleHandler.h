/*
 * ParticleHandler.h
 *
 *  Created on: 23.02.2010
 *      Author: eckhardw
 */

#ifndef PARTICLEHANDLER_H_
#define PARTICLEHANDLER_H_

#include "Particle.h"

class ParticleHandler {

public:
	ParticleHandler(){}

	virtual void handleParticle(Particle& p) = 0;

	virtual ~ParticleHandler(){}

};

#endif /* PARTICLEHANDLER_H_ */
