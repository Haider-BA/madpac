/*
 * MDSB.h
 *
 *  Created on: 03.03.2011
 *      Author: ph
 */

#ifndef MDSB_H_
#define MDSB_H_

//#include "particleContainer/SimpleParticleContainer.h"
#include "particleContainer/LinkedCells.h"
#include "particleContainer/Initializer.h"
#include "particleContainer/FileInitializer.h"
#include "particleContainer/CuboidInitializer.h"
#include "particleContainer/SphereInitializer.h"
#include "particleContainer/FCCInitializer.h"
#include "particleContainer/Cell.h"
#include "particleContainer/MaxwellBoltzmannDistribution.h"
#include "boundary/Boundary.h"
#include "boundary/BoundaryBuilder.h"
#include "outputWriter/VTKWriter.h"
#include "outputWriter/PhaseSpaceWriter.h"

#include "thermostat/Thermostat.h"

#include "calculation/FCCCalculator.h"
#include "calculation/GravityForceCalculator.h"
#include "calculation/LJForceCalculator.h"
#include "calculation/SmoothedLJForceCalculator.h"
#include "calculation/Statistics.h"
#include "calculation/WeightCalculator.h"
#include "calculation/VCalculator.h"
#include "calculation/UCalculator.h"
#include "calculation/XCalculator.h"

#include "config/Configuration.h"
#include "utils/Timer.h"

#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>

// include log4cxx header files.
#include "log4cxx/logger.h"
#include "log4cxx/propertyconfigurator.h"
#include "log4cxx/helpers/exception.h"

#include <cstring>
#include <cstdlib>
#include <iostream>
#include <vector>

class MDSB {
public:
	MDSB(const char* configf, double maxRho);
	virtual ~MDSB();



	void runTests();
	void test();
	void exeSim();
	//int exeSim(double end_t);
	double getRho(utils::Vector<int, 3> cell);
	void setRho(double rho, utils::Vector<int, 3> cell);
utils::Vector<double, 3> getV(utils::Vector<int, 3> cell);
	void setV(utils::Vector<double, 3> v, utils::Vector<int, 3> cell);

	void getBoundaryCells(std::vector<utils::Vector<int, 3> >& v, int deltaA, int deltaB);



	void applyThermostat(int iteration);
	void writeOutput(int iteration);
	void calcFnV();
	void moveParticles();
	void test2();
	void testFlow(int numPart);
	double getCellLength();
	double getDeltaT();

	 int getNumObj();
	 void execHyWriter(outputWriter::VTKWriter fileWriter);
	 void execHyWriter(outputWriter::VTKWriter fileWriter, std::vector<utils::Vector<double, 3> > &mdV, int border);
	 void insertP();
	 void deleteP();

	 ParticleContainer*
	 getParticleContainer() {
	   return container;
	 }
private:

	double _maxRho;
	double getRho();
	std::vector<utils::Vector<int, 3> >  insertCells;
	std::vector<utils::Vector<int, 3> >  outflowsCells;
	EnergyCalculator _energyCalculator;
	LinkedCells* container;
	static log4cxx::LoggerPtr logger;
	//double getRho(int numP, double m, utils::Vector<double, 3> domainSize);
	void addP(Configuration& config, ParticleContainer& container);
	void initializeBoundaryConditions(Configuration& config, ParticleContainer& container, std::vector<Boundary*>& boundaries);
	WeightCalculator* initCalculator(Configuration& config);
	LinkedCells* initializeParticleContainer(Configuration& config, std::vector<Boundary*>& boundaries);

};

#endif /* MDSB_H_ */
