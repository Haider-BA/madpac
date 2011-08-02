/*
 * ParticlePairsHandler.h
 *
 *  Created on: 23.02.2010
 *      Author: eckhardw
 */

#ifndef PARTICLEPAIRSHANDLER_H_
#define PARTICLEPAIRSHANDLER_H_

#include "Particle.h"

class ParticlePairsHandler {

public:
	ParticlePairsHandler() {}

	virtual void handleParticlePair(Particle& p1, Particle& p2) = 0;

	virtual ~ParticlePairsHandler(){}

};

#endif /* PARTICLEPAIRSHANDLER_H_ */
