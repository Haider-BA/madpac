#include "peano/applications/diffusionequation/explicittimestepping/runners/ForwardBatchJobRunnerForRegularGrid.h"
#include "peano/applications/diffusionequation/explicittimestepping/runners/Algorithm.h"

#include "peano/applications/diffusionequation/explicittimestepping/repositories/ForwardBatchJobRepositoryFactory.h"
#include "peano/applications/diffusionequation/explicittimestepping/repositories/ForwardBatchJobRepositoryForRegularGrid.h"

#include "tarch/Assertions.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif


#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"


peano::applications::diffusionequation::explicittimestepping::runners::ForwardBatchJobRunnerForRegularGrid::ForwardBatchJobRunnerForRegularGrid() {
}


peano::applications::diffusionequation::explicittimestepping::runners::ForwardBatchJobRunnerForRegularGrid::~ForwardBatchJobRunnerForRegularGrid() {
}


int peano::applications::diffusionequation::explicittimestepping::runners::ForwardBatchJobRunnerForRegularGrid::run(const peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid& configuration) {
  assertion( configuration.isValid() );
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().setStrategy( new tarch::parallel::strategy::FCFSNodePoolStrategy );
  }
  tarch::parallel::NodePool::getInstance().restart();
  #endif


  peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGrid* repository =
    peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
      scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario(),
      configuration.getRegularGridConfiguration().getNumberOfGridPoints(),
      scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getDomainSize(),
      scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getComputationalDomainOffset()
    );

  if (!configuration.shouldPlotInputGeometryToVTKFile().empty()) {
    scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().plotInputDataToVTKFile( configuration.shouldPlotInputGeometryToVTKFile() );
  }

  int result;
  #if !defined(Parallel)
  result = runAsMaster( *repository, configuration );
  #else
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    result = runAsMaster( *repository, configuration );
    tarch::parallel::NodePool::getInstance().terminate();
  }
  else {
    result = runAsClient( *repository );
  }
  #endif
  
  delete repository;
  
  return result;
}


int peano::applications::diffusionequation::explicittimestepping::runners::ForwardBatchJobRunnerForRegularGrid::runAsMaster(peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGrid& repository, const peano::applications::diffusionequation::explicittimestepping::configurations::ForwardBatchJobConfigurationForRegularGrid& configuration) {
  Algorithm::explicitEuler(repository,configuration);

  repository.logIterationStatistics();

  repository.terminate();

  return 0;
}


