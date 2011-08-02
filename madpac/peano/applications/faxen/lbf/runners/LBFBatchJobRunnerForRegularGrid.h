// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_FAXEN_LBF_RUNNERS_LBFBatchJobRunner__FOR_REGULAR_GRID_H_
#define PEANO_APPLICATIONS_FAXEN_LBF_RUNNERS_LBFBatchJobRunner__FOR_REGULAR_GRID_H_

#include "peano/utils/Dimensions.h"
#include "peano/applications/faxen/lbf/configurations/LBFBatchJobConfigurationForRegularGrid.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/PerformanceMeasurementService.h"

#include "peano/geometry/extensions/GeometryEnlargement.h"
#include "peano/geometry/services/FunctionalGeometryService.h"
#include "peano/integration/partitioncoupling/services/CouplingService.h"
#include "peano/integration/partitioncoupling/services/ReceiveDataService.h"
#include "peano/integration/partitioncoupling/services/SendDataService.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/services/ReceiveBoundaryDataService.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/GridManagementService.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/ForceSynchronisationService.h"
#include "tarch/logging/Log.h"
#include "peano/kernel/datatraversal/autotuning/Oracle.h"

namespace peano {
namespace applications {
namespace faxen {
namespace lbf {
namespace runners {
class LBFBatchJobRunnerForRegularGrid;
}
namespace configurations {
class LBFBatchJobConfigurationForRegularGrid;
}
namespace repositories {
class LBFBatchJobRepositoryForRegularGrid;
}
}
}
}
}



/**
 * Runner for the regular grid.
 *
 * @author Generated by the PeProt (Peano Rapid Prototyping) tool.
 */
class peano::applications::faxen::lbf::runners::LBFBatchJobRunnerForRegularGrid {
private:
	static tarch::logging::Log _log;

	/**
	 * init Grid Management Service
	 */
	void initGridManagementAndGeometryServices(
			const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration);

	/**
	 * init LB services
	 */
	void initLBServices(const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration);

	/**
	 * init LB services after NSE simulations
	 */
	void initLBServicesAfterNSE(const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration);

	/**
	 * shutdown LB services
	 */
	void shutdownLBServices(const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration);

	/**
	 * init NSE services
	 */
	void initNSEServices(const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration);

	/**
	 * init NSE services after LB simulations
	 */
	void initNSEServicesAferLB(const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration);

	/**
	 * shutdown NSE services
	 */
	void shutdownNSEServices(const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration);

	/**
	 * initialization services for computing Faxen forces
	 */
	void initFaxenForcesServices();

	/**
	 * shutdown Faxen forces services
	 */
	void shutdownFaxenForcesServices();

	int runAsMaster(
			const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration,
			peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid& repository);

#ifdef Parallel
	int runAsClient(peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid& repository);
#endif

	void handleDynamicGeometry(peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid& repository);

	/**
	 * One time step of LB simulations
	 */
	void runOneLBTimeStep(peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid& repository);

	/**
	 * One time step of NSE simulations
	 */
	void runOneNSETimeStep(double &t,
			peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid& repository);

	/**
	 * Print information on the screen
	 */
	void printInfoOnScreen(peano::applications::faxen::lbf::repositories::LBFBatchJobRepositoryForRegularGrid& repository);

public:
	LBFBatchJobRunnerForRegularGrid();
	virtual ~LBFBatchJobRunnerForRegularGrid();

	/**
	 * Executes the run for one configuration.
	 *
	 * Whenever the configuration file parser encounters a tag corresponding to
	 * a regular grid runner, it tells the corresponding configuration class
	 * configurations::peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid
	 * to create an instance of this class and to parse the configuration file.
	 * If the latter is valid, Peano afterwards calls the runner's run() routine
	 * and passes it the configuration instance.
	 *
	 * @param configuration Valid configuration for this experiment run.
	 */
	int run(const peano::applications::faxen::lbf::configurations::LBFBatchJobConfigurationForRegularGrid& configuration);
};

#endif
