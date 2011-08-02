#include "peano/applications/diffusionequation/explicittimestepping/repositories/ForwardBatchJobRepositoryForRegularGridStandardImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::_log( "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation" );


#ifdef Parallel
peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::ForwardBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
):
#else
peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::ForwardBatchJobRepositoryForRegularGridStandardImplementation(
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
  _gridWithPerformExplitEulerTimeStepAndPlot(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithPlotSolution(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithApplyRefineDeleteCriterion(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),

  _countSetupExperimentRuns(0),
  _countSetupExperimentAndPlotRuns(0),
  _countPerformExplitEulerTimeStepRuns(0),
  _countPerformExplitEulerTimeStepAndPlotRuns(0),
  _countPlotSolutionRuns(0),
  _countApplyRefineDeleteCriterionRuns(0),

  _measureSetupExperimentCPUTime(0.0),
  _measureSetupExperimentAndPlotCPUTime(0.0),
  _measurePerformExplitEulerTimeStepCPUTime(0.0),
  _measurePerformExplitEulerTimeStepAndPlotCPUTime(0.0),
  _measurePlotSolutionCPUTime(0.0),
  _measureApplyRefineDeleteCriterionCPUTime(0.0),

  _measureSetupExperimentCalendarTime(0.0),
  _measureSetupExperimentAndPlotCalendarTime(0.0),
  _measurePerformExplitEulerTimeStepCalendarTime(0.0),
  _measurePerformExplitEulerTimeStepAndPlotCalendarTime(0.0),
  _measurePlotSolutionCalendarTime(0.0),
  _measureApplyRefineDeleteCriterionCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation(...)" );
  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif
  _repositoryState.setAction( ForwardBatchJobRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(6 +3 );
  
  logTraceOut( "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation(...)" );
}



peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::ForwardBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry
):
  _geometry(geometry),
  _gridContainer(),
  _gridWithSetupExperiment(_gridContainer,_geometry, _solverState),
  _gridWithSetupExperimentAndPlot(_gridContainer,_geometry, _solverState),
  _gridWithPerformExplitEulerTimeStep(_gridContainer,_geometry, _solverState),
  _gridWithPerformExplitEulerTimeStepAndPlot(_gridContainer,_geometry, _solverState),
  _gridWithPlotSolution(_gridContainer,_geometry, _solverState),
  _gridWithApplyRefineDeleteCriterion(_gridContainer,_geometry, _solverState),

  _countSetupExperimentRuns(0),
  _countSetupExperimentAndPlotRuns(0),
  _countPerformExplitEulerTimeStepRuns(0),
  _countPerformExplitEulerTimeStepAndPlotRuns(0),
  _countPlotSolutionRuns(0),
  _countApplyRefineDeleteCriterionRuns(0),

  _measureSetupExperimentCPUTime(0.0),
  _measureSetupExperimentAndPlotCPUTime(0.0),
  _measurePerformExplitEulerTimeStepCPUTime(0.0),
  _measurePerformExplitEulerTimeStepAndPlotCPUTime(0.0),
  _measurePlotSolutionCPUTime(0.0),
  _measureApplyRefineDeleteCriterionCPUTime(0.0),

  _measureSetupExperimentCalendarTime(0.0),
  _measureSetupExperimentAndPlotCalendarTime(0.0),
  _measurePerformExplitEulerTimeStepCalendarTime(0.0),
  _measurePerformExplitEulerTimeStepAndPlotCalendarTime(0.0),
  _measurePlotSolutionCalendarTime(0.0),
  _measureApplyRefineDeleteCriterionCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
  
  _repositoryState.setAction( ForwardBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(6 +3 );
  
  logTraceOut( "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
}
    
   
peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::~ForwardBatchJobRepositoryForRegularGridStandardImplementation() {
  assertion( _repositoryState.getAction() == ForwardBatchJobRepositoryState::Terminate );
}


void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::restart(
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
) {
  logTraceInWith3Arguments( "restart(...)", numberOfGridPoints, domainSize, computationalDomainOffset );
  #ifdef Parallel
  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  #endif
  
  assertion( _repositoryState.getAction() == ForwardBatchJobRepositoryState::Terminate );

  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif

  _gridWithSetupExperiment.restart(domainSize,computationalDomainOffset);
  _gridWithSetupExperimentAndPlot.restart(domainSize,computationalDomainOffset);
  _gridWithPerformExplitEulerTimeStep.restart(domainSize,computationalDomainOffset);
  _gridWithPerformExplitEulerTimeStepAndPlot.restart(domainSize,computationalDomainOffset);
  _gridWithPlotSolution.restart(domainSize,computationalDomainOffset);
  _gridWithApplyRefineDeleteCriterion.restart(domainSize,computationalDomainOffset);

  logTraceOut( "restart(...)" );
}


void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::terminate() {
  logTraceIn( "terminate(...)" );
  
  _repositoryState.setAction( ForwardBatchJobRepositoryState::Terminate );
  
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
  _gridWithPerformExplitEulerTimeStepAndPlot.terminate();
  _gridWithPlotSolution.terminate();
  _gridWithApplyRefineDeleteCriterion.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::diffusionequation::explicittimestepping::State& peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::getState() {
  return _solverState;
}

    
peano::applications::diffusionequation::explicittimestepping::RegularGridState& peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::getRegularGridState() {
  return _solverState;
}

void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::iterate(bool reduceState) {
  tarch::utils::Watch watch( "peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation", "iterate(int, bool)", false);
  
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
    case ForwardBatchJobRepositoryState::UseAdapterSetupExperiment: watch.startTimer(); _gridWithSetupExperiment.iterate(reduceState); watch.stopTimer(); _countSetupExperimentRuns++; _measureSetupExperimentCPUTime += watch.getCPUTime(); _measureSetupExperimentCalendarTime += watch.getCalendarTime(); break;
    case ForwardBatchJobRepositoryState::UseAdapterSetupExperimentAndPlot: watch.startTimer(); _gridWithSetupExperimentAndPlot.iterate(reduceState); watch.stopTimer(); _countSetupExperimentAndPlotRuns++; _measureSetupExperimentAndPlotCPUTime += watch.getCPUTime(); _measureSetupExperimentAndPlotCalendarTime += watch.getCalendarTime(); break;
    case ForwardBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStep: watch.startTimer(); _gridWithPerformExplitEulerTimeStep.iterate(reduceState); watch.stopTimer(); _countPerformExplitEulerTimeStepRuns++; _measurePerformExplitEulerTimeStepCPUTime += watch.getCPUTime(); _measurePerformExplitEulerTimeStepCalendarTime += watch.getCalendarTime(); break;
    case ForwardBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStepAndPlot: watch.startTimer(); _gridWithPerformExplitEulerTimeStepAndPlot.iterate(reduceState); watch.stopTimer(); _countPerformExplitEulerTimeStepAndPlotRuns++; _measurePerformExplitEulerTimeStepAndPlotCPUTime += watch.getCPUTime(); _measurePerformExplitEulerTimeStepAndPlotCalendarTime += watch.getCalendarTime(); break;
    case ForwardBatchJobRepositoryState::UseAdapterPlotSolution: watch.startTimer(); _gridWithPlotSolution.iterate(reduceState); watch.stopTimer(); _countPlotSolutionRuns++; _measurePlotSolutionCPUTime += watch.getCPUTime(); _measurePlotSolutionCalendarTime += watch.getCalendarTime(); break;
    case ForwardBatchJobRepositoryState::UseAdapterApplyRefineDeleteCriterion: watch.startTimer(); _gridWithApplyRefineDeleteCriterion.iterate(reduceState); watch.stopTimer(); _countApplyRefineDeleteCriterionRuns++; _measureApplyRefineDeleteCriterionCPUTime += watch.getCPUTime(); _measureApplyRefineDeleteCriterionCalendarTime += watch.getCalendarTime(); break;

    case ForwardBatchJobRepositoryState::Terminate:
      assertionMsg( false, "this branch/state should never be reached" ); 
      break;
    case ForwardBatchJobRepositoryState::ReadCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
    case ForwardBatchJobRepositoryState::WriteCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
  }
}


 void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupExperiment() { _repositoryState.setAction(ForwardBatchJobRepositoryState::UseAdapterSetupExperiment); }
 void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupExperimentAndPlot() { _repositoryState.setAction(ForwardBatchJobRepositoryState::UseAdapterSetupExperimentAndPlot); }
 void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::switchToPerformExplitEulerTimeStep() { _repositoryState.setAction(ForwardBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStep); }
 void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::switchToPerformExplitEulerTimeStepAndPlot() { _repositoryState.setAction(ForwardBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStepAndPlot); }
 void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::switchToPlotSolution() { _repositoryState.setAction(ForwardBatchJobRepositoryState::UseAdapterPlotSolution); }
 void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::switchToApplyRefineDeleteCriterion() { _repositoryState.setAction(ForwardBatchJobRepositoryState::UseAdapterApplyRefineDeleteCriterion); }



 bool peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupExperiment() const { return _repositoryState.getAction() == ForwardBatchJobRepositoryState::UseAdapterSetupExperiment; }
 bool peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupExperimentAndPlot() const { return _repositoryState.getAction() == ForwardBatchJobRepositoryState::UseAdapterSetupExperimentAndPlot; }
 bool peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPerformExplitEulerTimeStep() const { return _repositoryState.getAction() == ForwardBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStep; }
 bool peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPerformExplitEulerTimeStepAndPlot() const { return _repositoryState.getAction() == ForwardBatchJobRepositoryState::UseAdapterPerformExplitEulerTimeStepAndPlot; }
 bool peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPlotSolution() const { return _repositoryState.getAction() == ForwardBatchJobRepositoryState::UseAdapterPlotSolution; }
 bool peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterApplyRefineDeleteCriterion() const { return _repositoryState.getAction() == ForwardBatchJobRepositoryState::UseAdapterApplyRefineDeleteCriterion; }



void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  
   logInfo( "logIterationStatistics()", "| SetupExperiment \t |  " << _countSetupExperimentRuns << " \t |  " << _measureSetupExperimentCPUTime << " \t |  " << (_countSetupExperimentRuns==0 ? 0 : _measureSetupExperimentCPUTime / static_cast<double>(_countSetupExperimentRuns))  << " \t |  " << _measureSetupExperimentCalendarTime << " \t |  " << (_countSetupExperimentRuns==0 ? 0 : _measureSetupExperimentCalendarTime / static_cast<double>(_countSetupExperimentRuns))  );  
   logInfo( "logIterationStatistics()", "| SetupExperimentAndPlot \t |  " << _countSetupExperimentAndPlotRuns << " \t |  " << _measureSetupExperimentAndPlotCPUTime << " \t |  " << (_countSetupExperimentAndPlotRuns==0 ? 0 : _measureSetupExperimentAndPlotCPUTime / static_cast<double>(_countSetupExperimentAndPlotRuns))  << " \t |  " << _measureSetupExperimentAndPlotCalendarTime << " \t |  " << (_countSetupExperimentAndPlotRuns==0 ? 0 : _measureSetupExperimentAndPlotCalendarTime / static_cast<double>(_countSetupExperimentAndPlotRuns))  );  
   logInfo( "logIterationStatistics()", "| PerformExplitEulerTimeStep \t |  " << _countPerformExplitEulerTimeStepRuns << " \t |  " << _measurePerformExplitEulerTimeStepCPUTime << " \t |  " << (_countPerformExplitEulerTimeStepRuns==0 ? 0 : _measurePerformExplitEulerTimeStepCPUTime / static_cast<double>(_countPerformExplitEulerTimeStepRuns))  << " \t |  " << _measurePerformExplitEulerTimeStepCalendarTime << " \t |  " << (_countPerformExplitEulerTimeStepRuns==0 ? 0 : _measurePerformExplitEulerTimeStepCalendarTime / static_cast<double>(_countPerformExplitEulerTimeStepRuns))  );  
   logInfo( "logIterationStatistics()", "| PerformExplitEulerTimeStepAndPlot \t |  " << _countPerformExplitEulerTimeStepAndPlotRuns << " \t |  " << _measurePerformExplitEulerTimeStepAndPlotCPUTime << " \t |  " << (_countPerformExplitEulerTimeStepAndPlotRuns==0 ? 0 : _measurePerformExplitEulerTimeStepAndPlotCPUTime / static_cast<double>(_countPerformExplitEulerTimeStepAndPlotRuns))  << " \t |  " << _measurePerformExplitEulerTimeStepAndPlotCalendarTime << " \t |  " << (_countPerformExplitEulerTimeStepAndPlotRuns==0 ? 0 : _measurePerformExplitEulerTimeStepAndPlotCalendarTime / static_cast<double>(_countPerformExplitEulerTimeStepAndPlotRuns))  );  
   logInfo( "logIterationStatistics()", "| PlotSolution \t |  " << _countPlotSolutionRuns << " \t |  " << _measurePlotSolutionCPUTime << " \t |  " << (_countPlotSolutionRuns==0 ? 0 : _measurePlotSolutionCPUTime / static_cast<double>(_countPlotSolutionRuns))  << " \t |  " << _measurePlotSolutionCalendarTime << " \t |  " << (_countPlotSolutionRuns==0 ? 0 : _measurePlotSolutionCalendarTime / static_cast<double>(_countPlotSolutionRuns))  );  
   logInfo( "logIterationStatistics()", "| ApplyRefineDeleteCriterion \t |  " << _countApplyRefineDeleteCriterionRuns << " \t |  " << _measureApplyRefineDeleteCriterionCPUTime << " \t |  " << (_countApplyRefineDeleteCriterionRuns==0 ? 0 : _measureApplyRefineDeleteCriterionCPUTime / static_cast<double>(_countApplyRefineDeleteCriterionRuns))  << " \t |  " << _measureApplyRefineDeleteCriterionCalendarTime << " \t |  " << (_countApplyRefineDeleteCriterionRuns==0 ? 0 : _measureApplyRefineDeleteCriterionCalendarTime / static_cast<double>(_countApplyRefineDeleteCriterionRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex, peano::applications::diffusionequation::explicittimestepping::RegularGridCell>* peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex, peano::applications::diffusionequation::explicittimestepping::RegularGridCell>();
} 


void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex, peano::applications::diffusionequation::explicittimestepping::RegularGridCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _gridContainer.writeToCheckpoint( *checkpoint );
} 


void peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::diffusionequation::explicittimestepping::RegularGridVertex, peano::applications::diffusionequation::explicittimestepping::RegularGridCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _gridContainer.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::diffusionequation::explicittimestepping::repositories::ForwardBatchJobRepositoryForRegularGridStandardImplementation::continueToIterate() {
  logTraceIn( "continueToIterate()" );

  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  // well, it could be the very first iteration, so this assertion would be wrong
  // assertion( _repositoryState.getAction() != ForwardBatchJobRepositoryState::Terminate );

  int masterNode = tarch::parallel::NodePool::getInstance().getMasterNodeNumber();
  assertion( masterNode != -1 );

  _repositoryState.receive( masterNode, peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag() );

  bool result = _repositoryState.getAction()!=ForwardBatchJobRepositoryState::Terminate; 
  logTraceOutWith1Argument( "continueToIterate()", result );
  return result;
}
#endif
