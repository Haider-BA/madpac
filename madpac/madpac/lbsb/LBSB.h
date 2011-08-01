/***************************************************************************
 *   Copyright (C) 2011 by Peter Hoffmann <peter.hoffmann@mytum.de>        *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef LBSB_H_
#define LBSB_H_


#include "utils/Vector.h"
#include "utils/OffsetArray.h"
#include "lbmd/dataContainer.h"
#include <vector>

class LBSB {
public:
	LBSB(double rho, double t, int xsize, int ysize, bool wave, dataContainer *hDataContainer);
	virtual ~LBSB();

	//void getBoundaryCells(std::vector<utils::Vector<int, 3> >& v, int deltaA, int deltaB);


	void calcV();
	void clacF();
	void getNsetV(bool first);
//	utils::Vector<double, 3> getV(utils::Vector<int, 3> cell);
//	void setV(utils::Vector<double, 3> v, utils::Vector<int, 3> cell);
	void setXV(double v);

	void writeOutput(const std::string& filename, int iteration);

	 int getNumObj();

	// void execHyWriter(outputWriter::VTKWriter fileWriter, double cellSize, double xOffset, double yOffset, double lb2md, bool drawInner);
private:

	dataContainer *_dataContainer;
	void initializeOutput(int numParticles);
	void plotCell(int i, int j);
	void writeFile(const std::string& filename, int iteration);
//	outputWriter::VTKWriter _fileWriter;
	bool _wave;
	OffsetArray<double> **_f;
	OffsetArray<double> *_p;
	int iteration;
	//int _borderSize;
	OffsetArray<utils::Vector<double,2> > *_v;
	int _xsize;
	int _ysize;
	double GaussDeviate();
	double tau;

	//VTKFile_t* vtkFile;

};

#endif /* LBSB_H_ */
