/*
 * VTKWriter.h
 *
 *  Created on: 01.03.2010
 *      Author: eckhardw
 */

#ifndef VTKWRITER_H_
#define VTKWRITER_H_

#include "Particle.h"
#include "OutputWriter.h"
#include "outputWriter/vtk-unstructured.hxx"
#include "utils/OffsetArray.h"

#include <list>


namespace outputWriter {

/**
 * This class implements the functionality to generate vtk output from particles.
 */
class VTKWriter : public outputWriter::OutputWriter, public ParticleHandler{

public:
	VTKWriter();

	virtual ~VTKWriter();

	void writeOutput(ParticleContainer& container, const std::string& filename, int iteration);

	void handleParticle(Particle& p);

	void writeOutput(int xsize, int ysize, OffsetArray<double> *_p, OffsetArray<utils::Vector<double,2> > *_v, const std::string& filename, int iteration);

	/**
	 * plot mass, position, velocity and force of a particle.
	 *
	 * @note: initializeOutput() must have been called before.
	 */
	void plotParticle(Particle& p);

	void plotCell(OffsetArray<double> *_p, OffsetArray<utils::Vector<double,2> > *_v, int i, int j, double cellSize, double xOffset, double yOffset, double lb2md);


	void plotMDCell(double x,double y, double z, double rho, utils::Vector<double, 3> v);
	/**
	 * writes the concrete output file.
	 *
	 * @param filename the base name of the file to be written.
	 * @param iteration the number of the current iteration,
	 *        which is used to generate an unique filename
	 */
	void writeFile(const std::string& filename, int iteration);

	/**
	 * set up internal data structures and prepare to plot a particle.
	 */

	void initializeOutput(int numParticles);





private:
	VTKFile_t* vtkFile;
};

}

#endif /* VTKWRITER_H_ */
