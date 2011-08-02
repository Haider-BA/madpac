#include "peano/applications/faxen/lbf/mappings/RegularGrid2RegularBlockSolver.h"


tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver" );


peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::RegularGrid2RegularBlockSolver():
										_multiLevelSimData(NULL),
										_blockCollisionModelManager(NULL),
										_blockBoundaryConditionManager(NULL) {
	logTraceIn( "RegularGrid2RegularBlockSolver()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2RegularBlockSolver()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::~RegularGrid2RegularBlockSolver() {
	logTraceIn( "~RegularGrid2RegularBlockSolver()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2RegularBlockSolver()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	vertex.createVertex(x,h);
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	vertex.createVertex(x,h);
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	vertex.destroyVertex();
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::handleCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

	tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > inner;
	tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > boundary;
	tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > nonLocalStreamingFinished;
	tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>* > density;
	tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>* > velocity;
	tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* > pdf;

	for (int i = 0; i < TWO_POWER_D; i++){
		peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
				loadVertex(vertices[enumerator(i)].getVertexNumber());

		inner(i) = &peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner();
		boundary(i) = &peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getBoundary();
		nonLocalStreamingFinished(i) = &peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getNonLocalStreamingFinished();
		density(i) = &peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity();
		velocity(i) = &peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity();
		pdf(i) = &peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf();
	}

	// do non-local interpolation (if necessary; this is only activated if dynamic geometries are used)
	logDebug("enterCell()", "Do density interpolation...");
	_densityInterpolation->interpolateDensity(inner,boundary,nonLocalStreamingFinished,pdf,density,velocity);

	logDebug("enterCell()", "Do non-local streaming...");
	_aaBlockStreaming.streamingNonLocal(inner,pdf);


	for (int i = 0; i < TWO_POWER_D; i++){
		// tell vertex, that this element has finished streaming
		(*nonLocalStreamingFinished(i))[TWO_POWER_D-1-i] = true;
	}

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
	  loadVertex(vertex.getVertexNumber());

	  // merge particle distribution functions
	  vertex.mergePdfDiff(neighbour);
	  // merge density values
	  vertex.mergeDensityOnBoundary(neighbour);
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	// load vertex
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertex.getVertexNumber());


	// if reflagging should be done, do it as very first thing
	// reflag cells (inner and boundary states; only done if dynamic geometries are activated)
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			setBoundaryFlagsAndInitialiseUnknownPdfs(
					x,_h*((double)LB_BLOCKSIZE),_level,*_multiLevelSimData.get()
			);

	// reset nonlocal-streaming flags
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			resetNonLocalStreamingFinished();

	std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& boundary(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getBoundary());
	std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());
	tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE,double>& velocity(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf());

	// for boundary data
	std::vector<peano::applications::latticeboltzmann::BoundaryData> boundaryDataBuffer;
	std::vector<tarch::la::Vector<2,unsigned int> > boundaryDataIndex;

	// get boundary data
	scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService::
	getInstance().getBoundaryData(
			x,_h*((double)LB_BLOCKSIZE),inner,boundary,*_multiLevelSimData.get(),boundaryDataBuffer,boundaryDataIndex
	);

	logDebug("touchVertexFirstTime()","Treat boundary before collision");
	_blockBoundaryConditionManager->treatBoundaryBeforeCollision(
			_level,boundaryDataBuffer,boundaryDataIndex,
			density,velocity,pdf
	);
	logDebug("touchVertexFirstTime()","Compute density");
	peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKCOMPUTECELLVALUES.computeDensity(inner,pdf,density);
	logDebug("touchVertexFirstTime()","Compute velocity");
	peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKCOMPUTECELLVALUES.computeVelocity(inner,pdf,density,velocity);
	logDebug("touchVertexFirstTime()","Do collision");
	_blockCollisionModelManager->collide(_level,inner,density,velocity,pdf);
	// force computation -> storing only done, if computeForces is activated
	logDebug("touchVertexFirstTime()", "Store post-collision pdfs at moving-obstacle boundaries");
	_forceComputation->storePostCollisionPdfs(boundaryDataBuffer,boundaryDataIndex,pdf);
	logDebug("touchVertexFirstTime()","Treat boundary after collision");
	_blockBoundaryConditionManager->treatBoundaryAfterCollision(
			_level,boundaryDataBuffer,boundaryDataIndex,
			density,velocity,pdf
	);

	// force computation -> storing only done, if computeForces is activated
	logDebug("touchVertexFirstTime()", "Compute and send forces");
	_forceComputation->evaluateForce(x,_level,boundaryDataBuffer,boundaryDataIndex,pdf);

#ifdef Parallel
	// after local computations/ before streaming operations, save state of pdfs pointing out of local block
	vertex.initPdfDiff();
	vertex.resetDensityOnBlockBoundary();
#endif

	logDebug("touchVertexFirstTime()","Do local streaming");
	_aaBlockStreaming.streamingLocal(inner,pdf);

	// do local density interpolation, if needed
	_densityInterpolation->interpolateDensityLocal(
			inner,boundary,pdf,density,velocity
	);


	for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS; i++){
		if (inner[i]){
			_cellCounter++;
		}
	}
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertex.getVertexNumber());
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf());

	logDebug("touchVertexLastTime()","Swap pdfs on vertex");
	_aaBlockStreaming.swapPdfsInsideCells(pdf);


#ifdef Parallel
	// compute changes between post-collision,post-boundary-treatment pdfs that pointed out of the block and
	// incoming populations:
	// - if there are no incoming populations, the difference is zero -> the mergeNeighbours()-functionality will provide the new
	//   populations
	// - if there are incoming populations, the difference is not zero -> these values can be used by neighbours to get the
	//   correct pdf values
	vertex.computePdfDiff();

	vertex.setDensityOnBlockBoundary(_multiLevelSimData->getSimData(0).hasDynamicGeometry());
#endif
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	// reset cell counters
	_cellCounter = 0;
	solverState.setLocalNumberOfCells(0);
#ifdef Parallel
	solverState.setGlobalNumberOfCells(0);
	solverState.setGlobalCpuTime(0.0);
#endif

	// set multi-level simulation data
	_multiLevelSimData = std::auto_ptr<peano::applications::latticeboltzmann::MultiLevelSimData>(
			new peano::applications::latticeboltzmann::MultiLevelSimData(solverState)
	);
	assertion(_multiLevelSimData.get() != NULL);

	// determine simulation level
	_level = _multiLevelSimData->getSimData(0).getLevel();
	// determine meshsize
	_h = tarch::la::Vector<DIMENSIONS,double>(
			_multiLevelSimData->getSimData(_level).getDx()
			*tarch::la::Vector<DIMENSIONS,double>(1.0)
	);

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
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService::
	getInstance().startPerformanceMeasurement(solverState.measurePerformance());

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2RegularBlockSolver::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
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


	_blockCollisionModelManager.reset(NULL);
	_blockBoundaryConditionManager.reset(NULL);
	_forceComputation.reset(NULL);

	_multiLevelSimData.reset(NULL);

	logTraceOutWith1Argument( "endIteration()", solverState );
}


