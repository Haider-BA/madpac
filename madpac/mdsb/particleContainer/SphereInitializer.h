/*
 * SphereInitializer.h
 *
 * @Date: 18.10.2010
 * @Author: eckhardw
 */

#ifndef SPHEREINITIALIZER_H_
#define SPHEREINITIALIZER_H_

#include "Initializer.h"
#include "config/SphereConfiguration.h"

class SphereInitializer: public Initializer {

public:

	SphereInitializer(const SphereConfiguration& config);

	virtual ~SphereInitializer();

	virtual void initialize(ParticleContainer& container);

private:

	static log4cxx::LoggerPtr logger;

	SphereConfiguration _config;

	int _type_id;
};

#endif /* SPHEREINITIALIZER_H_ */
