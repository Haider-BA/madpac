/*
 * Configuration.cpp
 *
 * @Date: 07.10.2010
 * @Author: eckhardw
 */

#include "Configuration.h"
#include "utils/Assertion.h"

using namespace std;

Configuration Configuration::instance;

log4cxx::LoggerPtr Configuration::logger = log4cxx::Logger::getLogger("Configuration");

const std::string Configuration::linkedCells = "LinkedCells";

const std::string Configuration::simple = "Simple";

Configuration::Configuration()
: _delta_t(0), _end_t(0), _outputFilename(""), _outputFrequency(0), _domainSize(0.),
  _hasGravity(false), _gravityFactor(0.), _hasThermostat(false) {
}

Configuration::~Configuration() {
}

Configuration& Configuration::getInstance() {
	return instance;
}


void Configuration::readConfiguration(const char* file) {
	try {
		LOG4CXX_INFO(logger, "Reading config from input file");
		auto_ptr<config> config(config_(file));
		LOG4CXX_DEBUG(logger, "Copying config.");
		copyFromXMLTree(config);
		LOG4CXX_INFO(logger, "Reading finished.");
	} catch (const xml_schema::exception& e) {
		cerr << e << endl;
		return;
	}
}

void Configuration::readConfiguration(std::istream& stream) {
	try {
		LOG4CXX_INFO(logger, "Reading config from input stream");
		auto_ptr<config> config(config_(stream, xml_schema::flags::dont_validate));
		LOG4CXX_DEBUG(logger, "Copying config.");
		copyFromXMLTree(config);
		LOG4CXX_INFO(logger, "Reading finished.");
	} catch (const xml_schema::exception& e) {
		cerr << e << endl;
		return;
	}
}

void Configuration::copyFromXMLTree(const auto_ptr<config>& config) {

	_dimension = config->dim();
	_statistics = config->statistics();
	_end_t = config->timedata().end();
	_delta_t = config->timedata().delta();

	_outputFilename = config->output().filebase();
	_outputFrequency =  config->output().frequency();

	if (config->container().type() == linkedCells) {
		_particleContainer = linkedCells;
	} else if (config->container().type() == simple) {
		_particleContainer = simple;
	} else {
		LOG4CXX_WARN(logger, "Unrecognized value of container-type! Using simple...");
		_particleContainer = simple;
	}

	_cutoff = config->container().cutoff();

	_domainSize[0] = config->domain().size_x();
	_domainSize[1] = config->domain().size_y();
	_domainSize[2] = config->domain().size_z();

	if (config->gravity().present()) {
		_hasGravity = true;
		_gravityFactor = config->gravity().get().factor();
		//std::cout << config->gravity().get().axis() << std::endl;
		if ( config->gravity().get().axis() == "x") {
			_gravityAxis = Boundary::X;
		} else if ( config->gravity().get().axis() == "y") {
			_gravityAxis = Boundary::Y;
		} else if ( config->gravity().get().axis() == "z") {
			_gravityAxis = Boundary::Z;
		}
	}

	const config::boundary_sequence& boundarySequence = config->boundary();
	config::boundary_const_iterator boundaryIterator = boundarySequence.begin();
	while (boundaryIterator != boundarySequence.end()) {
		Boundary::axis_type axis;
		if (boundaryIterator->axis() == "x") {
			axis = Boundary::X;
		} else if (boundaryIterator->axis() == "y") {
			axis = Boundary::Y;
		} else if (boundaryIterator->axis() == "z") {
			axis = Boundary::Z;
		}
		BoundaryConfiguration::BoundaryType type;
		if (boundaryIterator->type() == "reflecting") {
			type = BoundaryConfiguration::REFLECTING;
		} else if (boundaryIterator->type() == "outflow") {
			type = BoundaryConfiguration::OUTFLOW;
		} else if (boundaryIterator->type() == "heating") {
			type = BoundaryConfiguration::HEATING;
		} else if (boundaryIterator->type() == "periodic") {
			type = BoundaryConfiguration::PERIODIC;
		} else if (boundaryIterator->type() == "force") {
			type = BoundaryConfiguration::FORCE;
		}
		BoundaryConfiguration bc(axis, boundaryIterator->position_up(), type);
		_boundaryConfigurations.push_back(bc);
		boundaryIterator++;
	}

	const config::inputfile_sequence& inputFileSequence = config->inputfile();
	config::inputfile_const_iterator fileIterator = inputFileSequence.begin();
	while (fileIterator != inputFileSequence.end()) {
		string filename = fileIterator->name();
		_fileConfigurations.push_back(FileConfiguration(filename));
		LOG4CXX_TRACE(logger, "Read inputfile tag" << filename << " #files: " << _fileConfigurations.size());
		fileIterator++;
	}

	const config::inputcuboid_sequence& inputCuboidSequence = config->inputcuboid();
	config::inputcuboid_const_iterator cuboidIterator = inputCuboidSequence.begin();
	while (cuboidIterator != inputCuboidSequence.end()) {
		copyCuboidTypeFromXML(*cuboidIterator, _cuboidConfigurations);
		cuboidIterator++;
	}

	const config::inputfcc_sequence& inputFCCSequence = config->inputfcc();
	config::inputfcc_const_iterator fccIterator = inputFCCSequence.begin();
	while (fccIterator != inputFCCSequence.end()) {
		copyCuboidTypeFromXML(*fccIterator, _fccConfigurations);
		fccIterator++;
	}

	const config::inputsphere_sequence& inputSphereSequence = config->inputsphere();
		config::inputsphere_const_iterator sphereIterator = inputSphereSequence.begin();
		while (sphereIterator != inputSphereSequence.end()) {
			utils::Vector<double, 3> x;
			x[0] = sphereIterator->x0();
			x[1] = sphereIterator->x1();
			x[2] = sphereIterator->x2();

			utils::Vector<double, 3> v;
			v[0] = sphereIterator->v0();
			v[1] = sphereIterator->v1();
			v[2] = sphereIterator->v2();

			int n = sphereIterator->n();

			double h = sphereIterator->h();
			MaterialConfig material = copyMaterialConfigFromXML(sphereIterator->material());
			_sphereConfigurations.push_back(
					SphereConfiguration(x,v,n,h, material));

			sphereIterator++;
			LOG4CXX_TRACE(logger, "Read sphere tag.");
		}

		if (config->thermostat().present()) {
			_hasThermostat = true;

			config::thermostat_type& thermostat = config->thermostat().get();
			_thermostatConfiguration.setInitialTemperature(thermostat.initialTemperature());
			_thermostatConfiguration.setThermostatFrequency(thermostat.frequency());
			_thermostatConfiguration.setGamma(1.0);

			if (thermostat.change().present()) {
				config::thermostat_type::change_type& change = thermostat.change().get();
				_thermostatConfiguration.setEnergySteppingFrequency(change.steppingFrequency());
				_thermostatConfiguration.setEndTemperature(change.target());
				_thermostatConfiguration.setTemperatureStepping(change.stepping());
			} else {
				_thermostatConfiguration.setEnergySteppingFrequency(0);
			}
		}
}

void Configuration::copyCuboidTypeFromXML(const cuboidType& type, std::vector<CuboidConfiguration>& configList) {
	utils::Vector<double, 3> x;
			x[0] = type.x0();
			x[1] = type.x1();
			x[2] = type.x2();

			utils::Vector<double, 3> v;
			v[0] = type.v0();
			v[1] = type.v1();
			v[2] = type.v2();

			utils::Vector<int, 3> n;
			n[0] = type.n0();
			n[1] = type.n1();
			n[2] = type.n2();

			double h = type.h();
			MaterialConfig material = copyMaterialConfigFromXML(type.material());
			configList.push_back(
					CuboidConfiguration(x,v,n,h, material));

			LOG4CXX_TRACE(logger, "Read cuboid tag.");
}

MaterialConfig Configuration::copyMaterialConfigFromXML(const materialType& material) {
	double eps = material.epsilon();
	double sigma = material.sigma();
	double m = material.mass();
	return MaterialConfig(eps, sigma, m);
}

bool Configuration::hasThermostat() const {
	return _hasThermostat;
}

const ThermostatConfiguration& Configuration::getThermostatConfiguration() const {
	if (!_hasThermostat) {
		ASSERT(false, "Config has no Thermostat!", "");
	}
	return _thermostatConfiguration;
}

double Configuration::getDeltaT() {
	return _delta_t;
}

double Configuration::getTEnd() {
	return _end_t;
}

int Configuration::getDimension() const {
	return _dimension;
}

bool Configuration::collectStatistics() const {
	return _statistics;
}

utils::Vector<double, 3> Configuration::getDomainSize() {
	return _domainSize;
}

std::string& Configuration::getOutputFilename() {
	return _outputFilename;
}

int Configuration::getOutputFrequency() const {
	return _outputFrequency;
}

bool Configuration::hasGravity() const {
	return _hasGravity;
}

Boundary::axis_type Configuration::getGravityAxis() const {
	return _gravityAxis;
}

double Configuration::getGravityFactor() const {
	return _gravityFactor;
}

std::vector<FileConfiguration>& Configuration::getFileInputs() {
	return _fileConfigurations;
}

std::vector<CuboidConfiguration>& Configuration::getCuboidInputs() {
	return _cuboidConfigurations;
}

std::vector<CuboidConfiguration>& Configuration::getFCCInputs() {
	return _fccConfigurations;
}

std::vector<SphereConfiguration>& Configuration::getSphereInputs() {
	return _sphereConfigurations;
}

std::string Configuration::getParticleContainer() const {
	return _particleContainer;
}

double Configuration::getCutoffRadius() const {
	return _cutoff;
}

std::vector<BoundaryConfiguration>& Configuration::getBoundaryConfigurations() {
	return _boundaryConfigurations;
}
