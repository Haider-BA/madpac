#include "peano/applications/heatequation/timestepping/mappings/RegularGrid2SetupExperiment.h"
#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::_log( "peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment" );


peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::RegularGrid2SetupExperiment() {
}


peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::~RegularGrid2SetupExperiment() {
}

  
void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );

  vertex.initialiseInnerVertex(
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getThermalDiffusivity(x),
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getInitialValue(x),
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getRhs(x),
    h
  );

  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );

  vertex.initialiseBoundaryVertex(
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getInitialValue(x)
  );

  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
) {
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::createCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}



void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::destroyCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::handleCell(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
  peano::applications::heatequation::timestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::touchVertexFirstTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::touchVertexLastTime(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::beginIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {
}


void peano::applications::heatequation::timestepping::mappings::RegularGrid2SetupExperiment::endIteration(
  peano::applications::heatequation::timestepping::RegularGridState&  solverState
) {
  for (int d=0; d<DIMENSIONS; d++) {
    if (solverState.getMaximumMeshWidth()(0)>scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getMaximalSamplingWidth()) {
      logError( "beginIteration(state)", "the regular grid might be too coarse to resolve the stimulus" );
    }
  }
}
