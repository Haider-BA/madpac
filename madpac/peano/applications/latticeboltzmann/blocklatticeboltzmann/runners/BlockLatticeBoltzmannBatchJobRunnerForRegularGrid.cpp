#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/runners/BlockLatticeBoltzmannBatchJobRunnerForRegularGrid.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryFactory.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForRegularGrid.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

#ifdef SharedTBB
#include "tarch/multicore/tbb/Core.h"
#endif

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif

#ifdef MADPAC
#include "madpac/PeanoCouplingService.h"
#endif

/**
 * If we don't include this type, the checkpoint definition would be incomplete.
 */
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockVertex.h"

/**
 * If we don't include this type, the checkpoint definition would be incomplete.
 */
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockCell.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForRegularGrid::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForRegularGrid"
);


peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForRegularGrid::BlockLatticeBoltzmannBatchJobRunnerForRegularGrid() {

}


peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForRegularGrid::~BlockLatticeBoltzmannBatchJobRunnerForRegularGrid() {

}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForRegularGrid::run(const peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForRegularGrid& configuration) {
  assertion( configuration.isValid() );
  tarch::logging::CommandLineLogger::getInstance().addFilterListEntries( configuration.getLogConfiguration().getFilterList() );

  // configure multicore support
//  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setOracleType(peano::kernel::datatraversal::autotuning::Oracle::NoSharedMemoryParallelisation,false);
#if defined(SharedTBB)
  assertion1(false, "Not supported yet!");
  tarch::multicore::tbb::Core::getInstance().configure( configuration.getCoreConfiguration().getNumberOfThreads() );
#endif

#ifdef Parallel
  // configure MPI support
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().setStrategy( new tarch::parallel::strategy::FCFSNodePoolStrategy );
  }
  tarch::parallel::NodePool::getInstance().restart();
#endif

  // ----- adapt domain size, domain offset and number of RegularGridVertices for RegularGrid construction ------

  // number of blocks (=RegularGridVertices,initialised with the total number of LB cells;
  // blocks will be computed in next loop!)
  tarch::la::Vector<DIMENSIONS,int> blocks = configuration.getRegularGridConfiguration().getNumberOfGridPoints();
  // domain size (is to be modified for grid construction!)
  tarch::la::Vector<DIMENSIONS,double> domainSize = configuration.getRegularGridConfiguration().getDomainSize();
  // domain offset (is to be modified for grid construction!)
  tarch::la::Vector<DIMENSIONS,double> domainOffset = configuration.getRegularGridConfiguration().getDomainOffset();

  for (int d = 0; d < DIMENSIONS; d++){
    // determine how many cells have to be put at the end of the domain and which do not fill a whole block
    int additionalCellsInLastBlock = blocks(d) % LB_BLOCKSIZE;
    // number of peano vertices=LB blocks is the number of cells / LB_BLOCKSIZE +1. The +1 comes from the fact,
    // that the center of the first peano vertex is put at the first corner of the domain. So, we need one more vertex
    // at the end of the domain.
    blocks(d) = blocks(d)/LB_BLOCKSIZE + 1;

    // if we have some cells that do not fill a whole block, we need one more block...
    if (additionalCellsInLastBlock != 0){
      blocks(d) += 1;
    }
    // set domain size accordingly
    domainSize(d) = configuration.getLatticeBoltzmannConfiguration().getDx()*(blocks(d)-1)*LB_BLOCKSIZE;
  }
	logDebug("run()", "Total number of blocks (incl. boundary blocks): " << blocks);
  logDebug("run()", "Domain size for grid construction: " << domainSize << ", respective grid construction offset: " << domainOffset);

  // ----- adapt domain size, domain offset and number of RegularGridVertices for RegularGrid construction (end) ------


  // ----------------- initialise services --------------------------------------------
  initServices(configuration);

  // hexahedron fitting the domain size. This is used for the regular-grid geometry. However,
  // THE REAL GEOMETRY is used throughout the LB simulation!
  peano::geometry::builtin::Hexahedron *hexahedron = new peano::geometry::builtin::Hexahedron(false,domainSize,domainOffset);

  peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGrid* repository =
    peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
      // use enlarged grid for grid setup
      *hexahedron,
      // add another boundary layer of vertices around the domain
      blocks,
      // correction for additional boundary layer
      domainSize,
      // shift of offset for additional boundary layer
      domainOffset
    );
  configuration.initState(repository->getRegularGridState());

  int result = 0;
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

  // shutdown all services
  shutdownServices(configuration);

  return result;
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForRegularGrid::runAsMaster(peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGrid& repository) {
  UserInterface userInterface;
  userInterface.writeHeader();

#ifdef MADPAC
  logInfo("runAsMaster()","Init MADPAC LBMD Coupling");
  int rank = madpac::PeanoCouplingService::getInstance().init(repository.getRegularGridState().getNumberTimesteps(), repository.getRegularGridState().getDx(), repository.getRegularGridState().getDt(),repository.getRegularGridState().getDensity(), repository.getRegularGridState().getTau());
#endif

  // time loop
  for (int t = 0; t <repository.getRegularGridState().getNumberTimesteps(); t++){

#ifdef MADPAC
    if(rank == 0) {
#endif

    // solve one LB timestep
    if (repository.getRegularGridState().triggerPlotting()){
      repository.switchToRegularBlockSolverAndVTKOutputAdapter();
      repository.iterate();
    } else {
      repository.switchToRegularBlockSolverAdapter();
      repository.iterate();
    }

    // evaluate performance measurements if needed
    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService::
    getInstance().evaluatePerformance(
      repository.getRegularGridState().getLocalNumberOfCells(),
#ifdef Parallel
      repository.getRegularGridState().getGlobalNumberOfCells(),
      repository.getRegularGridState().getGlobalCpuTime()
#else
      repository.getRegularGridState().getLocalNumberOfCells(),
      peano::applications::latticeboltzmann::blocklatticeboltzmann::services::PerformanceMeasurementService::
      getInstance().getLocalCpuTime()
#endif
    );

    // advance boundary data
    scenario::latticeboltzmann::blocklatticeboltzmann::services::
    ReceiveBoundaryDataService::getInstance().advance(repository.getRegularGridState().getDt());

    // handle dynamic geometry if needed
    handleDynamicGeometry(repository);

#ifdef MADPAC
      }
      madpac::PeanoCouplingService::getInstance().runMarDyn();
#endif

    logInfo("runAsMaster()","Finish timestep " << t);
  }

#ifdef MADPAC
  logInfo("runAsMaster()","Shutdown Coupling");
  madpac::PeanoCouplingService::getInstance().shutdown();
#endif

  repository.logIterationStatistics();
  repository.terminate();
  return 0;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForRegularGrid::handleDynamicGeometry(peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGrid& repository){
  if (repository.getRegularGridState().hasDynamicGeometry()){
    // TODO CHECK if this is needed
    //nextTimestep = _geometryScenarioAdapter.getPreciceGeometry()->isCoupledSimulationOngoing();
  }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForRegularGrid::
initServices(const peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForRegularGrid& configuration){

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

    // service for force synchronisation
    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::getInstance().init();
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
        // general geometry
        configuration.getBuiltinGeometryConfiguration().interpreteConfiguration(),
        // domainSize
        configuration.getRegularGridConfiguration().getDomainSize(),
        // domainOffset
        configuration.getRegularGridConfiguration().getDomainOffset(),
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

      // service for force synchronisation
      peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::getInstance().init();
    }
#if defined(Precice)
  }
#endif


  // initialise scenario
  scenario::latticeboltzmann::blocklatticeboltzmann::services::
  ReceiveBoundaryDataService::getInstance().init(
    configuration.getRegularGridConfiguration().getDomainSize(),
    configuration.getRegularGridConfiguration().getDomainOffset(),
    configuration.getBlockLatticeBoltzmannScenarioConfiguration().getCharacteristicVelocityL(),
    configuration.getBlockLatticeBoltzmannScenarioConfiguration().useParabolicProfile(),
    configuration.getBlockLatticeBoltzmannScenarioConfiguration().getTimestepsPerSineCycle()*
    configuration.getLatticeBoltzmannConfiguration().getDt(),
    configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario(),
    configuration.getBuiltinGeometryConfiguration().interpreteConfiguration()
  );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForRegularGrid::
shutdownServices(const peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForRegularGrid& configuration){
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

    // service for force synchronisation
    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::getInstance().shutdown();
  }
}
