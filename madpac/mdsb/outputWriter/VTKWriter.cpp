/*
 * VTKWriter.cpp
 *
 *  Created on: 01.03.2010
 *      Author: eckhardw
 */

#include "VTKWriter.h"

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

namespace outputWriter {

VTKWriter::VTKWriter() {
	// TODO Auto-generated constructor stub

}

VTKWriter::~VTKWriter() {
	// TODO Auto-generated destructor stub
}

void VTKWriter::writeOutput(ParticleContainer& container, const std::string& filename, int iteration) {
	initializeOutput(container.getNumParticles());
	container.traverseParticles(*this);
	writeFile(filename, iteration);
}

void VTKWriter::writeOutput(int xsize, int ysize, OffsetArray<double> *_p, OffsetArray<utils::Vector<double,2> > *_v, const std::string& filename, int iteration) {
	initializeOutput(xsize*ysize);
	for(int i=0;i<xsize;i++)
		for(int j=0;j<ysize;j++)
			plotCell(_p,_v,i,j,1,0,0,1);
	writeFile(filename, iteration);
}


void VTKWriter::handleParticle(Particle& p) {
	plotParticle(p);
}

void VTKWriter::initializeOutput(int numParticles) {
	vtkFile = new VTKFile_t("UnstructuredGrid");

	// per point, we add mass, velocity, force, type and stress
	// and in DEBUG mode the id of the molecules
	PointData pointData;
	DataArray_t mass(type::Float32, "mass", 1);
	DataArray_t velocity(type::Float32, "velocity", 3);
	DataArray_t forces(type::Float32, "force", 3);
	DataArray_t type(type::Int32, "type", 1);
	DataArray_t stress(type::Float32, "stress", 1);
	DataArray_t flag(type::Int32, "flag", 1);
	pointData.DataArray().push_back(mass);
	pointData.DataArray().push_back(velocity);
    pointData.DataArray().push_back(forces);
    pointData.DataArray().push_back(type);
    pointData.DataArray().push_back(stress);
    pointData.DataArray().push_back(flag);

#ifdef DEBUG
    DataArray_t id(type::Int32, "id", 1);
    pointData.DataArray().push_back(id);
#endif

	CellData cellData; // we don't have cell data => leave it empty

	// 3 coordinates
	Points points;
	DataArray_t pointCoordinates(type::Float32, "points", 3);
	points.DataArray().push_back(pointCoordinates);

	Cells cells; // we don't have cells, => leave it empty
	// for some reasons, we have to add a dummy entry for paraview
	DataArray_t cells_data(type::Float32, "types", 0);
	cells.DataArray().push_back(cells_data);

	PieceUnstructuredGrid_t piece(pointData, cellData, points, cells, numParticles, 0);
	UnstructuredGrid_t unstructuredGrid(piece);
	vtkFile->UnstructuredGrid(unstructuredGrid);
}

void VTKWriter::writeFile(const std::string& filename, int iteration) {
	stringstream strstr;
	strstr << filename << "_" << (iteration < 10 ? "000" : (iteration < 100 ? "00" : ( iteration < 1000 ? "0" : "") )) << iteration << ".vtu";

	std::ofstream file(strstr.str().c_str());
	VTKFile (file, *vtkFile);
	delete vtkFile;
}

void VTKWriter::plotParticle(Particle& p) {
	if (vtkFile->UnstructuredGrid().present()) {
		//cout << "UnstructuredGrid is present" << endl;
	} else {
		cout << "ERROR: No UnstructuredGrid present" << endl;
	}

	PointData::DataArray_sequence& pointDataSequence = vtkFile->UnstructuredGrid()->Piece().PointData().DataArray();
	PointData::DataArray_iterator dataIterator = pointDataSequence.begin();

	dataIterator->push_back(p.getM());
	//cout << "Appended mass data in: " << dataIterator->Name();

	dataIterator++;
	dataIterator->push_back(p.getV()[0]*157);
	dataIterator->push_back(p.getV()[1]*157);
	dataIterator->push_back(p.getV()[2]*157);
	//cout << "Appended velocity data in: " << dataIterator->Name();

	dataIterator++;
	dataIterator->push_back(p.getF()[0]);
	dataIterator->push_back(p.getF()[1]);
	dataIterator->push_back(p.getF()[2]);
	//cout << "Appended force data in: " << dataIterator->Name();

	dataIterator++;
	dataIterator->push_back(p.getType());

	dataIterator++;
	dataIterator->push_back(p.getStress());

	dataIterator++;
	dataIterator->push_back(p.getFlag() == true? 1 : 0);
#ifdef DEBUG
	dataIterator++;
	dataIterator->push_back(p.getID());
#endif

	Points::DataArray_sequence& pointsSequence = vtkFile->UnstructuredGrid()->Piece().Points().DataArray();
	Points::DataArray_iterator pointsIterator = pointsSequence.begin();
	pointsIterator->push_back(p.getX()[0]);
	pointsIterator->push_back(p.getX()[1]);
	pointsIterator->push_back(p.getX()[2]);
}

void VTKWriter::plotMDCell(double x,double y, double z, double rho, utils::Vector<double, 3> v) {
	if (vtkFile->UnstructuredGrid().present()) {
		//cout << "UnstructuredGrid is present" << endl;
	} else {
		cout << "ERROR: No UnstructuredGrid present" << endl;
	}

	PointData::DataArray_sequence& pointDataSequence = vtkFile->UnstructuredGrid()->Piece().PointData().DataArray();
	PointData::DataArray_iterator dataIterator = pointDataSequence.begin();

	if(rho>0.65)
		std::cout <<"rho" <<rho << " x" << x<<" y"<<y<<" z"<<z<<" rrho"<<(rho*6.69/39.304*pow(10,4))<<std::endl;
	dataIterator->push_back(rho*6.69/39.304*pow(10,4));
	//cout << "Appended mass data in: " << dataIterator->Name();

	dataIterator++;
	//dataIterator->push_back(v[0]*157);
	//dataIterator->push_back(v[1]*157);
	//dataIterator->push_back(v[2]*157);
	dataIterator->push_back(v[0]);
	dataIterator->push_back(v[1]);
	dataIterator->push_back(v[2]);
	//cout << "Appended velocity data in: " << dataIterator->Name();

	dataIterator++;
	dataIterator->push_back(0.0);
	dataIterator->push_back(0.0);
	dataIterator->push_back(0.0);
	//cout << "Appended force data in: " << dataIterator->Name();

	dataIterator++;
	dataIterator->push_back(199);

	dataIterator++;
	dataIterator->push_back(0);

	dataIterator++;
	dataIterator->push_back( 0);
#ifdef DEBUG
	dataIterator++;
	dataIterator->push_back(199);
#endif

	Points::DataArray_sequence& pointsSequence = vtkFile->UnstructuredGrid()->Piece().Points().DataArray();
	Points::DataArray_iterator pointsIterator = pointsSequence.begin();
	pointsIterator->push_back(x);
	pointsIterator->push_back(y);
	pointsIterator->push_back(z);
}

void VTKWriter::plotCell(OffsetArray<double> *_p, OffsetArray<utils::Vector<double,2> > *_v, int i, int j, double cellSize, double xOffset, double yOffset, double lb2md) {
	if (vtkFile->UnstructuredGrid().present()) {
		//cout << "UnstructuredGrid is present" << endl;
	} else {
		std::cout << "ERROR: No UnstructuredGrid present" << std::endl;
	}

	PointData::DataArray_sequence& pointDataSequence = vtkFile->UnstructuredGrid()->Piece().PointData().DataArray();
	PointData::DataArray_iterator dataIterator = pointDataSequence.begin();

	dataIterator->push_back(_p->get(i,j));
	//cout << "Appended mass data in: " << dataIterator->Name();

	dataIterator++;
	dataIterator->push_back(_v->get(i,j)[0]*901*lb2md);
	dataIterator->push_back(_v->get(i,j)[1]*901*lb2md);
	dataIterator->push_back(0.0);
	//cout << "Appended velocity data in: " << dataIterator->Name();


	dataIterator++;
	dataIterator->push_back(0.0);
	dataIterator->push_back(0.0);
	dataIterator->push_back(0.0);
	//cout << "Appended force data in: " << dataIterator->Name();

	dataIterator++;
	dataIterator->push_back(99);

	dataIterator++;
	dataIterator->push_back(0);

	dataIterator++;
	dataIterator->push_back( 0);
#ifdef DEBUG
	dataIterator++;
	dataIterator->push_back(99);
#endif

	Points::DataArray_sequence& pointsSequence = vtkFile->UnstructuredGrid()->Piece().Points().DataArray();
	Points::DataArray_iterator pointsIterator = pointsSequence.begin();
	pointsIterator->push_back(((double)i*cellSize+xOffset*cellSize+cellSize/2.0));
	pointsIterator->push_back(((double)j*cellSize+yOffset*cellSize+cellSize/2.0));
	pointsIterator->push_back(cellSize/2.0);
}

}
