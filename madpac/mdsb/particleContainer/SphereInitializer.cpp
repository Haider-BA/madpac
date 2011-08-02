/*
 * SphereInitializer.cpp
 *
 * @Date: 18.10.2010
 * @Author: eckhardw
 */

#include "SphereInitializer.h"
#include "config/Configuration.h"
#include "particleContainer/MaxwellBoltzmannDistribution.h"

log4cxx::LoggerPtr SphereInitializer::logger = log4cxx::Logger::getLogger("particleContainer.SphereInitializer");

SphereInitializer::SphereInitializer(const SphereConfiguration& config)
: _config(config.getX(), config.getV(), config.getN(), config.getH(), config.getMaterialConfig()) {
	_type_id = _num_instances;
	_num_instances++;
}

SphereInitializer::~SphereInitializer() {
}

void SphereInitializer::initialize(ParticleContainer& container) {
	utils::Vector<double,3> x(0.);
	double m = _config.getMaterialConfig().getM();
	double epsilon = _config.getMaterialConfig().getEpsilon();
	double sigma = _config.getMaterialConfig().getSigma();
	LOG4CXX_DEBUG(logger, "SphereInitializer material: m=" << m << " epsilon=" << epsilon << " sigma=" << sigma);

	int n = _config.getN();
	double h = _config.getH();
	double radius = ((double)n) * h;
	const utils::Vector<double, 3>& center = _config.getX();

	utils::Vector<double,3> radius_vector = radius;
	utils::Vector<double,3> lower_left_front = center - radius_vector;
	int dim = Configuration::getInstance().getDimension();
	LOG4CXX_DEBUG(logger, "SphereINitializer dimension: " << dim );

	bool two_d = (dim == 2);
	if (two_d) {
		lower_left_front[2] = center[2];
	}

	const utils::Vector<double, 3>& v = _config.getV();

	int innerCount = two_d ? 1 : (2*n);
	LOG4CXX_DEBUG(logger, "Initializing SPHERE at " << _config.getX().toString() << " two_d==" << two_d);

	for (int i = 0; i < n*2; i++) {
		for (int j = 0; j < n*2; j++) {
			for (int k = 0; k < innerCount; k++) {
				x[0] = lower_left_front[0] + ((double)i) * h;
				x[1] = lower_left_front[1] + ((double)j) * h;
				x[2] = lower_left_front[2] + ((double)k) * h;
				LOG4CXX_TRACE(logger, "point at " << x.toString() << "has distance " << (x - center).L2Norm() << " and radius is "<< radius);
				if ((x - center).L2Norm() < radius) {
					LOG4CXX_TRACE(logger, "creating (x,y,z): (" << x[0] << "," << x[1] << "," << x[2] << ")");
					Particle p(x, v, m, epsilon, sigma, _type_id);
					//MaxwellBoltzmannDistribution(p, 0.1, dim);
					container.addParticle(p);
				}
			}
		}
	}
}
