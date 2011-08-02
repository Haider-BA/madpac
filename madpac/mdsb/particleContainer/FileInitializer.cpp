/*
 * FileInitializer.cpp
 *
 * @Date: 30.09.2010
 * @Author: eckhardw
 */

#include "FileInitializer.h"
#include <sstream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

FileInitializer::FileInitializer(const char* fileName)
: _fileName(fileName){
	_typeID = _num_instances;
	_num_instances++;
}

FileInitializer::~FileInitializer() {
}

void FileInitializer::initialize(ParticleContainer& container) {
	double x[] = {0,0,0};
	double v[] = {1,1,1};
	// We have to read oldF, otherwise our integration scheme won't work...
	utils::Vector<double, 3> oldF;
	double m = 1;
	double epsilon = 1;
	double sigma = 1;
	int num_particles = 0;

	std::ifstream input_file(_fileName.c_str());
	string tmp_string;

	if (input_file.is_open()) {

		getline(input_file, tmp_string);
		cout << "Read line: " << tmp_string << endl;

		while (tmp_string.size() == 0 || tmp_string[0] == '#') {
			getline(input_file, tmp_string);
			cout << "Read line: " << tmp_string << endl;
		}

		istringstream numstream(tmp_string);
		numstream >> num_particles;
		cout << "Reading " << num_particles << "." << endl;
		getline(input_file, tmp_string);
		cout << "Read line: " << tmp_string << endl;

		for (int i = 0; i < num_particles; i++) {
			istringstream datastream(tmp_string);

			for (int j = 0; j < 3; j++) {
				datastream >> x[j];

			}
			for (int j = 0; j < 3; j++) {
				datastream >> v[j];
			}

			for (int j = 0; j < 3; j++) {
				datastream >> oldF[j];
			}

			if (datastream.eof()) {
				cout << "Error reading file: eof reached unexpectedly reading from line " << i << endl;
				exit(-1);
			}
			datastream >> m;
			datastream >> epsilon;
			datastream >> sigma;
			Particle p(x, v, m, epsilon, sigma, _typeID);
			p.getOldF() = oldF;
			container.addParticle(p);

			getline(input_file, tmp_string);
			cout << "Read line: " << tmp_string << endl;
		}
	} else {
		std::cout << "Error: could not open file " << _fileName << std::endl;
		exit(-1);
	}

}
