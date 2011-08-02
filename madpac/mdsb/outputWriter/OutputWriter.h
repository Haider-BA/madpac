/*
 * OutputWriter.h
 *
 *  Created on: 27.02.2010
 *      Author: eckhardw
 */

#ifndef OUTPUTWRITER_H_
#define OUTPUTWRITER_H_

#include "particleContainer/LinkedCells.h"
namespace outputWriter {
	class OutputWriter;
}

/**
 * Base Interface for file output.
 */
class outputWriter::OutputWriter {

public:
	OutputWriter() {}

	virtual ~OutputWriter(){}

	virtual void writeOutput(ParticleContainer& container, const std::string& filename, int iteration) = 0;
};

#endif /* OUTPUTWRITER_H_ */
