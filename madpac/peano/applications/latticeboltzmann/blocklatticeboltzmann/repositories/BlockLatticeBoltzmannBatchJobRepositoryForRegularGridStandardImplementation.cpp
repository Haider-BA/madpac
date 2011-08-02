#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation" );


#ifdef Parallel
peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
):
#else
peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
):
#endif
  _geometry(geometry),
  _gridContainer(),
  _gridWithRegularBlockSolverAdapter(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithInitialiseSpacetreeGridAdapter(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithBlockCCAOutputAdapter(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithDynamicRefinementForSpacetreeGridAdapter(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithBlockVTKOutputAdapter(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),
  _gridWithRegularBlockSolverAndVTKOutputAdapter(domainSize,computationalDomainOffset,_gridContainer,_geometry, _solverState),

  _countRegularBlockSolverAdapterRuns(0),
  _countInitialiseSpacetreeGridAdapterRuns(0),
  _countBlockCCAOutputAdapterRuns(0),
  _countDynamicRefinementForSpacetreeGridAdapterRuns(0),
  _countBlockVTKOutputAdapterRuns(0),
  _countRegularBlockSolverAndVTKOutputAdapterRuns(0),

  _measureRegularBlockSolverAdapterCPUTime(0.0),
  _measureInitialiseSpacetreeGridAdapterCPUTime(0.0),
  _measureBlockCCAOutputAdapterCPUTime(0.0),
  _measureDynamicRefinementForSpacetreeGridAdapterCPUTime(0.0),
  _measureBlockVTKOutputAdapterCPUTime(0.0),
  _measureRegularBlockSolverAndVTKOutputAdapterCPUTime(0.0),

  _measureRegularBlockSolverAdapterCalendarTime(0.0),
  _measureInitialiseSpacetreeGridAdapterCalendarTime(0.0),
  _measureBlockCCAOutputAdapterCalendarTime(0.0),
  _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime(0.0),
  _measureBlockVTKOutputAdapterCalendarTime(0.0),
  _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation(...)" );
  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif
  _repositoryState.setAction( BlockLatticeBoltzmannBatchJobRepositoryState::Terminate );
  
  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(6 +3 );
  
  logTraceOut( "peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation(...)" );
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation(
  peano::geometry::Geometry&                   geometry
):
  _geometry(geometry),
  _gridContainer(),
  _gridWithRegularBlockSolverAdapter(_gridContainer,_geometry, _solverState),
  _gridWithInitialiseSpacetreeGridAdapter(_gridContainer,_geometry, _solverState),
  _gridWithBlockCCAOutputAdapter(_gridContainer,_geometry, _solverState),
  _gridWithDynamicRefinementForSpacetreeGridAdapter(_gridContainer,_geometry, _solverState),
  _gridWithBlockVTKOutputAdapter(_gridContainer,_geometry, _solverState),
  _gridWithRegularBlockSolverAndVTKOutputAdapter(_gridContainer,_geometry, _solverState),

  _countRegularBlockSolverAdapterRuns(0),
  _countInitialiseSpacetreeGridAdapterRuns(0),
  _countBlockCCAOutputAdapterRuns(0),
  _countDynamicRefinementForSpacetreeGridAdapterRuns(0),
  _countBlockVTKOutputAdapterRuns(0),
  _countRegularBlockSolverAndVTKOutputAdapterRuns(0),

  _measureRegularBlockSolverAdapterCPUTime(0.0),
  _measureInitialiseSpacetreeGridAdapterCPUTime(0.0),
  _measureBlockCCAOutputAdapterCPUTime(0.0),
  _measureDynamicRefinementForSpacetreeGridAdapterCPUTime(0.0),
  _measureBlockVTKOutputAdapterCPUTime(0.0),
  _measureRegularBlockSolverAndVTKOutputAdapterCPUTime(0.0),

  _measureRegularBlockSolverAdapterCalendarTime(0.0),
  _measureInitialiseSpacetreeGridAdapterCalendarTime(0.0),
  _measureBlockCCAOutputAdapterCalendarTime(0.0),
  _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime(0.0),
  _measureBlockVTKOutputAdapterCalendarTime(0.0),
  _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime(0.0),

  _solverState(),
  _repositoryState() {
  logTraceIn( "peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
  
  _repositoryState.setAction( BlockLatticeBoltzmannBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(6 +3 );
  
  logTraceOut( "peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation(Geometry&)" );
}
    
   
peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::~BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation() {
  assertion( _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::Terminate );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::restart(
  const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&  neighbourRanks
) {
  logTraceInWith3Arguments( "restart(...)", numberOfGridPoints, domainSize, computationalDomainOffset );
  #ifdef Parallel
  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  #endif
  
  assertion( _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::Terminate );

  #ifdef Parallel
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset,neighbourRanks);
  #else
  _gridContainer.restart( numberOfGridPoints,domainSize,computationalDomainOffset);
  #endif

  _gridWithRegularBlockSolverAdapter.restart(domainSize,computationalDomainOffset);
  _gridWithInitialiseSpacetreeGridAdapter.restart(domainSize,computationalDomainOffset);
  _gridWithBlockCCAOutputAdapter.restart(domainSize,computationalDomainOffset);
  _gridWithDynamicRefinementForSpacetreeGridAdapter.restart(domainSize,computationalDomainOffset);
  _gridWithBlockVTKOutputAdapter.restart(domainSize,computationalDomainOffset);
  _gridWithRegularBlockSolverAndVTKOutputAdapter.restart(domainSize,computationalDomainOffset);

  logTraceOut( "restart(...)" );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::terminate() {
  logTraceIn( "terminate(...)" );
  
  _repositoryState.setAction( BlockLatticeBoltzmannBatchJobRepositoryState::Terminate );
  
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
  _gridWithRegularBlockSolverAdapter.terminate();
  _gridWithInitialiseSpacetreeGridAdapter.terminate();
  _gridWithBlockCCAOutputAdapter.terminate();
  _gridWithDynamicRefinementForSpacetreeGridAdapter.terminate();
  _gridWithBlockVTKOutputAdapter.terminate();
  _gridWithRegularBlockSolverAndVTKOutputAdapter.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockState& peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::getState() {
  return _solverState;
}

    
peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState& peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::getRegularGridState() {
  return _solverState;
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::iterate(bool reduceState) {
  tarch::utils::Watch watch( "peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation", "iterate(int, bool)", false);
  
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
    case BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterRegularBlockSolverAdapter: watch.startTimer(); _gridWithRegularBlockSolverAdapter.iterate(reduceState); watch.stopTimer(); _countRegularBlockSolverAdapterRuns++; _measureRegularBlockSolverAdapterCPUTime += watch.getCPUTime(); _measureRegularBlockSolverAdapterCalendarTime += watch.getCalendarTime(); break;
    case BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterInitialiseSpacetreeGridAdapter: watch.startTimer(); _gridWithInitialiseSpacetreeGridAdapter.iterate(reduceState); watch.stopTimer(); _countInitialiseSpacetreeGridAdapterRuns++; _measureInitialiseSpacetreeGridAdapterCPUTime += watch.getCPUTime(); _measureInitialiseSpacetreeGridAdapterCalendarTime += watch.getCalendarTime(); break;
    case BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterBlockCCAOutputAdapter: watch.startTimer(); _gridWithBlockCCAOutputAdapter.iterate(reduceState); watch.stopTimer(); _countBlockCCAOutputAdapterRuns++; _measureBlockCCAOutputAdapterCPUTime += watch.getCPUTime(); _measureBlockCCAOutputAdapterCalendarTime += watch.getCalendarTime(); break;
    case BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterDynamicRefinementForSpacetreeGridAdapter: watch.startTimer(); _gridWithDynamicRefinementForSpacetreeGridAdapter.iterate(reduceState); watch.stopTimer(); _countDynamicRefinementForSpacetreeGridAdapterRuns++; _measureDynamicRefinementForSpacetreeGridAdapterCPUTime += watch.getCPUTime(); _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime += watch.getCalendarTime(); break;
    case BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterBlockVTKOutputAdapter: watch.startTimer(); _gridWithBlockVTKOutputAdapter.iterate(reduceState); watch.stopTimer(); _countBlockVTKOutputAdapterRuns++; _measureBlockVTKOutputAdapterCPUTime += watch.getCPUTime(); _measureBlockVTKOutputAdapterCalendarTime += watch.getCalendarTime(); break;
    case BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterRegularBlockSolverAndVTKOutputAdapter: watch.startTimer(); _gridWithRegularBlockSolverAndVTKOutputAdapter.iterate(reduceState); watch.stopTimer(); _countRegularBlockSolverAndVTKOutputAdapterRuns++; _measureRegularBlockSolverAndVTKOutputAdapterCPUTime += watch.getCPUTime(); _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime += watch.getCalendarTime(); break;

    case BlockLatticeBoltzmannBatchJobRepositoryState::Terminate:
      assertionMsg( false, "this branch/state should never be reached" ); 
      break;
    case BlockLatticeBoltzmannBatchJobRepositoryState::ReadCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
    case BlockLatticeBoltzmannBatchJobRepositoryState::WriteCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
  }
}


 void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::switchToRegularBlockSolverAdapter() { _repositoryState.setAction(BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterRegularBlockSolverAdapter); }
 void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::switchToInitialiseSpacetreeGridAdapter() { _repositoryState.setAction(BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterInitialiseSpacetreeGridAdapter); }
 void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::switchToBlockCCAOutputAdapter() { _repositoryState.setAction(BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterBlockCCAOutputAdapter); }
 void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::switchToDynamicRefinementForSpacetreeGridAdapter() { _repositoryState.setAction(BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterDynamicRefinementForSpacetreeGridAdapter); }
 void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::switchToBlockVTKOutputAdapter() { _repositoryState.setAction(BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterBlockVTKOutputAdapter); }
 void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::switchToRegularBlockSolverAndVTKOutputAdapter() { _repositoryState.setAction(BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterRegularBlockSolverAndVTKOutputAdapter); }



 bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterRegularBlockSolverAdapter() const { return _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterRegularBlockSolverAdapter; }
 bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterInitialiseSpacetreeGridAdapter() const { return _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterInitialiseSpacetreeGridAdapter; }
 bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterBlockCCAOutputAdapter() const { return _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterBlockCCAOutputAdapter; }
 bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterDynamicRefinementForSpacetreeGridAdapter() const { return _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterDynamicRefinementForSpacetreeGridAdapter; }
 bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterBlockVTKOutputAdapter() const { return _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterBlockVTKOutputAdapter; }
 bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::isActiveAdapterRegularBlockSolverAndVTKOutputAdapter() const { return _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterRegularBlockSolverAndVTKOutputAdapter; }



#ifdef CCA
void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
  writeToPort.addAdapterRuntime( "RegularBlockSolverAdapter", _countRegularBlockSolverAdapterRuns, _measureRegularBlockSolverAdapterCPUTime, _measureRegularBlockSolverAdapterCPUTime );
  writeToPort.addAdapterRuntime( "InitialiseSpacetreeGridAdapter", _countInitialiseSpacetreeGridAdapterRuns, _measureInitialiseSpacetreeGridAdapterCPUTime, _measureInitialiseSpacetreeGridAdapterCPUTime );
  writeToPort.addAdapterRuntime( "BlockCCAOutputAdapter", _countBlockCCAOutputAdapterRuns, _measureBlockCCAOutputAdapterCPUTime, _measureBlockCCAOutputAdapterCPUTime );
  writeToPort.addAdapterRuntime( "DynamicRefinementForSpacetreeGridAdapter", _countDynamicRefinementForSpacetreeGridAdapterRuns, _measureDynamicRefinementForSpacetreeGridAdapterCPUTime, _measureDynamicRefinementForSpacetreeGridAdapterCPUTime );
  writeToPort.addAdapterRuntime( "BlockVTKOutputAdapter", _countBlockVTKOutputAdapterRuns, _measureBlockVTKOutputAdapterCPUTime, _measureBlockVTKOutputAdapterCPUTime );
  writeToPort.addAdapterRuntime( "RegularBlockSolverAndVTKOutputAdapter", _countRegularBlockSolverAndVTKOutputAdapterRuns, _measureRegularBlockSolverAndVTKOutputAdapterCPUTime, _measureRegularBlockSolverAndVTKOutputAdapterCPUTime );

}
#endif


void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  
   logInfo( "logIterationStatistics()", "| RegularBlockSolverAdapter \t |  " << _countRegularBlockSolverAdapterRuns << " \t |  " << _measureRegularBlockSolverAdapterCPUTime << " \t |  " << (_countRegularBlockSolverAdapterRuns==0 ? 0 : _measureRegularBlockSolverAdapterCPUTime / static_cast<double>(_countRegularBlockSolverAdapterRuns))  << " \t |  " << _measureRegularBlockSolverAdapterCalendarTime << " \t |  " << (_countRegularBlockSolverAdapterRuns==0 ? 0 : _measureRegularBlockSolverAdapterCalendarTime / static_cast<double>(_countRegularBlockSolverAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| InitialiseSpacetreeGridAdapter \t |  " << _countInitialiseSpacetreeGridAdapterRuns << " \t |  " << _measureInitialiseSpacetreeGridAdapterCPUTime << " \t |  " << (_countInitialiseSpacetreeGridAdapterRuns==0 ? 0 : _measureInitialiseSpacetreeGridAdapterCPUTime / static_cast<double>(_countInitialiseSpacetreeGridAdapterRuns))  << " \t |  " << _measureInitialiseSpacetreeGridAdapterCalendarTime << " \t |  " << (_countInitialiseSpacetreeGridAdapterRuns==0 ? 0 : _measureInitialiseSpacetreeGridAdapterCalendarTime / static_cast<double>(_countInitialiseSpacetreeGridAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| BlockCCAOutputAdapter \t |  " << _countBlockCCAOutputAdapterRuns << " \t |  " << _measureBlockCCAOutputAdapterCPUTime << " \t |  " << (_countBlockCCAOutputAdapterRuns==0 ? 0 : _measureBlockCCAOutputAdapterCPUTime / static_cast<double>(_countBlockCCAOutputAdapterRuns))  << " \t |  " << _measureBlockCCAOutputAdapterCalendarTime << " \t |  " << (_countBlockCCAOutputAdapterRuns==0 ? 0 : _measureBlockCCAOutputAdapterCalendarTime / static_cast<double>(_countBlockCCAOutputAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| DynamicRefinementForSpacetreeGridAdapter \t |  " << _countDynamicRefinementForSpacetreeGridAdapterRuns << " \t |  " << _measureDynamicRefinementForSpacetreeGridAdapterCPUTime << " \t |  " << (_countDynamicRefinementForSpacetreeGridAdapterRuns==0 ? 0 : _measureDynamicRefinementForSpacetreeGridAdapterCPUTime / static_cast<double>(_countDynamicRefinementForSpacetreeGridAdapterRuns))  << " \t |  " << _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime << " \t |  " << (_countDynamicRefinementForSpacetreeGridAdapterRuns==0 ? 0 : _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime / static_cast<double>(_countDynamicRefinementForSpacetreeGridAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| BlockVTKOutputAdapter \t |  " << _countBlockVTKOutputAdapterRuns << " \t |  " << _measureBlockVTKOutputAdapterCPUTime << " \t |  " << (_countBlockVTKOutputAdapterRuns==0 ? 0 : _measureBlockVTKOutputAdapterCPUTime / static_cast<double>(_countBlockVTKOutputAdapterRuns))  << " \t |  " << _measureBlockVTKOutputAdapterCalendarTime << " \t |  " << (_countBlockVTKOutputAdapterRuns==0 ? 0 : _measureBlockVTKOutputAdapterCalendarTime / static_cast<double>(_countBlockVTKOutputAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| RegularBlockSolverAndVTKOutputAdapter \t |  " << _countRegularBlockSolverAndVTKOutputAdapterRuns << " \t |  " << _measureRegularBlockSolverAndVTKOutputAdapterCPUTime << " \t |  " << (_countRegularBlockSolverAndVTKOutputAdapterRuns==0 ? 0 : _measureRegularBlockSolverAndVTKOutputAdapterCPUTime / static_cast<double>(_countRegularBlockSolverAndVTKOutputAdapterRuns))  << " \t |  " << _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime << " \t |  " << (_countRegularBlockSolverAndVTKOutputAdapterRuns==0 ? 0 : _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime / static_cast<double>(_countRegularBlockSolverAndVTKOutputAdapterRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell>* peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell>();
} 


void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _gridContainer.writeToCheckpoint( *checkpoint );
} 


void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _gridContainer.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGridStandardImplementation::continueToIterate() {
  logTraceIn( "continueToIterate()" );

  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  // well, it could be the very first iteration, so this assertion would be wrong
  // assertion( _repositoryState.getAction() != BlockLatticeBoltzmannBatchJobRepositoryState::Terminate );

  int masterNode = tarch::parallel::NodePool::getInstance().getMasterNodeNumber();
  assertion( masterNode != -1 );

  _repositoryState.receive( masterNode, peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag() );

  bool result = _repositoryState.getAction()!=BlockLatticeBoltzmannBatchJobRepositoryState::Terminate; 
  logTraceOutWith1Argument( "continueToIterate()", result );
  return result;
}
#endif
