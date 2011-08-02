#ifdef MDSB

#include "MDSB.h"
#include "LBSB.h"
#include "log4cxx/logger.h"
#include "log4cxx/propertyconfigurator.h"
#include "log4cxx/helpers/exception.h"

using namespace std;


log4cxx::LoggerPtr logger = log4cxx::Logger::getRootLogger();
string loggerConfiguration("log4cxx.properties");


void setZero(std::vector<utils::Vector<double, 3> > &v) {
	for(int i=0;i<v.size();i++){
		v[i] = 0.0;
	}

}

void runLB(LBSB &myLB, int lbIterations) {
	for(int i=0;i<lbIterations;i++) {
		myLB.clacF();
		myLB.calcV();
/*			for(int i=0;i<MD_LBMDregion.size();i++){
			lbV[i] = lbV[i] + myLB.getV(LB_LBMDregion[i]);
		}
*/	}
}

void runMD(MDSB &myMD, int iterations, int mdIterations, int lbIterations, std::vector<utils::Vector<double, 3> > &mdV, std::vector<utils::Vector<double, 3> > &lbV,std::vector<utils::Vector<int, 3> >  &MD_MDLBregion,std::vector<utils::Vector<int, 3> >  &MD_LBMDregion) {
	for(int i=0;i<mdIterations;i++) {
//		std::cout << "asd2.1 "<<i << std::endl;

		if(i%2 ==0) {
			for(int j=0;j<MD_LBMDregion.size();j++){
				myMD.setV(lbV[j],MD_LBMDregion[j]);
			}
		}

	//	myMD.writeOutput(iterations*mdIterations+i);
		myMD.moveParticles();
		//moveWall
		//myMD.deleteP();
		//myMD.insertP();
		if(i%10 ==0) {
			for(int j=0;j<MD_LBMDregion.size();j++){
				myMD.setRho(0.61,MD_LBMDregion[j]);
			}
		}
		myMD.calcFnV();
		if(iterations == 0 || i == 300)
			myMD.applyThermostat(iterations*mdIterations+i);
		if(mdIterations-i <= mdIterations/lbIterations) {
			for(int j=0;j<MD_MDLBregion.size();j++){
				mdV[j] = mdV[j] + (double)lbIterations/(double)mdIterations*myMD.getV(MD_MDLBregion[j]);
			}


		}

	}
}

void output(outputWriter::VTKWriter &fileWriter, MDSB &myMD,LBSB &myLB, std::vector<utils::Vector<double, 3> > &mdV, std::string &filename, int iterations) {
	//write output
	std::string filename1(filename+"/hy1_");
	std::string filename2(filename+"/hy2_");
	//fileWriter.initializeOutput(myLB.getNumObj());
	fileWriter.initializeOutput(myLB.getNumObj());
	myMD.execHyWriter(fileWriter, mdV,2);
	myLB.execHyWriter(fileWriter, myMD.getCellLength(),-5.0,-5.0, 1.0, false);
	fileWriter.writeFile(filename1,iterations);

	fileWriter.initializeOutput(myMD.getNumObj()+myLB.getNumObj());
	myMD.execHyWriter(fileWriter);
	myLB.execHyWriter(fileWriter, myMD.getCellLength(),-5.0,-5.0, 1.0, true);
	fileWriter.writeFile(filename2,iterations);

}
void LBsetV(LBSB &myLB,std::vector<utils::Vector<int, 3> >  &LB_MDLBregion, std::vector<utils::Vector<double, 3> > &mdV) {
	for(int i=0;i<LB_MDLBregion.size();i++){
		//utils::Vector<double, 3> v = md2lb*myMD.getV(MD_MDLBregion[i]);
		utils::Vector<double, 3> v = mdV[i];
		myLB.setV(v,LB_MDLBregion[i]);
		//std::cout << "MDV" << v << ";"<<mdV[i]<< "  ";
	}
	//std::cout << std::endl;
}

void MDsetV(MDSB &myMD,LBSB &myLB,std::vector<utils::Vector<int, 3> >  &MD_LBMDregion, std::vector<utils::Vector<int, 3> >  &LB_LBMDregion, std::vector<utils::Vector<double, 3> > &lbV) {
	for(int i=0;i<lbV.size();i++){
		lbV[i] = 0.0;
	}
	for(int i=0;i<MD_LBMDregion.size();i++){
		utils::Vector<double, 3> v = myLB.getV(LB_LBMDregion[i]);
		lbV[i] = v;
	//	utils::Vector<double, 3> v = lb2md2*lbV[i];
		//std::cout << "LBV" << v << "   ";
		//myMD.setV(v,MD_LBMDregion[i]);
	}
	//std::cout << std::endl;
}
int main(int argc, char* argsv[]) {

	cout << endl;

	try {
		log4cxx::PropertyConfigurator::configure(loggerConfiguration);
		LOG4CXX_INFO(logger, "Logger configured.");
	} catch(log4cxx::helpers::Exception& e) {
		cout << "Caught Exception in setup of logging framework!" << endl;
	}


	if (argc != 3) {
		LOG4CXX_ERROR(logger, "Errounous programme call! args: " << argc);
		LOG4CXX_ERROR(logger, "./molsym (-i | -m) (-t |  inputFilename)");
	}

	MDSB myMD(argsv[2], 0.61);




	switch(argsv[1][1]) {
	case 'i': // insert test
		myMD.test();
		break;
	case 'j': // insert test \wo output
		myMD.test2();
		break;
	case 'f': // insert test \wo output
		//old2: myMD.testFlow(540);
		//old3 myMD.testFlow(2500);
		myMD.testFlow(1500);
		break;
	case 'm':
		myMD.exeSim();
		break;
	case 'v': {
		std::vector<utils::Vector<int, 3> > cells;
		myMD.getBoundaryCells(cells, 0,0);
		utils::Vector<double, 3> v = 0.5;
		for(int i=0;i<cells.size();i++){
			std::cout << "old v="<< myMD.getV(cells[i]) << std::endl;
			myMD.setV(v,cells[i]);
			std::cout << "new v="<< myMD.getV(cells[i])  << std::endl;
		}
	}
		break;
	case 't': {
		LBSB myLB(0.44,0.0,8,8,false,0);
		std::vector<utils::Vector<int, 3> > LB_LBMDregion;
		myLB.getBoundaryCells(LB_LBMDregion, 2,2);
		for(int i=0;i<LB_LBMDregion.size();i++)
			std::cout << LB_LBMDregion[i] << std::endl;
	}break;
	case 'l': {

		LBSB myLB(0.0001,0.001,8,8,false,0);
		double end_t = 100;
		double delta_t = 0.01;
		int iterations =0;
		int iMax = end_t/delta_t;
	//	std::vector<utils::Vector<int, 3> > LB_LBMDregion;
	//	myLB.getBoundaryCells(LB_LBMDregion, 2,2);
		std::string filename = "lb/lblog_";
		for(int i=0;i<iMax;i++) {
			myLB.writeOutput(filename,i);
			myLB.clacF();
			myLB.calcV();

		}
	}break;
	case 'w': {

		LBSB myLB(0.0001,0.001,8,8,true,0);
		double end_t = 100;
		double delta_t = 0.01;
		int iterations =0;
		int iMax = end_t/delta_t;
	//	std::vector<utils::Vector<int, 3> > LB_LBMDregion;
	//	myLB.getBoundaryCells(LB_LBMDregion, 2,2);
		std::string filename = "wave/lblog_";
		for(int i=0;i<iMax;i++) {
			myLB.writeOutput(filename,i);
			myLB.clacF();
			myLB.calcV();

		}
	}break;
	case 'h': {
		int argv1_len = strlen(argsv[1]);
		std::cout << argv1_len << std::endl;
		double end_t = 2;
		double delta_t = 0.001;
		int iterations =0;
		int iMax = end_t/delta_t;
		int lbIterations=1;
		int mdIterations=600;
		std::cout << myMD.getCellLength() << std::endl;
		//double md2lb = 1.0; //(double)mdIterations/(double)lbIterations/myMD.getCellLength()*myMD.getDeltaT();
		//double lb2md = 1.0/md2lb;//(double)lbIterations/(double)mdIterations*myMD.getCellLength()/myMD.getDeltaT();
		//double md2lb2 = (double)lbIterations/(double)mdIterations;//myMD.getDeltaT()/myMD.getCellLength();
		//double lb2md2 = 500.0;//myMD.getCellLength()/myMD.getDeltaT();




	/*	LBSB myLB(0.586*6.69/39.304*pow(10,4),360.0*0.01,32,32);
		outputWriter::VTKWriter fileWriter;
		std::vector<utils::Vector<int, 3> >  MD_LBMDregion;
		myMD.getBoundaryCells(MD_LBMDregion, 0,1);
		std::vector<utils::Vector<int, 3> >  MD_MDLBregion;
		myMD.getBoundaryCells(MD_MDLBregion,2,7);
		std::vector<utils::Vector<int, 3> > LB_LBMDregion;
		myLB.getBoundaryCells(LB_LBMDregion, 8,9);
		std::vector<utils::Vector<int, 3> > LB_MDLBregion;
		myLB.getBoundaryCells(LB_MDLBregion, 10,15);*/

		double MDrho2RHO = 6.69/39.304*pow(10,4);

		bool wave = false;
		if(argv1_len == 3 && argsv[1][2] == 'w') {
			wave = true;
			std::cout << "Wave" << std::endl;
		}

		LBSB myLB(0.61*MDrho2RHO,216.0*0.01,20,20,wave,2);
		outputWriter::VTKWriter fileWriter;
		std::vector<utils::Vector<int, 3> >  MD_LBMDregion;
		myMD.getBoundaryCells(MD_LBMDregion, 0,1);
		std::vector<utils::Vector<int, 3> >  MD_MDLBregion;
		myMD.getBoundaryCells(MD_MDLBregion,2,4);
		std::vector<utils::Vector<int, 3> > LB_LBMDregion;
		myLB.getBoundaryCells(LB_LBMDregion, 5,6);
		std::vector<utils::Vector<int, 3> > LB_MDLBregion;
		myLB.getBoundaryCells(LB_MDLBregion, 7,9);

		std::vector<utils::Vector<double, 3> > mdV(MD_MDLBregion.size());
		std::vector<utils::Vector<double, 3> > lbV(MD_LBMDregion.size());

		if(MD_MDLBregion.size() != LB_MDLBregion.size()) {
			//for(int i =0;i<MD_MDLBregion.size();i++)

			std::cout << "MDLB size mismatch " << MD_MDLBregion.size() <<" "<< LB_MDLBregion.size()<< std::endl;
			exit(1);
		}
		if(MD_LBMDregion.size() != LB_LBMDregion.size()){
			std::cout << "LBMD size mismatch "<< MD_LBMDregion.size() <<" "<< LB_LBMDregion.size()<<  std::endl;
			exit(1);
		}


		if(argv1_len == 2) {
			std::string filename = "hybrid";
			while(iterations<iMax) {
			//	std::cout << "I " << iterations << std::endl;
				for(int i=0;i<mdV.size();i++){
					mdV[i] = 0.0;
				}
				runLB(myLB,lbIterations);
				runMD(myMD, iterations,mdIterations,lbIterations, mdV,lbV, MD_MDLBregion,MD_LBMDregion);
				output(fileWriter, myMD, myLB,mdV, filename,iterations);
				std::cout << "asd" << std::endl;

				LBsetV(myLB,LB_MDLBregion,mdV);
				MDsetV(myMD,myLB,MD_LBMDregion, LB_LBMDregion,lbV);
				iterations++;
			}
		} else {
			switch(argsv[1][2]) {
			case 'l': {
				std::string filename = "hybridL";
				myLB.setXV(0.1);
				while(iterations<iMax) {
				//	std::cout << "I " << iterations << std::endl;
					for(int i=0;i<mdV.size();i++){
						mdV[i] = 0.0;
					}
					runLB(myLB,lbIterations);
					runMD(myMD, iterations,mdIterations,lbIterations, mdV,lbV, MD_MDLBregion,MD_LBMDregion);



					output(fileWriter, myMD, myLB,mdV, filename,iterations);
					std::cout << "asd" << std::endl;



				//	LBsetV(myLB,LB_MDLBregion,mdV);
					MDsetV(myMD,myLB,MD_LBMDregion, LB_LBMDregion,lbV);
					iterations++;
				}
			} break;
			case 'w': {
				std::string filename = "hybridW";
				while(iterations<iMax) {
				//	std::cout << "I " << iterations << std::endl;
					for(int i=0;i<mdV.size();i++){
						mdV[i] = 0.0;
					}

					runLB(myLB,lbIterations);

					runMD(myMD, iterations,mdIterations,lbIterations, mdV,lbV, MD_MDLBregion,MD_LBMDregion);

					output(fileWriter, myMD, myLB,mdV, filename,iterations);
					std::cout << "asd" << std::endl;

					for(int i=0;i<MD_LBMDregion.size();i++){
						lbV[i] = 0.0;
					}


				//	LBsetV(myLB,LB_MDLBregion,mdV);
					MDsetV(myMD,myLB,MD_LBMDregion, LB_LBMDregion,lbV);

					iterations++;
				}
			} break;
			case 'm': {
				std::string filename = "hybridM";
				while(iterations<iMax) {
				//	std::cout << "I " << iterations << std::endl;
					for(int i=0;i<mdV.size();i++){
						mdV[i] = 0.0;
					}
					runLB(myLB,lbIterations);
					runMD(myMD, iterations,mdIterations,lbIterations, mdV,lbV, MD_MDLBregion,MD_LBMDregion);

					output(fileWriter, myMD, myLB,mdV, filename,iterations);
					std::cout << "asd" << std::endl;



					LBsetV(myLB,LB_MDLBregion,mdV);
				//	MDsetV(myMD,myLB,MD_LBMDregion, LB_LBMDregion);
					iterations++;
				}
			} break;
			}
		}
	}
		break;
	}
}
#endif
