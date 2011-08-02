#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/runners/BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryFactory.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif

// @todo Remove this include as soon as you've created your real-world geometry
#include "peano/geometry/builtin/Sphere.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid::
_log("peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid");


peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid() {
  // @todo Insert your code here
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid::~BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid() {
  // @todo Insert your code here
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid::run(const peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid& configuration) {
  assertion( configuration.isValid() );
  tarch::logging::CommandLineLogger::getInstance().addFilterListEntries( configuration.getLogConfiguration().getFilterList() );

//  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setOracleType(peano::kernel::datatraversal::autotuning::Oracle::NoSharedMemoryParallelisation,false);
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().setStrategy( new tarch::parallel::strategy::FCFSNodePoolStrategy );
  }
  tarch::parallel::NodePool::getInstance().restart();
  #endif

  // initialise all services
  initServices(configuration);

  // @todo Insert your geometry generation here and adopt the repository
  //       generation to your needs. There is a dummy implementation to allow
  //       for a quick start, but this is really very dummy (it generates
  //       solely a sphere computational domain and basically does nothing with
  //       it).

  // get geometry for peano-grid (just cubic domain)
  peano::geometry::builtin::Hexahedron *peanoDomainGeometry = new peano::geometry::builtin::Hexahedron(
    false,
    configuration.getSpacetreeGridConfiguration().getDomainSizeForPeanoGrid(),
    configuration.getSpacetreeGridConfiguration().getDomainOffset()
  );
  if (peanoDomainGeometry == NULL){
    logError("run()", "Creation of peano domain setup failed!");
    assertion(false);
  }

  peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid* repository =
    peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory::getInstance().createSpacetreeGridSTDStackImplementation(
      *peanoDomainGeometry,
      3.0*configuration.getSpacetreeGridConfiguration().getDomainSizeForPeanoGrid(),
      configuration.getSpacetreeGridConfiguration().getDomainOffset()-configuration.getSpacetreeGridConfiguration().getDomainSizeForPeanoGrid()// computationalDomainOffset
    );
  configuration.initState(repository->getSpacetreeGridState());
  // End of dummy implementation

  int result;
  #if !defined(Parallel)
  result = runAsMaster( *repository );
  #else
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    result = runAsMaster( *repository );
    tarch::parallel::NodePool::getInstance().terminate();
  }
  else {
    result = runAsClient( *repository );
  }
  #endif

  delete repository;

  if (peanoDomainGeometry != NULL){
    delete peanoDomainGeometry;
    peanoDomainGeometry = NULL;
  }
  shutdownServices(configuration);

  return result;
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid::runAsMaster(peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid& repository) {
  UserInterface userInterface;
  userInterface.writeHeader();

  // determine traversal order (when do we need which level as coarsest level of consideration)
  int *coarsestLevelOfIntermediateTimesteps = setupCoarsestLevelsOfIntermediateTimesteps(
                                                repository.getSpacetreeGridState().getLevel(),
                                                repository.getSpacetreeGridState().getNumberLevels()-1
                                              );
  if (coarsestLevelOfIntermediateTimesteps == NULL){
    logDebug("runAsMaster()", "Error: coarsestLevelsOfIntermediateTimesteps is NULL!");
    assertion(false);
  }

  // initialise grid
  initialiseGrid(repository);
  // time loop
  for (int t = 0; t < repository.getSpacetreeGridState().getNumberTimesteps(); t++){
    solveOneTimestep(t,coarsestLevelOfIntermediateTimesteps,repository);
  }


  repository.logIterationStatistics();
  repository.terminate();
  // End of dummy implementation

  return 0;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid::
initServices(const peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid& configuration){

  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().init();

#if defined(Precice)
  // precice: initialse geometry, receive and send services
  if (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::PRECICE_SCENARIO){
    // service holding everything together
    peano::integration::partitioncoupling::services::CouplingService::getInstance().init(configuration.getPreciceConfiguration());
    // geometry services
    peano::geometry::services::GeometryService::getInstance().init(configuration.getPreciceConfiguration());

    // receive and send services
    peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().init(configuration.getPreciceConfiguration());
    peano::integration::partitioncoupling::services::SendDataService::getInstance().init(configuration.getPreciceConfiguration());
  } else {
#endif

    peano::geometry::services::GeometryService::getInstance().init(configuration.getBuiltinGeometryConfiguration());

    if (   (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::CHANNEL_WITH_MOVING_OBSTACLE)
        || (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::EMPTY_BOX)
        || (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::MOVING_SPHERE_IN_DRIFT_RATCHET)
    ){

      peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().init(
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getPosition(),
        // sphere radius
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getRadius(),
        // TODO Put this into config as well
        tarch::la::Vector<3,double>(0.0),
        tarch::la::Vector<3,double>(0.0)
      );
      peano::integration::partitioncoupling::services::SendDataService::getInstance().init(
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getPosition()
      );
      peano::integration::partitioncoupling::services::CouplingService::getInstance().init(
        configuration.getBuiltinGeometryConfiguration().interpreteConfiguration(),
        configuration.getSpacetreeGridConfiguration().getDomainSize(),
        configuration.getSpacetreeGridConfiguration().getDomainOffset(),
        // position of sphere
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getPosition(),
        // sphere radius
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getRadius(),
        // density of sphere
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getDensity(),
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getTimestepsPerPlottingVtk(),
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getTimestepsPerPlottingPovray(),
        configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getFilename()
      );
    }
#if defined(Precice)
  }
#endif


  // initialise scenario
  scenario::latticeboltzmann::blocklatticeboltzmann::services::
  ReceiveBoundaryDataService::getInstance().init(
    configuration.getSpacetreeGridConfiguration().getDomainSize(),
    configuration.getSpacetreeGridConfiguration().getDomainOffset(),
    configuration.getBlockLatticeBoltzmannScenarioConfiguration().getCharacteristicVelocityL(),
    configuration.getBlockLatticeBoltzmannScenarioConfiguration().useParabolicProfile(),
    configuration.getBlockLatticeBoltzmannScenarioConfiguration().getTimestepsPerSineCycle()*
    configuration.getLatticeBoltzmannConfiguration().getDt(),
    configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario(),
    configuration.getBuiltinGeometryConfiguration().interpreteConfiguration()
  );

  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::RefinementService::getInstance().init(
    configuration.getSpacetreeGridConfiguration().getReferenceLevel(),
    configuration.getLatticeBoltzmannConfiguration().getDx(),
    configuration.getSpacetreeGridConfiguration().getTotalNumberOfGridLevels()
  );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid::
shutdownServices(const peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid& configuration){
  // shutdown the boundary data service
  scenario::latticeboltzmann::blocklatticeboltzmann::services::
  ReceiveBoundaryDataService::getInstance().shutdown();

  // shutdown receive and send services
  if (   (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::CHANNEL_WITH_MOVING_OBSTACLE)
      || (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::PRECICE_SCENARIO)
      || (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::EMPTY_BOX)
      || (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::MOVING_SPHERE_IN_DRIFT_RATCHET)
  ){

    peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().shutdown();
    peano::integration::partitioncoupling::services::SendDataService::getInstance().shutdown();
    peano::integration::partitioncoupling::services::CouplingService::getInstance().shutdown();
  }
}


int* peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid::
setupCoarsestLevelsOfIntermediateTimesteps(
const int referenceLevel, const int finestLevel) const{
  int levelSpan = finestLevel - referenceLevel;
  int *coarsestLevelsOfIntermediateTimesteps = new int [(int) pow(3.0,levelSpan)];
  for (int i = 0; i < (int) pow(3.0,levelSpan); i++){
    bool tryNext = true;
    int numberToTry = (int) pow(3.0,levelSpan);
    int levelToTry = referenceLevel;
    coarsestLevelsOfIntermediateTimesteps[i] = 0;
    while (tryNext){
      if (i % numberToTry == 0){
        tryNext = false;
        coarsestLevelsOfIntermediateTimesteps[i] = levelToTry;
      } else {
        levelToTry++;
        numberToTry = numberToTry/3;
      }
    }
    logDebug("setupCoarsestLevelsOfIntermediateTimesteps()", "timestep " << i << ": " << coarsestLevelsOfIntermediateTimesteps[i]);
  }

  return coarsestLevelsOfIntermediateTimesteps;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid::
solveOneTimestep(
  const int& t,
  int *coarsestLevelOfIntermediateTimesteps,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid& repository
){
  // finest level of consideration
  int finestLevel = repository.getSpacetreeGridState().getNumberLevels()-1;
  // reference level
  int referenceLevel = repository.getSpacetreeGridState().getLevel();
  // total number of grid traversals for the subtimestepping
  int numberTraversals = tarch::la::aPowI(finestLevel-referenceLevel,3);
  // determine whether we want to write VTK output in the first subtimestep
  bool triggerPlotting = repository.getSpacetreeGridState().triggerPlotting();
  // for advancing in time
  int factor = tarch::la::aPowI(repository.getSpacetreeGridState().getNumberLevels()-1-repository.getSpacetreeGridState().getLevel(),3);
  double dt = repository.getSpacetreeGridState().getDt()/((double) factor);


  // loop over all (fine) grid timesteps
  // the shift from i=0 -> i=numberTraversals is done to have a valid
  // index for the lastLevel-operation (otherwise we might end up with an
  // index=-1)
  for (int i = numberTraversals; i < 2*numberTraversals; i++){
    // set levels in state
    repository.getSpacetreeGridState().setLastLevel   (coarsestLevelOfIntermediateTimesteps[(i-1)%numberTraversals]);
    repository.getSpacetreeGridState().setCurrentLevel(coarsestLevelOfIntermediateTimesteps[    i%numberTraversals]);
    repository.getSpacetreeGridState().setNextLevel   (coarsestLevelOfIntermediateTimesteps[(i+1)%numberTraversals]);
    logDebug("solveOneTimestep()", "Timestep " << t << ", subtimestep " << i << ", last level: " << \
      repository.getSpacetreeGridState().getLastLevel() << ", current level: " << \
      repository.getSpacetreeGridState().getCurrentLevel() << ", next level: " << \
      repository.getSpacetreeGridState().getNextLevel()
    );

    // do solver or solver+plotter iteration
    if (triggerPlotting && (i==numberTraversals)){
      repository.switchToRegularBlockSolverAndVTKOutputAdapter();
      repository.iterate();
    } else {
      repository.switchToRegularBlockSolverAdapter();
      repository.iterate();
    }

    // advance boundary data
    scenario::latticeboltzmann::blocklatticeboltzmann::services::
    ReceiveBoundaryDataService::getInstance().advance(dt);

    // do dynamic refinement (grid adaption in this case) if necessary
    handleDynamicGeometry(repository);
  }

  // evaluate performance measurements if needed
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService::
  getInstance().evaluatePerformance(
    repository.getSpacetreeGridState().getLocalNumberOfCells(),
#ifdef Parallel
    repository.getSpacetreeGridState().getGlobalNumberOfCells(),
    repository.getSpacetreeGridState().getGlobalCpuTime()
#else
    repository.getSpacetreeGridState().getLocalNumberOfCells(),
    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService::
    getInstance().getLocalCpuTime()
#endif
  );

  logInfo("solveOneTimestep()", "Finish timestep " << t << "...");
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid::
handleDynamicGeometry(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid& repository
){
  if (repository.getSpacetreeGridState().hasDynamicGeometry()){
    // trigger refinements and coarsenings
    repository.switchToDynamicRefinementForSpacetreeGridAdapter();
    repository.getSpacetreeGridState().setGeometryChanged(false);
    logInfo("handleDynamicGeometry()", "Iterate dynamic geometry adapter once...");
    repository.iterate();

    while (repository.getSpacetreeGridState().geometryChanged()
      ||  (!repository.getSpacetreeGridState().isGridStationary()) ){
      logInfo("handleDynamicGeometry()", "Iterate dynamic geometry adapter...");
      repository.iterate();
    }
  }
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid::
initialiseGrid(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGrid& repository
){
  // Start of dummy implementation
  logDebug("runAsMaster()", "Initialise grid...");
  repository.switchToInitialiseSpacetreeGridAdapter();
  while (!repository.getSpacetreeGridState().isGridStationary()) {
    repository.iterate();
  }
  repository.iterate();
}
