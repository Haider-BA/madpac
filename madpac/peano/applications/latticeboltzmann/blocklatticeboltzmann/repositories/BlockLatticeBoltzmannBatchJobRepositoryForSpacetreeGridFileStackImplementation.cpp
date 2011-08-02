#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation" );


peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
  int                                          blockSize,
  int                                          numberOfBlocks,
  int                                          minFillThreshold,
  int                                          maxFillThreshold,
  const std::string&                           tempFilePrefix    
):
  _geometry(geometry),
  _cellStack(blockSize,numberOfBlocks,minFillThreshold,maxFillThreshold,tempFilePrefix),
  _vertexStack(blockSize,numberOfBlocks,minFillThreshold,maxFillThreshold,tempFilePrefix),
  _solverState(),
  _gridWithRegularBlockSolverAdapter(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithInitialiseSpacetreeGridAdapter(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithBlockCCAOutputAdapter(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithDynamicRefinementForSpacetreeGridAdapter(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithBlockVTKOutputAdapter(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithRegularBlockSolverAndVTKOutputAdapter(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),

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

  _repositoryState() {
  logTraceIn( "peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation(...)" );
  
  _repositoryState.setAction( BlockLatticeBoltzmannBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(6 +3);
  
  logTraceOut( "peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation(...)" );
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation(
  peano::geometry::Geometry&                   geometry,
  int                                          blockSize,
  int                                          numberOfBlocks,
  int                                          minFillThreshold,
  int                                          maxFillThreshold,
  const std::string&                           tempFilePrefix    
):
  _geometry(geometry),
  _cellStack(blockSize,numberOfBlocks,minFillThreshold,maxFillThreshold,tempFilePrefix),
  _vertexStack(blockSize,numberOfBlocks,minFillThreshold,maxFillThreshold,tempFilePrefix),
  _solverState(),
  _gridWithRegularBlockSolverAdapter(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithInitialiseSpacetreeGridAdapter(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithBlockCCAOutputAdapter(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithDynamicRefinementForSpacetreeGridAdapter(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithBlockVTKOutputAdapter(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithRegularBlockSolverAndVTKOutputAdapter(_vertexStack,_cellStack,_geometry,_solverState),

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

  _repositoryState() {
  logTraceIn( "peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation(Geometry&)" );

  _repositoryState.setAction( BlockLatticeBoltzmannBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(6 +3);

  logTraceOut( "peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation(Geometry&)" );
}
    
   
peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::~BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation() {
  assertion( _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::Terminate );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::restart(
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
  
  assertion( _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::Terminate );

  _vertexStack.clear();
  _cellStack.clear();

  _gridWithRegularBlockSolverAdapter.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithInitialiseSpacetreeGridAdapter.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithBlockCCAOutputAdapter.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithDynamicRefinementForSpacetreeGridAdapter.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithBlockVTKOutputAdapter.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithRegularBlockSolverAndVTKOutputAdapter.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);

  logTraceOut( "restart(...)" );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::terminate() {
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
  
  _gridWithRegularBlockSolverAdapter.terminate();
  _gridWithInitialiseSpacetreeGridAdapter.terminate();
  _gridWithBlockCCAOutputAdapter.terminate();
  _gridWithDynamicRefinementForSpacetreeGridAdapter.terminate();
  _gridWithBlockVTKOutputAdapter.terminate();
  _gridWithRegularBlockSolverAndVTKOutputAdapter.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockState& peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::getState() {
  return _solverState;
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState&  peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::getSpacetreeGridState() {
  return _solverState;
}
   

    
void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::iterate(bool reduceState) {
  tarch::utils::Watch watch( "peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation", "iterate(bool)", false);

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
    case BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterRegularBlockSolverAdapter: watch.startTimer(); _gridWithRegularBlockSolverAdapter.iterate(_solverState); watch.stopTimer(); _countRegularBlockSolverAdapterRuns++; _measureRegularBlockSolverAdapterCPUTime += watch.getCPUTime(); _measureRegularBlockSolverAdapterCalendarTime += watch.getCalendarTime(); break;
    case BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterInitialiseSpacetreeGridAdapter: watch.startTimer(); _gridWithInitialiseSpacetreeGridAdapter.iterate(_solverState); watch.stopTimer(); _countInitialiseSpacetreeGridAdapterRuns++; _measureInitialiseSpacetreeGridAdapterCPUTime += watch.getCPUTime(); _measureInitialiseSpacetreeGridAdapterCalendarTime += watch.getCalendarTime(); break;
    case BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterBlockCCAOutputAdapter: watch.startTimer(); _gridWithBlockCCAOutputAdapter.iterate(_solverState); watch.stopTimer(); _countBlockCCAOutputAdapterRuns++; _measureBlockCCAOutputAdapterCPUTime += watch.getCPUTime(); _measureBlockCCAOutputAdapterCalendarTime += watch.getCalendarTime(); break;
    case BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterDynamicRefinementForSpacetreeGridAdapter: watch.startTimer(); _gridWithDynamicRefinementForSpacetreeGridAdapter.iterate(_solverState); watch.stopTimer(); _countDynamicRefinementForSpacetreeGridAdapterRuns++; _measureDynamicRefinementForSpacetreeGridAdapterCPUTime += watch.getCPUTime(); _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime += watch.getCalendarTime(); break;
    case BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterBlockVTKOutputAdapter: watch.startTimer(); _gridWithBlockVTKOutputAdapter.iterate(_solverState); watch.stopTimer(); _countBlockVTKOutputAdapterRuns++; _measureBlockVTKOutputAdapterCPUTime += watch.getCPUTime(); _measureBlockVTKOutputAdapterCalendarTime += watch.getCalendarTime(); break;
    case BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterRegularBlockSolverAndVTKOutputAdapter: watch.startTimer(); _gridWithRegularBlockSolverAndVTKOutputAdapter.iterate(_solverState); watch.stopTimer(); _countRegularBlockSolverAndVTKOutputAdapterRuns++; _measureRegularBlockSolverAndVTKOutputAdapterCPUTime += watch.getCPUTime(); _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime += watch.getCalendarTime(); break;

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

 void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToRegularBlockSolverAdapter() { _repositoryState.setAction(BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterRegularBlockSolverAdapter); }
 void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToInitialiseSpacetreeGridAdapter() { _repositoryState.setAction(BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterInitialiseSpacetreeGridAdapter); }
 void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToBlockCCAOutputAdapter() { _repositoryState.setAction(BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterBlockCCAOutputAdapter); }
 void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToDynamicRefinementForSpacetreeGridAdapter() { _repositoryState.setAction(BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterDynamicRefinementForSpacetreeGridAdapter); }
 void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToBlockVTKOutputAdapter() { _repositoryState.setAction(BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterBlockVTKOutputAdapter); }
 void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::switchToRegularBlockSolverAndVTKOutputAdapter() { _repositoryState.setAction(BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterRegularBlockSolverAndVTKOutputAdapter); }



 bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterRegularBlockSolverAdapter() const { return _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterRegularBlockSolverAdapter; }
 bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterInitialiseSpacetreeGridAdapter() const { return _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterInitialiseSpacetreeGridAdapter; }
 bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterBlockCCAOutputAdapter() const { return _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterBlockCCAOutputAdapter; }
 bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterDynamicRefinementForSpacetreeGridAdapter() const { return _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterDynamicRefinementForSpacetreeGridAdapter; }
 bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterBlockVTKOutputAdapter() const { return _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterBlockVTKOutputAdapter; }
 bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::isActiveAdapterRegularBlockSolverAndVTKOutputAdapter() const { return _repositoryState.getAction() == BlockLatticeBoltzmannBatchJobRepositoryState::UseAdapterRegularBlockSolverAndVTKOutputAdapter; }



#ifdef CCA
void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
   logInfo( "logIterationStatistics()", "| RegularBlockSolverAdapter \t |  " << _countRegularBlockSolverAdapterRuns << " \t |  " << _measureRegularBlockSolverAdapterCPUTime << " \t |  " << _measureRegularBlockSolverAdapterCPUTime / static_cast<double>(_countRegularBlockSolverAdapterRuns)  << " \t |  " << _measureRegularBlockSolverAdapterCalendarTime << " \t |  " << (_countRegularBlockSolverAdapterRuns==0 ? 0 : _measureRegularBlockSolverAdapterCalendarTime / static_cast<double>(_countRegularBlockSolverAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| InitialiseSpacetreeGridAdapter \t |  " << _countInitialiseSpacetreeGridAdapterRuns << " \t |  " << _measureInitialiseSpacetreeGridAdapterCPUTime << " \t |  " << _measureInitialiseSpacetreeGridAdapterCPUTime / static_cast<double>(_countInitialiseSpacetreeGridAdapterRuns)  << " \t |  " << _measureInitialiseSpacetreeGridAdapterCalendarTime << " \t |  " << (_countInitialiseSpacetreeGridAdapterRuns==0 ? 0 : _measureInitialiseSpacetreeGridAdapterCalendarTime / static_cast<double>(_countInitialiseSpacetreeGridAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| BlockCCAOutputAdapter \t |  " << _countBlockCCAOutputAdapterRuns << " \t |  " << _measureBlockCCAOutputAdapterCPUTime << " \t |  " << _measureBlockCCAOutputAdapterCPUTime / static_cast<double>(_countBlockCCAOutputAdapterRuns)  << " \t |  " << _measureBlockCCAOutputAdapterCalendarTime << " \t |  " << (_countBlockCCAOutputAdapterRuns==0 ? 0 : _measureBlockCCAOutputAdapterCalendarTime / static_cast<double>(_countBlockCCAOutputAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| DynamicRefinementForSpacetreeGridAdapter \t |  " << _countDynamicRefinementForSpacetreeGridAdapterRuns << " \t |  " << _measureDynamicRefinementForSpacetreeGridAdapterCPUTime << " \t |  " << _measureDynamicRefinementForSpacetreeGridAdapterCPUTime / static_cast<double>(_countDynamicRefinementForSpacetreeGridAdapterRuns)  << " \t |  " << _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime << " \t |  " << (_countDynamicRefinementForSpacetreeGridAdapterRuns==0 ? 0 : _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime / static_cast<double>(_countDynamicRefinementForSpacetreeGridAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| BlockVTKOutputAdapter \t |  " << _countBlockVTKOutputAdapterRuns << " \t |  " << _measureBlockVTKOutputAdapterCPUTime << " \t |  " << _measureBlockVTKOutputAdapterCPUTime / static_cast<double>(_countBlockVTKOutputAdapterRuns)  << " \t |  " << _measureBlockVTKOutputAdapterCalendarTime << " \t |  " << (_countBlockVTKOutputAdapterRuns==0 ? 0 : _measureBlockVTKOutputAdapterCalendarTime / static_cast<double>(_countBlockVTKOutputAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| RegularBlockSolverAndVTKOutputAdapter \t |  " << _countRegularBlockSolverAndVTKOutputAdapterRuns << " \t |  " << _measureRegularBlockSolverAndVTKOutputAdapterCPUTime << " \t |  " << _measureRegularBlockSolverAndVTKOutputAdapterCPUTime / static_cast<double>(_countRegularBlockSolverAndVTKOutputAdapterRuns)  << " \t |  " << _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime << " \t |  " << (_countRegularBlockSolverAndVTKOutputAdapterRuns==0 ? 0 : _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime / static_cast<double>(_countRegularBlockSolverAndVTKOutputAdapterRuns))  );  

}
#endif


void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  
   logInfo( "logIterationStatistics()", "| RegularBlockSolverAdapter \t |  " << _countRegularBlockSolverAdapterRuns << " \t |  " << _measureRegularBlockSolverAdapterCPUTime << " \t |  " << (_countRegularBlockSolverAdapterRuns==0 ? 0 : _measureRegularBlockSolverAdapterCPUTime / static_cast<double>(_countRegularBlockSolverAdapterRuns))  << " \t |  " << _measureRegularBlockSolverAdapterCalendarTime << " \t |  " << (_countRegularBlockSolverAdapterRuns==0 ? 0 : _measureRegularBlockSolverAdapterCalendarTime / static_cast<double>(_countRegularBlockSolverAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| InitialiseSpacetreeGridAdapter \t |  " << _countInitialiseSpacetreeGridAdapterRuns << " \t |  " << _measureInitialiseSpacetreeGridAdapterCPUTime << " \t |  " << (_countInitialiseSpacetreeGridAdapterRuns==0 ? 0 : _measureInitialiseSpacetreeGridAdapterCPUTime / static_cast<double>(_countInitialiseSpacetreeGridAdapterRuns))  << " \t |  " << _measureInitialiseSpacetreeGridAdapterCalendarTime << " \t |  " << (_countInitialiseSpacetreeGridAdapterRuns==0 ? 0 : _measureInitialiseSpacetreeGridAdapterCalendarTime / static_cast<double>(_countInitialiseSpacetreeGridAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| BlockCCAOutputAdapter \t |  " << _countBlockCCAOutputAdapterRuns << " \t |  " << _measureBlockCCAOutputAdapterCPUTime << " \t |  " << (_countBlockCCAOutputAdapterRuns==0 ? 0 : _measureBlockCCAOutputAdapterCPUTime / static_cast<double>(_countBlockCCAOutputAdapterRuns))  << " \t |  " << _measureBlockCCAOutputAdapterCalendarTime << " \t |  " << (_countBlockCCAOutputAdapterRuns==0 ? 0 : _measureBlockCCAOutputAdapterCalendarTime / static_cast<double>(_countBlockCCAOutputAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| DynamicRefinementForSpacetreeGridAdapter \t |  " << _countDynamicRefinementForSpacetreeGridAdapterRuns << " \t |  " << _measureDynamicRefinementForSpacetreeGridAdapterCPUTime << " \t |  " << (_countDynamicRefinementForSpacetreeGridAdapterRuns==0 ? 0 : _measureDynamicRefinementForSpacetreeGridAdapterCPUTime / static_cast<double>(_countDynamicRefinementForSpacetreeGridAdapterRuns))  << " \t |  " << _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime << " \t |  " << (_countDynamicRefinementForSpacetreeGridAdapterRuns==0 ? 0 : _measureDynamicRefinementForSpacetreeGridAdapterCalendarTime / static_cast<double>(_countDynamicRefinementForSpacetreeGridAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| BlockVTKOutputAdapter \t |  " << _countBlockVTKOutputAdapterRuns << " \t |  " << _measureBlockVTKOutputAdapterCPUTime << " \t |  " << (_countBlockVTKOutputAdapterRuns==0 ? 0 : _measureBlockVTKOutputAdapterCPUTime / static_cast<double>(_countBlockVTKOutputAdapterRuns))  << " \t |  " << _measureBlockVTKOutputAdapterCalendarTime << " \t |  " << (_countBlockVTKOutputAdapterRuns==0 ? 0 : _measureBlockVTKOutputAdapterCalendarTime / static_cast<double>(_countBlockVTKOutputAdapterRuns))  );  
   logInfo( "logIterationStatistics()", "| RegularBlockSolverAndVTKOutputAdapter \t |  " << _countRegularBlockSolverAndVTKOutputAdapterRuns << " \t |  " << _measureRegularBlockSolverAndVTKOutputAdapterCPUTime << " \t |  " << (_countRegularBlockSolverAndVTKOutputAdapterRuns==0 ? 0 : _measureRegularBlockSolverAndVTKOutputAdapterCPUTime / static_cast<double>(_countRegularBlockSolverAndVTKOutputAdapterRuns))  << " \t |  " << _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime << " \t |  " << (_countRegularBlockSolverAndVTKOutputAdapterRuns==0 ? 0 : _measureRegularBlockSolverAndVTKOutputAdapterCalendarTime / static_cast<double>(_countRegularBlockSolverAndVTKOutputAdapterRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell>* peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell>();
} 


void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _vertexStack.writeToCheckpoint( *checkpoint );
  _cellStack.writeToCheckpoint( *checkpoint );
} 


void peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _vertexStack.readFromCheckpoint( *checkpoint );
  _cellStack.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForSpacetreeGridFileStackImplementation::continueToIterate() {
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
