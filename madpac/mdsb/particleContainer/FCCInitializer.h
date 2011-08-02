/*
 * FCCInitializer.h
 *
 * @Date: 05.01.2011
 * @Author: eckhardw
 */

#ifndef FCCINITIALIZER_H_
#define FCCINITIALIZER_H_

#include "Initializer.h"
#include "config/CuboidConfiguration.h"

class FCCInitializer: public Initializer {

private:

	static log4cxx::LoggerPtr logger;

	CuboidConfiguration _config;

	int _type_id;

	/**
	 * decides if a point falls inside the triangle which represents the
	 * defect of the silver plate.
	 */
	bool isInsideTriangle(double x[3]) const;

public:

	FCCInitializer(const CuboidConfiguration& config);

	virtual ~FCCInitializer();

	void initialize(ParticleContainer& container);

};

#endif /* FCCINITIALIZER_H_ */
