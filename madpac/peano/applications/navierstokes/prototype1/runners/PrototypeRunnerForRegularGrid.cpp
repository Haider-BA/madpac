#include <memory>

#include "peano/applications/navierstokes/prototype1/runners/PrototypeRunnerForRegularGrid.h"

#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryFactory.h"
#include "peano/applications/navierstokes/prototype1/repositories/PrototypeRepositoryForRegularGrid.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

#include "peano/kernel/datatraversal/autotuning/Oracle.h"

#if defined(SharedTBB)
#include "tarch/multicore/tbb/Core.h"
#endif

#if defined(SharedOMP)
#include "tarch/multicore/openMP/Core.h"
#endif

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif

// @todo Remove this include as soon as you've created your real-world geometry
#include "peano/geometry/Intersection.h"
#include "peano/geometry/builtin/Sphere.h"
#include "peano/geometry/builtin/Hexahedron.h"
#include "peano/geometry/builtin/DriftRatchet.h"
#include "peano/geometry/services/GeometryService.h"

///manually inserted includes
#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
#include "peano/applications/navierstokes/prototype1/FluidSimulation.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidStateEnhancedDivFreeEulerExplicit.h"

tarch::logging::Log peano::applications::navierstokes::prototype1::runners::PrototypeRunnerForRegularGrid::_log("peano::applications::navierstokes::prototype1::runners::PrototypeRunnerForRegularGrid");

peano::applications::navierstokes::prototype1::runners::PrototypeRunnerForRegularGrid::PrototypeRunnerForRegularGrid() {
	// @todo Insert your code here
}

peano::applications::navierstokes::prototype1::runners::PrototypeRunnerForRegularGrid::~PrototypeRunnerForRegularGrid() {
	// @todo Insert your code here
}

int peano::applications::navierstokes::prototype1::runners::PrototypeRunnerForRegularGrid::run(
		const peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid& configuration) {
	assertion(configuration.isValid());

	peano::geometry::services::GeometryService::getInstance().init(
			configuration.getBuiltinGeometryConfiguration());

#if defined(SharedTBB)
	tarch::multicore::tbb::Core::getInstance().configure( configuration.getMulticoreConfiguration().getNumberOfThreads() );
	peano::kernel::datatraversal::autotuning::Oracle::getInstance().setOracle(configuration.getAutotuningConfiguration().interpreteConfiguration());
#endif
#if defined(SharedOMP)
	tarch::multicore::openMP::Core::getInstance().configure( configuration.getMulticoreConfiguration().getNumberOfThreads() );
	peano::kernel::datatraversal::autotuning::Oracle::getInstance().setOracle(configuration.getAutotuningConfiguration().interpreteConfiguration());
	logInfo("test", "OpenMP uses " << tarch::multicore::openMP::Core::getInstance().getNumberOfThreads() << " threads.");
#endif

#ifdef Parallel
	if (tarch::parallel::Node::getInstance().isMasterProcess()) {
		tarch::parallel::NodePool::getInstance().setStrategy( new tarch::parallel::strategy::FCFSNodePoolStrategy );
	}
	tarch::parallel::NodePool::getInstance().restart();
#endif

	//repository
	peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForRegularGrid
			* repository =
					peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryFactory::getInstance().createRegularGridStandardImplementation(
							peano::geometry::services::GeometryService::getInstance().getGeometry(),
							configuration.getRegularGridConfiguration().getNumberOfGridPoints(), // numberOfGridPoints,
							tarch::la::Vector<DIMENSIONS, double>(1.0), // domainSize,
							tarch::la::Vector<DIMENSIONS, double>(0.0) // computationalDomainOffset
					);
	//geometry.plotGeometryAsVTK("exact-geometry.vtk");

	// run simulation
	int result;
#if !defined(Parallel)
	result
			= runAsMaster(
					*repository,
					peano::geometry::services::GeometryService::getInstance().getGeometry(),
					configuration);
#else
	if (tarch::parallel::Node::getInstance().isMasterProcess()) {
		result = runAsMaster( *repository, peano::geometry::services::GeometryService::getInstance().getGeometry(), configuration );
		tarch::parallel::NodePool::getInstance().terminate();
	}
	else {
		result = runAsClient( *repository );
	}
#endif

	delete repository;

	return result;
}

int peano::applications::navierstokes::prototype1::runners::PrototypeRunnerForRegularGrid::runAsMaster(
		peano::applications::navierstokes::prototype1::repositories::PrototypeRepositoryForRegularGrid& repository,
		peano::geometry::Geometry& geometry,
		const peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid& configuration) {
	UserInterface userInterface;
	userInterface.writeHeader();

	//fill up state
	repository.getState().setLGSMaxIterations(
			configuration.getMaximumLGSIterations());
	repository.getState().setPlotterPlotDebugInfo(true);
	repository.getState().setScenarioRe(1.0);
	repository.getState().setScenarioEta(1.0);
	repository.getState().setScenarioRho(1.0);
	repository.getState().setScenarioCharacteristicLength(1.0);
	repository.getState().setOdeTimestepnumber(0);
	//  repository.getState().setElementType(DivergenceFree);
	repository.getState().setElementType(Dlinear);
	//Instanz. FluidSimulation
	const bool useDivergenceCorrection = false;
	const double rTol = 1e-7;
	FluidSimulation fluidSim(useDivergenceCorrection, rTol, configuration.plotVTKFiles(), repository);

	//Zeitschleife (spaeter: ode instanz)
	int numberOfTimeSteps = configuration.getNumberOfTimesteps();
	double tau = 0.00001;
	double time = 0.0;
	const bool hasVariableTimeStepSize = false; //in state???
	const double elapsedCPUTimePerStep = tarch::la::PI;
	const bool shallOutputBePlotted = true; //in state???
	//  const std::string outputPath = "./"; // geht nicht in state wegen string nicht in dastgen!
	const double dummyValue = -1.0;

	fluidSim.implementSetInitialValue(hasVariableTimeStepSize, time,
			dummyValue, dummyValue);
	for (int i = 1; i <= numberOfTimeSteps; i++) {
		repository.getState().setOdeTimestepnumber(i);
		repository.getState().setOdeTime(time);
		repository.getState().setOdeTau(tau);
		fluidSim.implementBeginTimeStep();
		fluidSim.implementDerivativeAndUpdate();
		time += tau;

		std::ostringstream msg;
		msg << "./testVtk." << i << ".vtk";
		std::string timeStepNumberWithLeadingZeros = msg.str();

		fluidSim.implementEndTimeStep(hasVariableTimeStepSize,
				elapsedCPUTimePerStep, shallOutputBePlotted,
				timeStepNumberWithLeadingZeros);
	}

	userInterface.writeDatatypeStatistics<
			RegularGridFluidVertexEnhancedDivFreeEulerExplicit,
			RegularGridFluidCellEnhancedDivFreeEulerExplicit,
			RegularGridFluidStateEnhancedDivFreeEulerExplicit> ();
	repository.logIterationStatistics();
	repository.terminate();
	return 0;
}

