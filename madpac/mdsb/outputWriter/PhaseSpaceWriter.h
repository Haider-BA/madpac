/*
 * PhaseSpaceWriter.h
 *
 * @Date: 29.11.2010
 * @Author: eckhardw
 */

#ifndef PHASESPACEWRITER_H_
#define PHASESPACEWRITER_H_

#include "outputWriter/OutputWriter.h"
#include "particleContainer/ParticleHandler.h"

#include <fstream>
#include <iostream>

class PhaseSpaceWriter: public outputWriter::OutputWriter, public ParticleHandler {

public:

	PhaseSpaceWriter();

	virtual ~PhaseSpaceWriter();

	void writeOutput(ParticleContainer& container, const std::string& filename, int iteration);

	void handleParticle(Particle& p);

private:

	std::ofstream* _file;

};

#endif /* PHASESPACEWRITER_H_ */
