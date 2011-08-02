#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/mappings/SpacetreeGrid2DynamicRefinementForSpacetreeGrid.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid" );


peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::SpacetreeGrid2DynamicRefinementForSpacetreeGrid() {
  logTraceIn( "SpacetreeGrid2DynamicRefinementForSpacetreeGrid()" );
  // @todo Insert your code here
  logTraceOut( "SpacetreeGrid2DynamicRefinementForSpacetreeGrid()" );
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::~SpacetreeGrid2DynamicRefinementForSpacetreeGrid() {
  logTraceIn( "~SpacetreeGrid2DynamicRefinementForSpacetreeGrid()" );
  // @todo Insert your code here
  logTraceOut( "~SpacetreeGrid2DynamicRefinementForSpacetreeGrid()" );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::createInnerVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createInnerVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  fineGridVertex.createVertex(fineGridX,fineGridH);
  // set new persistent flag and set -1 entries
  fineGridVertex.switchToNewPersistentVertex();

  std::cout << "Create vertex " << fineGridX << "," << fineGridH << std::endl;
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  loadVertex(fineGridVertex.getVertexNumber());
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf());
  for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR; i++){
    pdf(i) = -1.0;
  }
  logTraceOutWith1Argument( "createInnerVertex(...)", fineGridVertex );
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::createHangingVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  fineGridVertex.createHangingVertex();
  logTraceOutWith1Argument( "createHangingVertex(...)", fineGridVertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::destroyHangingVertex(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyHangingVertex(...)", fineGridVertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::createBoundaryVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createBoundaryVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  fineGridVertex.createVertex(fineGridX,fineGridH);
  std::cout << "Create vertex " << fineGridX << "," << fineGridH << std::endl;

  // set new persistent flag and set -1 entries
  fineGridVertex.switchToNewPersistentVertex();

  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  loadVertex(fineGridVertex.getVertexNumber());
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf());
  for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR; i++){
    pdf(i) = -1.0;
  }
  logTraceOutWith1Argument( "createBoundaryVertex(...)", fineGridVertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::destroyVertex(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  fineGridVertex.destroyVertex();
  std::cout << "Destroy vertex " << fineGridX << "," << fineGridH << std::endl;
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyVertex(...)", fineGridVertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::createCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "createCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell(...)", fineGridCell );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::destroyCell(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "destroyCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "destroyCell(...)", fineGridCell );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::touchVertexFirstTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::mergeWithNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& vertex,
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& neighbour,
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::touchVertexLastTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // get subtree height
  int maximumSubtreeHeight = fineGridVertex.getMaximumSubtreeHeight();
  bool isRefined = (fineGridVertex.getRefinementControl() == peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::Records::Refined);
  int level = coarseGridVerticesEnumerator.getLevel();

  // ------------- SECTION 1: Trigger coarsening and refinement ---------------------

  // check and trigger refinement and coarsening
  peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement::RefinementAction
  myAction =  _dynamicGeometryRefinement->getAction(fineGridX,fineGridH,isRefined,maximumSubtreeHeight,level);

  // if refinement shall be triggered, do so
  if (myAction == peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement::Refine){
    fineGridVertex.refine();
    fineGridVertex.switchToHasNewPersistentSubVertices();
    _hasChanged = true;
  }

  // only set coarsening flag if the current vertex has its default flag, i.e. no refinement is triggered in any way
  // -> this is necessary if there would be quick changes between coarsening and refining; for these cases,
  // the refinement is triggered, but the coarsening is ignored. Thus, one obtains a (relatively) stable state
  if (myAction == peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement::Delete){
    if (fineGridVertex.isDefaultVertex()){
      std::cout << "Switch to coarsened vertex" << std::endl;
      fineGridVertex.switchToCoarsenedVertex();
    }
  }


  // if the current (that is NEXT, in case that the solver is called directly afterwards!)
  // level of simulation is the
  // one of this vertex, do a coarsening, if this is triggered and remove the coarsen-flag
  if (fineGridVertex.isCoarsenedVertex() && (_nextLevel==level)
      && (myAction == peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement::Delete) ){
    fineGridVertex.erase();
    _hasChanged = true;
    fineGridVertex.switchToDefault();
  }
  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}


#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::prepareSendToNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::beginIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );
  _multiLevelSimData = new peano::applications::latticeboltzmann::MultiLevelSimData(solverState);
  if (_multiLevelSimData == NULL){
    logError("beginIteration(State)", "MultiLevelSimData is NULL!");
    assertion(false);
  }
  _dynamicGeometryRefinement = new peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement(*_multiLevelSimData);
  if (_dynamicGeometryRefinement==NULL){
    logError("beginIteration(State)", "DynamicGeometryRefinement is NULL!");
    assertion(false);
  }

  _nextLevel = solverState.getNextLevel();
  _referenceLevel = solverState.getLevel();
  _referenceMeshsize = solverState.getDx();
  _hasChanged = false;

  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::endIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );
  if (_multiLevelSimData != NULL){
    delete _multiLevelSimData;
    _multiLevelSimData = NULL;
  }
  if (_dynamicGeometryRefinement != NULL){
    delete _dynamicGeometryRefinement;
    _dynamicGeometryRefinement = NULL;
  }

  solverState.setGeometryChanged(_hasChanged);
  logTraceOutWith1Argument( "endIteration(State)", solverState);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::enterCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2DynamicRefinementForSpacetreeGrid::leaveCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "leaveCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "leaveCell(...)", fineGridCell );
}
