#include "peano/applications/pic/demo2/repositories/PICBatchJobRepositoryForRegularGridStandardImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::_log( "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation" );


#ifdef Parallel
peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::PICBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
):
#else
peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::PICBatchJobRepositoryForRegularGridStandardImplementation(
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

  _countSetupExperimentRuns(0),
  _countSetupExperimentAndPlotRuns(0),

  _measureSetupExperimentCPUTime(0.0),
  _measureSetupExperimentAndPlotCPUTime(0.0),

  _measureSetupExperimentCalendarTime(0.0),
  _measureSetupExperimentAndPlotCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation(...)" );
  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif
  _repositoryState.setAction( PICBatchJobRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(2 +3 );
  
  logTraceOut( "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation(...)" );
}



peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::PICBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry
):
  _geometry(geometry),
  _gridContainer(),
  _gridWithSetupExperiment(_gridContainer,_geometry, _solverState),
  _gridWithSetupExperimentAndPlot(_gridContainer,_geometry, _solverState),

  _countSetupExperimentRuns(0),
  _countSetupExperimentAndPlotRuns(0),

  _measureSetupExperimentCPUTime(0.0),
  _measureSetupExperimentAndPlotCPUTime(0.0),

  _measureSetupExperimentCalendarTime(0.0),
  _measureSetupExperimentAndPlotCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
  
  _repositoryState.setAction( PICBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(2 +3 );
  
  logTraceOut( "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
}
    
   
peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::~PICBatchJobRepositoryForRegularGridStandardImplementation() {
  assertion( _repositoryState.getAction() == PICBatchJobRepositoryState::Terminate );
}


void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::restart(
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
) {
  logTraceInWith3Arguments( "restart(...)", numberOfGridPoints, domainSize, computationalDomainOffset );
  #ifdef Parallel
  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  #endif
  
  assertion( _repositoryState.getAction() == PICBatchJobRepositoryState::Terminate );

  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif

  _gridWithSetupExperiment.restart(domainSize,computationalDomainOffset);
  _gridWithSetupExperimentAndPlot.restart(domainSize,computationalDomainOffset);

  logTraceOut( "restart(...)" );
}


void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::terminate() {
  logTraceIn( "terminate(...)" );
  
  _repositoryState.setAction( PICBatchJobRepositoryState::Terminate );
  
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

  logTraceOut( "terminate()" );
}


peano::applications::pic::demo2::State& peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::getState() {
  return _solverState;
}

    
peano::applications::pic::demo2::RegularGridState& peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::getRegularGridState() {
  return _solverState;
}
    
    
void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::iterate() {
  tarch::utils::Watch watch( "peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation", "iterate()", false);
  
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
    case PICBatchJobRepositoryState::UseAdapterSetupExperiment: watch.startTimer(); _gridWithSetupExperiment.iterate(); watch.stopTimer(); _countSetupExperimentRuns++; _measureSetupExperimentCPUTime += watch.getCPUTime(); _measureSetupExperimentCalendarTime += watch.getCalendarTime(); break;
    case PICBatchJobRepositoryState::UseAdapterSetupExperimentAndPlot: watch.startTimer(); _gridWithSetupExperimentAndPlot.iterate(); watch.stopTimer(); _countSetupExperimentAndPlotRuns++; _measureSetupExperimentAndPlotCPUTime += watch.getCPUTime(); _measureSetupExperimentAndPlotCalendarTime += watch.getCalendarTime(); break;

    case PICBatchJobRepositoryState::Terminate:
      assertionMsg( false, "this branch/state should never be reached" ); 
      break;
    case PICBatchJobRepositoryState::ReadCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
    case PICBatchJobRepositoryState::WriteCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
  }
}


 void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupExperiment() { _repositoryState.setAction(PICBatchJobRepositoryState::UseAdapterSetupExperiment); }
 void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::switchToSetupExperimentAndPlot() { _repositoryState.setAction(PICBatchJobRepositoryState::UseAdapterSetupExperimentAndPlot); }



 bool peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupExperiment() const { return _repositoryState.getAction() == PICBatchJobRepositoryState::UseAdapterSetupExperiment; }
 bool peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterSetupExperimentAndPlot() const { return _repositoryState.getAction() == PICBatchJobRepositoryState::UseAdapterSetupExperimentAndPlot; }



#ifdef CCA
void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
  writeToPort.addAdapterRuntime( "SetupExperiment", _countSetupExperimentRuns, _measureSetupExperimentCPUTime, _measureSetupExperimentCPUTime );
  writeToPort.addAdapterRuntime( "SetupExperimentAndPlot", _countSetupExperimentAndPlotRuns, _measureSetupExperimentAndPlotCPUTime, _measureSetupExperimentAndPlotCPUTime );

}
#endif


void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  
   logInfo( "logIterationStatistics()", "| SetupExperiment \t |  " << _countSetupExperimentRuns << " \t |  " << _measureSetupExperimentCPUTime << " \t |  " << (_countSetupExperimentRuns==0 ? 0 : _measureSetupExperimentCPUTime / static_cast<double>(_countSetupExperimentRuns))  << " \t |  " << _measureSetupExperimentCalendarTime << " \t |  " << (_countSetupExperimentRuns==0 ? 0 : _measureSetupExperimentCalendarTime / static_cast<double>(_countSetupExperimentRuns))  );  
   logInfo( "logIterationStatistics()", "| SetupExperimentAndPlot \t |  " << _countSetupExperimentAndPlotRuns << " \t |  " << _measureSetupExperimentAndPlotCPUTime << " \t |  " << (_countSetupExperimentAndPlotRuns==0 ? 0 : _measureSetupExperimentAndPlotCPUTime / static_cast<double>(_countSetupExperimentAndPlotRuns))  << " \t |  " << _measureSetupExperimentAndPlotCalendarTime << " \t |  " << (_countSetupExperimentAndPlotRuns==0 ? 0 : _measureSetupExperimentAndPlotCalendarTime / static_cast<double>(_countSetupExperimentAndPlotRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::RegularGridVertex, peano::applications::pic::demo2::RegularGridCell>* peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::RegularGridVertex, peano::applications::pic::demo2::RegularGridCell>();
} 


void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::RegularGridVertex, peano::applications::pic::demo2::RegularGridCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _gridContainer.writeToCheckpoint( *checkpoint );
} 


void peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::pic::demo2::RegularGridVertex, peano::applications::pic::demo2::RegularGridCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _gridContainer.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::pic::demo2::repositories::PICBatchJobRepositoryForRegularGridStandardImplementation::continueToIterate() {
  logTraceIn( "continueToIterate()" );

  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  // well, it could be the very first iteration, so this assertion would be wrong
  // assertion( _repositoryState.getAction() != PICBatchJobRepositoryState::Terminate );

  int masterNode = tarch::parallel::NodePool::getInstance().getMasterNodeNumber();
  assertion( masterNode != -1 );

  _repositoryState.receive( masterNode, peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag() );

  bool result = _repositoryState.getAction()!=PICBatchJobRepositoryState::Terminate; 
  logTraceOutWith1Argument( "continueToIterate()", result );
  return result;
}
#endif
