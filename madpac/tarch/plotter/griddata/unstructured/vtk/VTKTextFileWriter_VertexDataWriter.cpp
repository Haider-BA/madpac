#include "tarch/plotter/griddata/unstructured/vtk/VTKTextFileWriter.h"

#include <limits>


tarch::plotter::griddata::unstructured::vtk::VTKTextFileWriter::VertexDataWriter::VertexDataWriter(
  const std::string& dataIdentifier, VTKTextFileWriter& writer, int recordsPerVertex
):
  _lastWriteCommandVertexNumber(-1),
  _myWriter(writer),
  _out(),
  _recordsPerVertex(recordsPerVertex),
  _minValue(std::numeric_limits<double>::max()),
  _maxValue(std::numeric_limits<double>::min()) {
  assertion(_recordsPerVertex>0);

  if (_recordsPerVertex!=3) {
    _out << "SCALARS " << dataIdentifier << " float " << _recordsPerVertex << std::endl
         << "LOOKUP_TABLE default" << std::endl;
  }
  else {
    _out << "VECTORS " << dataIdentifier << " float " << std::endl;
  }
}


tarch::plotter::griddata::unstructured::vtk::VTKTextFileWriter::VertexDataWriter::~VertexDataWriter() {
  if (_lastWriteCommandVertexNumber>=-1) {
    close();
  }
}


void tarch::plotter::griddata::unstructured::vtk::VTKTextFileWriter::VertexDataWriter::close() {
  assertionEquals( _lastWriteCommandVertexNumber, _myWriter._numberOfVertices-1 );
  assertionMsg( _myWriter.isOpen(), "Maybe you forgot to call close() on a data writer before you destroy your writer?" );

  if (_lastWriteCommandVertexNumber>=-1) {
    _out << std::endl;
    _myWriter._vertexDataDescription += _out.str();
  }
  _lastWriteCommandVertexNumber = -2;
}


void tarch::plotter::griddata::unstructured::vtk::VTKTextFileWriter::VertexDataWriter::plotVertex( int index, double value ) {
  assertion(_lastWriteCommandVertexNumber>=-1);
  assertion(1<=_recordsPerVertex);

  float valueAsFloat = static_cast<float>(value);
  assertion3( valueAsFloat != std::numeric_limits<float>::infinity(), index, value, valueAsFloat );
  assertion3( valueAsFloat == valueAsFloat, index, value, valueAsFloat );  // test for not a number

  while (_lastWriteCommandVertexNumber<index-1) {
    plotVertex(_lastWriteCommandVertexNumber+1,0.0);
  }

  _lastWriteCommandVertexNumber = index;
  _out << valueAsFloat << " ";
  for (int i=1; i<_recordsPerVertex; i++) {
    _out << 0.0 << " ";
  }

  _out << std::endl;

  if (value<_minValue) _minValue = value;
  if (value>_maxValue) _maxValue = value;
}


void tarch::plotter::griddata::unstructured::vtk::VTKTextFileWriter::VertexDataWriter::plotVertex( int index, const tarch::la::Vector<2,double>& value ) {
  assertion(_lastWriteCommandVertexNumber>=-1);
  assertion(2<=_recordsPerVertex);

  assertion1( static_cast<float>(value(0)) != std::numeric_limits<float>::infinity(), value(0) );
  assertion1( value(0) == value(0), value(0) );  // test for not a number

  assertion1( static_cast<float>(value(1)) != std::numeric_limits<float>::infinity(), value(1) );
  assertion1( value(1) == value(1), value(1) );  // test for not a number

  while (_lastWriteCommandVertexNumber<index-1) {
    plotVertex(_lastWriteCommandVertexNumber+1,0.0);
  }

  _lastWriteCommandVertexNumber = index;
  _out << static_cast<float>(value(0)) << " ";
  _out << static_cast<float>(value(1)) << " ";
  for (int i=2; i<_recordsPerVertex; i++) {
    _out << 0.0 << " ";
  }
  _out << std::endl;

  if (value(0)<_minValue) _minValue = value(0);
  if (value(0)>_maxValue) _maxValue = value(0);
  if (value(1)<_minValue) _minValue = value(1);
  if (value(1)>_maxValue) _maxValue = value(1);
}


void tarch::plotter::griddata::unstructured::vtk::VTKTextFileWriter::VertexDataWriter::plotVertex( int index, const tarch::la::Vector<3,double>& value ) {
  assertion(_lastWriteCommandVertexNumber>=-1);
  assertion(3<=_recordsPerVertex);

  assertion1( static_cast<float>(value(0)) != std::numeric_limits<float>::infinity(), value(0) );
  assertion1( value(0) == value(0), value(0) );  // test for not a number

  assertion1( static_cast<float>(value(1)) != std::numeric_limits<float>::infinity(), value(1) );
  assertion1( value(1) == value(1), value(1) );  // test for not a number

  assertion1( static_cast<float>(value(2)) != std::numeric_limits<float>::infinity(), value(2) );
  assertion1( value(2) == value(2), value(2) );  // test for not a number

  while (_lastWriteCommandVertexNumber<index-1) {
    plotVertex(_lastWriteCommandVertexNumber+1,0.0);
  }

  _lastWriteCommandVertexNumber = index;
  _out << static_cast<float>(value(0)) << " ";
  _out << static_cast<float>(value(1)) << " ";
  _out << static_cast<float>(value(2)) << " ";
  for (int i=3; i<_recordsPerVertex; i++) {
    _out << 0.0 << " ";
  }
  _out << std::endl;

  if (value(0)<_minValue) _minValue = value(0);
  if (value(0)>_maxValue) _maxValue = value(0);
  if (value(1)<_minValue) _minValue = value(1);
  if (value(1)>_maxValue) _maxValue = value(1);
  if (value(2)<_minValue) _minValue = value(2);
  if (value(2)>_maxValue) _maxValue = value(2);
}


double tarch::plotter::griddata::unstructured::vtk::VTKTextFileWriter::VertexDataWriter::getMinValue() const {
  return _minValue;
}


double tarch::plotter::griddata::unstructured::vtk::VTKTextFileWriter::VertexDataWriter::getMaxValue() const {
  return _maxValue;
}
