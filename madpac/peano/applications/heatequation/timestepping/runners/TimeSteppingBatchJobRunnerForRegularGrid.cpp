#include "peano/applications/heatequation/timestepping/runners/TimeSteppingBatchJobRunnerForRegularGrid.h"

#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryFactory.h"
#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryForRegularGrid.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif

#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"
#include "peano/applications/heatequation/timestepping/runners/PeriodicProblem.h"



peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForRegularGrid::TimeSteppingBatchJobRunnerForRegularGrid() {
  // @todo Insert your code here
}


peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForRegularGrid::~TimeSteppingBatchJobRunnerForRegularGrid() {
  // @todo Insert your code here
}


int peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForRegularGrid::run(const peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid& configuration) {
  assertion( configuration.isValid() );
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().setStrategy( new tarch::parallel::strategy::FCFSNodePoolStrategy );
  }
  tarch::parallel::NodePool::getInstance().restart();
  #endif

  peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGrid* repository =
    peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory::getInstance().createRegularGridStandardImplementation(
      scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario(),
      configuration.getRegularGridConfiguration().getNumberOfGridPoints(),
      scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getDomainSize(),
      scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario().getComputationalDomainOffset()
    );
  
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


int peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForRegularGrid::runAsMaster(peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGrid& repository, const peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid& configuration) {
  UserInterface userInterface;
  userInterface.writeHeader();

  PeriodicProblem algorithm( repository );
  algorithm.setupExperiment();

  switch (configuration.getSolverScheme()) {
    case peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::ExplicitEuler:
      algorithm.explicitEuler(
        configuration.getInitialTimeStepSize(),
        configuration.getNumberOfSnapshotsPerSequence(),
        configuration.getNumberOfSequences(),
        configuration.getTimeStepSizeMaxDifference()
      );
      break;
    case peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::ImplicitEulerJacobi:
      algorithm.implicitEulerWithJacobi(
        configuration.getInitialTimeStepSize(),
        configuration.getTimeStepSizeMaxDifference(),
        configuration.getSolverAccuracy(),
        configuration.getRelaxationFactor(),
        configuration.getNumberOfSnapshotsPerSequence(),
        configuration.getNumberOfSequences()
      );
      break;
    default:
      assertion(false);
      break;
  }
//  algorithm.performOneExplicitEulerTimeStepAndPrintSolution(configuration.getInitialTimeStepSize());
//  algorithm.performOneImplicitEulerTimeStepAndPrintSolution(configuration.getInitialTimeStepSize(), configuration.getSolverAccuracy(), configuration.getRelaxationFactor());
 
  userInterface.writeDatatypeStatistics<RegularGridSingleStepVertex,RegularGridCell,RegularGridState>();
  repository.logIterationStatistics();
  repository.terminate();

  return 0;
}


