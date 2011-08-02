/*
 * MDSB.cpp
 *
 *  Created on: 03.03.2011
 *      Author: ph
 */

#include "MDSB.h"


using namespace std;
vector<Boundary*> boundaries;
WeightCalculator* weightCalculator = NULL;
Configuration& config = Configuration::getInstance();
Thermostat* thermostat = NULL;
double end_t = 0;
double delta_t = 0;
int numMolecules;
outputWriter::VTKWriter fileWriter;
utils::Timer timer;
int numIterations = 0;
double current_time = 0;
int iteration = 0;
// for this loop, we assume: current x, current f and current v are known
//GravityForceCalculator fcalc;
LJForceCalculator fcalc;
//SmoothedLJForceCalculator fcalc(1.9, config.getCutoffRadius());
//FCCCalculator fcalc(*container);

XCalculator *xcalc;
VCalculator *vcalc;
Statistics *statistics;

log4cxx::LoggerPtr MDSB::logger = log4cxx::Logger::getLogger("MDSB");


MDSB::MDSB(const char* configf, double maxRho) : _maxRho(maxRho){
	LOG4CXX_INFO(logger, "Initializing Simulation");
	if (strcmp(configf, "-t") == 0) {
		LOG4CXX_INFO(logger, "Running tests...");
		runTests();
		LOG4CXX_INFO(logger, "... finished!");
		exit(0);
	}	else  {
		config.readConfiguration(configf);
		container = initializeParticleContainer(config, boundaries);
		weightCalculator = initCalculator(config);
		end_t = config.getTEnd();
		delta_t = config.getDeltaT();
		numIterations = end_t / delta_t;
	}

	numMolecules = container->getNumParticles();

	if (config.hasThermostat()) {
		thermostat = new Thermostat(config.getThermostatConfiguration(), container->getNumParticles(), config.getDimension());
		thermostat->initializeBrownianMotion(*container);
	}

	xcalc = new XCalculator(delta_t);
	vcalc = new VCalculator(delta_t, config.getCutoffRadius());
	statistics = new Statistics(config.getCutoffRadius());
	srand ( time(NULL) );

	std::cout << "MB: " << thermostat->getMBF() << std::endl;
	std::cout << "Rho: " << getRho() << std::endl;
	//container->getU0();
	//std::cout << "U: " << container->getU() << std::endl;
	fileWriter.writeOutput(*container, config.getOutputFilename(), iteration);

	//todo
	for(int i=0;i<round(config.getDomainSize()[1]/config.getCutoffRadius());i++)
		for(int j=0;j<round(config.getDomainSize()[2]/config.getCutoffRadius());j++) {
			utils::Vector<int,3> v = 0;
			v[0] = 1;
			v[1] = i+1;
			v[2] = j+1;
			insertCells.push_back(v);
		}
	for(int i=0;i<round(config.getDomainSize()[1]/config.getCutoffRadius());i++)
			for(int j=0;j<round(config.getDomainSize()[2]/config.getCutoffRadius());j++) {
				utils::Vector<int,3> v = 0;
				v[0] = container->getDomainLength()[0];
				v[1] = i+1;
				v[2] = j+1;
				outflowsCells.push_back(v);
			}


}

MDSB::~MDSB() {
	PhaseSpaceWriter psWriter;
	psWriter.writeOutput(*container, "phasespace.txt", -1);

	for (int i = 0; i < (int)boundaries.size(); i++) {
		delete boundaries.at(i);
	}

	delete container;
	LOG4CXX_INFO(logger, "Terminating simulation...");
}



void MDSB::moveParticles() {
	// calculate new x; reset force;
	container->traverseParticles(*xcalc);

	container->update();

	// apply boundary conditions, i.e.:
	// add force to particles which are next to a reflecting boundary
	// add particles to halo for periodic boundaries

	//std::cout << "NumBoundaries: " << boundaries->size() << std::endl;
	for (int i = 0; i < (int)boundaries.size(); i++) {
		boundaries.at(i)->applyBoundary();
	}
}

void MDSB::calcFnV() {
#ifdef DEBUG
	LOG4CXX_DEBUG(logger, "ParticleContainer after application of boundaries:\n" << ((LinkedCells*)container)->toString());
#endif

	if (weightCalculator != NULL) {
		container->traverseParticles(*weightCalculator);
	}

	// calculate new f
	container->traversePairs(fcalc);
	//fcalc.calculateScenarioValues(iteration);
	container->deleteHaloParticles();

#ifdef DEBUG
	LOG4CXX_DEBUG(logger, "ParticleContainer after deletion of boundaries:\n" << ((LinkedCells*)container)->toString());
#endif

	// calculate new v
	vcalc->resetGV();
	container->traverseParticles(*vcalc);
	container->setGV(vcalc->getGV());


}

void MDSB::writeOutput(int iteration) {
	if (iteration % config.getOutputFrequency() == 0) {
		double timeElapsed = timer.stop();
		fileWriter.writeOutput(*container, config.getOutputFilename(), iteration );
		LOG4CXX_INFO(logger, "Iteration " << iteration << " of " << numIterations << "finished - output written.." );
		LOG4CXX_INFO(logger, "Iteration " << iteration << " took " << (timeElapsed/config.getOutputFrequency()) << " seconds ");
		timer.start();
	}

	if (config.collectStatistics()) {
		statistics->calculateStatistics(*container, iteration);
	}
}

void MDSB::applyThermostat(int iteration) {
	if (thermostat != NULL) {


			thermostat->applyThermostat(*container, iteration);
//		container->cellwiseThermostat(thermostat, iteration);
	}
}

void MDSB::exeSim() {
	timer.start(); //todo
	while (current_time <  end_t) {
		moveParticles();
		calcFnV();
		iteration++;
		applyThermostat(iteration);
		writeOutput(iteration);
		current_time += delta_t;
	}
}

void MDSB::test() {
	timer.start(); //todo
	EnergyCalculator _energyCalculator;
	int lastinsert = 0;
	double r = getRho();
	int fail = 0;
	while (current_time <  end_t &&  r <1.0) {
		if(iteration%50==0) {
			std::cout << "I: " << iteration << " ";
			std::cout << "R: " << r << " ";
			double u= container->getU();
			std::cout << "U: " << u << " ";

		//	int tmp[] = {1,1,1};
	//		std::cout << "V: " << container->getV(tmp) << " ";
			double e = _energyCalculator.calculateEnergy(*container);

			double e2 = e/(double)container->getNumParticles();
			std::cout << "E: " << e2 << " ";
			std::cout << "E2: " << (e2+u) << " ";
			double t = e / ((((double) config.getDimension()) / 2.0) * (double)container->getNumParticles());
			std::cout << "T: " << t << " ";
			std::cout << "F: " << fail << std::endl;

		} //else
			//std::cout << "I: " << iteration << " "<< std::endl;
		moveParticles();
		// insert new particles

		if(container->getNumParticles()<1000 && (iteration-lastinsert)>(int)(r/0.01) && iteration>20000) {
			container->setU0(container->getU());
			bool b = container->addP();
			r = getRho();
			if(b) {
				lastinsert = iteration;
				fail = 0;
			}
			else {
				lastinsert +=10;
				fail++;
				}

		//	else std::cout << "asdas" << std::endl;
		} else if(iteration==5000) {
			double u = container->getU();
			container->setU0(u);
			std::cout << "U0:" << u<< std::endl;

		}
		calcFnV();
		iteration++;
		 if (iteration<3000) {
					applyThermostat(iteration);
		}
		writeOutput(iteration);
		current_time += delta_t;
	}
}


void MDSB::test2() {
	timer.start(); //todo
	EnergyCalculator _energyCalculator;
	int lastinsert = 0;
	double r = getRho();
	int fail = 0;
	container->setU0(-1.46);
	while (current_time <  end_t &&  r <1.0) {

		moveParticles();
		// insert new particles
		if(container->getNumParticles()<330 && (iteration-lastinsert)>(int)(r/0.01) && iteration>5000) {
			bool b = container->addP();

				r = getRho();
				if(b) {
					lastinsert = iteration;
					fail = 0;


				}
				else {
					lastinsert +=10;
					fail++;
					}


		//	else std::cout << "asdas" << std::endl;
		}
		calcFnV();
		iteration++;
		//applyThermostat(iteration);
		writeOutput(iteration);

		current_time += delta_t;
	}
}


void MDSB::insertP() {
	//std::cout <<"nump "<< container->getNumParticles() << std::endl;
	//int lastinsert = 0;
//	double r = getRho();
	int fail = 0;
	container->setU0(10);
	if(container->getNumParticles()<numMolecules) {

		bool b = false;
	//	for(int i=0;i<insertCells.size()&& container->getNumParticles()<numMolecules;i++){
			while(!b) {

				int tmp = (int)(((double)rand()/(double)RAND_MAX*(double)insertCells.size()));
				b = container->addP(insertCells[tmp]);
				fail++;
			}
		//}
	}
}

void MDSB::deleteP() {
	int num = 0;
	for(unsigned int i=0;i<outflowsCells.size();i++){
		while(container->getRho(outflowsCells[i])>_maxRho) {
			container->delP(outflowsCells[i]);
			num++;
		}
	}
	//for(int i=0;i<outflowsCells.size();i++)
	//std::cout << num<< " "<< container->getRho(outflowsCells[0]) << std::endl;
}

void MDSB::testFlow(int numPart) {
	timer.start(); //todo
	//int lastinsert = 0;
	//double r = getRho();
	int fail = 0;
	//std::vector<utils::Vector<int, 3> >  insertCells;

	container->setU0(0);
	while (current_time <  end_t) {
		moveParticles();
		// insert new particles
		if(container->getNumParticles()<numPart && iteration%1==0) {
			bool b = false;
			//if( (numPart-container->getNumParticles())<insertCells.size()) {
			//for(int i=0;i<2;i++){ //todo rm
				b = false;
				while(!b) {
					int tmp = (int)(((double)rand()/(double)RAND_MAX*(double)insertCells.size()));
					//std::cout << tmp << " " << insertCells[tmp] << std::endl;
					b = container->addP(insertCells[tmp]);
					//if(!b) {
						fail++;
					//}
				}

			//}
			/*} else {
			//	std::cout << "in16" << std::endl;
			//	b = false;
				for(int i=0;i<insertCells.size();i++) {
					b = false;
					while(!b) {
						b = container->addP(insertCells[i]);
						fail++;
					}
				}

			}*/
		//	std::cout << "insert! @" << fail << std::endl;
			fail = 0;

		}
		calcFnV();
		iteration++;
		writeOutput(iteration);
		//int tmp[] = {10,2,2};
		double v =0.0;

		for(int i=3;i<11;i++) {
			for(int j=1;j<4;j++) {
				for(int k=1;k<4;k++) {
					int tmp[] = {i,j,k};
					v +=container->getV(tmp)[0];
				}
			}

		}
		v /= 72.0;
		std::cout<< "I: " << iteration << " " << "Vx: " << v << std::endl;
		//std::cout<< "I: " << iteration << " " << "Vx: " << container->getV(tmp)[0] << std::endl;

		current_time += delta_t;
	}
}

LinkedCells* MDSB::initializeParticleContainer(Configuration& config, std::vector<Boundary*>& boundaries) {
	vector<FileConfiguration> fileConfigs = config.getFileInputs();
	LinkedCells* container;

	//if (config.getParticleContainer() == Configuration::linkedCells) {
		container = new LinkedCells(config.getCutoffRadius(), config.getDomainSize(), config.getDimension());
		initializeBoundaryConditions(config, *container, boundaries);
	/*} else {
		//container = new SimpleParticleContainer();
	}*/

	for (int i = 0; i < (int) fileConfigs.size(); i++) {
		FileInitializer initializer(fileConfigs[i].getInputFilename().c_str());
		initializer.initialize(*container);
	}

	vector<CuboidConfiguration> cubeConfigs = config.getCuboidInputs();
	for (int i = 0; i < (int) cubeConfigs.size(); i++) {
		CuboidInitializer cubeInitializer(cubeConfigs[i]);
		cubeInitializer.initialize(*container);
	}

	vector<CuboidConfiguration> fccConfigs = config.getFCCInputs();
	for (int i = 0; i < (int) fccConfigs.size(); i++) {
		FCCInitializer fccInitializer(fccConfigs[i]);
		fccInitializer.initialize(*container);
	}

	vector<SphereConfiguration> sphereConfigs = config.getSphereInputs();
	for (int i = 0; i < (int) sphereConfigs.size(); i++) {
		SphereInitializer sphereInitializer(sphereConfigs[i]);
		sphereInitializer.initialize(*container);
	}
	return container;
}


WeightCalculator* MDSB::initCalculator(Configuration& config) {
	if (config.hasGravity()) {
		WeightCalculator* calculator = new WeightCalculator(config.getGravityAxis(), config.getGravityFactor());
		return calculator;
	} else {
		return NULL;
	}
}

void MDSB::initializeBoundaryConditions(Configuration& config, ParticleContainer& container, std::vector<Boundary*>& boundaries) {

	vector<BoundaryConfiguration>& configs = config.getBoundaryConfigurations();;
	BoundaryBuilder::createBoundaries(configs, container, boundaries);
}

void MDSB::runTests() {
	CppUnit::TextUi::TestRunner runner;
	CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();

	runner.addTest( registry.makeTest() );
	runner.run(/*"LinkedCells3dTest::testPairCutoff_1_5"*/);
}

double MDSB::getRho() {
	utils::Vector<double, 3> domainSize = container->getDomainLength();
	int numP = container->getNumParticles();
	double V = domainSize[0]*domainSize[1];

	if(config.getDimension() == 3)
		V *= domainSize[2];

	return numP/V;
}


double MDSB::getRho(utils::Vector<int, 3> cell) {
	return container->getRho(cell);
}

void MDSB::setRho(double rho, utils::Vector<int, 3> cell) {
	container->setRho(rho,cell);
}

utils::Vector<double, 3>  MDSB::getV(utils::Vector<int, 3> cell) {
	double md2ms = 157.0;
	return container->getV(cell)*md2ms;
}

void MDSB::setV(utils::Vector<double, 3> v, utils::Vector<int, 3> cell) {
	double ms2md = 1.0/157.0;
	container->setV(v*ms2md,cell);
}


 void MDSB::getBoundaryCells(std::vector<utils::Vector<int, 3> >& v, int deltaA, int deltaB){
	//std::vector<MDCell*> c;
	container->getSphere(v,deltaA,deltaB);
	//todo rm:
	/*for(int i=v.size()-1;i>=0;i--)
		if(v[i][2] != 1)
			v.erase(v.begin()+i);*/

//	return c;

}

 double MDSB::getCellLength() {
	 return container->getCutOffRadius();
 }

 double MDSB::getDeltaT() {
	 return config.getDeltaT();
 }


 int MDSB::getNumObj() {
	//return 0;
	 // return 100;
	 return container->getNumParticles();
 }

 void MDSB::execHyWriter(outputWriter::VTKWriter fileWriter) {
	 container->traverseParticles(fileWriter);
 }

 void MDSB::execHyWriter(outputWriter::VTKWriter fileWriter, std::vector<utils::Vector<double, 3> > &mdV, int border) {
	// container->traverseParticles(fileWriter);
	 utils::Vector<int, 3> c = 1;
	 int k=0;
	 for(int i=border;i<round(container->getDomainLength()[0]/container->getCutOffRadius()-border);i++)
		 for(int j=border;j<round(container->getDomainLength()[1]/container->getCutOffRadius()-border);j++) {
			 double x = i*container->getCutOffRadius()+container->getCutOffRadius()/2.0;
			 double y = j*container->getCutOffRadius()+container->getCutOffRadius()/2.0;
			 c[0] = i+1;
			 c[1] = j+1;
			 fileWriter.plotMDCell(x,y,container->getCutOffRadius()/2.0,container->getRho(c), mdV[k]);
			 k++;
		 }
  }
