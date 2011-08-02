/*
 * PhaseSpaceWriter.cpp
 *
 * @Date: 29.11.2010
 * @Author: eckhardw
 */

#include "PhaseSpaceWriter.h"

using namespace std;

PhaseSpaceWriter::PhaseSpaceWriter() {
}

PhaseSpaceWriter::~PhaseSpaceWriter() {
}


void PhaseSpaceWriter::writeOutput(ParticleContainer& container, const std::string& filename, int iteration) {
	_file = new std::ofstream(filename.c_str());
	*_file << container.getNumParticles() << endl;
	container.traverseParticles(*this);
	_file->close();
	delete _file;
}

void PhaseSpaceWriter::handleParticle(Particle& p) {
	*_file << p.getX()[0] << " " << p.getX()[1] << " " << p.getX()[2] << " "
			<< p.getV()[0] << " " << p.getV()[1] << " " << p.getV()[2] << " "
			<< p.getOldF()[0] << " " << p.getOldF()[1] << " " << p.getOldF()[2] << " "
			<< p.getM() << " " << p.getEspilon() << " " << p.getSigma() << endl;
}
