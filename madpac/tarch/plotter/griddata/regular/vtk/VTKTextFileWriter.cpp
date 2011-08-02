#include "tarch/plotter/griddata/regular/vtk/VTKTextFileWriter.h"
#include <stdio.h>
#include <fstream>



const std::string tarch::plotter::griddata::regular::vtk::VTKTextFileWriter::HEADER =
  "# vtk DataFile Version 2.0\n "\
  "Generated by Peano2 output component $Revision: 1.2 $ Author: Atanas Atanasov\n "\
  "ASCII\n ";


tarch::plotter::griddata::regular::vtk::VTKTextFileWriter::VTKTextFileWriter(
  const tarch::la::Vector<2,int>&     numberOfGridPoints,
  const tarch::la::Vector<2,double>&  domainSize,
  const tarch::la::Vector<2,double>&  origin
):
  tarch::plotter::griddata::regular::CartesianGridArrayWriter(
    numberOfGridPoints,
    domainSize,
    origin
  ) {
}


tarch::plotter::griddata::regular::vtk::VTKTextFileWriter::VTKTextFileWriter(
  const tarch::la::Vector<3,int>&     numberOfGridPoints,
  const tarch::la::Vector<3,double>&  domainSize,
  const tarch::la::Vector<3,double>&  origin
):
  tarch::plotter::griddata::regular::CartesianGridArrayWriter(
    numberOfGridPoints,
    domainSize,
    origin
  ) {
}


tarch::plotter::griddata::regular::vtk::VTKTextFileWriter::~VTKTextFileWriter() {
}


void tarch::plotter::griddata::regular::vtk::VTKTextFileWriter::writeToFile( const std::string& filename ) {
  logTraceInWith5Arguments( "writeToFile(filename)", filename, _writtenToFile, _numberOfGridPoints, _domainSize, _origin );

  std::ofstream out;
  out.open( filename.c_str() );
  if ( (!out.fail()) && out.is_open() ) {
    _log.debug( "close()", "opened data file " + filename );

    out << HEADER << std::endl << std::endl;

    out << "DATASET STRUCTURED_POINTS" << std::endl
        << "DIMENSIONS  "
          << _numberOfGridPoints(0) << " "
          << _numberOfGridPoints(1) << " "
          << _numberOfGridPoints(2)
          << std::endl << std::endl;
    out << "ORIGIN "
          << static_cast<float>(_origin(0)) << " "
          << static_cast<float>(_origin(1)) << " "
          << static_cast<float>(_origin(2))
          << std::endl << std::endl;
    out << "SPACING "
          << static_cast<float>(getH()(0)) << " "
          << static_cast<float>(getH()(1)) << " "
          << static_cast<float>(getH()(2))
          << std::endl << std::endl;

    assertion(static_cast<float>(getH()(0))>0);
    assertion(static_cast<float>(getH()(1))>0);
    assertion(static_cast<float>(getH()(2))>=0);

    if (!_vertexData.empty()) {
      out << "POINT_DATA " << tarch::la::volume(_numberOfGridPoints) << std::endl << std::endl;

      for (int i=0; i<static_cast<int>(_vertexData.size()); i++) {
    	if (_vertexData[i]._recordsPerEntry == 3) {
          out << "VECTORS " << _vertexData[i]._identifier << " float " << std::endl;
    	}
    	else {
          out << "SCALARS " << _vertexData[i]._identifier << " float " << _vertexData[i]._recordsPerEntry << std::endl;
          out << "LOOKUP_TABLE default" << std::endl;
    	}
        for (int j=0; j<tarch::la::volume(_numberOfGridPoints); j++) {
          for (int k=0; k<_vertexData[i]._recordsPerEntry; k++) {
            out << static_cast<float>(_vertexData[i]._data[j*_vertexData[i]._recordsPerEntry+k]) << " ";
          }
          out << std::endl;
        }
        out << std::endl << std::endl;
      }
    }
    if (!_cellData.empty()) {
      out << "CELL_DATA " << tarch::la::volume(_numberOfGridPoints-1) << std::endl << std::endl;

      for (int i=0; i<static_cast<int>(_cellData.size()); i++) {
        if (_cellData[i]._recordsPerEntry == 3) {
          out << "VECTORS " << _cellData[i]._identifier << " float " << std::endl;
        }
        else {
          out << "SCALARS " << _cellData[i]._identifier << " float " << _cellData[i]._recordsPerEntry << std::endl;
        }
        for (int j=0; j<tarch::la::volume(_numberOfGridPoints-1); j++) {
          for (int k=0; k<_cellData[i]._recordsPerEntry; k++) {
            out << static_cast<float>(_cellData[i]._data[j*_cellData[i]._recordsPerEntry+k]) << " ";
          }
          out << std::endl;
        }
        out << std::endl << std::endl;
      }
    }

    _writtenToFile = true;
  }
  logTraceOut( "writeToFile(filename)" );
}


//		int numberOfPoints = (_numberOfGridPoints[0]+1) * (_numberOfGridPoints[1]+1);
//		int numberOfCells = (_numberOfGridPoints[0]) *(_numberOfGridPoints[1]) ;
//		if(numberOfPoints>0 && !_vertexDataDescription.empty()){
//			out << _vertexDataDescription << std::endl << std::endl;
//			_vertexDataDescription.erase(_vertexDataDescription.begin(),_vertexDataDescription.end());
//		}
//		if(numberOfCells>0 && !_cellDataDescription.empty()){
//			out << "CELL_DATA" << numberOfCells << std::endl;
//			out << _cellDataDescription << std::endl << std::endl;
//		}
	//	_out << "VECTORS " << dataIdentifier << " double " << std::endl;
//	  if (_recordsPerCell!=3) {
//	    _out << "SCALARS " << dataIdentifier << " float " << _recordsPerCell << std::endl
//	         << "LOOKUP_TABLE default" << std::endl;
//
//	for(unsigned int i=0;i<_data.size();i++){
//		_out<< static_cast<float>(_data[i])<<" ";
//		if((i+1)%_recordsPerVertex==0)
//			_out<<0.0<<std::endl;
//	}
