/*
 * CuboidInitializer.h
 *
 * @Date: 30.09.2010
 * @Author: eckhardw
 */

#ifndef CUBOIDINITIALIZER_H_
#define CUBOIDINITIALIZER_H_

#include "Initializer.h"
#include "config/CuboidConfiguration.h"
#include "log4cxx/logger.h"

/**
 * Initialize a "cube" of particles.
 */
class CuboidInitializer: public Initializer {

private:

	static log4cxx::LoggerPtr logger;

	CuboidConfiguration _config;

	int _type_id;

public:
	CuboidInitializer(const CuboidConfiguration& config);

	virtual ~CuboidInitializer();

	void initialize(ParticleContainer& container);
};

#endif /* CUBOIDINITIALIZER_H_ */
