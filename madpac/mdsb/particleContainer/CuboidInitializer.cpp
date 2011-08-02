/*
 * CuboidInitializer.cpp
 *
 * @Date: 30.09.2010
 * @Author: eckhardw
 */

#include "CuboidInitializer.h"
#include "config/Configuration.h"
#include "utils/Vector.h"
#include "MaxwellBoltzmannDistribution.h"


log4cxx::LoggerPtr CuboidInitializer::logger = log4cxx::Logger::getLogger("particleContainer.CuboidInitializer");

CuboidInitializer::CuboidInitializer(const CuboidConfiguration& config)
: _config(config.getX(), config.getV(), config.getN(), config.getH(), config.getMaterialConfig()) {
	_type_id = _num_instances;
	_num_instances++;
}

CuboidInitializer::~CuboidInitializer() {
}

void CuboidInitializer::initialize(ParticleContainer& container) {
	double x[] = {0,0,0};
	double m = _config.getMaterialConfig().getM();
	double epsilon = _config.getMaterialConfig().getEpsilon();
	double sigma = _config.getMaterialConfig().getSigma();
	LOG4CXX_DEBUG(logger, "SphereInitializer material: m=" << m << " epsilon=" << epsilon << " sigma=" << sigma);

	const utils::Vector<double,3>& v = _config.getV();
	const utils::Vector<int, 3>& n = _config.getN();

	LOG4CXX_DEBUG(logger, "Initializing CUBE at " << _config.getX().toString());

	for (int i = 0; i < n[0]; i++) {
		for (int j = 0; j < n[1]; j++) {
			for (int k = 0; k < n[2]; k++) {
				x[0] = _config.getX()[0] + ((double)i) * _config.getH();
				x[1] = _config.getX()[1] + ((double)j) * _config.getH();
				x[2] = _config.getX()[2] + ((double)k) * _config.getH();
				LOG4CXX_TRACE(logger, "creating (x,y,z): (" << x[i] << "," << x[j] << "," << x[k] << ")");
				Particle p(x, v, m, epsilon, sigma, _type_id);
				//MaxwellBoltzmannDistribution(p, 0.1, dim);
				container.addParticle(p);
			}
		}
	}
}
