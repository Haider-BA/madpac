/*
 * BoundaryBuilder.cpp
 *
 * @Date: 29.11.2010
 * @Author: eckhardw
 */

#include "BoundaryBuilder.h"

#include "boundary/Boundary.h"
#include "boundary/PeriodicBoundary.h"
#include "boundary/OutflowBoundary.h"
#include "boundary/HeatedBoundary.h"
#include "boundary/ReflectingBoundary.h"
#include "boundary/ForceBoundary.h"


#include <cstdlib>

log4cxx::LoggerPtr BoundaryBuilder::logger = log4cxx::Logger::getLogger("Boundary");

BoundaryBuilder::BoundaryBuilder() {
}

BoundaryBuilder::~BoundaryBuilder() {
}

void BoundaryBuilder::createBoundaries(std::vector<BoundaryConfiguration>& configs, ParticleContainer& container, std::vector<Boundary*>& boundaries) {
	Boundary* boundary;
	for (int i = 0; i < (int) configs.size(); i++) {
		BoundaryConfiguration::BoundaryType type = configs[i].getBoundaryType();

		switch (type) {
		case BoundaryConfiguration::HEATING:
			boundary = new HeatedBoundary(container, configs[i].getAxis(), configs[i].getPositionUp());
			LOG4CXX_INFO(logger, "HeatingBoundary at axis "<<configs[i].getAxis() << " up " << configs[i].getPositionUp());
			break;

		case BoundaryConfiguration::REFLECTING:
			boundary = new ReflectingBoundary(container, configs[i].getAxis(), configs[i].getPositionUp());
			LOG4CXX_INFO(logger, "ReflectingBoundary at axis "<<configs[i].getAxis() << " up " << configs[i].getPositionUp());
			break;

		case BoundaryConfiguration::OUTFLOW:
			boundary = new OutflowBoundary(container, configs[i].getAxis(), configs[i].getPositionUp());
			LOG4CXX_INFO(logger, "OutflowBoundary at axis "<<configs[i].getAxis() << " up " << configs[i].getPositionUp());
			break;
		case BoundaryConfiguration::PERIODIC:
			boundary = new PeriodicBoundary(container, configs[i].getAxis(), configs[i].getPositionUp());
			LOG4CXX_INFO(logger, "PeriodicBoundary at axis "<<configs[i].getAxis() << " up " << configs[i].getPositionUp());
			break;
		case BoundaryConfiguration::FORCE:
			boundary = new ForceBoundary(container, configs[i].getAxis(), configs[i].getPositionUp());
			LOG4CXX_INFO(logger, "ForceBoundary at axis "<<configs[i].getAxis() << " up " << configs[i].getPositionUp());
			break;
		default:
			LOG4CXX_ERROR(logger, "Invalid value for BoundaryConfiguration::BoundaryType!");
			exit(-1);
		}

		boundaries.push_back(boundary);
	}
}

