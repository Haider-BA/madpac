/*
 * LBSB.h
 *
 *  Created on: 07.03.2011
 *      Author: ph
 */

#ifndef LBSB_H_
#define LBSB_H_


#include "particleContainer/Cell.h"
#include "utils/Vector.h"
#include "utils/OffsetArray.h"
#include "outputWriter/OutputWriter.h"
#include "outputWriter/vtk-unstructured.hxx"
#include <vector>
#include "outputWriter/VTKWriter.h"

class LBSB {
public:
	LBSB(double rho, double t, int xsize, int ysize, bool wave, int border);
	virtual ~LBSB();

	void getBoundaryCells(std::vector<utils::Vector<int, 3> >& v, int deltaA, int deltaB);


	void calcV();
	void clacF();
	utils::Vector<double, 3> getV(utils::Vector<int, 3> cell);
	void setV(utils::Vector<double, 3> v, utils::Vector<int, 3> cell);
	void setXV(double v);

	void writeOutput(const std::string& filename, int iteration);

	 int getNumObj();

	 void execHyWriter(outputWriter::VTKWriter fileWriter, double cellSize, double xOffset, double yOffset, double lb2md, bool drawInner);
private:
	void initializeOutput(int numParticles);
	void plotCell(int i, int j);
	void writeFile(const std::string& filename, int iteration);

        int _xsize;
          int _ysize;
   double tau;
  bool _wave;
  int _borderSize;
         int iteration;
	outputWriter::VTKWriter _fileWriter;

	OffsetArray<double> **_f;
	OffsetArray<double> *_p;


	OffsetArray<utils::Vector<double,2> > *_v;

	double GaussDeviate();


	VTKFile_t* vtkFile;

};

#endif /* LBSB_H_ */
