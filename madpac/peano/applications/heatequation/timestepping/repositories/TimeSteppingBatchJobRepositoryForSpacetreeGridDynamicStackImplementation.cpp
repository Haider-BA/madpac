#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::_log( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation" );


peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
):
  _geometry(geometry),
  _cellStack(),
  _vertexStack(),
  _solverState(),
  _gridWithSetupExperiment(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithSetupExperimentAndPlot(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithPerformExplitEulerTimeStep(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithPerformImplicitTimeStep(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithPerformImplicitTimeStepAndPlot(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithComputeImplicitSolutionWithJacobi(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithPerformExplitEulerTimeStepAndPlot(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithPlotSolution(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithPlotGrid(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithSmooth(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithCoarse(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithProlong(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithApplyRefineDeleteCriterion(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithSetupOneLevelOfExperiment(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),
  _gridWithProbeSolution(_vertexStack,_cellStack,_geometry,_solverState,domainSize,computationalDomainOffset),

  _countSetupExperimentRuns(0),
  _countSetupExperimentAndPlotRuns(0),
  _countPerformExplitEulerTimeStepRuns(0),
  _countPerformImplicitTimeStepRuns(0),
  _countPerformImplicitTimeStepAndPlotRuns(0),
  _countComputeImplicitSolutionWithJacobiRuns(0),
  _countPerformExplitEulerTimeStepAndPlotRuns(0),
  _countPlotSolutionRuns(0),
  _countPlotGridRuns(0),
  _countSmoothRuns(0),
  _countCoarseRuns(0),
  _countProlongRuns(0),
  _countApplyRefineDeleteCriterionRuns(0),
  _countSetupOneLevelOfExperimentRuns(0),
  _countProbeSolutionRuns(0),

  _measureSetupExperimentCPUTime(0.0),
  _measureSetupExperimentAndPlotCPUTime(0.0),
  _measurePerformExplitEulerTimeStepCPUTime(0.0),
  _measurePerformImplicitTimeStepCPUTime(0.0),
  _measurePerformImplicitTimeStepAndPlotCPUTime(0.0),
  _measureComputeImplicitSolutionWithJacobiCPUTime(0.0),
  _measurePerformExplitEulerTimeStepAndPlotCPUTime(0.0),
  _measurePlotSolutionCPUTime(0.0),
  _measurePlotGridCPUTime(0.0),
  _measureSmoothCPUTime(0.0),
  _measureCoarseCPUTime(0.0),
  _measureProlongCPUTime(0.0),
  _measureApplyRefineDeleteCriterionCPUTime(0.0),
  _measureSetupOneLevelOfExperimentCPUTime(0.0),
  _measureProbeSolutionCPUTime(0.0),

  _measureSetupExperimentCalendarTime(0.0),
  _measureSetupExperimentAndPlotCalendarTime(0.0),
  _measurePerformExplitEulerTimeStepCalendarTime(0.0),
  _measurePerformImplicitTimeStepCalendarTime(0.0),
  _measurePerformImplicitTimeStepAndPlotCalendarTime(0.0),
  _measureComputeImplicitSolutionWithJacobiCalendarTime(0.0),
  _measurePerformExplitEulerTimeStepAndPlotCalendarTime(0.0),
  _measurePlotSolutionCalendarTime(0.0),
  _measurePlotGridCalendarTime(0.0),
  _measureSmoothCalendarTime(0.0),
  _measureCoarseCalendarTime(0.0),
  _measureProlongCalendarTime(0.0),
  _measureApplyRefineDeleteCriterionCalendarTime(0.0),
  _measureSetupOneLevelOfExperimentCalendarTime(0.0),
  _measureProbeSolutionCalendarTime(0.0),

  _repositoryState() {
  logTraceIn( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(...)" );
  _repositoryState.setAction( TimeSteppingBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(15 +3);
  
  logTraceOut( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(...)" );
}



peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(
  peano::geometry::Geometry&                   geometry
):
  _geometry(geometry),
  _cellStack(),
  _vertexStack(),
  _solverState(),
  _gridWithSetupExperiment(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithSetupExperimentAndPlot(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithPerformExplitEulerTimeStep(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithPerformImplicitTimeStep(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithPerformImplicitTimeStepAndPlot(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithComputeImplicitSolutionWithJacobi(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithPerformExplitEulerTimeStepAndPlot(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithPlotSolution(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithPlotGrid(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithSmooth(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithCoarse(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithProlong(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithApplyRefineDeleteCriterion(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithSetupOneLevelOfExperiment(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithProbeSolution(_vertexStack,_cellStack,_geometry,_solverState),

  _countSetupExperimentRuns(0),
  _countSetupExperimentAndPlotRuns(0),
  _countPerformExplitEulerTimeStepRuns(0),
  _countPerformImplicitTimeStepRuns(0),
  _countPerformImplicitTimeStepAndPlotRuns(0),
  _countComputeImplicitSolutionWithJacobiRuns(0),
  _countPerformExplitEulerTimeStepAndPlotRuns(0),
  _countPlotSolutionRuns(0),
  _countPlotGridRuns(0),
  _countSmoothRuns(0),
  _countCoarseRuns(0),
  _countProlongRuns(0),
  _countApplyRefineDeleteCriterionRuns(0),
  _countSetupOneLevelOfExperimentRuns(0),
  _countProbeSolutionRuns(0),

  _measureSetupExperimentCPUTime(0.0),
  _measureSetupExperimentAndPlotCPUTime(0.0),
  _measurePerformExplitEulerTimeStepCPUTime(0.0),
  _measurePerformImplicitTimeStepCPUTime(0.0),
  _measurePerformImplicitTimeStepAndPlotCPUTime(0.0),
  _measureComputeImplicitSolutionWithJacobiCPUTime(0.0),
  _measurePerformExplitEulerTimeStepAndPlotCPUTime(0.0),
  _measurePlotSolutionCPUTime(0.0),
  _measurePlotGridCPUTime(0.0),
  _measureSmoothCPUTime(0.0),
  _measureCoarseCPUTime(0.0),
  _measureProlongCPUTime(0.0),
  _measureApplyRefineDeleteCriterionCPUTime(0.0),
  _measureSetupOneLevelOfExperimentCPUTime(0.0),
  _measureProbeSolutionCPUTime(0.0),

  _measureSetupExperimentCalendarTime(0.0),
  _measureSetupExperimentAndPlotCalendarTime(0.0),
  _measurePerformExplitEulerTimeStepCalendarTime(0.0),
  _measurePerformImplicitTimeStepCalendarTime(0.0),
  _measurePerformImplicitTimeStepAndPlotCalendarTime(0.0),
  _measureComputeImplicitSolutionWithJacobiCalendarTime(0.0),
  _measurePerformExplitEulerTimeStepAndPlotCalendarTime(0.0),
  _measurePlotSolutionCalendarTime(0.0),
  _measurePlotGridCalendarTime(0.0),
  _measureSmoothCalendarTime(0.0),
  _measureCoarseCalendarTime(0.0),
  _measureProlongCalendarTime(0.0),
  _measureApplyRefineDeleteCriterionCalendarTime(0.0),
  _measureSetupOneLevelOfExperimentCalendarTime(0.0),
  _measureProbeSolutionCalendarTime(0.0),

  _repositoryState() {
  logTraceIn( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(Geometry&)" );

  _repositoryState.setAction( TimeSteppingBatchJobRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(15 +3);
  
  logTraceOut( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation(Geometry&)" );
}
    
   
peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::~TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation() {
  assertion( _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::Terminate );
}


void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::restart(
  const tarch::la::Vector<DIMENSIONS,bool>&    evenFlags,
  const tarch::la::Vector<THREE_POWER_D,int>&  traversalOrderOfNeighbours,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
  int                                          domainLevel
) {
  logTraceInWith2Arguments( "restart(...)", evenFlags, traversalOrderOfNeighbours );
  #ifdef Parallel
  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  #endif
  
  assertion( _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::Terminate );

  _vertexStack.clear();
  _cellStack.clear();

  _gridWithSetupExperiment.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithSetupExperimentAndPlot.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithPerformExplitEulerTimeStep.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithPerformImplicitTimeStep.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithPerformImplicitTimeStepAndPlot.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithComputeImplicitSolutionWithJacobi.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithPerformExplitEulerTimeStepAndPlot.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithPlotSolution.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithPlotGrid.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithSmooth.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithCoarse.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithProlong.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithApplyRefineDeleteCriterion.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithSetupOneLevelOfExperiment.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithProbeSolution.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);

  logTraceOut( "restart(...)" );
}


void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::terminate() {
  logTraceIn( "terminate(...)" );
  
  _repositoryState.setAction( TimeSteppingBatchJobRepositoryState::Terminate );
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().broadcastToWorkingNodes(
      _repositoryState,
      peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag()
    );
  }
  peano::kernel::parallel::SendReceiveBufferPool::getInstance().terminate();
  #endif
  
  _gridWithSetupExperiment.terminate();
  _gridWithSetupExperimentAndPlot.terminate();
  _gridWithPerformExplitEulerTimeStep.terminate();
  _gridWithPerformImplicitTimeStep.terminate();
  _gridWithPerformImplicitTimeStepAndPlot.terminate();
  _gridWithComputeImplicitSolutionWithJacobi.terminate();
  _gridWithPerformExplitEulerTimeStepAndPlot.terminate();
  _gridWithPlotSolution.terminate();
  _gridWithPlotGrid.terminate();
  _gridWithSmooth.terminate();
  _gridWithCoarse.terminate();
  _gridWithProlong.terminate();
  _gridWithApplyRefineDeleteCriterion.terminate();
  _gridWithSetupOneLevelOfExperiment.terminate();
  _gridWithProbeSolution.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::heatequation::timestepping::State& peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::getState() {
  return _solverState;
}


peano::applications::heatequation::timestepping::SpacetreeGridState&  peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::getSpacetreeGridState() {
  return _solverState;
}

    
void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::iterate() {
  tarch::utils::Watch watch( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation", "iterate()", false);
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().broadcastToWorkingNodes(
      _repositoryState,
      peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag()
    );
  }
  #endif
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().switchToOracle(_repositoryState.getAction());
  
  switch ( _repositoryState.getAction()) {
    case TimeSteppingBatchJobRepositoryState::UseAdapterSetupExperiment: watch.startTimer(); _gridWithSetupExperiment.iterate(_solverState); watch.stopTimer(); _countSetupExperimentRuns++; _measureSetupExperimentCPUTime += watch.getCPUTime(); _measureSetupExperimentCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterSetupExperimentAndPlot: watch.startTimer(); _gridWithSetupExperimentAndPlot.iterate(_solverState); watch.stopTimer(); _countSetupExperimentAndPlotRuns++; _measureSetupExperimentAndPlotCPUTime += watch.getCPUTime(); _measureSetupExperimentAndPlotCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStep: watch.startTimer(); _gridWithPerformExplitEulerTimeStep.iterate(_solverState); watch.stopTimer(); _countPerformExplitEulerTimeStepRuns++; _measurePerformExplitEulerTimeStepCPUTime += watch.getCPUTime(); _measurePerformExplitEulerTimeStepCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterPerformImplicitTimeStep: watch.startTimer(); _gridWithPerformImplicitTimeStep.iterate(_solverState); watch.stopTimer(); _countPerformImplicitTimeStepRuns++; _measurePerformImplicitTimeStepCPUTime += watch.getCPUTime(); _measurePerformImplicitTimeStepCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterPerformImplicitTimeStepAndPlot: watch.startTimer(); _gridWithPerformImplicitTimeStepAndPlot.iterate(_solverState); watch.stopTimer(); _countPerformImplicitTimeStepAndPlotRuns++; _measurePerformImplicitTimeStepAndPlotCPUTime += watch.getCPUTime(); _measurePerformImplicitTimeStepAndPlotCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterComputeImplicitSolutionWithJacobi: watch.startTimer(); _gridWithComputeImplicitSolutionWithJacobi.iterate(_solverState); watch.stopTimer(); _countComputeImplicitSolutionWithJacobiRuns++; _measureComputeImplicitSolutionWithJacobiCPUTime += watch.getCPUTime(); _measureComputeImplicitSolutionWithJacobiCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStepAndPlot: watch.startTimer(); _gridWithPerformExplitEulerTimeStepAndPlot.iterate(_solverState); watch.stopTimer(); _countPerformExplitEulerTimeStepAndPlotRuns++; _measurePerformExplitEulerTimeStepAndPlotCPUTime += watch.getCPUTime(); _measurePerformExplitEulerTimeStepAndPlotCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterPlotSolution: watch.startTimer(); _gridWithPlotSolution.iterate(_solverState); watch.stopTimer(); _countPlotSolutionRuns++; _measurePlotSolutionCPUTime += watch.getCPUTime(); _measurePlotSolutionCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterPlotGrid: watch.startTimer(); _gridWithPlotGrid.iterate(_solverState); watch.stopTimer(); _countPlotGridRuns++; _measurePlotGridCPUTime += watch.getCPUTime(); _measurePlotGridCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterSmooth: watch.startTimer(); _gridWithSmooth.iterate(_solverState); watch.stopTimer(); _countSmoothRuns++; _measureSmoothCPUTime += watch.getCPUTime(); _measureSmoothCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterCoarse: watch.startTimer(); _gridWithCoarse.iterate(_solverState); watch.stopTimer(); _countCoarseRuns++; _measureCoarseCPUTime += watch.getCPUTime(); _measureCoarseCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterProlong: watch.startTimer(); _gridWithProlong.iterate(_solverState); watch.stopTimer(); _countProlongRuns++; _measureProlongCPUTime += watch.getCPUTime(); _measureProlongCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterApplyRefineDeleteCriterion: watch.startTimer(); _gridWithApplyRefineDeleteCriterion.iterate(_solverState); watch.stopTimer(); _countApplyRefineDeleteCriterionRuns++; _measureApplyRefineDeleteCriterionCPUTime += watch.getCPUTime(); _measureApplyRefineDeleteCriterionCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterSetupOneLevelOfExperiment: watch.startTimer(); _gridWithSetupOneLevelOfExperiment.iterate(_solverState); watch.stopTimer(); _countSetupOneLevelOfExperimentRuns++; _measureSetupOneLevelOfExperimentCPUTime += watch.getCPUTime(); _measureSetupOneLevelOfExperimentCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterProbeSolution: watch.startTimer(); _gridWithProbeSolution.iterate(_solverState); watch.stopTimer(); _countProbeSolutionRuns++; _measureProbeSolutionCPUTime += watch.getCPUTime(); _measureProbeSolutionCalendarTime += watch.getCalendarTime(); break;

    case TimeSteppingBatchJobRepositoryState::Terminate:
      assertionMsg( false, "this branch/state should never be reached" ); 
      break;
    case TimeSteppingBatchJobRepositoryState::ReadCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
    case TimeSteppingBatchJobRepositoryState::WriteCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
  }
}

void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::iterate(bool reduceState) {

}

 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToSetupExperiment() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterSetupExperiment); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToSetupExperimentAndPlot() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterSetupExperimentAndPlot); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToPerformExplitEulerTimeStep() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStep); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToPerformImplicitTimeStep() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterPerformImplicitTimeStep); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToPerformImplicitTimeStepAndPlot() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterPerformImplicitTimeStepAndPlot); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToComputeImplicitSolutionWithJacobi() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterComputeImplicitSolutionWithJacobi); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToPerformExplitEulerTimeStepAndPlot() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStepAndPlot); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToPlotSolution() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterPlotSolution); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToPlotGrid() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterPlotGrid); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToSmooth() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterSmooth); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToCoarse() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterCoarse); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToProlong() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterProlong); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToApplyRefineDeleteCriterion() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterApplyRefineDeleteCriterion); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToSetupOneLevelOfExperiment() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterSetupOneLevelOfExperiment); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::switchToProbeSolution() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterProbeSolution); }



 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterSetupExperiment() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterSetupExperiment; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterSetupExperimentAndPlot() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterSetupExperimentAndPlot; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterPerformExplitEulerTimeStep() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStep; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterPerformImplicitTimeStep() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterPerformImplicitTimeStep; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterPerformImplicitTimeStepAndPlot() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterPerformImplicitTimeStepAndPlot; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterComputeImplicitSolutionWithJacobi() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterComputeImplicitSolutionWithJacobi; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterPerformExplitEulerTimeStepAndPlot() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStepAndPlot; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterPlotSolution() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterPlotSolution; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterPlotGrid() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterPlotGrid; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterSmooth() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterSmooth; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterCoarse() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterCoarse; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterProlong() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterProlong; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterApplyRefineDeleteCriterion() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterApplyRefineDeleteCriterion; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterSetupOneLevelOfExperiment() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterSetupOneLevelOfExperiment; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::isActiveAdapterProbeSolution() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterProbeSolution; }



#ifdef CCA
void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
  writeToPort.addAdapterRuntime( "SetupExperiment", _countSetupExperimentRuns, _measureSetupExperimentCPUTime, _measureSetupExperimentCPUTime );
  writeToPort.addAdapterRuntime( "SetupExperimentAndPlot", _countSetupExperimentAndPlotRuns, _measureSetupExperimentAndPlotCPUTime, _measureSetupExperimentAndPlotCPUTime );
  writeToPort.addAdapterRuntime( "PerformExplitEulerTimeStep", _countPerformExplitEulerTimeStepRuns, _measurePerformExplitEulerTimeStepCPUTime, _measurePerformExplitEulerTimeStepCPUTime );
  writeToPort.addAdapterRuntime( "PerformImplicitTimeStep", _countPerformImplicitTimeStepRuns, _measurePerformImplicitTimeStepCPUTime, _measurePerformImplicitTimeStepCPUTime );
  writeToPort.addAdapterRuntime( "PerformImplicitTimeStepAndPlot", _countPerformImplicitTimeStepAndPlotRuns, _measurePerformImplicitTimeStepAndPlotCPUTime, _measurePerformImplicitTimeStepAndPlotCPUTime );
  writeToPort.addAdapterRuntime( "ComputeImplicitSolutionWithJacobi", _countComputeImplicitSolutionWithJacobiRuns, _measureComputeImplicitSolutionWithJacobiCPUTime, _measureComputeImplicitSolutionWithJacobiCPUTime );
  writeToPort.addAdapterRuntime( "PerformExplitEulerTimeStepAndPlot", _countPerformExplitEulerTimeStepAndPlotRuns, _measurePerformExplitEulerTimeStepAndPlotCPUTime, _measurePerformExplitEulerTimeStepAndPlotCPUTime );
  writeToPort.addAdapterRuntime( "PlotSolution", _countPlotSolutionRuns, _measurePlotSolutionCPUTime, _measurePlotSolutionCPUTime );
  writeToPort.addAdapterRuntime( "PlotGrid", _countPlotGridRuns, _measurePlotGridCPUTime, _measurePlotGridCPUTime );
  writeToPort.addAdapterRuntime( "Smooth", _countSmoothRuns, _measureSmoothCPUTime, _measureSmoothCPUTime );
  writeToPort.addAdapterRuntime( "Coarse", _countCoarseRuns, _measureCoarseCPUTime, _measureCoarseCPUTime );
  writeToPort.addAdapterRuntime( "Prolong", _countProlongRuns, _measureProlongCPUTime, _measureProlongCPUTime );
  writeToPort.addAdapterRuntime( "ApplyRefineDeleteCriterion", _countApplyRefineDeleteCriterionRuns, _measureApplyRefineDeleteCriterionCPUTime, _measureApplyRefineDeleteCriterionCPUTime );
  writeToPort.addAdapterRuntime( "SetupOneLevelOfExperiment", _countSetupOneLevelOfExperimentRuns, _measureSetupOneLevelOfExperimentCPUTime, _measureSetupOneLevelOfExperimentCPUTime );
  writeToPort.addAdapterRuntime( "ProbeSolution", _countProbeSolutionRuns, _measureProbeSolutionCPUTime, _measureProbeSolutionCPUTime );

}
#endif

void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  
   logInfo( "logIterationStatistics()", "| SetupExperiment \t |  " << _countSetupExperimentRuns << " \t |  " << _measureSetupExperimentCPUTime << " \t |  " << (_countSetupExperimentRuns==0 ? 0 : _measureSetupExperimentCPUTime / static_cast<double>(_countSetupExperimentRuns))  << " \t |  " << _measureSetupExperimentCalendarTime << " \t |  " << (_countSetupExperimentRuns==0 ? 0 : _measureSetupExperimentCalendarTime / static_cast<double>(_countSetupExperimentRuns))  );  
   logInfo( "logIterationStatistics()", "| SetupExperimentAndPlot \t |  " << _countSetupExperimentAndPlotRuns << " \t |  " << _measureSetupExperimentAndPlotCPUTime << " \t |  " << (_countSetupExperimentAndPlotRuns==0 ? 0 : _measureSetupExperimentAndPlotCPUTime / static_cast<double>(_countSetupExperimentAndPlotRuns))  << " \t |  " << _measureSetupExperimentAndPlotCalendarTime << " \t |  " << (_countSetupExperimentAndPlotRuns==0 ? 0 : _measureSetupExperimentAndPlotCalendarTime / static_cast<double>(_countSetupExperimentAndPlotRuns))  );  
   logInfo( "logIterationStatistics()", "| PerformExplitEulerTimeStep \t |  " << _countPerformExplitEulerTimeStepRuns << " \t |  " << _measurePerformExplitEulerTimeStepCPUTime << " \t |  " << (_countPerformExplitEulerTimeStepRuns==0 ? 0 : _measurePerformExplitEulerTimeStepCPUTime / static_cast<double>(_countPerformExplitEulerTimeStepRuns))  << " \t |  " << _measurePerformExplitEulerTimeStepCalendarTime << " \t |  " << (_countPerformExplitEulerTimeStepRuns==0 ? 0 : _measurePerformExplitEulerTimeStepCalendarTime / static_cast<double>(_countPerformExplitEulerTimeStepRuns))  );  
   logInfo( "logIterationStatistics()", "| PerformImplicitTimeStep \t |  " << _countPerformImplicitTimeStepRuns << " \t |  " << _measurePerformImplicitTimeStepCPUTime << " \t |  " << (_countPerformImplicitTimeStepRuns==0 ? 0 : _measurePerformImplicitTimeStepCPUTime / static_cast<double>(_countPerformImplicitTimeStepRuns))  << " \t |  " << _measurePerformImplicitTimeStepCalendarTime << " \t |  " << (_countPerformImplicitTimeStepRuns==0 ? 0 : _measurePerformImplicitTimeStepCalendarTime / static_cast<double>(_countPerformImplicitTimeStepRuns))  );  
   logInfo( "logIterationStatistics()", "| PerformImplicitTimeStepAndPlot \t |  " << _countPerformImplicitTimeStepAndPlotRuns << " \t |  " << _measurePerformImplicitTimeStepAndPlotCPUTime << " \t |  " << (_countPerformImplicitTimeStepAndPlotRuns==0 ? 0 : _measurePerformImplicitTimeStepAndPlotCPUTime / static_cast<double>(_countPerformImplicitTimeStepAndPlotRuns))  << " \t |  " << _measurePerformImplicitTimeStepAndPlotCalendarTime << " \t |  " << (_countPerformImplicitTimeStepAndPlotRuns==0 ? 0 : _measurePerformImplicitTimeStepAndPlotCalendarTime / static_cast<double>(_countPerformImplicitTimeStepAndPlotRuns))  );  
   logInfo( "logIterationStatistics()", "| ComputeImplicitSolutionWithJacobi \t |  " << _countComputeImplicitSolutionWithJacobiRuns << " \t |  " << _measureComputeImplicitSolutionWithJacobiCPUTime << " \t |  " << (_countComputeImplicitSolutionWithJacobiRuns==0 ? 0 : _measureComputeImplicitSolutionWithJacobiCPUTime / static_cast<double>(_countComputeImplicitSolutionWithJacobiRuns))  << " \t |  " << _measureComputeImplicitSolutionWithJacobiCalendarTime << " \t |  " << (_countComputeImplicitSolutionWithJacobiRuns==0 ? 0 : _measureComputeImplicitSolutionWithJacobiCalendarTime / static_cast<double>(_countComputeImplicitSolutionWithJacobiRuns))  );  
   logInfo( "logIterationStatistics()", "| PerformExplitEulerTimeStepAndPlot \t |  " << _countPerformExplitEulerTimeStepAndPlotRuns << " \t |  " << _measurePerformExplitEulerTimeStepAndPlotCPUTime << " \t |  " << (_countPerformExplitEulerTimeStepAndPlotRuns==0 ? 0 : _measurePerformExplitEulerTimeStepAndPlotCPUTime / static_cast<double>(_countPerformExplitEulerTimeStepAndPlotRuns))  << " \t |  " << _measurePerformExplitEulerTimeStepAndPlotCalendarTime << " \t |  " << (_countPerformExplitEulerTimeStepAndPlotRuns==0 ? 0 : _measurePerformExplitEulerTimeStepAndPlotCalendarTime / static_cast<double>(_countPerformExplitEulerTimeStepAndPlotRuns))  );  
   logInfo( "logIterationStatistics()", "| PlotSolution \t |  " << _countPlotSolutionRuns << " \t |  " << _measurePlotSolutionCPUTime << " \t |  " << (_countPlotSolutionRuns==0 ? 0 : _measurePlotSolutionCPUTime / static_cast<double>(_countPlotSolutionRuns))  << " \t |  " << _measurePlotSolutionCalendarTime << " \t |  " << (_countPlotSolutionRuns==0 ? 0 : _measurePlotSolutionCalendarTime / static_cast<double>(_countPlotSolutionRuns))  );  
   logInfo( "logIterationStatistics()", "| PlotGrid \t |  " << _countPlotGridRuns << " \t |  " << _measurePlotGridCPUTime << " \t |  " << (_countPlotGridRuns==0 ? 0 : _measurePlotGridCPUTime / static_cast<double>(_countPlotGridRuns))  << " \t |  " << _measurePlotGridCalendarTime << " \t |  " << (_countPlotGridRuns==0 ? 0 : _measurePlotGridCalendarTime / static_cast<double>(_countPlotGridRuns))  );  
   logInfo( "logIterationStatistics()", "| Smooth \t |  " << _countSmoothRuns << " \t |  " << _measureSmoothCPUTime << " \t |  " << (_countSmoothRuns==0 ? 0 : _measureSmoothCPUTime / static_cast<double>(_countSmoothRuns))  << " \t |  " << _measureSmoothCalendarTime << " \t |  " << (_countSmoothRuns==0 ? 0 : _measureSmoothCalendarTime / static_cast<double>(_countSmoothRuns))  );  
   logInfo( "logIterationStatistics()", "| Coarse \t |  " << _countCoarseRuns << " \t |  " << _measureCoarseCPUTime << " \t |  " << (_countCoarseRuns==0 ? 0 : _measureCoarseCPUTime / static_cast<double>(_countCoarseRuns))  << " \t |  " << _measureCoarseCalendarTime << " \t |  " << (_countCoarseRuns==0 ? 0 : _measureCoarseCalendarTime / static_cast<double>(_countCoarseRuns))  );  
   logInfo( "logIterationStatistics()", "| Prolong \t |  " << _countProlongRuns << " \t |  " << _measureProlongCPUTime << " \t |  " << (_countProlongRuns==0 ? 0 : _measureProlongCPUTime / static_cast<double>(_countProlongRuns))  << " \t |  " << _measureProlongCalendarTime << " \t |  " << (_countProlongRuns==0 ? 0 : _measureProlongCalendarTime / static_cast<double>(_countProlongRuns))  );  
   logInfo( "logIterationStatistics()", "| ApplyRefineDeleteCriterion \t |  " << _countApplyRefineDeleteCriterionRuns << " \t |  " << _measureApplyRefineDeleteCriterionCPUTime << " \t |  " << (_countApplyRefineDeleteCriterionRuns==0 ? 0 : _measureApplyRefineDeleteCriterionCPUTime / static_cast<double>(_countApplyRefineDeleteCriterionRuns))  << " \t |  " << _measureApplyRefineDeleteCriterionCalendarTime << " \t |  " << (_countApplyRefineDeleteCriterionRuns==0 ? 0 : _measureApplyRefineDeleteCriterionCalendarTime / static_cast<double>(_countApplyRefineDeleteCriterionRuns))  );  
   logInfo( "logIterationStatistics()", "| SetupOneLevelOfExperiment \t |  " << _countSetupOneLevelOfExperimentRuns << " \t |  " << _measureSetupOneLevelOfExperimentCPUTime << " \t |  " << (_countSetupOneLevelOfExperimentRuns==0 ? 0 : _measureSetupOneLevelOfExperimentCPUTime / static_cast<double>(_countSetupOneLevelOfExperimentRuns))  << " \t |  " << _measureSetupOneLevelOfExperimentCalendarTime << " \t |  " << (_countSetupOneLevelOfExperimentRuns==0 ? 0 : _measureSetupOneLevelOfExperimentCalendarTime / static_cast<double>(_countSetupOneLevelOfExperimentRuns))  );  
   logInfo( "logIterationStatistics()", "| ProbeSolution \t |  " << _countProbeSolutionRuns << " \t |  " << _measureProbeSolutionCPUTime << " \t |  " << (_countProbeSolutionRuns==0 ? 0 : _measureProbeSolutionCPUTime / static_cast<double>(_countProbeSolutionRuns))  << " \t |  " << _measureProbeSolutionCalendarTime << " \t |  " << (_countProbeSolutionRuns==0 ? 0 : _measureProbeSolutionCalendarTime / static_cast<double>(_countProbeSolutionRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex, peano::applications::heatequation::timestepping::SpacetreeGridCell>* peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex, peano::applications::heatequation::timestepping::SpacetreeGridCell>();
} 


void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex, peano::applications::heatequation::timestepping::SpacetreeGridCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _vertexStack.writeToCheckpoint( *checkpoint );
  _cellStack.writeToCheckpoint( *checkpoint );
} 


void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex, peano::applications::heatequation::timestepping::SpacetreeGridCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _vertexStack.readFromCheckpoint( *checkpoint );
  _cellStack.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForSpacetreeGridDynamicStackImplementation::continueToIterate() {
  logTraceIn( "continueToIterate()" );

  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  // well, it could be the very first iteration, so this assertion would be wrong
  // assertion( _repositoryState.getAction() != TimeSteppingBatchJobRepositoryState::Terminate );

  int masterNode = tarch::parallel::NodePool::getInstance().getMasterNodeNumber();
  assertion( masterNode != -1 );

  _repositoryState.receive( masterNode, peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag() );

  bool result = _repositoryState.getAction()!=TimeSteppingBatchJobRepositoryState::Terminate; 
  logTraceOutWith1Argument( "continueToIterate()", result );
  return result;
}
#endif
