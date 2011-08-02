#include "peano/applications/heatequation/timestepping/runners/TimeSteppingBatchJobRunnerForSpacetreeGrid.h"

#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryFactory.h"
#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryForSpacetreeGrid.h"

#include "peano/UserInterface.h"

#include "tarch/Assertions.h"

#ifdef Parallel
#include "tarch/parallel/NodePool.h"
#include "tarch/parallel/strategy/FCFSNodePoolStrategy.h"
#endif


#include "scenario/diffusionequation/DiffusionEquationScenarioService.h"
#include "peano/applications/heatequation/timestepping/runners/PeriodicProblem.h"


tarch::logging::Log peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForSpacetreeGrid::_log( "peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForSpacetreeGrid" );


peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForSpacetreeGrid::TimeSteppingBatchJobRunnerForSpacetreeGrid() {
  // @todo Insert your code here
}


peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForSpacetreeGrid::~TimeSteppingBatchJobRunnerForSpacetreeGrid() {
  // @todo Insert your code here
}


int peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForSpacetreeGrid::run(const peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid& configuration) {
  assertion( configuration.isValid() );
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().setStrategy( new tarch::parallel::strategy::FCFSNodePoolStrategy );
  }
  tarch::parallel::NodePool::getInstance().restart();
  #endif


  peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGrid* repository = 
    peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryFactory::getInstance().createSpacetreeGridSTDStackImplementation(
      scenario::diffusionequation::DiffusionEquationScenarioService::getInstance().getScenario(),
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


int peano::applications::heatequation::timestepping::runners::TimeSteppingBatchJobRunnerForSpacetreeGrid::runAsMaster(peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGrid& repository, const peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid& configuration) {
  UserInterface userInterface;
  userInterface.writeHeader();

  repository.getSpacetreeGridState().setMinMaxAllowedMeshSize(configuration.getMinimalMeshSize(),configuration.getMaximalMeshSize());

  PeriodicProblem algorithm( repository );

  int counter = 0;
  switch (configuration.getSolverScheme()) {
    case peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::ExplicitEuler:
      algorithm.setupExperiment();
      repository.getSpacetreeGridState().makeFinestLevelTheActiveLevel();
      algorithm.explicitEuler(configuration.getInitialTimeStepSize(),configuration.getNumberOfSnapshotsPerSequence(), configuration.getNumberOfSequences(), configuration.getSolverAccuracy());
      break;
    case peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::ImplicitEulerJacobi:
      algorithm.setupExperiment();
      repository.getSpacetreeGridState().makeFinestLevelTheActiveLevel();
      algorithm.implicitEulerWithJacobi(
        configuration.getInitialTimeStepSize(),
        configuration.getTimeStepSizeMaxDifference(),
        configuration.getSolverAccuracy(),
        configuration.getRelaxationFactor(),
        configuration.getNumberOfSnapshotsPerSequence(),
        configuration.getNumberOfSequences()
      );
      break;
    case peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::VCycle:
      algorithm.setupExperiment();
      repository.getSpacetreeGridState().makeFinestLevelTheActiveLevel();
      algorithm.vCycle(
        configuration.getInitialTimeStepSize(),
        configuration.getTimeStepSizeMaxDifference(),
        configuration.getSolverAccuracy(),
        configuration.getRelaxationFactor(),
        configuration.getNumberOfSnapshotsPerSequence(),
        configuration.getNumberOfSequences(),
        configuration.getNumberOfPreSmoothingSteps(),
        configuration.getNumberOfPostSmoothingSteps()
      );
      break;
    case peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::OneVCycle:
      algorithm.setupExperiment();
      repository.getSpacetreeGridState().makeFinestLevelTheActiveLevel();
      algorithm.oneVCycle(configuration.getInitialTimeStepSize(),configuration.getRelaxationFactor(), configuration.getNumberOfPreSmoothingSteps(), configuration.getNumberOfPostSmoothingSteps() );
      break;
    case peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration::FMG:
      repository.switchToSetupOneLevelOfExperiment();
      do {
        repository.iterate();
        counter++;
      } while (repository.getSpacetreeGridState().getNumberOfInnerCells()==0);
      repository.getSpacetreeGridState().makeFinestLevelTheActiveLevel();
      logInfo("runAsMaster(...)", "needed " << counter << " iteration(s) to setup initial grid with " << repository.getSpacetreeGridState().getNumberOfInnerCells() << " inner cell(s) and h_min=" << repository.getSpacetreeGridState().getMinimumMeshWidth() );
      algorithm.fmg(
        configuration.getInitialTimeStepSize(),
        configuration.getTimeStepSizeMaxDifference(),
        configuration.getSolverAccuracy(),
        configuration.getRelaxationFactor(),
        configuration.getNumberOfSnapshotsPerSequence(),
        configuration.getNumberOfSequences(),
        configuration.getNumberOfPreSmoothingSteps(),
        configuration.getNumberOfPostSmoothingSteps(),
        configuration.getRefinementPercentage(),
        configuration.getDeletePercentage()
      );
      break;
    default:
      assertion(false);
      break;
  }

  userInterface.writeDatatypeStatistics<SpacetreeGridSingleStepVertex,SpacetreeGridCell,SpacetreeGridState>();
  repository.logIterationStatistics();
  repository.terminate();

  return 0;
}


