/*
 * Initializer.h
 *
 *  Created on: 23.02.2010
 *      Author: eckhardw
 */

#ifndef INITIALIZER_H_
#define INITIALIZER_H_

#include "particleContainer/ParticleContainer.h"

/**
 * Interface for the initialization of the particle container. The intent is to
 * have several initializers for more complex scenarios, where one single initializer
 * adds the only the molecules for e.g. a cube or a sphere.
 */
class Initializer {

public:

	Initializer();

	virtual ~Initializer();

	virtual void initialize(ParticleContainer& container) = 0;

protected:

	// use it to distinguish the components generated.
	static int _num_instances;
};


#endif /* INITIALIZER_H_ */
