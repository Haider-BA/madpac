#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/mappings/SpacetreeGrid2RegularBlockSolver.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver" );


peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::SpacetreeGrid2RegularBlockSolver() {
  logTraceIn( "SpacetreeGrid2RegularBlockSolver()" );
  logTraceOut( "SpacetreeGrid2RegularBlockSolver()" );
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::~SpacetreeGrid2RegularBlockSolver() {
  logTraceIn( "~SpacetreeGrid2RegularBlockSolver()" );
  logTraceOut( "~SpacetreeGrid2RegularBlockSolver()" );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::createInnerVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createInnerVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  logError("createInnerVertex()", "We should never enter createInnerVertex!");
  assertion(false);
  logTraceOutWith1Argument( "createInnerVertex(...)", fineGridVertex );
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::createHangingVertex(
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


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::destroyHangingVertex(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  logTraceOutWith1Argument( "destroyHangingVertex(...)", fineGridVertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::createBoundaryVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createBoundaryVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  logError("createBoundaryVertex()", "We should never enter createBoundaryVertex!");
  assertion(false);
  logTraceOutWith1Argument( "createBoundaryVertex(...)", fineGridVertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::destroyVertex(
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
  logTraceOutWith1Argument( "destroyVertex(...)", fineGridVertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::createCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "createCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  logTraceOutWith1Argument( "createCell(...)", fineGridCell );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::destroyCell(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "destroyCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  logTraceOutWith1Argument( "destroyCell(...)", fineGridCell );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::touchVertexFirstTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  int level = coarseGridVerticesEnumerator.getLevel();
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  loadVertex(fineGridVertex.getVertexNumber());

  // if reflagging should be done, do it as very first thing
  // reflag cells (inner and boundary states; only done if dynamic geometries are activated)
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  setBoundaryFlagsAndInitialiseUnknownPdfs(fineGridX,fineGridH,level,*_multiLevelSimData.get());
  // reset density to zero on all cells that are located
  // outside but near the boundary of the computational domain
  // -> this is important for parallel computations!
#ifdef Parallel
  fineGridVertex.resetDensityOnOuterBoundaryCellsOfBlockBoundary();
#endif
  // reset nonlocal-streaming flags
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  resetNonLocalStreamingFinished();

  // case: standard persistent refined vertex -> nop
  if (   (fineGridVertex.getRefinementControl() == peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::Records::Refined)
      && (!fineGridVertex.hasNewPersistentSubVertices())){
    return;
  }


  // get information from coarse vertex
  tarch::la::Vector<DIMENSIONS,int> indexVectorCoarseVertex = _blockRestrictionProlongation.getFatherVertex(fineGridPositionOfVertex);
  logDebug("touchVertexFirstTime()", "Father vertex: " << indexVectorCoarseVertex);

  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  loadVertex(coarseGridVertices[coarseGridVerticesEnumerator(indexVectorCoarseVertex)].getVertexNumber());
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& coarsePdf(
    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf()
  );

  // decode boundary information from scenario,geometry and boundary information
  // get information about density, pdfs and interpolation counter
  // get inner, boundary and velocity
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  loadVertex(fineGridVertex.getVertexNumber());
  std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& boundary(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getBoundary());
  std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());
  tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE,double>& velocity(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf());

  // for boundary data
  std::vector<peano::applications::latticeboltzmann::BoundaryData> boundaryDataBuffer;
  std::vector<tarch::la::Vector<2,unsigned int> > boundaryDataIndex;
  scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService::
  getInstance().getBoundaryData(
    fineGridX,fineGridH,inner,boundary,*_multiLevelSimData.get(),boundaryDataBuffer,boundaryDataIndex
  );

  // find -1.0 entries in pdf field
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> hasMinusOneEntries(false);
  if (fineGridVertex.isNewPersistentVertex()){
    // if the vertex is a new persistent vertex, all pdfs must be equal -1.0
    hasMinusOneEntries = true;
    pdf = -1.0;

  // otherwise: regular persistent vertex, determine overlap cells
  } else {
    // determine all fine overlap cells that is all cells which have at least one entry -1.0 as pdf.
    // hasMinusOneEntries is in this case switched to true
    _blockRestrictionProlongation.findFineOverlapCells(
      pdf,
      hasMinusOneEntries
    );
  }

#if Debug
  // check that there are no simultaneous overlap and boundary cells
  for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS; i++){
    assertion1( !(boundary[i] && hasMinusOneEntries(i)), "No cells are allowed to be at boundary and overlap at the same time!" );
  }
#endif


  // if the level of consideration is bigger/equal the current collision level, carry out collision
  // (and density/ velocity computation and boundary treatment, i.e. all things that need to be done
  // just before collision takes place)
  if (level >= _currentLevel){

    logDebug("touchVertexFirstTime()","Treat boundary before collision");
    _blockBoundaryConditionManager->treatBoundaryBeforeCollision(
      level,boundaryDataBuffer,boundaryDataIndex,
      density,velocity,pdf
    );

    logDebug("touchVertexFirstTime()","Compute density");
    peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKCOMPUTECELLVALUES.computeDensity(inner,pdf,density,hasMinusOneEntries);
    logDebug("touchVertexFirstTime()","Compute velocity");
    peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKCOMPUTECELLVALUES.computeVelocity(inner,pdf,density,velocity,hasMinusOneEntries);
    logDebug("touchVertexFirstTime()","Do collision");
    _blockCollisionModelManager->collide(level,inner,density,velocity,pdf,hasMinusOneEntries);
    // TODO check, if hasMinusOneEntries is needed in force computation as well
    logDebug("touchVertexFirstTime()", "Store post-collision pdfs at moving-obstacle boundaries");
    _forceComputation->storePostCollisionPdfs(boundaryDataBuffer,boundaryDataIndex,pdf);

    // if it is not the coarsest level, do prolongation if needed
    if (level != _currentLevel){

      _blockRestrictionProlongation.prolongateToFineLevel(
        fineGridPositionOfVertex,coarsePdf,pdf,density,velocity,hasMinusOneEntries
      );

      // if the vertex is a new created vertex, remove new persistent flag
      if (fineGridVertex.isNewPersistentVertex()){
        fineGridVertex.switchToDefault();
      }
    }

    logDebug("touchVertexFirstTime()","Treat boundary after collision");
    _blockBoundaryConditionManager->treatBoundaryAfterCollision(
      level,boundaryDataBuffer,boundaryDataIndex,density,velocity,pdf
    );

    // force computation -> storing only done, if computeForces is activated
    logDebug("touchVertexFirstTime()", "Compute and send forces");
    _forceComputation->evaluateForce(fineGridX,level,boundaryDataBuffer,boundaryDataIndex,pdf);
  }

  // compute cell counter in case that the run is executed over all grid levels that is
  // if the current level equals the coarsest simulation level. This run happens only once
  // over all "intermediate" timesteps!
  if ( (_nextLevel == _referenceLevel) && (level >= _referenceLevel)){
    int numberCells = 0;
    int levelDiff = level-_referenceLevel;
    for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS; i++){
      numberCells += (int)(inner[i] && (!hasMinusOneEntries(i)));
    }
    _cellCounter += tarch::la::aPowI(levelDiff,3)*numberCells;
  }


  // do streaming if the level is in the range of the collision levels of the last iteration
  if (level >= _lastLevel){
    logDebug("touchVertexFirstTime()","Do local streaming");
    _aaBlockStreaming.streamingLocal(inner,pdf);
  }

  if (level >= _currentLevel){
    // do local density interpolation, if needed. This will only yield valid data, if we are on
    // the finest grid level!!!
    _densityInterpolation->interpolateDensityLocal(
      inner,boundary,pdf,density,velocity
    );
  }

#if Debug
#if defined(Dim3)
  for (int z = 0; z < LB_BLOCKSIZE; z++){
#endif
    for (int y = 0; y < LB_BLOCKSIZE; y++){
      for (int x = 0; x < LB_BLOCKSIZE; x++){
      int indi = x + LB_BLOCKSIZE*y
#if defined(Dim3)
               + LB_BLOCKSIZE*LB_BLOCKSIZE*z
#endif
               ;
#if defined(Dim2)
      logDebug("touchVertexFirstTime()" , "cell " << x << "," << y << ":");
#elif defined(Dim3)
      logDebug("touchVertexFirstTime()" , "cell " << x << "," << y << "," << z << ":");
#endif
      for (int i = 0; i < LB_CURRENT_DIR; i++){
        logDebug("touchVertexFirstTime()", pdf(LB_CURRENT_DIR*indi+i));
      }
    }
  }
#if defined(Dim3)
  }
#endif
#endif
  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::mergeWithNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& vertex,
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& neighbour,
  int fromRank) {
}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::touchVertexLastTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // level of this vertex in tree
  int level = coarseGridVerticesEnumerator.getLevel();

  // no actions on standard persistent refined vertices
  if (   (fineGridVertex.getRefinementControl() == peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::Records::Refined)
      && (!fineGridVertex.hasNewPersistentSubVertices())){
    return;
  }

  // get relevant pdfs from coarse and fine vertex
  tarch::la::Vector<DIMENSIONS,int> indexVectorCoarseVertex = _blockRestrictionProlongation.getFatherVertex(fineGridPositionOfVertex);

  // get information from fine vertex
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  loadVertex(fineGridVertex.getVertexNumber());
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& finePdf(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf());

  if (level >= _lastLevel){
    logDebug("touchVertexLastTime()","Swap pdfs on vertex");
    _aaBlockStreaming.swapPdfsInsideCells(finePdf);
  }

  if (level > _nextLevel){
    // get coarse pdf-field
    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
    loadVertex(coarseGridVertices[coarseGridVerticesEnumerator(indexVectorCoarseVertex)].getVertexNumber());
    tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& coarsePdf(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf()
    );

    // do restriction (on all subcells -> we have a representation of the solution even on one coarser
    // level!)
    _blockRestrictionProlongation.restrictToCoarseLevel(
      fineGridPositionOfVertex,
      coarsePdf,
      finePdf
    );
  }


  if (level >= _currentLevel){

    // if the vertex was marked as a new refined vertex, remove that flag
    if (fineGridVertex.hasNewPersistentSubVertices()){
      fineGridVertex.switchToDefault();
    }
  }

#if Debug
#if defined(Dim3)
  for (int z = 0; z < LB_BLOCKSIZE; z++){
#endif
  for (int y = 0; y < LB_BLOCKSIZE; y++){
      for (int x = 0; x < LB_BLOCKSIZE; x++){
      int indi = x + LB_BLOCKSIZE*y
#if defined(Dim3)
               + LB_BLOCKSIZE*LB_BLOCKSIZE*z
#endif
               ;
#if defined(Dim2)
      logDebug("touchVertexFirstTime()" , "cell " << x << "," << y << ":");
#elif defined(Dim3)
      logDebug("touchVertexFirstTime()" , "cell " << x << "," << y << "," << z << ":");
#endif
      for (int i = 0; i < LB_CURRENT_DIR; i++){
        logDebug("touchVertexFirstTime()", finePdf(LB_CURRENT_DIR*indi+i));
      }
      }
  }
#if defined(Dim3)
  }
#endif
#endif

  // write back fine pdf-field
  // TODO load finegrid vertex and write back outer density cells for parallel comp.
  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::prepareSendToNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& vertex
) {
}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::beginIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );
  // set multi-level simulation data
  _multiLevelSimData = std::auto_ptr<peano::applications::latticeboltzmann::MultiLevelSimData>(
                         new peano::applications::latticeboltzmann::MultiLevelSimData(solverState)
                       );
  assertion(_multiLevelSimData.get() != NULL);

  if (solverState.getNextLevel() == solverState.getLevel()){
    solverState.setCellCounter(0);
    _cellCounter = 0;
  }
  _lastLevel = solverState.getLastLevel();
  _currentLevel = solverState.getCurrentLevel();
  _nextLevel = solverState.getNextLevel();
  _referenceLevel = solverState.getLevel();
  _referenceMeshsize = solverState.getDx();


  _blockCollisionModelManager = std::auto_ptr<
                                  peano::applications::latticeboltzmann::blocklatticeboltzmann::
                                  collisionmodels::BlockCollisionModelManager
                                >(new peano::applications::latticeboltzmann::blocklatticeboltzmann::
                                  collisionmodels::BlockCollisionModelManager(*_multiLevelSimData.get())
                                );

  _blockBoundaryConditionManager = std::auto_ptr<
                                     peano::applications::latticeboltzmann::blocklatticeboltzmann::
                                     boundaryconditions::BlockBoundaryConditionManager
                                   >(new peano::applications::latticeboltzmann::blocklatticeboltzmann::
                                     boundaryconditions::BlockBoundaryConditionManager(
                                       *_multiLevelSimData.get()
                                     )
                                   );

  _densityInterpolation = std::auto_ptr<peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::DensityInterpolation>(
                        new peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::DensityInterpolation(
                          _multiLevelSimData->getSimData(0).hasDynamicGeometry()
                        )
                      );

  _forceComputation = std::auto_ptr<peano::applications::latticeboltzmann::blocklatticeboltzmann::ForceComputation>(
                        new peano::applications::latticeboltzmann::blocklatticeboltzmann::ForceComputation(
                          *_multiLevelSimData.get()
                        )
                      );

  // start performance measurement
  if (solverState.getCurrentLevel() == solverState.getLevel()){
    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService::
    getInstance().startPerformanceMeasurement(solverState.measurePerformance());
  }

  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::endIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );
  if (solverState.getNextLevel() == solverState.getLevel()){
    // stop performance measurement
    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService::
    getInstance().stopPerformanceMeasurement();

    solverState.setLocalNumberOfCells(_cellCounter);
#ifdef Parallel
    solverState.setGlobalNumberOfCells(_cellCounter);
    // set local cpu time in the global cpu time variable (mergeWithWorkerStates will do the rest in the
    // parallel case)
    solverState.setGlobalCpuTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService::
      getInstance().getLocalCpuTime()
    );
#endif
  }


  _blockCollisionModelManager.reset(NULL);
  _blockBoundaryConditionManager.reset(NULL);
  _forceComputation.reset(NULL);

  _multiLevelSimData.reset(NULL);
  logTraceOutWith1Argument( "endIteration(State)", solverState);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::enterCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  // get level
  int level = fineGridVerticesEnumerator.getLevel()-1;

  // is set true, if all vertices adjacent to this element are refined, persistent and do not contain
  // any newly created persistent vertices. The latter is important for the dynamic refinement
  bool onlyPersistentRefinedVertices = true;
  for (int i = 0; i < TWO_POWER_D; i++){
    // TODO temporary
    tarch::la::Vector<DIMENSIONS,int> coords;
    int coordsHelp = i;
    for (int d = DIMENSIONS-1; d > -1; d--){
      coords(d) = coordsHelp/tarch::la::aPowI(d,2);
      coordsHelp = coordsHelp - tarch::la::aPowI(d,2)*coords(d);
    }
    onlyPersistentRefinedVertices = onlyPersistentRefinedVertices
      && (   ( fineGridVertices[fineGridVerticesEnumerator(coords)].getRefinementControl() == peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::Records::Refined)
          && (!fineGridVertices[fineGridVerticesEnumerator(coords)].isHangingNode())
          && (!fineGridVertices[fineGridVerticesEnumerator(coords)].hasNewPersistentSubVertices()));
  }
  if (onlyPersistentRefinedVertices){
    return;
  }

  // otherwise: get all information out of vertices
  tarch::la::Vector< TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > inner;
  tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > boundary;
  tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > nonLocalStreamingFinished;
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>* > density;
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>* > velocity;
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* > pdf;
  for (int i = 0; i < TWO_POWER_D; i++){
    // TODO temporary
    tarch::la::Vector<DIMENSIONS,int> coords;
    int coordsHelp = i;
    for (int d = DIMENSIONS-1; d > -1; d--){
      coords(d) = coordsHelp/tarch::la::aPowI(d,2);
      coordsHelp = coordsHelp - tarch::la::aPowI(d,2)*coords(d);
    }

    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
    loadVertex(fineGridVertices[fineGridVerticesEnumerator(coords)].getVertexNumber());
    inner(i)                     = &peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner();
    boundary(i)                  = &peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getBoundary();
    nonLocalStreamingFinished(i) = &peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getNonLocalStreamingFinished();
    density(i)                   = &peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity();
    velocity(i)                  = &peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity();
    pdf(i)                       = &peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf();
  }


  // if finest level, do non-local interpolation part
  if (level >= _currentLevel){
    logDebug("enterCell()", "Do density interpolation...");
    _densityInterpolation->interpolateDensity(inner,boundary,nonLocalStreamingFinished,pdf,density,velocity);
  }

  // if the level is bigger/equal than the last coarsest level, carry out the
  // non-local streaming
  if (level >= _lastLevel){

    logDebug("enterElement()", "Do non-local streaming...");
    _aaBlockStreaming.streamingNonLocal(inner,pdf);
  }

  // write back necessary information
  for (int i = 0; i < TWO_POWER_D; i++){
    // TODO temporary
    tarch::la::Vector<DIMENSIONS,int> coords;
    int coordsHelp = i;
    for (int d = DIMENSIONS-1; d > -1; d--){
      coords(d) = coordsHelp/tarch::la::aPowI(d,2);
      coordsHelp = coordsHelp - tarch::la::aPowI(d,2)*coords(d);
    }

    // TODO write density to outer block cells for parallel comp.

    // tell vertex, that this element has finished streaming
    if (level >= _lastLevel){
      (*nonLocalStreamingFinished(i))[TWO_POWER_D-1-i] = true;
    }
  }
  logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2RegularBlockSolver::leaveCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "leaveCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  logTraceOutWith1Argument( "leaveCell(...)", fineGridCell );
}
