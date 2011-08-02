#include "peano/applications/faxen/runners/FaxenBatchJobRunnerForRegularGrid.h"

#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryFactory.h"
#include "peano/applications/faxen/repositories/FaxenBatchJobRepositoryForRegularGrid.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif

// @todo Remove this include as soon as you've created your real-world geometry
#include "peano/geometry/builtin/Sphere.h" 
#include "peano/geometry/builtin/Hexahedron.h"


peano::applications::faxen::runners::FaxenBatchJobRunnerForRegularGrid::FaxenBatchJobRunnerForRegularGrid() {
	// @todo Insert your code here
}


peano::applications::faxen::runners::FaxenBatchJobRunnerForRegularGrid::~FaxenBatchJobRunnerForRegularGrid() {
	// @todo Insert your code here
}


int peano::applications::faxen::runners::FaxenBatchJobRunnerForRegularGrid::run(const peano::applications::faxen::configurations::FaxenBatchJobConfigurationForRegularGrid& configuration) {
	assertion( configuration.isValid() );

#ifdef Parallel
	if (tarch::parallel::Node::getInstance().isMasterProcess()) {
		tarch::parallel::NodePool::getInstance().setStrategy( new tarch::parallel::strategy::FCFSNodePoolStrategy );
	}
	tarch::parallel::NodePool::getInstance().restart();
#endif

	// @todo Insert your geometry generation here and adopt the repository
	//       generation to your needs. There is a dummy implementation to allow
	//       for a quick start, but this is really very dummy (it generates
	//       solely a sphere computational domain and basically does nothing with
	//       it).

	double length = 1.0;
	double resolution = 32;

	// Start of dummy implementation
	//  peano::geometry::builtin::Sphere geometry(
	//    false,                                      // isInverted
	//    0.4,                                        // radius
	//    tarch::la::Vector<DIMENSIONS,double>(0.5)   // center
	//   );

	//  geometry.plotGeometryAsVTK("exact-geometry.vtk");

	peano::geometry::builtin::Hexahedron geometry(
			false,
			tarch::la::Vector<DIMENSIONS,double>(length),
			tarch::la::Vector<DIMENSIONS,double>(0.0));


	peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGrid* repository =
			peano::applications::faxen::repositories::FaxenBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
					geometry,
					tarch::la::Vector<DIMENSIONS,int>(resolution),       // numberOfGridPoints,
					tarch::la::Vector<DIMENSIONS,double>(length),        // domainSize,
					tarch::la::Vector<DIMENSIONS,double>(0.0)            // computationalDomainOffset
			);
	// End of dummy implementation

	repository->getState().setXlength(length);
	repository->getState().setYlength(length);
	repository->getState().setDelx(length/(resolution-1));
	repository->getState().setDely(length/(resolution-1));

	repository->getState().setDelt(0.005);
	repository->getState().setTEnd(10);
	repository->getState().setTimeSafetyFactor(0.5);

	repository->getState().setItermax(1000);
	repository->getState().setTolerance(0.001);
	repository->getState().setRelaxationFactor(1.7);
	repository->getState().setUpwindDiffFactor(0.5);

	repository->getState().setReynoldsNumber(100);
	repository->getState().setGravityX(0.0);
	repository->getState().setGravityY(0.0);

	repository->getState().setInitialP(0.0);
	repository->getState().setInitialU(0.0);
	repository->getState().setInitialV(0.0);

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

	return result;
}


int peano::applications::faxen::runners::FaxenBatchJobRunnerForRegularGrid::runAsMaster(peano::applications::faxen::repositories::FaxenBatchJobRepositoryForRegularGrid& repository) {
	UserInterface userInterface;
	userInterface.writeHeader();

	double t      = 0.0;                                  // time
	double t_end  = repository.getState().getTEnd();      // end time
	double eps    = repository.getState().getTolerance(); // Residual tolerance
	double dt_vis = 0.5;                                  // time step for visualization

	int it        = 0;                                    // number of iterations
	int itermax   = repository.getState().getItermax();   // maximum number of iterations

	repository.switchToInitialize(); repository.iterate();
	repository.switchToPlotGrid(); repository.iterate();
	repository.switchToPlotSolution(); repository.iterate();

	while(t < t_end) {
		//std::cout << "start iteration t: " << t << "\n";

		repository.switchToControlTimeStep(); repository.iterate();	       // selection of time step
		repository.switchToSetVelocitiesBoundary(); repository.iterate();  // setting boundary values for u and v
		repository.switchToSetScenarioBoundary(); repository.iterate();    // setting scenario boundary conditions
		repository.switchToComputeVelocitiesDerivatives(); repository.iterate();  // computation of velocities derivatives
		repository.switchToComputeRightHandSide(); repository.iterate();   // computation of the right-hand size

		it = 0;
		repository.getState().setResidualNorm(1.0+eps);
		while((it<itermax)&&(repository.getState().getResidualNorm()>eps)) {
			/*
			 * SOR iteration:
			 * 1) setting boundary values for the pressure
			 * 2) performing a SOR-cycle
			 * 3) computation of the residual for the pressure equation
			 */
			//			repository.switchToPlotSolution(); repository.iterate();

			repository.switchToSetPressureBoundary(); repository.iterate();
			repository.switchToSORStep(); repository.iterate();
			repository.switchToComputeResidualNorm(); repository.iterate();

			it++;
		}

		repository.switchToSetPressureBoundary(); repository.iterate();
		repository.switchToComputeVelocities(); repository.iterate();     // computation of the new velocities
		t += repository.getState().getDelt();

		//		repository.switchToPlotSolution(); repository.iterate();
		//		break;

		/*
		 * output of u,v,p for visualization
		 */
		if(fmod(t,dt_vis) < repository.getState().getDelt()){
			std::cout << "number of iterations: " << it << "; residual: "
					<< repository.getState().getResidualNorm() << "\n";
			std::cout << "time: " << t << "\n";
			repository.switchToPlotSolution(); repository.iterate();
		}

		//		ii++;
		//		if(ii == 1) break;
	}

	repository.logIterationStatistics(); repository.terminate();
	// End of dummy implementation

	return 0;
}


