/*
 * Configuration.h
 *
 * @Date: 07.10.2010
 * @Author: eckhardw
 */

#ifndef CONFIGURATION_H_
#define CONFIGURATION_H_

#include "config/ThermostatConfiguration.h"
#include "config/FileConfiguration.h"
#include "config/CuboidConfiguration.h"
#include "config/SphereConfiguration.h"
#include "config/BoundaryConfiguration.h"
#include "log4cxx/logger.h"
#include "config/ConfigFile.hxx"
#include "utils/Vector.h"
#include <vector>
#include <memory>


/**
 * This class encapsulates the reading of the XML File
 */
class Configuration {

public:

	static Configuration& getInstance();

	virtual ~Configuration();

	/**
	 * Read in the configuration from a file
	 */
	void readConfiguration(const char* file);


	/**
	 * Read in the configuration from a file
	 */
	void readConfiguration(std::istream& stream);


	double getDeltaT();

	double getTEnd();

	utils::Vector<double, 3> getDomainSize();

	std::string& getOutputFilename();

	int getOutputFrequency() const;

	bool hasGravity() const;

	Boundary::axis_type getGravityAxis() const;

	double getGravityFactor() const;

	bool hasThermostat() const;

	int getDimension() const;

	bool collectStatistics() const;

	const ThermostatConfiguration& getThermostatConfiguration() const;

	std::vector<FileConfiguration>& getFileInputs();

	std::vector<CuboidConfiguration>& getCuboidInputs();

	std::vector<CuboidConfiguration>& getFCCInputs();

	std::vector<SphereConfiguration>& getSphereInputs();

	std::string getParticleContainer() const;

	double getCutoffRadius() const;

	std::vector<BoundaryConfiguration>& getBoundaryConfigurations();

	static const std::string linkedCells;

	static const std::string simple;

private:

	// make constructor private so that it can be called from within this class
	Configuration();

	void copyFromXMLTree(const std::auto_ptr<config>& config);

	MaterialConfig copyMaterialConfigFromXML(const materialType& material);

	void copyCuboidTypeFromXML(const cuboidType& type, std::vector<CuboidConfiguration>& configList);

	static Configuration instance;

	double _delta_t;

	double _end_t;

	std::string _outputFilename;

	int _outputFrequency;

	std::string _particleContainer;

	double _cutoff;

	utils::Vector<double, 3> _domainSize;

	bool _hasGravity;

	Boundary::axis_type _gravityAxis;

	double _gravityFactor;

	bool _hasThermostat;

	unsigned int _dimension;

	bool _statistics;

	ThermostatConfiguration _thermostatConfiguration;

	std::vector<FileConfiguration> _fileConfigurations;

	std::vector<CuboidConfiguration> _cuboidConfigurations;

	std::vector<CuboidConfiguration> _fccConfigurations;

	std::vector<SphereConfiguration> _sphereConfigurations;

	std::vector<BoundaryConfiguration> _boundaryConfigurations;

	static log4cxx::LoggerPtr logger;
};

#endif /* CONFIGURATION_H_ */
