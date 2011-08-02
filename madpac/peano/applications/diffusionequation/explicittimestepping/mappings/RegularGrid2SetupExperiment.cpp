#include "peano/applications/diffusionequation/explicittimestepping/mappings/RegularGrid2SetupExperiment.h"
#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"


tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::_log( "peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment" );


peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::RegularGrid2SetupExperiment() {
}


peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::~RegularGrid2SetupExperiment() {
}

  
void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
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


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );

  vertex.initialiseBoundaryVertex(
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getInitialValue(x)
  );

  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
) {
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::createCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}



void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::destroyCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::handleCell(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex* const vertices,
  peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::mergeWithNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex,
  const peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& neighbour,
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::touchVertexFirstTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::touchVertexLastTime(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::prepareSendToNeighbour(
  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::beginIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {
}


void peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2SetupExperiment::endIteration(
  peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
) {
  bool isInvalid = false;
  for (int d=0; d<DIMENSIONS; d++) {
    isInvalid |= (solverState.getMaximumMeshWidth()(0)>scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getMaximalSamplingWidth());
  }
  if (isInvalid) {
    logWarning( "beginIteration(state)", "the regular grid with resolution " << solverState.getMaximumMeshWidth() << " might be too coarse to resolve data represented on mesh with sampling width " << scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getMaximalSamplingWidth() );
  }
}

