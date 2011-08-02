#include "peano/applications/puregrid/repositories/PuregridBatchJobRepositoryForRegularGridStandardImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::_log( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation" );


#ifdef Parallel
peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::PuregridBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
):
#else
peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::PuregridBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
):
#endif
  _geometry(geometry),
  _gridContainer(),
  _gridWithSetupGrid(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),

  _countSetupGridRuns(0),

  _measureSetupGridCPUTime(0.0),

  _measureSetupGridCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation(...)" );
  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif
  _repositoryState.setAction( PuregridBatchJobRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(1 +3 );
  
  logTraceOut( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation(...)" );
}



peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::PuregridBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry
):
  _geometry(geometry),
  _gridContainer(),
  _gridWithSetupGrid(_gridContainer,_geometry, _solverState),

  _countSetupGridRuns(0),

  _measureSetupGridCPUTime(0.0),

  _measureSetupGridCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
  
  _repositoryState.setAction( PuregridBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(1 +3 );
  
  logTraceOut( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
}
    
   
peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::~PuregridBatchJobRepositoryForRegularGridStandardImplementation() {
  assertion( _repositoryState.getAction() == PuregridBatchJobRepositoryState::Terminate );
}


void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::restart(
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
) {
  logTraceInWith3Arguments( "restart(...)", numberOfGridPoints, domainSize, computationalDomainOffset );
  #ifdef Parallel
  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  #endif
  
  assertion( _repositoryState.getAction() == PuregridBatchJobRepositoryState::Terminate );

  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif

  _gridWithSetupGrid.restart(domainSize,computationalDomainOffset);

  logTraceOut( "restart(...)" );
}


void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::terminate() {
  logTraceIn( "terminate(...)" );
  
  _repositoryState.setAction( PuregridBatchJobRepositoryState::Terminate );
  
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
  _gridWithSetupGrid.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::puregrid::State& peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::getState() {
  return _solverState;
}

    
peano::applications::puregrid::RegularGridState& peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::getRegularGridState() {
  return _solverState;
}
    
    
void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::iterate() {
  tarch::utils::Watch watch( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation", "iterate()", false);
  iterate( true ); 
}
  

void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::iterate(bool reduceState) {
  tarch::utils::Watch watch( "peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation", "iterate(int, bool)", false);
  
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
    case PuregridBatchJobRepositoryState::UseAdapterSetupGrid: watch.startTimer(); _gridWithSetupGrid.iterate(reduceState); watch.stopTimer(); _countSetupGridRuns++; _measureSetupGridCPUTime += watch.getCPUTime(); _measureSetupGridCalendarTime += watch.getCalendarTime(); break;

    case PuregridBatchJobRepositoryState::Terminate:
      assertionMsg( false, "this branch/state should never be reached" ); 
      break;
    case PuregridBatchJobRepositoryState::ReadCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
    case PuregridBatchJobRepositoryState::WriteCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
  }
}


 void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupGrid() { _repositoryState.setAction(PuregridBatchJobRepositoryState::UseAdapterSetupGrid); }



 bool peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupGrid() const { return _repositoryState.getAction() == PuregridBatchJobRepositoryState::UseAdapterSetupGrid; }



#ifdef CCA
void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
  writeToPort.addAdapterRuntime( "SetupGrid", _countSetupGridRuns, _measureSetupGridCPUTime, _measureSetupGridCPUTime );

}
#endif


void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  
   logInfo( "logIterationStatistics()", "| SetupGrid \t |  " << _countSetupGridRuns << " \t |  " << _measureSetupGridCPUTime << " \t |  " << (_countSetupGridRuns==0 ? 0 : _measureSetupGridCPUTime / static_cast<double>(_countSetupGridRuns))  << " \t |  " << _measureSetupGridCalendarTime << " \t |  " << (_countSetupGridRuns==0 ? 0 : _measureSetupGridCalendarTime / static_cast<double>(_countSetupGridRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::RegularGridVertex, peano::applications::puregrid::RegularGridCell>* peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::RegularGridVertex, peano::applications::puregrid::RegularGridCell>();
} 


void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::RegularGridVertex, peano::applications::puregrid::RegularGridCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _gridContainer.writeToCheckpoint( *checkpoint );
} 


void peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::RegularGridVertex, peano::applications::puregrid::RegularGridCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _gridContainer.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::puregrid::repositories::PuregridBatchJobRepositoryForRegularGridStandardImplementation::continueToIterate() {
  logTraceIn( "continueToIterate()" );

  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  // well, it could be the very first iteration, so this assertion would be wrong
  // assertion( _repositoryState.getAction() != PuregridBatchJobRepositoryState::Terminate );

  int masterNode = tarch::parallel::NodePool::getInstance().getMasterNodeNumber();
  assertion( masterNode != -1 );

  _repositoryState.receive( masterNode, peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag() );

  bool result = _repositoryState.getAction()!=PuregridBatchJobRepositoryState::Terminate; 
  logTraceOutWith1Argument( "continueToIterate()", result );
  return result;
}
#endif
