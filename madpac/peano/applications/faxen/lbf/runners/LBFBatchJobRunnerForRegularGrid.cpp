#include "peano/applications/faxen/lbf/runners/LBFBatchJobRunnerForRegularGrid.h"

#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryFactory.h"
#include "peano/applications/faxen/lbf/repositories/LBFBatchJobRepositoryForRegularGrid.h"

// services
#include "peano/applications/faxen/lbf/services/ParticlesService.h"
#include "peano/applications/faxen/lbf/services/ScenarioService.h"
#include "peano/applications/faxen/lbf/services/NSEDataTraceService.h"
#include "peano/applications/faxen/lbf/services/LBDataTraceService.h"

// force computing strategy
#include "peano/applications/faxen/lbf/forces/LaplacianBasedForceCalculator.h"

// information when to launch particles
#include "peano/integration/partitioncoupling/builtin/PartitionCoupling4MovingSphere.h"

// oracle
#include "peano/kernel/datatraversal/autotuning/OracleForOnePhaseWithoutParallelisation.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

#ifdef SharedTBB
#include "tarch/multicore/tbb/Core.h"
#endif

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif

/**
 * If we don't include this type, the checkpoint definition would be incomplete.
 */
#include "peano/applications/faxen/lbf/RegularGridBlockVertex.h"

/**
 * If we don't include this type, the checkpoint definition would be incomplete.
 */
#include "peano/applications/faxen/lbf/RegularGridBlockCell.h"


// @todo Remove this include as soon as you've created your real-world geometry
#include "peano/geometry/builtin/Sphere.h"
#include "peano/geometry/builtin/Hexahedron.h"

tarch::logging::Log peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::_log(
		"peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid"
);

peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::LBFBatchJobRunnerForRegularGrid() {
	// @todo Insert your code here
}


peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::~LBFBatchJobRunnerForRegularGrid() {
	// @todo Insert your code here
}


int peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::run(const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration) {
	assertion( configuration.isValid() );

	// configure multicore support
	peano::kernel::datatraversal::autotuning::OracleForOnePhase* oracle =
			new peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithoutParallelisation();
	peano::kernel::datatraversal::autotuning::Oracle::getInstance().setOracle(oracle);

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

	// ----- domain size, domain offset and number of RegularGridVertices for RegularGrid construction ------

	// number of blocks
	tarch::la::Vector<DIMENSIONS,int> blocks = configuration.getNSEConfiguration().getResolution();
	// domain size
	tarch::la::Vector<DIMENSIONS,double> domainSize = configuration.getNSEConfiguration().getDomainLength();
	// domain offset
	tarch::la::Vector<DIMENSIONS,double> domainOffset = configuration.getRegularGridConfiguration().getDomainOffset();

	logDebug("run()", "Total number of blocks (incl. boundary blocks): " << blocks);
	logDebug("run()", "Domain size for grid construction: " << domainSize << ", respective grid construction offset: " << domainOffset);

	// ----- domain size, domain offset and number of RegularGridVertices for RegularGrid construction (end) ------

	// hexahedron fitting the domain size. This is used for the regular-grid geometry. However,
	// THE REAL GEOMETRY is used throughout the LB simulation!
	peano::geometry::builtin::Hexahedron *hexahedron = new peano::geometry::builtin::Hexahedron(false,domainSize,domainOffset);

	peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid* repository =
			peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
					// use enlarged grid for grid setup
					*hexahedron,
					//peano::geometry::services::GeometryService::getInstance(),
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
	result = runAsMaster(configuration, *repository );
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

	return result;
}


int peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::runAsMaster(
		const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration,
		peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid& repository) {

	UserInterface userInterface;
	userInterface.writeHeader();

	// print information about experiment setup on the screen
	printInfoOnScreen(repository);

	// initialization of grid management service
	initGridManagementAndGeometryServices(configuration);

	// initialization of Faxen forces services
	peano::applications::faxen::lbf::forces::LaplacianBasedForceCalculator forceCalculator;
	initFaxenForcesServices(forceCalculator);

	// initialization procedure for data structures
	repository.switchToInitializeAndSetBoundary(); repository.iterate();

	if(!repository.getRegularGridState().isOnlyNSE()){
		initLBServices(configuration); // initialize LB services

		int t_lb;
		// time loop for LB
		repository.getRegularGridState().setVTKFilename("lb_channel_before_switching2NSE");
		for (t_lb = 0; t_lb <repository.getRegularGridState().getNumberTimesteps(); t_lb++){
			runOneLBTimeStep(repository);
			logInfo("runAsMaster()","Finish timestep " << t_lb);
		}

		initNSEServicesAferLB(configuration);

		// switching from LB to NSE simulations
		repository.switchToSwitchFromLB2NSE(); repository.iterate();

		shutdownLBServices(configuration); // shutdown LB services

		// NSE Simulations after switching
		double t_nse    = 0.0;                                  		// time
		double t_end  = repository.getRegularGridState().getTEnd();      // end time

		// time loop for NSE
		while(t_nse < t_end) {
			runOneNSETimeStep(t_nse,repository);
		}

		repository.getRegularGridState().setTimestep(0);
		initLBServicesAfterNSE(configuration,0); // initialize LB services

		// switching from NSE to LB simulations
		repository.switchToExtractDataNSE2LB(); repository.iterate();
		repository.switchToCorrectDensityAndComputeEqPDF4LB(); repository.iterate();

		shutdownNSEServices(configuration); // shutdown NSE services

		//time loop for LB
		repository.getRegularGridState().setVTKFilename("lb_channel_after_switching2NSE");
		for (t_lb = 0; t_lb <repository.getRegularGridState().getNumberTimesteps(); t_lb++){
			runOneLBTimeStep(repository);
			logInfo("runAsMaster()","Finish timestep " << t_lb);
		}

		shutdownLBServices(configuration); // shutdown LB services
	}
	else {
		initNSEServices(configuration); // initialize NSE services

		double t      = 0.0;                                  // time
		double t_end  = repository.getRegularGridState().getTEnd();      // end time

		// time loop for NSE
		while(t < t_end) {
			runOneNSETimeStep(t,repository);
		}

		initLBServicesAfterNSE(configuration,0); // initialize LB services

		// switching from NSE to LB simulations
		repository.switchToExtractDataNSE2LB(); repository.iterate();
		repository.switchToCorrectDensityAndComputeEqPDF4LB(); repository.iterate();

		shutdownNSEServices(configuration); // shutdown NSE services

		repository.switchToBlockVTKOutputAdapter(); repository.iterate();
		//time loop for LB
		for (int t = 0; t <repository.getRegularGridState().getNumberTimesteps(); t++){
			runOneLBTimeStep(repository);
			logInfo("runAsMaster()","Finish timestep " << t);
		}

		shutdownLBServices(configuration); // shutdown LB services
	}

	shutdownFaxenForcesServices(); // shutdown Faxen forces services

	repository.logIterationStatistics();
	repository.terminate();

	return 0;
}

void peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::handleDynamicGeometry(peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid& repository){
	if (repository.getRegularGridState().hasDynamicGeometry()){
		// TODO CHECK if this is needed
		//nextTimestep = _geometryScenarioAdapter.getPreciceGeometry()->isCoupledSimulationOngoing();
	}
}

void peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::initGridManagementAndGeometryServices(
		const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration){
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().init();
	peano::geometry::services::GeometryService::getInstance().init(configuration.getBuiltinGeometryConfiguration());
}

void peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::
initLBServices(const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration){
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

	// initialize scenario
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

	// initialize data tracing services
	peano::applications::faxen::lbf::services::LBDataTraceService::getInstance().init(
			configuration.getRegularGridConfiguration().getDomainSize()[0],
			configuration.getRegularGridConfiguration().getDomainSize()[1],
			configuration.getRegularGridConfiguration().getDomainOffset()[0],
			configuration.getRegularGridConfiguration().getDomainOffset()[1],
			configuration.getNSEConfiguration().getMeshSize()[0],
			configuration.getNSEConfiguration().getMeshSize()[1],
			configuration.getLatticeBoltzmannConfiguration().getDt(),
			configuration.getLatticeBoltzmannConfiguration().getDensity());
}


void peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::
shutdownLBServices(const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration){
	// shutdown the boundary data service
	scenario::latticeboltzmann::blocklatticeboltzmann::services::
	ReceiveBoundaryDataService::getInstance().shutdown();

	// shutdown receive and send services
	if (   (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::CHANNEL_WITH_MOVING_OBSTACLE)
			|| (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::PRECICE_SCENARIO)
			|| (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::EMPTY_BOX)
			|| (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::MOVING_SPHERE_IN_DRIFT_RATCHET)
	){
		// service for force synchronisation
		peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::getInstance().shutdown();

		peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().shutdown();
		peano::integration::partitioncoupling::services::SendDataService::getInstance().shutdown();
		peano::integration::partitioncoupling::services::CouplingService::getInstance().shutdown();


	}
}

void peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::initNSEServices(
		const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration){
	// initialize scenario for NSE simulations
	peano::applications::faxen::lbf::services::ScenarioService::
	getInstance().init(
			configuration.getRegularGridConfiguration().getDomainSize(),
			configuration.getRegularGridConfiguration().getDomainOffset(),
			configuration.getBlockLatticeBoltzmannScenarioConfiguration().getCharacteristicVelocity(),
			configuration.getBlockLatticeBoltzmannScenarioConfiguration().useParabolicProfile(),
			configuration.getBlockLatticeBoltzmannScenarioConfiguration().getTimestepsPerSineCycle()*
			configuration.getLatticeBoltzmannConfiguration().getDt(),
			configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario(),
			configuration.getBuiltinGeometryConfiguration().interpreteConfiguration(),
			configuration.getNSEConfiguration().getReynoldsNumber()
	);

	// initialize data tracing services
	peano::applications::faxen::lbf::services::NSEDataTraceService::getInstance().init(
			configuration.getRegularGridConfiguration().getDomainSize()[0],
			configuration.getRegularGridConfiguration().getDomainSize()[1],
			configuration.getRegularGridConfiguration().getDomainOffset()[0],
			configuration.getRegularGridConfiguration().getDomainOffset()[1],
			configuration.getNSEConfiguration().getMeshSize()[0],
			configuration.getNSEConfiguration().getMeshSize()[1]);

	/*
	 * initialization of particles services;
	 * temporary solution to shutdown particles service and reinitialize;
	 * initialization should be removed from configuration of regular grid;
	 */
	//	peano::applications::faxen::lbf::services::ParticlesService::getInstance().destroyAllParticles();

}

void peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::shutdownNSEServices(
		const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration){
	peano::applications::faxen::lbf::services::ParticlesService::getInstance().destroyAllParticles();
}

void peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::initFaxenForcesServices(
		peano::applications::faxen::lbf::forces::ForceCalculator& forceCalculator){
	// initialization of force services
	peano::applications::faxen::lbf::services::ForcesService::getInstance().loadDataFromParticlesService();
	peano::applications::faxen::lbf::services::ForcesService::getInstance().setForceCalculator(&forceCalculator);
}

void peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::shutdownFaxenForcesServices(){
	// TODO turn of all Faxen forces services
}

void peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::runOneLBTimeStep(
		peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid& repository) {
	// solve one LB timestep
	if (repository.getRegularGridState().triggerPlotting()){
		repository.switchToRegularBlockSolverAndVTKOutputAdapter(); repository.iterate();

		//				repository.switchToPlotSolution(); repository.iterate();
		//				peano::applications::faxen::lbf::services::ParticlesService::getInstance().savePositionsIntoFile("particles");
	} else {
		repository.switchToRegularBlockSolverAdapter();
		repository.iterate();

		// added for testing switching from LB to NSE
		//				repository.switchToSwitchFromLB2NSE(); repository.iterate();
		//				if(t >= FIXEDTIMESTEPS){
		//					repository.switchToMoveParticles(); repository.iterate();
		//				}
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
}

void peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::runOneNSETimeStep(double &t,
		peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid& repository){

	double eps    = repository.getRegularGridState().getTolerance(); // Residual tolerance
	double dt_vis = repository.getRegularGridState().getVisDelt();   // time step for visualization
	int itermax   = repository.getRegularGridState().getItermax();   // maximum number of iterations

	/*
	 * output of u,v,p for visualization
	 */
	if(fmod(t,dt_vis) < repository.getRegularGridState().getDelt()){
		repository.switchToPlotSolution(); repository.iterate();
		peano::applications::faxen::lbf::services::ParticlesService::getInstance().savePositionsIntoFile("particles");
	}

	repository.switchToControlTimeStep(); repository.iterate();	       // selection of time step
	std::cout << "time step is " << repository.getRegularGridState().getDelt() << std::endl;
	logDebug("runOneNSETimeStep()","time step is " << repository.getRegularGridState().getDelt());

	repository.switchToSetVelocitiesBoundary(); repository.iterate();  // setting boundary values for u and v
	repository.switchToSetScenarioBoundary(); repository.iterate();    // setting scenario boundary conditions
	repository.switchToComputeVelocitiesDerivatives(); repository.iterate();  // computation of velocities derivatives
	repository.switchToComputeRightHandSide(); repository.iterate();   // computation of the right-hand size

	int it = 0;
	repository.getRegularGridState().setResidualNorm(1.0+eps);
	while((it<itermax)&&(repository.getRegularGridState().getResidualNorm()>eps)) {
		/*
		 * SOR iteration:
		 * 1) performing a SOR-cycle
		 * 2) computation of the residual for the pressure equation
		 * 3) setting boundary values for the pressure
		 */
		repository.switchToSORStep(); repository.iterate();
		repository.switchToComputeResidualNorm(); repository.iterate();
		repository.switchToSetPressureBoundary(); repository.iterate();
		it++;
	}

	repository.switchToComputeVelocities(); repository.iterate();     // computation of the new velocities

	// faxen correction
	repository.switchToMoveParticles(); repository.iterate();

	t += repository.getRegularGridState().getDelt();

	logInfo("runOneNSETimeStep()","time t: " << t
			<< "; #(solver iterations): " << it
			<< "; residual: " << repository.getRegularGridState().getResidualNorm());
}

void peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::printInfoOnScreen(
		peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid& repository){
	logInfo("printInfoOnScreen()","run only NSE:" << repository.getRegularGridState().isOnlyNSE());
	logInfo("printInfoOnScreen()","Simulations Reynolds number: " << repository.getRegularGridState().getReynoldsNumber());
	logInfo("printInfoOnScreen()","Simulations time step size: " << repository.getRegularGridState().getDelt()
			<< " and from LB: " << repository.getRegularGridState().getDt());
	logInfo("printInfoOnScreen","Simulations end time: "
			<< repository.getRegularGridState().getTEnd()
			<< " and computed: " << repository.getRegularGridState().getNumberTimesteps()*
			repository.getRegularGridState().getDt());
	logInfo("printInfoOnScreen","Simulations mesh size for LB: " <<	repository.getRegularGridState().getDx()
			<< " and simulation mesh sizes for NSE: " << repository.getRegularGridState().getDelx() << "x"
			<< repository.getRegularGridState().getDely());
}

// faxen correction additional methods

void  peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::initLBServicesAfterNSE(
		const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration,
		int initTimestepCounter){
	if (   (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::CHANNEL_WITH_MOVING_OBSTACLE)
			|| (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::EMPTY_BOX)
			|| (configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario() == scenario::latticeboltzmann::blocklatticeboltzmann::MOVING_SPHERE_IN_DRIFT_RATCHET)
	){
		tarch::la::Vector<DIMENSIONS,double> position = peano::applications::faxen::lbf::services::ParticlesService::
				getInstance().getParticlesPostion(0);
		double radius = peano::applications::faxen::lbf::services::ParticlesService::
				getInstance().getParticlesRadius(0);
		double density = peano::applications::faxen::lbf::services::ParticlesService::
				getInstance().getParticlesDensity(0);
		tarch::la::Vector<DIMENSIONS,double> velocity = peano::applications::faxen::lbf::services::ParticlesService::
				getInstance().getParticlesVelocity(0);

		// convert to appropriate velocity units
		tarch::la::Vector<3,double> velocity3(0.0);
		velocity3[0] = velocity[0];
		velocity3[1] = velocity[1];
		velocity3[2] = 0.0;
		logInfo("initLBServicesAfterNSE()","sphere velocity before switching: " << velocity3);

		peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().init(
				position,radius,velocity3,tarch::la::Vector<3,double>(0.0));
		peano::integration::partitioncoupling::services::SendDataService::getInstance().init(position);
		peano::integration::partitioncoupling::services::CouplingService::getInstance().init(
				// general geometry
				configuration.getBuiltinGeometryConfiguration().interpreteConfiguration(),
				// domainSize
				configuration.getRegularGridConfiguration().getDomainSize(),
				// domainOffset
				configuration.getRegularGridConfiguration().getDomainOffset(),
				// position of sphere
				position,
				// sphere radius
				radius,
				// density of sphere
				density,
				configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getTimestepsPerPlottingVtk(),
				configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getTimestepsPerPlottingPovray(),
				configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getFilename(),
				initTimestepCounter
		);

		// service for force synchronisation
		peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::getInstance().init();
	}

	// initialize scenario
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

void peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid::initNSEServicesAferLB(
		const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration){
	// initialize scenario for NSE simulations
	peano::applications::faxen::lbf::services::ScenarioService::
	getInstance().init(
			configuration.getRegularGridConfiguration().getDomainSize(),
			configuration.getRegularGridConfiguration().getDomainOffset(),
			configuration.getBlockLatticeBoltzmannScenarioConfiguration().getCharacteristicVelocity(),
			configuration.getBlockLatticeBoltzmannScenarioConfiguration().useParabolicProfile(),
			configuration.getBlockLatticeBoltzmannScenarioConfiguration().getTimestepsPerSineCycle()*
			configuration.getLatticeBoltzmannConfiguration().getDt(),
			configuration.getBlockLatticeBoltzmannScenarioConfiguration().getScenario(),
			configuration.getBuiltinGeometryConfiguration().interpreteConfiguration(),
			configuration.getNSEConfiguration().getReynoldsNumber()
	);

	// initialize data tracing services
	peano::applications::faxen::lbf::services::NSEDataTraceService::getInstance().init(
			configuration.getRegularGridConfiguration().getDomainSize()[0],
			configuration.getRegularGridConfiguration().getDomainSize()[1],
			configuration.getRegularGridConfiguration().getDomainOffset()[0],
			configuration.getRegularGridConfiguration().getDomainOffset()[1],
			configuration.getNSEConfiguration().getMeshSize()[0],
			configuration.getNSEConfiguration().getMeshSize()[1]);

	/*
	 * initialization of particles services;
	 * temporary solution to shutdown particles service and reinitialize;
	 * initialization should be removed from configuration of regular grid;
	 */
	peano::applications::faxen::lbf::services::ParticlesService::getInstance().destroyAllParticles();

	// get radius from configuration
	double radius =
			configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getRadius();
	logInfo("initNSEServicesAferLB()","switching to NSE: particle radius: " << radius);
	logInfo("initNSEServicesAferLB()","switching to NSE: zero particle radius: " <<
			peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesRadius(0));

	// from density from configuration
	double density =
			configuration.getBlockLatticeBoltzmannScenarioConfiguration().getPartitionCoupling4MovingSphereConfiguration().getDensity();
	logInfo("initNSEServicesAferLB()","switching to NSE: particle density: " << density);
	logInfo("initNSEServicesAferLB()","switching to NSE: zero particle density: " <<
			peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesDensity(0));

	// static_cast receive data 4 moving sphere
	peano::integration::partitioncoupling::builtin::ReceiveDataFromMovingSphere& rds =
			static_cast<peano::integration::partitioncoupling::builtin::ReceiveDataFromMovingSphere&>(
					peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().getReceiveData());
	tarch::la::Vector<DIMENSIONS,double> position = rds.getPosition();

	logInfo("initNSEServicesAferLB()","switching to NSE: particle position: " << position);
	logInfo("initNSEServicesAferLB()","switching to NSE: zero particle position: " <<
			peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesPostion(0));

	tarch::la::Vector<DIMENSIONS,double> velocity = rds.getVelocity(position);

	logInfo("initNSEServicesAferLB()","switching to NSE: particle velocity: " << velocity);
	logInfo("initNSEServicesAferLB()","switching to NSE: zero particle velocity: " <<
			peano::applications::faxen::lbf::services::ParticlesService::getInstance().getParticlesVelocity(0));

	peano::applications::faxen::lbf::services::ParticlesService::getInstance().
			createParticle(radius,density,position,velocity);
}
