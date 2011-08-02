#include "peano/applications/heatequation/timestepping/mappings/SpacetreeGrid2SetupExperiment.h"
#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"


tarch::logging::Log peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::_log( "peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment" );


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::SpacetreeGrid2SetupExperiment() {
}


peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::~SpacetreeGrid2SetupExperiment() {
}
  
  
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::createInnerVertex(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                                                   fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&                     coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createInnerVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  fineGridVertex.initialiseInnerVertex(
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getThermalDiffusivity(fineGridX),
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getInitialValue(fineGridX),
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getRhs(fineGridX),
    fineGridH
  );

  if (fineGridH(0)>_maximumMeshSize) fineGridVertex.refine();

  logTraceOutWith1Argument( "createInnerVertex(...)", fineGridVertex );
}



void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::createHangingVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::destroyHangingVertex(
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
  peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::createBoundaryVertex(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
  const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
  const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
  const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createBoundaryVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  fineGridVertex.initialiseBoundaryVertex(
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getInitialValue(fineGridX)
  );

  if (fineGridH(0)>_minimumMeshSize) fineGridVertex.refine();

  logTraceOutWith1Argument( "createBoundaryVertex(...)", fineGridVertex );
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::destroyVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::createCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::destroyCell(
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::touchVertexFirstTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {}

#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex, 
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::touchVertexLastTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {}


#ifdef Parallel
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::beginIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  _maximumMeshSize = solverState.getMaximalAllowedMeshSize();
  _minimumMeshSize = solverState.getMinimalAllowedMeshSize();
}


void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::endIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  for (int d=0; d<DIMENSIONS; d++) {
    if (solverState.getMaximumMeshWidth()(0)>scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getMaximalSamplingWidth()) {
      logError( "beginIteration(state)", "the regular grid might be too coarse to resolve the stimulus" );
    }
  }
}
 
    
void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::enterCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {}



void peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2SetupExperiment::leaveCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {}
