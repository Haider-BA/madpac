#include "peano/applications/heatequation/timestepping/repositories/TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::_log( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation" );


#ifdef Parallel
peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
):
#else
peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
):
#endif
  _geometry(geometry),
  _gridContainer(),
  _gridWithSetupExperiment(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithSetupExperimentAndPlot(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithPerformExplitEulerTimeStep(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithPerformImplicitTimeStep(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithPerformImplicitTimeStepAndPlot(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithComputeImplicitSolutionWithJacobi(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithPerformExplitEulerTimeStepAndPlot(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithPlotSolution(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithPlotGrid(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithSmooth(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithCoarse(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithProlong(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithApplyRefineDeleteCriterion(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithSetupOneLevelOfExperiment(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithProbeSolution(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),

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

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation(...)" );
  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif
  _repositoryState.setAction( TimeSteppingBatchJobRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(15 +3 );
  
  logTraceOut( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation(...)" );
}



peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry
):
  _geometry(geometry),
  _gridContainer(),
  _gridWithSetupExperiment(_gridContainer,_geometry, _solverState),
  _gridWithSetupExperimentAndPlot(_gridContainer,_geometry, _solverState),
  _gridWithPerformExplitEulerTimeStep(_gridContainer,_geometry, _solverState),
  _gridWithPerformImplicitTimeStep(_gridContainer,_geometry, _solverState),
  _gridWithPerformImplicitTimeStepAndPlot(_gridContainer,_geometry, _solverState),
  _gridWithComputeImplicitSolutionWithJacobi(_gridContainer,_geometry, _solverState),
  _gridWithPerformExplitEulerTimeStepAndPlot(_gridContainer,_geometry, _solverState),
  _gridWithPlotSolution(_gridContainer,_geometry, _solverState),
  _gridWithPlotGrid(_gridContainer,_geometry, _solverState),
  _gridWithSmooth(_gridContainer,_geometry, _solverState),
  _gridWithCoarse(_gridContainer,_geometry, _solverState),
  _gridWithProlong(_gridContainer,_geometry, _solverState),
  _gridWithApplyRefineDeleteCriterion(_gridContainer,_geometry, _solverState),
  _gridWithSetupOneLevelOfExperiment(_gridContainer,_geometry, _solverState),
  _gridWithProbeSolution(_gridContainer,_geometry, _solverState),

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

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
  
  _repositoryState.setAction( TimeSteppingBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(15 +3 );
  
  logTraceOut( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
}
    
   
peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::~TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation() {
  assertion( _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::Terminate );
}


void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::restart(
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
) {
  logTraceInWith3Arguments( "restart(...)", numberOfGridPoints, domainSize, computationalDomainOffset );
  #ifdef Parallel
  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  #endif
  
  assertion( _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::Terminate );

  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif

  _gridWithSetupExperiment.restart(domainSize,computationalDomainOffset);
  _gridWithSetupExperimentAndPlot.restart(domainSize,computationalDomainOffset);
  _gridWithPerformExplitEulerTimeStep.restart(domainSize,computationalDomainOffset);
  _gridWithPerformImplicitTimeStep.restart(domainSize,computationalDomainOffset);
  _gridWithPerformImplicitTimeStepAndPlot.restart(domainSize,computationalDomainOffset);
  _gridWithComputeImplicitSolutionWithJacobi.restart(domainSize,computationalDomainOffset);
  _gridWithPerformExplitEulerTimeStepAndPlot.restart(domainSize,computationalDomainOffset);
  _gridWithPlotSolution.restart(domainSize,computationalDomainOffset);
  _gridWithPlotGrid.restart(domainSize,computationalDomainOffset);
  _gridWithSmooth.restart(domainSize,computationalDomainOffset);
  _gridWithCoarse.restart(domainSize,computationalDomainOffset);
  _gridWithProlong.restart(domainSize,computationalDomainOffset);
  _gridWithApplyRefineDeleteCriterion.restart(domainSize,computationalDomainOffset);
  _gridWithSetupOneLevelOfExperiment.restart(domainSize,computationalDomainOffset);
  _gridWithProbeSolution.restart(domainSize,computationalDomainOffset);

  logTraceOut( "restart(...)" );
}


void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::terminate() {
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
  
  _gridContainer.terminate();
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


peano::applications::heatequation::timestepping::State& peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::getState() {
  return _solverState;
}

    
peano::applications::heatequation::timestepping::RegularGridState& peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::getRegularGridState() {
  return _solverState;
}
    
    
void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::iterate() {
  tarch::utils::Watch watch( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation", "iterate()", false);
  iterate( true ); 
}
  

void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::iterate(bool reduceState) {
  tarch::utils::Watch watch( "peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation", "iterate(int, bool)", false);
  
  _repositoryState.setReduceState(reduceState);
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
    case TimeSteppingBatchJobRepositoryState::UseAdapterSetupExperiment: watch.startTimer(); _gridWithSetupExperiment.iterate(reduceState); watch.stopTimer(); _countSetupExperimentRuns++; _measureSetupExperimentCPUTime += watch.getCPUTime(); _measureSetupExperimentCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterSetupExperimentAndPlot: watch.startTimer(); _gridWithSetupExperimentAndPlot.iterate(reduceState); watch.stopTimer(); _countSetupExperimentAndPlotRuns++; _measureSetupExperimentAndPlotCPUTime += watch.getCPUTime(); _measureSetupExperimentAndPlotCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStep: watch.startTimer(); _gridWithPerformExplitEulerTimeStep.iterate(reduceState); watch.stopTimer(); _countPerformExplitEulerTimeStepRuns++; _measurePerformExplitEulerTimeStepCPUTime += watch.getCPUTime(); _measurePerformExplitEulerTimeStepCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterPerformImplicitTimeStep: watch.startTimer(); _gridWithPerformImplicitTimeStep.iterate(reduceState); watch.stopTimer(); _countPerformImplicitTimeStepRuns++; _measurePerformImplicitTimeStepCPUTime += watch.getCPUTime(); _measurePerformImplicitTimeStepCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterPerformImplicitTimeStepAndPlot: watch.startTimer(); _gridWithPerformImplicitTimeStepAndPlot.iterate(reduceState); watch.stopTimer(); _countPerformImplicitTimeStepAndPlotRuns++; _measurePerformImplicitTimeStepAndPlotCPUTime += watch.getCPUTime(); _measurePerformImplicitTimeStepAndPlotCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterComputeImplicitSolutionWithJacobi: watch.startTimer(); _gridWithComputeImplicitSolutionWithJacobi.iterate(reduceState); watch.stopTimer(); _countComputeImplicitSolutionWithJacobiRuns++; _measureComputeImplicitSolutionWithJacobiCPUTime += watch.getCPUTime(); _measureComputeImplicitSolutionWithJacobiCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStepAndPlot: watch.startTimer(); _gridWithPerformExplitEulerTimeStepAndPlot.iterate(reduceState); watch.stopTimer(); _countPerformExplitEulerTimeStepAndPlotRuns++; _measurePerformExplitEulerTimeStepAndPlotCPUTime += watch.getCPUTime(); _measurePerformExplitEulerTimeStepAndPlotCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterPlotSolution: watch.startTimer(); _gridWithPlotSolution.iterate(reduceState); watch.stopTimer(); _countPlotSolutionRuns++; _measurePlotSolutionCPUTime += watch.getCPUTime(); _measurePlotSolutionCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterPlotGrid: watch.startTimer(); _gridWithPlotGrid.iterate(reduceState); watch.stopTimer(); _countPlotGridRuns++; _measurePlotGridCPUTime += watch.getCPUTime(); _measurePlotGridCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterSmooth: watch.startTimer(); _gridWithSmooth.iterate(reduceState); watch.stopTimer(); _countSmoothRuns++; _measureSmoothCPUTime += watch.getCPUTime(); _measureSmoothCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterCoarse: watch.startTimer(); _gridWithCoarse.iterate(reduceState); watch.stopTimer(); _countCoarseRuns++; _measureCoarseCPUTime += watch.getCPUTime(); _measureCoarseCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterProlong: watch.startTimer(); _gridWithProlong.iterate(reduceState); watch.stopTimer(); _countProlongRuns++; _measureProlongCPUTime += watch.getCPUTime(); _measureProlongCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterApplyRefineDeleteCriterion: watch.startTimer(); _gridWithApplyRefineDeleteCriterion.iterate(reduceState); watch.stopTimer(); _countApplyRefineDeleteCriterionRuns++; _measureApplyRefineDeleteCriterionCPUTime += watch.getCPUTime(); _measureApplyRefineDeleteCriterionCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterSetupOneLevelOfExperiment: watch.startTimer(); _gridWithSetupOneLevelOfExperiment.iterate(reduceState); watch.stopTimer(); _countSetupOneLevelOfExperimentRuns++; _measureSetupOneLevelOfExperimentCPUTime += watch.getCPUTime(); _measureSetupOneLevelOfExperimentCalendarTime += watch.getCalendarTime(); break;
    case TimeSteppingBatchJobRepositoryState::UseAdapterProbeSolution: watch.startTimer(); _gridWithProbeSolution.iterate(reduceState); watch.stopTimer(); _countProbeSolutionRuns++; _measureProbeSolutionCPUTime += watch.getCPUTime(); _measureProbeSolutionCalendarTime += watch.getCalendarTime(); break;

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


 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupExperiment() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterSetupExperiment); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupExperimentAndPlot() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterSetupExperimentAndPlot); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToPerformExplitEulerTimeStep() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStep); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToPerformImplicitTimeStep() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterPerformImplicitTimeStep); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToPerformImplicitTimeStepAndPlot() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterPerformImplicitTimeStepAndPlot); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToComputeImplicitSolutionWithJacobi() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterComputeImplicitSolutionWithJacobi); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToPerformExplitEulerTimeStepAndPlot() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStepAndPlot); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToPlotSolution() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterPlotSolution); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToPlotGrid() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterPlotGrid); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToSmooth() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterSmooth); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToCoarse() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterCoarse); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToProlong() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterProlong); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToApplyRefineDeleteCriterion() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterApplyRefineDeleteCriterion); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupOneLevelOfExperiment() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterSetupOneLevelOfExperiment); }
 void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::switchToProbeSolution() { _repositoryState.setAction(TimeSteppingBatchJobRepositoryState::UseAdapterProbeSolution); }



 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupExperiment() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterSetupExperiment; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupExperimentAndPlot() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterSetupExperimentAndPlot; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPerformExplitEulerTimeStep() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStep; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPerformImplicitTimeStep() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterPerformImplicitTimeStep; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPerformImplicitTimeStepAndPlot() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterPerformImplicitTimeStepAndPlot; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterComputeImplicitSolutionWithJacobi() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterComputeImplicitSolutionWithJacobi; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPerformExplitEulerTimeStepAndPlot() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStepAndPlot; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPlotSolution() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterPlotSolution; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPlotGrid() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterPlotGrid; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSmooth() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterSmooth; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterCoarse() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterCoarse; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterProlong() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterProlong; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterApplyRefineDeleteCriterion() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterApplyRefineDeleteCriterion; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupOneLevelOfExperiment() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterSetupOneLevelOfExperiment; }
 bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterProbeSolution() const { return _repositoryState.getAction() == TimeSteppingBatchJobRepositoryState::UseAdapterProbeSolution; }



#ifdef CCA
void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
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


void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics() const {
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


peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex, peano::applications::heatequation::timestepping::RegularGridCell>* peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex, peano::applications::heatequation::timestepping::RegularGridCell>();
} 


void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex, peano::applications::heatequation::timestepping::RegularGridCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _gridContainer.writeToCheckpoint( *checkpoint );
} 


void peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::heatequation::timestepping::RegularGridSingleStepVertex, peano::applications::heatequation::timestepping::RegularGridCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _gridContainer.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::heatequation::timestepping::repositories::TimeSteppingBatchJobRepositoryForRegularGridStandardImplementation::continueToIterate() {
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
