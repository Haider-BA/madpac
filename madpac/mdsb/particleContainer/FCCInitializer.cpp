/*
 * FCCInitializer.cpp
 *
 * @Date: 05.01.2011
 * @Author: eckhardw
 */

#include "FCCInitializer.h"

log4cxx::LoggerPtr FCCInitializer::logger = log4cxx::Logger::getLogger("particleContainer.FCCInitializer");


FCCInitializer::FCCInitializer(const CuboidConfiguration& config)
: _config(config.getX(), config.getV(), config.getN(), config.getH(), config.getMaterialConfig()) {
	_type_id = _num_instances;
	_num_instances++;
}


FCCInitializer::~FCCInitializer() {
}

void FCCInitializer::initialize(ParticleContainer& container) {
	double x[] = {0,0,0};
	double start[] =  {0,0,0};

	double m = _config.getMaterialConfig().getM();
	double epsilon = _config.getMaterialConfig().getEpsilon();
	double sigma = _config.getMaterialConfig().getSigma();
	LOG4CXX_DEBUG(logger, "FCCInitializer material: m=" << m << " epsilon=" << epsilon << " sigma=" << sigma);

	const utils::Vector<double,3>& v = _config.getV();
	const utils::Vector<int, 3>& n = _config.getN();

	LOG4CXX_DEBUG(logger, "Initializing FCC at " << _config.getX().toString());

	start[0] = _config.getX()[0];
	start[1] = _config.getX()[1];
	start[2] = _config.getX()[2];

	for (int i = 0; i < n[0]; i++) {
		for (int j = 0; j < n[1]; j++) {
			for (int k = 0; k < n[2]; k++) {
				x[0] = start[0] + ((double)i) * _config.getH();
				x[1] = start[1] + ((double)j) * _config.getH();
				x[2] = start[2] + ((double)k) * _config.getH();
				if (!isInsideTriangle(x)) {
					LOG4CXX_TRACE(logger, "creating (x,y,z): (" << x[i] << "," << x[j] << "," << x[k] << ")");
					Particle p(x, v, m, epsilon, sigma, _type_id);
					container.addParticle(p);
				}
			}
		}
	}

	start[0] = _config.getX()[0] + _config.getH() / 2;
	start[1] = _config.getX()[1] + _config.getH() / 2;
	start[2] = _config.getX()[2];

	for (int i = 0; i < n[0] - 1; i++) {
		for (int j = 0; j < n[1] - 1; j++) {
			for (int k = 0; k < n[2]; k++) {
				x[0] = start[0] + ((double)i) * _config.getH();
				x[1] = start[1] + ((double)j) * _config.getH();
				x[2] = start[2] + ((double)k) * _config.getH();
				if (!isInsideTriangle(x)) {
					LOG4CXX_TRACE(logger, "creating (x,y,z): (" << x[i] << "," << x[j] << "," << x[k] << ")");
					Particle p(x, v, m, epsilon, sigma, _type_id);
					container.addParticle(p);
				}
			}
		}
	}

	start[0] = _config.getX()[0] + _config.getH() / 2;
	start[1] = _config.getX()[1];
	start[2] = _config.getX()[2] + _config.getH() / 2;

	for (int i = 0; i < n[0] - 1; i++) {
		for (int j = 0; j < n[1]; j++) {
			for (int k = 0; k < n[2] - 1; k++) {
				x[0] = start[0] + ((double)i) * _config.getH();
				x[1] = start[1] + ((double)j) * _config.getH();
				x[2] = start[2] + ((double)k) * _config.getH();
				if (!isInsideTriangle(x)) {
					LOG4CXX_TRACE(logger, "creating (x,y,z): (" << x[i] << "," << x[j] << "," << x[k] << ")");
					Particle p(x, v, m, epsilon, sigma, _type_id);
					container.addParticle(p);
				}
			}
		}
	}

	start[0] = _config.getX()[0];
	start[1] = _config.getX()[1] + _config.getH() / 2;
	start[2] = _config.getX()[2] + _config.getH() / 2;

	for (int i = 0; i < n[0]; i++) {
		for (int j = 0; j < n[1] - 1; j++) {
			for (int k = 0; k < n[2] - 1; k++) {
				x[0] = start[0] + ((double)i) * _config.getH();
				x[1] = start[1] + ((double)j) * _config.getH();
				x[2] = start[2] + ((double)k) * _config.getH();
				if (!isInsideTriangle(x)) {
					LOG4CXX_TRACE(logger, "creating (x,y,z): (" << x[i] << "," << x[j] << "," << x[k] << ")");
					Particle p(x, v, m, epsilon, sigma, _type_id);
					container.addParticle(p);
				}
			}
		}
	}
}

bool FCCInitializer::isInsideTriangle(double x[3]) const {
	double h = _config.getH();
	double xDistance = x[0] - _config.getX()[0];

	if (xDistance > 7 * h) {
		return false;
	}

	double factor = xDistance / 7 * h;
	double middle = _config.getX()[1] + (h * (double)( _config.getN()[1] - 1.0)) / 2;

	LOG4CXX_DEBUG(logger, "testing point (" << x[0] << "," << x[1] << ")  middle is at x=" <<middle);
	LOG4CXX_DEBUG(logger, "_config.getX()[1]="<<_config.getX()[1] << " h=" << h << " N-1="<<(double)( _config.getN()[1] - 1.0));

	double yDistance = fabs(x[1] - middle);
	LOG4CXX_DEBUG(logger, "yDistance is " << yDistance);

	if (yDistance < 1.5 * h - factor * 1.5 * h) {
		return true;
	} else {
		return false;
	}
}
