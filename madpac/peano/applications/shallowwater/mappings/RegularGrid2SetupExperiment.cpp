#include "peano/applications/shallowwater/mappings/RegularGrid2SetupExperiment.h"

#include "scenario/shallowwater/ShallowWaterScenarioService.h"

tarch::logging::Log peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::_log( "peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment" );


peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::RegularGrid2SetupExperiment() {
  logTraceIn( "RegularGrid2SetupExperiment()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2SetupExperiment()" );
}


peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::~RegularGrid2SetupExperiment() {
  logTraceIn( "~RegularGrid2SetupExperiment()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2SetupExperiment()" );
}

  
void peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::shallowwater::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::createCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );

  double zero_lon = scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getSimulationArea()[0];
  double zero_lat = scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getSimulationArea()[1];
  double length_deg = scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getSimulationArea()[2];
  double current_lon = enumerator.getVertexPosition()[0] * length_deg + zero_lon;
  double current_lat = enumerator.getVertexPosition()[1] * length_deg + zero_lat;

  double bathymetry_value = _csvReader.getBathymetryValue(current_lon, current_lat);
  double displacement_value = _csvReader.getDisplacementValue(current_lon, current_lat);

  cell.init(bathymetry_value, displacement_value);

  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::destroyCell(
  peano::applications::shallowwater::RegularGridVertex const * const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::handleCell(
  peano::applications::shallowwater::RegularGridVertex* const vertices,
  peano::applications::shallowwater::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  cell.updateVerticesWithCellData(enumerator, vertices);

  logTraceOut( "handleCell()" );
}


void peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::touchVertexFirstTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  vertex.init();

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::touchVertexLastTime(
  peano::applications::shallowwater::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}


void peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::beginIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  _csvReader = peano::applications::shallowwater::utils::CsvReader();
  _csvReader.createGrid(
      scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getSimulationArea()[0],
      scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getSimulationArea()[1],
      scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getSimulationArea()[2],
      //TODO: rectangle?
      scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getNumberOfGridPoints()[0]);
  _csvReader.readCsvFiles(
      scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getBathymetryFile(),
      scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getDisplacementFile(),
      scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getDisplacementLocation()[0],
      scenario::shallowwater::ShallowWaterScenarioService::getInstance().getScenario().getDisplacementLocation()[1]
      );

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::endIteration(
  peano::applications::shallowwater::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "endIteration()", solverState );
}



int peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment::parallelise( int numberOfGridCells ) {
  logTraceInWith1Argument( "parallelise()", numberOfGridCells );
  int result = 0;
  // @todo Insert your code here
  logTraceOutWith1Argument( "parallelise()", result );
  return result;
}
