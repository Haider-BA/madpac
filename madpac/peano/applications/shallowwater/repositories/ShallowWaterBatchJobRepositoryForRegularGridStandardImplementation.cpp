#include "peano/applications/shallowwater/repositories/ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::_log( "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation" );


#ifdef Parallel
peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
):
#else
peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation(
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
  _gridWithGodunovMethod(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithGodunovMethodAndPlotSolution(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithPlotSolution(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),

  _countSetupExperimentRuns(0),
  _countSetupExperimentAndPlotGridRuns(0),
  _countSetupExperimentAndPlotStartSolutionRuns(0),
  _countGodunovMethodRuns(0),
  _countGodunovMethodAndPlotSolutionRuns(0),
  _countPlotSolutionRuns(0),

  _measureSetupExperimentCPUTime(0.0),
  _measureSetupExperimentAndPlotGridCPUTime(0.0),
  _measureSetupExperimentAndPlotStartSolutionCPUTime(0.0),
  _measureGodunovMethodCPUTime(0.0),
  _measureGodunovMethodAndPlotSolutionCPUTime(0.0),
  _measurePlotSolutionCPUTime(0.0),

  _measureSetupExperimentCalendarTime(0.0),
  _measureSetupExperimentAndPlotGridCalendarTime(0.0),
  _measureSetupExperimentAndPlotStartSolutionCalendarTime(0.0),
  _measureGodunovMethodCalendarTime(0.0),
  _measureGodunovMethodAndPlotSolutionCalendarTime(0.0),
  _measurePlotSolutionCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation(...)" );
  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif
  _repositoryState.setAction( ShallowWaterBatchJobRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(6 +3 );
  
  logTraceOut( "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation(...)" );
}



peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry
):
  _geometry(geometry),
  _gridContainer(),
  _gridWithSetupExperiment(_gridContainer,_geometry, _solverState),
  _gridWithSetupExperimentAndPlotGrid(_gridContainer,_geometry, _solverState),
  _gridWithSetupExperimentAndPlotStartSolution(_gridContainer,_geometry, _solverState),
  _gridWithGodunovMethod(_gridContainer,_geometry, _solverState),
  _gridWithGodunovMethodAndPlotSolution(_gridContainer,_geometry, _solverState),
  _gridWithPlotSolution(_gridContainer,_geometry, _solverState),

  _countSetupExperimentRuns(0),
  _countSetupExperimentAndPlotGridRuns(0),
  _countSetupExperimentAndPlotStartSolutionRuns(0),
  _countGodunovMethodRuns(0),
  _countGodunovMethodAndPlotSolutionRuns(0),
  _countPlotSolutionRuns(0),

  _measureSetupExperimentCPUTime(0.0),
  _measureSetupExperimentAndPlotGridCPUTime(0.0),
  _measureSetupExperimentAndPlotStartSolutionCPUTime(0.0),
  _measureGodunovMethodCPUTime(0.0),
  _measureGodunovMethodAndPlotSolutionCPUTime(0.0),
  _measurePlotSolutionCPUTime(0.0),

  _measureSetupExperimentCalendarTime(0.0),
  _measureSetupExperimentAndPlotGridCalendarTime(0.0),
  _measureSetupExperimentAndPlotStartSolutionCalendarTime(0.0),
  _measureGodunovMethodCalendarTime(0.0),
  _measureGodunovMethodAndPlotSolutionCalendarTime(0.0),
  _measurePlotSolutionCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
  
  _repositoryState.setAction( ShallowWaterBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(6 +3 );
  
  logTraceOut( "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
}
    
   
peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::~ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation() {
  assertion( _repositoryState.getAction() == ShallowWaterBatchJobRepositoryState::Terminate );
}


void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::restart(
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
) {
  logTraceInWith3Arguments( "restart(...)", numberOfGridPoints, domainSize, computationalDomainOffset );
  #ifdef Parallel
  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  #endif
  
  assertion( _repositoryState.getAction() == ShallowWaterBatchJobRepositoryState::Terminate );

  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif

  _gridWithSetupExperiment.restart(domainSize,computationalDomainOffset);
  _gridWithSetupExperimentAndPlotGrid.restart(domainSize,computationalDomainOffset);
  _gridWithSetupExperimentAndPlotStartSolution.restart(domainSize,computationalDomainOffset);
  _gridWithGodunovMethod.restart(domainSize,computationalDomainOffset);
  _gridWithGodunovMethodAndPlotSolution.restart(domainSize,computationalDomainOffset);
  _gridWithPlotSolution.restart(domainSize,computationalDomainOffset);

  logTraceOut( "restart(...)" );
}


void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::terminate() {
  logTraceIn( "terminate(...)" );
  
  _repositoryState.setAction( ShallowWaterBatchJobRepositoryState::Terminate );
  
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
  _gridWithGodunovMethod.terminate();
  _gridWithGodunovMethodAndPlotSolution.terminate();
  _gridWithPlotSolution.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::shallowwater::State& peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::getState() {
  return _solverState;
}

    
peano::applications::shallowwater::RegularGridState& peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::getRegularGridState() {
  return _solverState;
}
    
    
void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::iterate() {
  tarch::utils::Watch watch( "peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation", "iterate()", false);
  
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
    case ShallowWaterBatchJobRepositoryState::UseAdapterSetupExperiment: watch.startTimer(); _gridWithSetupExperiment.iterate(); watch.stopTimer(); _countSetupExperimentRuns++; _measureSetupExperimentCPUTime += watch.getCPUTime(); _measureSetupExperimentCalendarTime += watch.getCalendarTime(); break;
    case ShallowWaterBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotGrid: watch.startTimer(); _gridWithSetupExperimentAndPlotGrid.iterate(); watch.stopTimer(); _countSetupExperimentAndPlotGridRuns++; _measureSetupExperimentAndPlotGridCPUTime += watch.getCPUTime(); _measureSetupExperimentAndPlotGridCalendarTime += watch.getCalendarTime(); break;
    case ShallowWaterBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotStartSolution: watch.startTimer(); _gridWithSetupExperimentAndPlotStartSolution.iterate(); watch.stopTimer(); _countSetupExperimentAndPlotStartSolutionRuns++; _measureSetupExperimentAndPlotStartSolutionCPUTime += watch.getCPUTime(); _measureSetupExperimentAndPlotStartSolutionCalendarTime += watch.getCalendarTime(); break;
    case ShallowWaterBatchJobRepositoryState::UseAdapterGodunovMethod: watch.startTimer(); _gridWithGodunovMethod.iterate(); watch.stopTimer(); _countGodunovMethodRuns++; _measureGodunovMethodCPUTime += watch.getCPUTime(); _measureGodunovMethodCalendarTime += watch.getCalendarTime(); break;
    case ShallowWaterBatchJobRepositoryState::UseAdapterGodunovMethodAndPlotSolution: watch.startTimer(); _gridWithGodunovMethodAndPlotSolution.iterate(); watch.stopTimer(); _countGodunovMethodAndPlotSolutionRuns++; _measureGodunovMethodAndPlotSolutionCPUTime += watch.getCPUTime(); _measureGodunovMethodAndPlotSolutionCalendarTime += watch.getCalendarTime(); break;
    case ShallowWaterBatchJobRepositoryState::UseAdapterPlotSolution: watch.startTimer(); _gridWithPlotSolution.iterate(); watch.stopTimer(); _countPlotSolutionRuns++; _measurePlotSolutionCPUTime += watch.getCPUTime(); _measurePlotSolutionCalendarTime += watch.getCalendarTime(); break;

    case ShallowWaterBatchJobRepositoryState::Terminate:
      assertionMsg( false, "this branch/state should never be reached" ); 
      break;
    case ShallowWaterBatchJobRepositoryState::ReadCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
    case ShallowWaterBatchJobRepositoryState::WriteCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
  }
}


 void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupExperiment() { _repositoryState.setAction(ShallowWaterBatchJobRepositoryState::UseAdapterSetupExperiment); }
 void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupExperimentAndPlotGrid() { _repositoryState.setAction(ShallowWaterBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotGrid); }
 void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupExperimentAndPlotStartSolution() { _repositoryState.setAction(ShallowWaterBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotStartSolution); }
 void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::switchToGodunovMethod() { _repositoryState.setAction(ShallowWaterBatchJobRepositoryState::UseAdapterGodunovMethod); }
 void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::switchToGodunovMethodAndPlotSolution() { _repositoryState.setAction(ShallowWaterBatchJobRepositoryState::UseAdapterGodunovMethodAndPlotSolution); }
 void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::switchToPlotSolution() { _repositoryState.setAction(ShallowWaterBatchJobRepositoryState::UseAdapterPlotSolution); }



 bool peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupExperiment() const { return _repositoryState.getAction() == ShallowWaterBatchJobRepositoryState::UseAdapterSetupExperiment; }
 bool peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupExperimentAndPlotGrid() const { return _repositoryState.getAction() == ShallowWaterBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotGrid; }
 bool peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupExperimentAndPlotStartSolution() const { return _repositoryState.getAction() == ShallowWaterBatchJobRepositoryState::UseAdapterSetupExperimentAndPlotStartSolution; }
 bool peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterGodunovMethod() const { return _repositoryState.getAction() == ShallowWaterBatchJobRepositoryState::UseAdapterGodunovMethod; }
 bool peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterGodunovMethodAndPlotSolution() const { return _repositoryState.getAction() == ShallowWaterBatchJobRepositoryState::UseAdapterGodunovMethodAndPlotSolution; }
 bool peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterPlotSolution() const { return _repositoryState.getAction() == ShallowWaterBatchJobRepositoryState::UseAdapterPlotSolution; }



#ifdef CCA
void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
  writeToPort.addAdapterRuntime( "SetupExperiment", _countSetupExperimentRuns, _measureSetupExperimentCPUTime, _measureSetupExperimentCPUTime );
  writeToPort.addAdapterRuntime( "SetupExperimentAndPlotGrid", _countSetupExperimentAndPlotGridRuns, _measureSetupExperimentAndPlotGridCPUTime, _measureSetupExperimentAndPlotGridCPUTime );
  writeToPort.addAdapterRuntime( "SetupExperimentAndPlotStartSolution", _countSetupExperimentAndPlotStartSolutionRuns, _measureSetupExperimentAndPlotStartSolutionCPUTime, _measureSetupExperimentAndPlotStartSolutionCPUTime );
  writeToPort.addAdapterRuntime( "GodunovMethod", _countGodunovMethodRuns, _measureGodunovMethodCPUTime, _measureGodunovMethodCPUTime );
  writeToPort.addAdapterRuntime( "GodunovMethodAndPlotSolution", _countGodunovMethodAndPlotSolutionRuns, _measureGodunovMethodAndPlotSolutionCPUTime, _measureGodunovMethodAndPlotSolutionCPUTime );
  writeToPort.addAdapterRuntime( "PlotSolution", _countPlotSolutionRuns, _measurePlotSolutionCPUTime, _measurePlotSolutionCPUTime );

}
#endif


void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  
   logInfo( "logIterationStatistics()", "| SetupExperiment \t |  " << _countSetupExperimentRuns << " \t |  " << _measureSetupExperimentCPUTime << " \t |  " << (_countSetupExperimentRuns==0 ? 0 : _measureSetupExperimentCPUTime / static_cast<double>(_countSetupExperimentRuns))  << " \t |  " << _measureSetupExperimentCalendarTime << " \t |  " << (_countSetupExperimentRuns==0 ? 0 : _measureSetupExperimentCalendarTime / static_cast<double>(_countSetupExperimentRuns))  );  
   logInfo( "logIterationStatistics()", "| SetupExperimentAndPlotGrid \t |  " << _countSetupExperimentAndPlotGridRuns << " \t |  " << _measureSetupExperimentAndPlotGridCPUTime << " \t |  " << (_countSetupExperimentAndPlotGridRuns==0 ? 0 : _measureSetupExperimentAndPlotGridCPUTime / static_cast<double>(_countSetupExperimentAndPlotGridRuns))  << " \t |  " << _measureSetupExperimentAndPlotGridCalendarTime << " \t |  " << (_countSetupExperimentAndPlotGridRuns==0 ? 0 : _measureSetupExperimentAndPlotGridCalendarTime / static_cast<double>(_countSetupExperimentAndPlotGridRuns))  );  
   logInfo( "logIterationStatistics()", "| SetupExperimentAndPlotStartSolution \t |  " << _countSetupExperimentAndPlotStartSolutionRuns << " \t |  " << _measureSetupExperimentAndPlotStartSolutionCPUTime << " \t |  " << (_countSetupExperimentAndPlotStartSolutionRuns==0 ? 0 : _measureSetupExperimentAndPlotStartSolutionCPUTime / static_cast<double>(_countSetupExperimentAndPlotStartSolutionRuns))  << " \t |  " << _measureSetupExperimentAndPlotStartSolutionCalendarTime << " \t |  " << (_countSetupExperimentAndPlotStartSolutionRuns==0 ? 0 : _measureSetupExperimentAndPlotStartSolutionCalendarTime / static_cast<double>(_countSetupExperimentAndPlotStartSolutionRuns))  );  
   logInfo( "logIterationStatistics()", "| GodunovMethod \t |  " << _countGodunovMethodRuns << " \t |  " << _measureGodunovMethodCPUTime << " \t |  " << (_countGodunovMethodRuns==0 ? 0 : _measureGodunovMethodCPUTime / static_cast<double>(_countGodunovMethodRuns))  << " \t |  " << _measureGodunovMethodCalendarTime << " \t |  " << (_countGodunovMethodRuns==0 ? 0 : _measureGodunovMethodCalendarTime / static_cast<double>(_countGodunovMethodRuns))  );  
   logInfo( "logIterationStatistics()", "| GodunovMethodAndPlotSolution \t |  " << _countGodunovMethodAndPlotSolutionRuns << " \t |  " << _measureGodunovMethodAndPlotSolutionCPUTime << " \t |  " << (_countGodunovMethodAndPlotSolutionRuns==0 ? 0 : _measureGodunovMethodAndPlotSolutionCPUTime / static_cast<double>(_countGodunovMethodAndPlotSolutionRuns))  << " \t |  " << _measureGodunovMethodAndPlotSolutionCalendarTime << " \t |  " << (_countGodunovMethodAndPlotSolutionRuns==0 ? 0 : _measureGodunovMethodAndPlotSolutionCalendarTime / static_cast<double>(_countGodunovMethodAndPlotSolutionRuns))  );  
   logInfo( "logIterationStatistics()", "| PlotSolution \t |  " << _countPlotSolutionRuns << " \t |  " << _measurePlotSolutionCPUTime << " \t |  " << (_countPlotSolutionRuns==0 ? 0 : _measurePlotSolutionCPUTime / static_cast<double>(_countPlotSolutionRuns))  << " \t |  " << _measurePlotSolutionCalendarTime << " \t |  " << (_countPlotSolutionRuns==0 ? 0 : _measurePlotSolutionCalendarTime / static_cast<double>(_countPlotSolutionRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::shallowwater::RegularGridVertex, peano::applications::shallowwater::RegularGridCell>* peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::shallowwater::RegularGridVertex, peano::applications::shallowwater::RegularGridCell>();
} 


void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::shallowwater::RegularGridVertex, peano::applications::shallowwater::RegularGridCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _gridContainer.writeToCheckpoint( *checkpoint );
} 


void peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::shallowwater::RegularGridVertex, peano::applications::shallowwater::RegularGridCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _gridContainer.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::shallowwater::repositories::ShallowWaterBatchJobRepositoryForRegularGridStandardImplementation::continueToIterate() {
  logTraceIn( "continueToIterate()" );

  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  // well, it could be the very first iteration, so this assertion would be wrong
  // assertion( _repositoryState.getAction() != ShallowWaterBatchJobRepositoryState::Terminate );

  int masterNode = tarch::parallel::NodePool::getInstance().getMasterNodeNumber();
  assertion( masterNode != -1 );

  _repositoryState.receive( masterNode, peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag() );

  bool result = _repositoryState.getAction()!=ShallowWaterBatchJobRepositoryState::Terminate; 
  logTraceOutWith1Argument( "continueToIterate()", result );
  return result;
}
#endif
