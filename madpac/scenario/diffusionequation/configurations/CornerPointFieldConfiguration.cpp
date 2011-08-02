#include "scenario/diffusionequation/configurations/CornerPointFieldConfiguration.h"
#include "tarch/logging/CommandLineLogger.h"

#include <iostream>
#include <fstream>


tarch::logging::Log scenario::diffusionequation::configurations::CornerPointFieldConfiguration::_log( "scenario::diffusionequation::configurations::CornerPointFieldConfiguration" );


scenario::diffusionequation::configurations::CornerPointFieldConfiguration::CornerPointFieldConfiguration():
  _isValid(false) {
}


scenario::diffusionequation::CornerPointField* scenario::diffusionequation::configurations::CornerPointFieldConfiguration::interpreteConfiguration() const {
  scenario::diffusionequation::CornerPointField* result = 0;
  #if defined(Dim2)
  tarch::la::Vector<DIMENSIONS,double> boundingBox;
  tarch::la::Vector<DIMENSIONS,double> offset;

  boundingBox(0) = _boundingBoxMax(0)-_boundingBoxMin(0);
  boundingBox(1) = _boundingBoxMax(2)-_boundingBoxMin(2);

  offset(0) = _boundingBoxMin(0);
  offset(1) = _boundingBoxMin(2);

  result = new CornerPointField(boundingBox, offset, _fieldDimensions, _entries );
  #elif defined(Dim3)
  result = new CornerPointField( _boundingBoxMax-_boundingBoxMin, _boundingBoxMin, _fieldDimensions, _entries );
  #endif

  assertion( result!=0 );
  return result;
}


void scenario::diffusionequation::configurations::CornerPointFieldConfiguration::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  _isValid = true;

  if ( xmlReader->getAttributeValue("dimension")!=0 ) {
    _fieldDimensions = xmlReader->getAttributeValueAsIntVector<2>("dimension");
  }
  else {
    logError( "parseSubtag(...)", "attribute vector \"dimension\" is missing" );
    _isValid = false;
  }

  if ( xmlReader->getAttributeValue("layers")!=0 ) {
    _layers = xmlReader->getAttributeValueAsDouble("layers");
  }
  else {
    logError( "parseSubtag(...)", "attribute \"layers\" is missing" );
    _isValid = false;
  }

  if ( xmlReader->getAttributeValue("permeability-file")!=0 ) {
    _permeabilityFileFilename = xmlReader->getAttributeValue("permeability-file");
  }
  else {
    logError( "parseSubtag(...)", "attribute \"permeability-file\" is missing" );
    _isValid = false;
  }

  if ( xmlReader->getAttributeValue("corner-depths-file")!=0 ) {
    _cornerDepthsFileFilename = xmlReader->getAttributeValue("corner-depths-file");
  }
  else {
    logError( "parseSubtag(...)", "attribute \"corner-depths-file\" is missing" );
    _isValid = false;
  }

  if ( xmlReader->getAttributeValue("coordinates-file")!=0 ) {
    _coordinatesFileFilename = xmlReader->getAttributeValue("coordinates-file");
  }
  else {
    logError( "parseSubtag(...)", "attribute \"coordinates-file\" is missing" );
    _isValid = false;
  }


  if (_isValid) {
    _entries.resize(tarch::la::volume(_fieldDimensions));

    tarch::logging::CommandLineLogger::getInstance().addFilterListEntry( tarch::logging::CommandLineLogger::FilterListEntry("debug",-1,"scenario::diffusionequation::CornerPointField::CornerPointPillar::addLayerData", true) );
    parseFiles();
  }
}


int scenario::diffusionequation::configurations::CornerPointFieldConfiguration::getCellStackIndex( int x, int y ) const {
  return x + y * _fieldDimensions(0);
}


int scenario::diffusionequation::configurations::CornerPointFieldConfiguration::getCellIndex( int x, int y, int layer ) const {
  return x + y * _fieldDimensions(0) + layer * _fieldDimensions(0) * _fieldDimensions(1);
}


tarch::la::Vector<2,double> scenario::diffusionequation::configurations::CornerPointFieldConfiguration::getPositionOfPillar(int x, int y) const {
  tarch::la::Vector<2,double> result;
  result(0) = _boundingBoxMin(0) + (_boundingBoxMax(0)-_boundingBoxMin(0))/static_cast<double>(_fieldDimensions(0)+1) * static_cast<double>(x);
  result(1) = _boundingBoxMin(1) + (_boundingBoxMax(1)-_boundingBoxMin(1))/static_cast<double>(_fieldDimensions(1)+1) * static_cast<double>(y);
  return result;
}


tarch::la::Vector<2,double> scenario::diffusionequation::configurations::CornerPointFieldConfiguration::getPillarWidth() const {
  tarch::la::Vector<2,double> result;
  result(0) = (_boundingBoxMax(0)-_boundingBoxMin(0))/static_cast<double>(_fieldDimensions(0));
  result(1) = (_boundingBoxMax(1)-_boundingBoxMin(1))/static_cast<double>(_fieldDimensions(0));
  return result;
}


void scenario::diffusionequation::configurations::CornerPointFieldConfiguration::parseFiles() {
  std::ifstream permeabilityFile;
  std::ifstream cornerDepthsFile;
  std::ifstream coordinatesFile;

  permeabilityFile.open( _permeabilityFileFilename.c_str());
  cornerDepthsFile.open( _cornerDepthsFileFilename.c_str());
  coordinatesFile.open( _coordinatesFileFilename.c_str());

  for (int d=0; d<3; d++) {
    _boundingBoxMin(d) = std::numeric_limits<double>::max();
    _boundingBoxMax(d) = std::numeric_limits<double>::min();
  }

  if (!permeabilityFile.is_open()) {
    logError( "parseFiles()", "could not open permeability file " << _permeabilityFileFilename );
    _isValid = false;
    return;
  }
  if (!cornerDepthsFile.is_open()) {
    logError( "parseFiles()", "could not open corner depths file " << _cornerDepthsFileFilename );
    _isValid = false;
    return;
  }
  if (!coordinatesFile.is_open()) {
    logError( "parseFiles()", "could not open coordinates file " << _coordinatesFileFilename );
    _isValid = false;
    return;
  }

  // prepare data structures, i.e. fill with empty pillars
  for (int entry=0; entry<tarch::la::volume(_fieldDimensions); entry++) {
    _entries[entry] = scenario::diffusionequation::CornerPointField::CornerPointPillar();
  }

  tarch::la::Vector<2,int> depthFieldDimensions;
  depthFieldDimensions = _fieldDimensions+1;
  double* permeability           = new double[tarch::la::volume(_fieldDimensions)*_layers];
  double* depthOfUpperSideOfCell = new double[tarch::la::volume(depthFieldDimensions)*_layers];
  double* depthOfLowerSideOfCell = new double[tarch::la::volume(depthFieldDimensions)*_layers];

  // get pillar coordinates, update boundary box and write the pillars
  for (int i=0; i<tarch::la::volume(depthFieldDimensions); i++) {
    tarch::la::Vector<3,double> vertex0;
    tarch::la::Vector<3,double> vertex1;

    vertex0(0) =  getNextDoubleValueFromFile( coordinatesFile );
    vertex0(1) =  getNextDoubleValueFromFile( coordinatesFile );
    vertex0(2) = -getNextDoubleValueFromFile( coordinatesFile );

    vertex1(0) =  getNextDoubleValueFromFile( coordinatesFile );
    vertex1(1) =  getNextDoubleValueFromFile( coordinatesFile );
    vertex1(2) = -getNextDoubleValueFromFile( coordinatesFile );

    for (int d=0; d<3; d++) {
      if (vertex0(d)<_boundingBoxMin(d)) _boundingBoxMin(d) = vertex0(d);
      if (vertex1(d)<_boundingBoxMin(d)) _boundingBoxMin(d) = vertex1(d);
      if (vertex0(d)>_boundingBoxMax(d)) _boundingBoxMax(d) = vertex0(d);
      if (vertex1(d)>_boundingBoxMax(d)) _boundingBoxMax(d) = vertex1(d);
    }
  }

  // erase depth fields (those are averaged values, so we first have to set
  // them zero
  for (int layer=0; layer<_layers; layer++) {
    for (int y=0; y<_fieldDimensions(1); y++) {
      for (int x=0; x<_fieldDimensions(0); x++) {
        depthOfLowerSideOfCell[getCellIndex(x,y,layer)] = 0;
        depthOfUpperSideOfCell[getCellIndex(x,y,layer)] = 0;
      }
    }
  }

  // accumulate depth fields
  for (int layer=0; layer<_layers; layer++) {
    for (int y=_fieldDimensions(1)-1; y>=0; y--) {
      for (int x=_fieldDimensions(0)-1; x>=0; x--) {
        depthOfLowerSideOfCell[getCellIndex(x,y,layer)] += -getNextDoubleValueFromFile( cornerDepthsFile );
        depthOfLowerSideOfCell[getCellIndex(x,y,layer)] += -getNextDoubleValueFromFile( cornerDepthsFile );
      }
      for (int x=_fieldDimensions(0)-1; x>=0; x--) {
        depthOfLowerSideOfCell[getCellIndex(x,y,layer)] += -getNextDoubleValueFromFile( cornerDepthsFile );
        depthOfLowerSideOfCell[getCellIndex(x,y,layer)] += -getNextDoubleValueFromFile( cornerDepthsFile );
      }
    }
    for (int y=_fieldDimensions(1)-1; y>=0; y--) {
      for (int x=_fieldDimensions(0)-1; x>=0; x--) {
        depthOfUpperSideOfCell[getCellIndex(x,y,layer)] += -getNextDoubleValueFromFile( cornerDepthsFile );
        depthOfUpperSideOfCell[getCellIndex(x,y,layer)] += -getNextDoubleValueFromFile( cornerDepthsFile );
      }
      for (int x=_fieldDimensions(0)-1; x>=0; x--) {
        depthOfUpperSideOfCell[getCellIndex(x,y,layer)] += -getNextDoubleValueFromFile( cornerDepthsFile );
        depthOfUpperSideOfCell[getCellIndex(x,y,layer)] += -getNextDoubleValueFromFile( cornerDepthsFile );
      }
    }
  }

  // compute average
  for (int layer=0; layer<_layers; layer++) {
    for (int y=0; y<_fieldDimensions(1); y++) {
      for (int x=0; x<_fieldDimensions(0); x++) {
        depthOfLowerSideOfCell[getCellIndex(x,y,layer)] /= 4.0;
        depthOfUpperSideOfCell[getCellIndex(x,y,layer)] /= 4.0;
      }
    }
  }

  // read porosities
  for (int layer=0; layer<_layers; layer++) {
    for (int y=_fieldDimensions(1)-1; y>=0; y--) {
      for (int x=_fieldDimensions(0)-1; x>=0; x--) {
        permeability[getCellIndex(x,y,layer)] = getNextDoubleValueFromFile( permeabilityFile );
      }
    }
  }

  // pipe all the data into voxel discretisation
  for (int layer=0; layer<_layers; layer++) {
    for (int y=0; y<_fieldDimensions(1); y++) {
      for (int x=0; x<_fieldDimensions(0); x++) {
        double cellsUpperLayer = depthOfUpperSideOfCell[getCellIndex(x,y,layer)];
        double cellsLowerLayer = depthOfLowerSideOfCell[getCellIndex(x,y,layer)];
        _entries[getCellStackIndex(x,y)].addLayerData(
          permeability[getCellIndex(x,y,layer)],
          cellsUpperLayer,
          cellsLowerLayer,
          true
        );
      }
    }
  }

  delete[] permeability;
  delete[] depthOfUpperSideOfCell;
  delete[] depthOfLowerSideOfCell;
}


std::string scenario::diffusionequation::configurations::CornerPointFieldConfiguration::getNextTokenFromFile(std::istream& in) {
  std::ostringstream out;

  char nextChar = 0;
  nextChar = in.get();

  // remove empty lines and leading empty space
  while (nextChar=='\n' || nextChar=='\r' || nextChar==' ' || nextChar=='\t') {
    nextChar = in.get();
  }

  // remove comment lines
  if (nextChar=='%') {
    while (in && nextChar!='\n') {
      nextChar = in.get();
    }
    nextChar = in.get();
  }

  // remove empty lines and leading empty space
  while (nextChar=='\n' || nextChar=='\r' || nextChar==' ' || nextChar=='\t') {
    nextChar = in.get();
  }

  assertion( nextChar!=' ');
  assertion( nextChar!='\n');
  assertion( nextChar!='\r');
  assertion( nextChar!='\t');

  while (in && nextChar!=' ' && nextChar!='\t' && nextChar!='\n' && nextChar!='\r') {
    out << nextChar;
    nextChar = in.get();
  }

  return out.str();
}


double scenario::diffusionequation::configurations::CornerPointFieldConfiguration::getNextDoubleValueFromFile( std::istream& in ) {
  if (!in) {
    logError( "parseFiles()", "error parsing file" );
    _isValid = false;
    return 0.0;
  }

  std::istringstream inStream( getNextTokenFromFile( in ) );
  double result;
  if ( !(inStream >> result) ) {
    result = std::numeric_limits<double>::signaling_NaN();
    logError( "parseFiles()", "error parsing file" );
    _isValid = false;
  }

  return result;
}


std::string scenario::diffusionequation::configurations::CornerPointFieldConfiguration::getTag() const {
  return "corner-point-field";
}


bool scenario::diffusionequation::configurations::CornerPointFieldConfiguration::isValid() const {
  return _isValid;
}


void scenario::diffusionequation::configurations::CornerPointFieldConfiguration::toXML(std::ostream& out) const {
  assertion(false);
}
