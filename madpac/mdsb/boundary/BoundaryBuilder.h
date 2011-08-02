/*
 * BoundaryBuilder.h
 *
 * @Date: 29.11.2010
 * @Author: eckhardw
 */

#ifndef BOUNDARYBUILDER_H_
#define BOUNDARYBUILDER_H_

#include "config/BoundaryConfiguration.h"
#include "log4cxx/logger.h"
#include <vector>

class ParticleContainer;
class Boundary;


class BoundaryBuilder {

public:

	BoundaryBuilder();

	virtual ~BoundaryBuilder();

	static void createBoundaries(std::vector<BoundaryConfiguration>& configs, ParticleContainer& container, std::vector<Boundary*>& boundaries);

private:
	static log4cxx::LoggerPtr logger;

};

#endif /* BOUNDARYBUILDER_H_ */
