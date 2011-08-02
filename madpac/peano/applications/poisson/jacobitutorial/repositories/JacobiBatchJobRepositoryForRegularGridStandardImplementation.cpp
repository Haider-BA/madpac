#include "peano/applications/poisson/jacobitutorial/repositories/JacobiBatchJobRepositoryForRegularGridStandardImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::_log( "peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation" );


#ifdef Parallel
peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::JacobiBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
):
#else
peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::JacobiBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
):
#endif
  _geometry(geometry),
  _gridContainer(),
  _gridWithSetupExperiment(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithSetupExperimentAndPlotGrid(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithSetupExperimentAndPlotStartSolution(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithJacobiStep(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithJacobiStepAndPlotSolution(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithPlotSolution(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),

  _countSetupExperimentRuns(0),
  _countSetupExperimentAndPlotGridRuns(0),
  _countSetupExperimentAndPlotStartSolutionRuns(0),
  _countJacobiStepRuns(0),
  _countJacobiStepAndPlotSolutionRuns(0),
  _countPlotSolutionRuns(0),

  _measureSetupExperimentCPUTime(0.0),
  _measureSetupExperimentAndPlotGridCPUTime(0.0),
  _measureSetupExperimentAndPlotStartSolutionCPUTime(0.0),
  _measureJacobiStepCPUTime(0.0),
  _measureJacobiStepAndPlotSolutionCPUTime(0.0),
  _measurePlotSolutionCPUTime(0.0),

  _measureSetupExperimentCalendarTime(0.0),
  _measureSetupExperimentAndPlotGridCalendarTime(0.0),
  _measureSetupExperimentAndPlotStartSolutionCalendarTime(0.0),
  _measureJacobiStepCalendarTime(0.0),
  _measureJacobiStepAndPlotSolutionCalendarTime(0.0),
  _measurePlotSolutionCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation(...)" );
  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif
  _repositoryState.setAction( JacobiBatchJobRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(6 +3 );
  
  logTraceOut( "peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation(...)" );
}



peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::JacobiBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry
):
  _geometry(geometry),
  _gridContainer(),
  _gridWithSetupExperiment(_gridContainer,_geometry, _solverState),
  _gridWithSetupExperimentAndPlotGrid(_gridContainer,_geometry, _solverState),
  _gridWithSetupExperimentAndPlotStartSolution(_gridContainer,_geometry, _solverState),
  _gridWithJacobiStep(_gridContainer,_geometry, _solverState),
  _gridWithJacobiStepAndPlotSolution(_gridContainer,_geometry, _solverState),
  _gridWithPlotSolution(_gridContainer,_geometry, _solverState),

  _countSetupExperimentRuns(0),
  _countSetupExperimentAndPlotGridRuns(0),
  _countSetupExperimentAndPlotStartSolutionRuns(0),
  _countJacobiStepRuns(0),
  _countJacobiStepAndPlotSolutionRuns(0),
  _countPlotSolutionRuns(0),

  _measureSetupExperimentCPUTime(0.0),
  _measureSetupExperimentAndPlotGridCPUTime(0.0),
  _measureSetupExperimentAndPlotStartSolutionCPUTime(0.0),
  _measureJacobiStepCPUTime(0.0),
  _measureJacobiStepAndPlotSolutionCPUTime(0.0),
  _measurePlotSolutionCPUTime(0.0),

  _measureSetupExperimentCalendarTime(0.0),
  _measureSetupExperimentAndPlotGridCalendarTime(0.0),
  _measureSetupExperimentAndPlotStartSolutionCalendarTime(0.0),
  _measureJacobiStepCalendarTime(0.0),
  _measureJacobiStepAndPlotSolutionCalendarTime(0.0),
  _measurePlotSolutionCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
  
  _repositoryState.setAction( JacobiBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(6 +3 );
  
  logTraceOut( "peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
}
    
   
peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::~JacobiBatchJobRepositoryForRegularGridStandardImplementation() {
  assertion( _repositoryState.getAction() == JacobiBatchJobRepositoryState::Terminate );
}


void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::restart(
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
) {
  logTraceInWith3Arguments( "restart(...)", numberOfGridPoints, domainSize, computationalDomainOffset );
  #ifdef Parallel
  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  #endif
  
  assertion( _repositoryState.getAction() == JacobiBatchJobRepositoryState::Terminate );

  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif

  _gridWithSetupExperiment.restart(domainSize,computationalDomainOffset);
  _gridWithSetupExperimentAndPlotGrid.restart(domainSize,computationalDomainOffset);
  _gridWithSetupExperimentAndPlotStartSolution.restart(domainSize,computationalDomainOffset);
  _gridWithJacobiStep.restart(domainSize,computationalDomainOffset);
  _gridWithJacobiStepAndPlotSolution.restart(domainSize,computationalDomainOffset);
  _gridWithPlotSolution.restart(domainSize,computationalDomainOffset);

  logTraceOut( "restart(...)" );
}


void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::terminate() {
  logTraceIn( "terminate(...)" );
  
  _repositoryState.setAction( JacobiBatchJobRepositoryState::Terminate );
  
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
  _gridWithSetupExperimentAndPlotGrid.terminate();
  _gridWithSetupExperimentAndPlotStartSolution.terminate();
  _gridWithJacobiStep.terminate();
  _gridWithJacobiStepAndPlotSolution.terminate();
  _gridWithPlotSolution.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::poisson::jacobitutorial::State& peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::getState() {
  return _solverState;
}

    
peano::applications::poisson::jacobitutorial::RegularGridState& peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::getRegularGridState() {
  return _solverState;
}
    
    
void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::iterate() {
  tarch::utils::Watch watch( "peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation", "iterate()", false);
  iterate( true ); 
}
  

void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::iterate(bool reduceState) {
  tarch::utils::Watch watch( "peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation", "iterate(int, bool)", false);
  
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
    case JacobiBatchJobRepositoryState::UseAdapterSetupExperiment: watch.startTimer(); _gridWithSetupExperiment.iterate(reduceState); watch.stopTimer(); _countSetupExperimentRuns++; _measureSetupExperimentCPUTime += watch.getCPUTime(); _measureSetupExperimentCalendarTime += watch.getCalendarTime(); break;
    case JacobiBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotGrid: watch.startTimer(); _gridWithSetupExperimentAndPlotGrid.iterate(reduceState); watch.stopTimer(); _countSetupExperimentAndPlotGridRuns++; _measureSetupExperimentAndPlotGridCPUTime += watch.getCPUTime(); _measureSetupExperimentAndPlotGridCalendarTime += watch.getCalendarTime(); break;
    case JacobiBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotStartSolution: watch.startTimer(); _gridWithSetupExperimentAndPlotStartSolution.iterate(reduceState); watch.stopTimer(); _countSetupExperimentAndPlotStartSolutionRuns++; _measureSetupExperimentAndPlotStartSolutionCPUTime += watch.getCPUTime(); _measureSetupExperimentAndPlotStartSolutionCalendarTime += watch.getCalendarTime(); break;
    case JacobiBatchJobRepositoryState::UseAdapterJacobiStep: watch.startTimer(); _gridWithJacobiStep.iterate(reduceState); watch.stopTimer(); _countJacobiStepRuns++; _measureJacobiStepCPUTime += watch.getCPUTime(); _measureJacobiStepCalendarTime += watch.getCalendarTime(); break;
    case JacobiBatchJobRepositoryState::UseAdapterJacobiStepAndPlotSolution: watch.startTimer(); _gridWithJacobiStepAndPlotSolution.iterate(reduceState); watch.stopTimer(); _countJacobiStepAndPlotSolutionRuns++; _measureJacobiStepAndPlotSolutionCPUTime += watch.getCPUTime(); _measureJacobiStepAndPlotSolutionCalendarTime += watch.getCalendarTime(); break;
    case JacobiBatchJobRepositoryState::UseAdapterPlotSolution: watch.startTimer(); _gridWithPlotSolution.iterate(reduceState); watch.stopTimer(); _countPlotSolutionRuns++; _measurePlotSolutionCPUTime += watch.getCPUTime(); _measurePlotSolutionCalendarTime += watch.getCalendarTime(); break;

    case JacobiBatchJobRepositoryState::Terminate:
      assertionMsg( false, "this branch/state should never be reached" ); 
      break;
    case JacobiBatchJobRepositoryState::ReadCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
    case JacobiBatchJobRepositoryState::WriteCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
  }
}


 void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupExperiment() { _repositoryState.setAction(JacobiBatchJobRepositoryState::UseAdapterSetupExperiment); }
 void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupExperimentAndPlotGrid() { _repositoryState.setAction(JacobiBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotGrid); }
 void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupExperimentAndPlotStartSolution() { _repositoryState.setAction(JacobiBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotStartSolution); }
 void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::switchToJacobiStep() { _repositoryState.setAction(JacobiBatchJobRepositoryState::UseAdapterJacobiStep); }
 void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::switchToJacobiStepAndPlotSolution() { _repositoryState.setAction(JacobiBatchJobRepositoryState::UseAdapterJacobiStepAndPlotSolution); }
 void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::switchToPlotSolution() { _repositoryState.setAction(JacobiBatchJobRepositoryState::UseAdapterPlotSolution); }



 bool peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupExperiment() const { return _repositoryState.getAction() == JacobiBatchJobRepositoryState::UseAdapterSetupExperiment; }
 bool peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupExperimentAndPlotGrid() const { return _repositoryState.getAction() == JacobiBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotGrid; }
 bool peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupExperimentAndPlotStartSolution() const { return _repositoryState.getAction() == JacobiBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotStartSolution; }
 bool peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterJacobiStep() const { return _repositoryState.getAction() == JacobiBatchJobRepositoryState::UseAdapterJacobiStep; }
 bool peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterJacobiStepAndPlotSolution() const { return _repositoryState.getAction() == JacobiBatchJobRepositoryState::UseAdapterJacobiStepAndPlotSolution; }
 bool peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPlotSolution() const { return _repositoryState.getAction() == JacobiBatchJobRepositoryState::UseAdapterPlotSolution; }



#ifdef CCA
void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
  writeToPort.addAdapterRuntime( "SetupExperiment", _countSetupExperimentRuns, _measureSetupExperimentCPUTime, _measureSetupExperimentCPUTime );
  writeToPort.addAdapterRuntime( "SetupExperimentAndPlotGrid", _countSetupExperimentAndPlotGridRuns, _measureSetupExperimentAndPlotGridCPUTime, _measureSetupExperimentAndPlotGridCPUTime );
  writeToPort.addAdapterRuntime( "SetupExperimentAndPlotStartSolution", _countSetupExperimentAndPlotStartSolutionRuns, _measureSetupExperimentAndPlotStartSolutionCPUTime, _measureSetupExperimentAndPlotStartSolutionCPUTime );
  writeToPort.addAdapterRuntime( "JacobiStep", _countJacobiStepRuns, _measureJacobiStepCPUTime, _measureJacobiStepCPUTime );
  writeToPort.addAdapterRuntime( "JacobiStepAndPlotSolution", _countJacobiStepAndPlotSolutionRuns, _measureJacobiStepAndPlotSolutionCPUTime, _measureJacobiStepAndPlotSolutionCPUTime );
  writeToPort.addAdapterRuntime( "PlotSolution", _countPlotSolutionRuns, _measurePlotSolutionCPUTime, _measurePlotSolutionCPUTime );

}
#endif


void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  
   logInfo( "logIterationStatistics()", "| SetupExperiment \t |  " << _countSetupExperimentRuns << " \t |  " << _measureSetupExperimentCPUTime << " \t |  " << (_countSetupExperimentRuns==0 ? 0 : _measureSetupExperimentCPUTime / static_cast<double>(_countSetupExperimentRuns))  << " \t |  " << _measureSetupExperimentCalendarTime << " \t |  " << (_countSetupExperimentRuns==0 ? 0 : _measureSetupExperimentCalendarTime / static_cast<double>(_countSetupExperimentRuns))  );  
   logInfo( "logIterationStatistics()", "| SetupExperimentAndPlotGrid \t |  " << _countSetupExperimentAndPlotGridRuns << " \t |  " << _measureSetupExperimentAndPlotGridCPUTime << " \t |  " << (_countSetupExperimentAndPlotGridRuns==0 ? 0 : _measureSetupExperimentAndPlotGridCPUTime / static_cast<double>(_countSetupExperimentAndPlotGridRuns))  << " \t |  " << _measureSetupExperimentAndPlotGridCalendarTime << " \t |  " << (_countSetupExperimentAndPlotGridRuns==0 ? 0 : _measureSetupExperimentAndPlotGridCalendarTime / static_cast<double>(_countSetupExperimentAndPlotGridRuns))  );  
   logInfo( "logIterationStatistics()", "| SetupExperimentAndPlotStartSolution \t |  " << _countSetupExperimentAndPlotStartSolutionRuns << " \t |  " << _measureSetupExperimentAndPlotStartSolutionCPUTime << " \t |  " << (_countSetupExperimentAndPlotStartSolutionRuns==0 ? 0 : _measureSetupExperimentAndPlotStartSolutionCPUTime / static_cast<double>(_countSetupExperimentAndPlotStartSolutionRuns))  << " \t |  " << _measureSetupExperimentAndPlotStartSolutionCalendarTime << " \t |  " << (_countSetupExperimentAndPlotStartSolutionRuns==0 ? 0 : _measureSetupExperimentAndPlotStartSolutionCalendarTime / static_cast<double>(_countSetupExperimentAndPlotStartSolutionRuns))  );  
   logInfo( "logIterationStatistics()", "| JacobiStep \t |  " << _countJacobiStepRuns << " \t |  " << _measureJacobiStepCPUTime << " \t |  " << (_countJacobiStepRuns==0 ? 0 : _measureJacobiStepCPUTime / static_cast<double>(_countJacobiStepRuns))  << " \t |  " << _measureJacobiStepCalendarTime << " \t |  " << (_countJacobiStepRuns==0 ? 0 : _measureJacobiStepCalendarTime / static_cast<double>(_countJacobiStepRuns))  );  
   logInfo( "logIterationStatistics()", "| JacobiStepAndPlotSolution \t |  " << _countJacobiStepAndPlotSolutionRuns << " \t |  " << _measureJacobiStepAndPlotSolutionCPUTime << " \t |  " << (_countJacobiStepAndPlotSolutionRuns==0 ? 0 : _measureJacobiStepAndPlotSolutionCPUTime / static_cast<double>(_countJacobiStepAndPlotSolutionRuns))  << " \t |  " << _measureJacobiStepAndPlotSolutionCalendarTime << " \t |  " << (_countJacobiStepAndPlotSolutionRuns==0 ? 0 : _measureJacobiStepAndPlotSolutionCalendarTime / static_cast<double>(_countJacobiStepAndPlotSolutionRuns))  );  
   logInfo( "logIterationStatistics()", "| PlotSolution \t |  " << _countPlotSolutionRuns << " \t |  " << _measurePlotSolutionCPUTime << " \t |  " << (_countPlotSolutionRuns==0 ? 0 : _measurePlotSolutionCPUTime / static_cast<double>(_countPlotSolutionRuns))  << " \t |  " << _measurePlotSolutionCalendarTime << " \t |  " << (_countPlotSolutionRuns==0 ? 0 : _measurePlotSolutionCalendarTime / static_cast<double>(_countPlotSolutionRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::jacobitutorial::RegularGridVertex, peano::applications::poisson::jacobitutorial::RegularGridCell>* peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::jacobitutorial::RegularGridVertex, peano::applications::poisson::jacobitutorial::RegularGridCell>();
} 


void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::jacobitutorial::RegularGridVertex, peano::applications::poisson::jacobitutorial::RegularGridCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _gridContainer.writeToCheckpoint( *checkpoint );
} 


void peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::jacobitutorial::RegularGridVertex, peano::applications::poisson::jacobitutorial::RegularGridCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _gridContainer.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::poisson::jacobitutorial::repositories::JacobiBatchJobRepositoryForRegularGridStandardImplementation::continueToIterate() {
  logTraceIn( "continueToIterate()" );

  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  // well, it could be the very first iteration, so this assertion would be wrong
  // assertion( _repositoryState.getAction() != JacobiBatchJobRepositoryState::Terminate );

  int masterNode = tarch::parallel::NodePool::getInstance().getMasterNodeNumber();
  assertion( masterNode != -1 );

  _repositoryState.receive( masterNode, peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag() );

  bool result = _repositoryState.getAction()!=JacobiBatchJobRepositoryState::Terminate; 
  logTraceOutWith1Argument( "continueToIterate()", result );
  return result;
}
#endif
