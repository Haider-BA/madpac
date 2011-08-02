#include "scenario/diffusionequation/CornerPointField.h"
#include "peano/utils/Loop.h"
#include "tarch/plotter/griddata/unstructured/vtk/VTKTextFileWriter.h"


tarch::logging::Log  scenario::diffusionequation::CornerPointField::_log( "scenario::diffusionequation::CornerPointField" );


scenario::diffusionequation::CornerPointField::CornerPointPillar::CornerPointPillar():
  _cells(0) {
}


void scenario::diffusionequation::CornerPointField::CornerPointPillar::addLayerData( double permeability, double cellsUpperLayer, double cellsLowerLayer, bool sortLayersIfNecessary) {
  logTraceInWith4Arguments( "CornerPointPillar::addLayerData(...)", permeability, cellsUpperLayer, cellsLowerLayer, toString() );

  if (sortLayersIfNecessary && cellsUpperLayer<cellsLowerLayer) {
    double tmp = cellsUpperLayer;
    cellsUpperLayer = cellsLowerLayer;
    cellsLowerLayer = tmp;
  }

  if (tarch::la::greater(permeability,0.0) && tarch::la::greater(cellsUpperLayer,cellsLowerLayer)) {
    if (cellsUpperLayer>0.0) {
      logWarning( "CornerPointPillar::addLayerData(...)", "upper layer of cell segmented is greater than 0.0, i.e. model perhaps is not a subsurface model. upper layer-depth=" << cellsUpperLayer );
    }
    if (cellsLowerLayer>0.0) {
      logWarning( "CornerPointPillar::addLayerData(...)", "lower layer of cell segmented is greater than 0.0, i.e. model perhaps is not a subsurface model. lower layer-depth=" << cellsLowerLayer );
    }

    Cell newCell;
    newCell._permeability    = permeability;
    newCell._cellsLowerLayer = cellsLowerLayer;
    newCell._cellsUpperLayer = cellsUpperLayer;

    std::vector<Cell>::iterator p = _cells.begin();

    while (p!=_cells.end() && p->_cellsLowerLayer>=newCell._cellsUpperLayer) {
      p++;
    }

    _cells.insert(p,newCell);
  }

  logTraceOutWith1Argument( "CornerPointPillar::addLayerData(...)", toString() );
}


std::string scenario::diffusionequation::CornerPointField::CornerPointPillar::toString() const {
  std::ostringstream msg;

  msg << "(";
  for (std::vector<Cell>::const_iterator p=_cells.begin(); p!=_cells.end(); p++) {
    msg << "(up:" << p->_cellsUpperLayer << ",down:" << p->_cellsLowerLayer << ",permeability:" << p->_permeability << ")";
  }
  msg << ")";

  return msg.str();
}


double scenario::diffusionequation::CornerPointField::CornerPointPillar::getPermeability( double depth ) const {
  logTraceInWith2Arguments( "CornerPointPillar::getPermeability(double)", depth, toString() );

  if (_cells.empty()) {
    logTraceOutWith1Argument( "CornerPointPillar::getPermeability(double)", 0.0 );
    return 0.0;
  }

  int currentLayer = 0;
  while (
    (currentLayer < static_cast<int>(_cells.size())-1) &&
    (depth<_cells[currentLayer]._cellsLowerLayer)
  ) {
    currentLayer++;
  }

  if (
    (depth>_cells[currentLayer]._cellsUpperLayer) ||
    (depth<_cells[currentLayer]._cellsLowerLayer)
  ) {
    logTraceOutWith1Argument( "CornerPointPillar::getPermeability(double)", 0.0 );
    return 0.0;
  }

  double result = _cells[currentLayer]._permeability;
  logTraceOutWith2Arguments( "CornerPointPillar::getPermeability(double)", result, currentLayer );
  return result;
}


void scenario::diffusionequation::CornerPointField::plotInputDataToVTKFile(const std::string& outputFile) const {
  logTraceInWith1Argument( "plotInputDataToVTKFile(string)", outputFile );

  tarch::plotter::griddata::unstructured::vtk::VTKTextFileWriter writer;
  tarch::plotter::griddata::unstructured::UnstructuredGridWriter::VertexWriter*  vertexWriter   = writer.createVertexWriter();
  tarch::plotter::griddata::unstructured::UnstructuredGridWriter::CellWriter*    cellWriter     = writer.createCellWriter();
  tarch::plotter::griddata::Writer::CellDataWriter*                              cellLayerWriter        = writer.createCellDataWriter("layer-counter",1);
  tarch::plotter::griddata::Writer::CellDataWriter*                              cellPermeabilityWriter = writer.createCellDataWriter("permeability",1);

  #if defined(Dim2)
  #elif defined(Dim3)
  int entryCounter = 0;
  for (int y=0; y<_pillars(1); y++) {
    for (int x=0; x<_pillars(0); x++) {
      for (int layer=0; layer<static_cast<int>(_entries[entryCounter]._cells.size()); layer++){
        int                          vertexIndex[TWO_POWER_D];
        tarch::la::Vector<3,double>  position;

        dfor2(k)
          position(0)          = static_cast<double>(x+k(0)) * getCornerPointPillarWidth()(0) + _hexahedron.getOffset()(0);
          position(1)          = static_cast<double>(y+k(1)) * getCornerPointPillarWidth()(1) + _hexahedron.getOffset()(1);
          position(2)          = k(2)==0 ? _entries[entryCounter]._cells[layer]._cellsLowerLayer : _entries[entryCounter]._cells[layer]._cellsUpperLayer;
          vertexIndex[kScalar] = vertexWriter->plotVertex(position);
        enddforx

        int cellIndex = cellWriter->plotHexahedron(vertexIndex);
        cellPermeabilityWriter->plotCell( cellIndex, _entries[entryCounter]._cells[layer]._permeability );
        cellLayerWriter->plotCell( cellIndex, layer );

        #if defined(Asserts)
        position(0)          = (static_cast<double>(x)+0.5) * getCornerPointPillarWidth()(0) + _hexahedron.getOffset()(0);
        position(1)          = (static_cast<double>(y)+0.5) * getCornerPointPillarWidth()(1) + _hexahedron.getOffset()(1);
        position(2)          = 0.5 * (_entries[entryCounter]._cells[layer]._cellsLowerLayer + _entries[entryCounter]._cells[layer]._cellsUpperLayer);
        assertionNumericalEquals4(
         _entries[entryCounter]._cells[layer]._permeability,
          getPorosityFromDataSet(position),
          entryCounter, layer,
          position,
          _entries[entryCounter].toString()
        );
        #endif
      }
      entryCounter++;
    }
  }
  #endif

  vertexWriter->close();
  cellWriter->close();
  cellLayerWriter->close();
  cellPermeabilityWriter->close();

  delete vertexWriter;
  delete cellWriter;
  delete cellPermeabilityWriter;
  delete cellLayerWriter;

  writer.writeToFile( outputFile );

  logTraceOut( "plotInputDataToVTKFile(string)" );
}


scenario::diffusionequation::CornerPointField::CornerPointField(
  const tarch::la::Vector<DIMENSIONS,double>&     fieldBoundingBox,
  const tarch::la::Vector<DIMENSIONS,double>&     fieldOffset,
  tarch::la::Vector<2,int>                        pillars,
  const std::vector<CornerPointPillar>&           entries
):
  _hexahedron(false, fieldBoundingBox, fieldOffset),
  _pillars(pillars),
  _entries(entries) {
  assertionEquals( tarch::la::volume(_pillars), static_cast<int>(_entries.size()) );
}


tarch::la::Vector<2,double> scenario::diffusionequation::CornerPointField::getCornerPointPillarWidth() const {
  tarch::la::Vector<2,double> result;
  result(0) = _hexahedron.getBoundingBox()(0) / static_cast<double>(_pillars(0));
  result(1) = _hexahedron.getBoundingBox()(1) / static_cast<double>(_pillars(1));
  return result;
}


double scenario::diffusionequation::CornerPointField::getPorosityFromDataSet(const tarch::la::Vector<3,double>& x) const {
  logTraceInWith3Arguments( "getPorosityFromDataSet(vector)", x, _hexahedron.getBoundingBox(), _hexahedron.getOffset() );
  const double depth = x(2);

  const double pillarSizeX = getCornerPointPillarWidth()(0);
  assertion1( pillarSizeX>0.0, pillarSizeX );
  int    inArrayX    = std::floor( (x(0)-_hexahedron.getOffset()(0)) / pillarSizeX );
  if (inArrayX==_pillars(0)) inArrayX--;
  assertion3( inArrayX>=0, pillarSizeX, inArrayX, _pillars );
  assertion3( inArrayX<_pillars(0), pillarSizeX, inArrayX, _pillars );

  #if defined(Dim3)
  const double pillarSizeY = getCornerPointPillarWidth()(1);
  assertion4( pillarSizeY>0.0, pillarSizeX, pillarSizeY, inArrayX, _pillars );
  int    inArrayY    = std::floor( (x(1)-_hexahedron.getOffset()(1)) / pillarSizeY );
  if (inArrayY==_pillars(1)) inArrayY--;
  assertion5( inArrayY>=0, pillarSizeX, pillarSizeY, inArrayX, inArrayY, _pillars );
  assertion5( inArrayY<_pillars(1), pillarSizeX, pillarSizeY, inArrayX, inArrayY, _pillars );
  #elif defined(Dim2)
  const int    inArrayY    = _pillars(1) / 2;
  #endif

  const int entry = inArrayX + inArrayY * _pillars(0);
  assertion6( entry < static_cast<int>(_entries.size()), pillarSizeX, inArrayX, inArrayY, _pillars, entry, _entries.size() );

  double result = _entries[entry].getPermeability(depth);
  logTraceOutWith1Argument( "getPorosityFromDataSet(vector)", result );
  return result;
}


tarch::la::Vector<DIMENSIONS,double>   scenario::diffusionequation::CornerPointField::getRealBoundingBox() const {
  logTraceIn( "getRealBoundingBox()" );
  logTraceOutWith1Argument( "getRealBoundingBox()", _hexahedron.getBoundingBox() );
  return _hexahedron.getBoundingBox();
}


tarch::la::Vector<DIMENSIONS,double>   scenario::diffusionequation::CornerPointField::getDomainSize() const {
  logTraceIn( "getDomainSize()" );
  const double max = tarch::la::max(_hexahedron.getBoundingBox());
  tarch::la::Vector<DIMENSIONS,double> result = tarch::la::Vector<DIMENSIONS,double>(max);
  logTraceOutWith1Argument( "getDomainSize()", result );
  return result;
}


tarch::la::Vector<DIMENSIONS,double>   scenario::diffusionequation::CornerPointField::getComputationalDomainOffset() const {
  logTraceIn( "getComputationalDomainOffset()" );
  logTraceOutWith1Argument( "getComputationalDomainOffset()", _hexahedron.getOffset() );
  return _hexahedron.getOffset();
}


void scenario::diffusionequation::CornerPointField::setTime( double t ) {
}


double scenario::diffusionequation::CornerPointField::getRhs(const tarch::la::Vector<1,double>& x) {
  return 0.0;
}


double scenario::diffusionequation::CornerPointField::getRhs(const tarch::la::Vector<2,double>& x) {
  return 0.0;
}


double scenario::diffusionequation::CornerPointField::getRhs(const tarch::la::Vector<3,double>& x) {
  return 0.0;
}


double scenario::diffusionequation::CornerPointField::getInitialValue(const tarch::la::Vector<1,double>& x) const {
  return 1.0;
}


double scenario::diffusionequation::CornerPointField::getInitialValue(const tarch::la::Vector<2,double>& x) const {
  return 1.0;
}


double scenario::diffusionequation::CornerPointField::getInitialValue(const tarch::la::Vector<3,double>& x) const {
  return 1.0;
}


scenario::diffusionequation::CornerPointField::BoundaryType scenario::diffusionequation::CornerPointField::getBoundaryType(const tarch::la::Vector<1,double>& x) const {
  return DIRICHLET;
}


scenario::diffusionequation::CornerPointField::BoundaryType scenario::diffusionequation::CornerPointField::getBoundaryType(const tarch::la::Vector<2,double>& x) const {
  return DIRICHLET;
}


scenario::diffusionequation::CornerPointField::BoundaryType scenario::diffusionequation::CornerPointField::getBoundaryType(const tarch::la::Vector<3,double>& x) const {
  return DIRICHLET;
}


double scenario::diffusionequation::CornerPointField::getThermalDiffusivity(const tarch::la::Vector<1,double>& x) {
  logTraceInWith1Argument( "getThermalDiffusivity(x)", x );
  assertionMsg( false, "not implemented yet");
  logTraceOutWith1Argument( "getThermalDiffusivity(x)", 0.0 );
  return 0.0;
}


double scenario::diffusionequation::CornerPointField::getThermalDiffusivity(const tarch::la::Vector<2,double>& x) {
  logTraceInWith1Argument( "getThermalDiffusivity(x)", x );
  if (_hexahedron.isOutsideClosedDomain(x)) {
    logTraceOutWith1Argument( "getThermalDiffusivity(x)", 0.0 );
    return 0.0;
  }
  #ifdef Dim2
  tarch::la::Vector<3,double> probe;
  probe(0) = x(0);
  probe(1) = 0.0;
  probe(2) = x(1);
  double result = getPorosityFromDataSet(probe);
  logTraceOutWith1Argument( "getThermalDiffusivity(x)", result );
  return result;
  #else
  assertionMsg( false, "not implemented yet");
  logTraceOutWith1Argument( "getThermalDiffusivity(x)", 0.0 );
  return 0.0;
  #endif
}


double scenario::diffusionequation::CornerPointField::getThermalDiffusivity(const tarch::la::Vector<3,double>& x)  {
  logTraceInWith1Argument( "getThermalDiffusivity(x)", x );
  if (_hexahedron.isOutsideClosedDomain(x)) {
    logTraceOutWith1Argument( "getThermalDiffusivity(x)", 0.0 );
    return 0.0;
  }
  #ifdef Dim3
  double result = getPorosityFromDataSet(x);
  logTraceOutWith1Argument( "getThermalDiffusivity(x)", result );
  return result;
  #else
  assertionMsg( false, "not implemented yet");
  logTraceOutWith1Argument( "getThermalDiffusivity(x)", 0.0 );
  return 0.0;
  #endif
}


bool scenario::diffusionequation::CornerPointField::isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double>& resolution ) {
  bool result = true;

  tarch::la::Vector<DIMENSIONS,double> probeVector;
  dfor3(k)
    for (int d=0; d<DIMENSIONS; d++) {
      probeVector(d) = x(d) + (k(d)-1) * resolution(d);
    }
    result &= getThermalDiffusivity(probeVector)<=0.0;
  enddforx

  return result;
}


bool scenario::diffusionequation::CornerPointField::isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  bool result = true;

  tarch::la::Vector<DIMENSIONS,double> probeVector;
  dfor3(k)
    for (int d=0; d<DIMENSIONS; d++) {
      probeVector(d) = x(d) + (k(d)-1) * resolution(d);
    }
    result &= getThermalDiffusivity(probeVector)>0.0;
  enddforx

  return result;
}


bool scenario::diffusionequation::CornerPointField::isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x ) {
//  return _hexahedron.isOutsideClosedDomain(x) || getThermalDiffusivity(x)<=0.0;
  return isCompletelyOutside(x,tarch::la::Vector<DIMENSIONS,double>(0.0));
}


double scenario::diffusionequation::CornerPointField::getMaximalSamplingWidth() const {
  return tarch::la::min(getCornerPointPillarWidth());
}
