#include "peano/applications/puregrid/repositories/GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation.h"

#include "tarch/Assertions.h"
#include "tarch/utils/Watch.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#include "peano/kernel/parallel/SendReceiveBufferPool.h"
#endif

#include "peano/kernel/datatraversal/autotuning/Oracle.h"


tarch::logging::Log peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::_log( "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation" );


peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(
  peano::geometry::Geometry&                   geometry,
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
  int                                          initialStackSize
):
  _geometry(geometry),
  _cellStack(initialStackSize),
  _vertexStack(initialStackSize),
  _solverState(),
  _gridWithPerformOneRefinement(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),
  _gridWithPerformOneRefinementWithoutGridSnapshot(_vertexStack,_cellStack,_geometry,_solverState,domainSize,domainOffset),

  _countPerformOneRefinementRuns(0),
  _countPerformOneRefinementWithoutGridSnapshotRuns(0),

  _measurePerformOneRefinementCPUTime(0.0),
  _measurePerformOneRefinementWithoutGridSnapshotCPUTime(0.0),

  _measurePerformOneRefinementCalendarTime(0.0),
  _measurePerformOneRefinementWithoutGridSnapshotCalendarTime(0.0),

  _repositoryState() {
  logTraceIn( "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(...)" );
  _repositoryState.setAction( GridConstructionMovieBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(2 +3);
  
  logTraceOut( "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(...)" );
}



peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(
  peano::geometry::Geometry&                   geometry,
  int                                          initialStackSize
):
  _geometry(geometry),
  _cellStack(initialStackSize),
  _vertexStack(initialStackSize),
  _solverState(),
  _gridWithPerformOneRefinement(_vertexStack,_cellStack,_geometry,_solverState),
  _gridWithPerformOneRefinementWithoutGridSnapshot(_vertexStack,_cellStack,_geometry,_solverState),

  _countPerformOneRefinementRuns(0),
  _countPerformOneRefinementWithoutGridSnapshotRuns(0),

  _measurePerformOneRefinementCPUTime(0.0),
  _measurePerformOneRefinementWithoutGridSnapshotCPUTime(0.0),

  _measurePerformOneRefinementCalendarTime(0.0),
  _measurePerformOneRefinementWithoutGridSnapshotCalendarTime(0.0),

  _repositoryState() {
  logTraceIn( "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(Geometry&)" );

  _repositoryState.setAction( GridConstructionMovieBatchJobRepositoryState::Terminate );

  peano::kernel::datatraversal::autotuning::Oracle::getInstance().setNumberOfOracles(2 +3);
  
  logTraceOut( "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation(Geometry&)" );
}
    
   
peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::~GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation() {
  assertion( _repositoryState.getAction() == GridConstructionMovieBatchJobRepositoryState::Terminate );
}


void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::restart(
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
  
  assertion( _repositoryState.getAction() == GridConstructionMovieBatchJobRepositoryState::Terminate );

  _vertexStack.clear();
  _cellStack.clear();

  _gridWithPerformOneRefinement.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);
  _gridWithPerformOneRefinementWithoutGridSnapshot.restart(traversalOrderOfNeighbours,_solverState,domainSize,domainOffset,domainLevel);

  logTraceOut( "restart(...)" );
}


void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::terminate() {
  logTraceIn( "terminate(...)" );
  
  _repositoryState.setAction( GridConstructionMovieBatchJobRepositoryState::Terminate );
  
  #ifdef Parallel
  if (tarch::parallel::Node::getInstance().isMasterProcess()) {
    tarch::parallel::NodePool::getInstance().broadcastToWorkingNodes(
      _repositoryState,
      peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag()
    );
  }
  peano::kernel::parallel::SendReceiveBufferPool::getInstance().terminate();
  #endif
  
  _gridWithPerformOneRefinement.terminate();
  _gridWithPerformOneRefinementWithoutGridSnapshot.terminate();

  logTraceOut( "terminate()" );
}


peano::applications::puregrid::State& peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::getState() {
  return _solverState;
}


peano::applications::puregrid::SpacetreeGridState&  peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::getSpacetreeGridState() {
  return _solverState;
}

    

    
void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::iterate() {
  tarch::utils::Watch watch( "peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation", "iterate()", false);
  
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
    case GridConstructionMovieBatchJobRepositoryState::UseAdapterPerformOneRefinement: watch.startTimer(); _gridWithPerformOneRefinement.iterate(_solverState); watch.stopTimer(); _countPerformOneRefinementRuns++; _measurePerformOneRefinementCPUTime += watch.getCPUTime(); _measurePerformOneRefinementCalendarTime += watch.getCalendarTime(); break;
    case GridConstructionMovieBatchJobRepositoryState::UseAdapterPerformOneRefinementWithoutGridSnapshot: watch.startTimer(); _gridWithPerformOneRefinementWithoutGridSnapshot.iterate(_solverState); watch.stopTimer(); _countPerformOneRefinementWithoutGridSnapshotRuns++; _measurePerformOneRefinementWithoutGridSnapshotCPUTime += watch.getCPUTime(); _measurePerformOneRefinementWithoutGridSnapshotCalendarTime += watch.getCalendarTime(); break;

    case GridConstructionMovieBatchJobRepositoryState::Terminate:
      assertionMsg( false, "this branch/state should never be reached" ); 
      break;
    case GridConstructionMovieBatchJobRepositoryState::ReadCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
    case GridConstructionMovieBatchJobRepositoryState::WriteCheckpoint:
      assertionMsg( false, "not implemented yet" );
      break;
  }
}

void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::iterate(bool reduceState) {

}


 void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::switchToPerformOneRefinement() { _repositoryState.setAction(GridConstructionMovieBatchJobRepositoryState::UseAdapterPerformOneRefinement); }
 void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::switchToPerformOneRefinementWithoutGridSnapshot() { _repositoryState.setAction(GridConstructionMovieBatchJobRepositoryState::UseAdapterPerformOneRefinementWithoutGridSnapshot); }



 bool peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::isActiveAdapterPerformOneRefinement() const { return _repositoryState.getAction() == GridConstructionMovieBatchJobRepositoryState::UseAdapterPerformOneRefinement; }
 bool peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::isActiveAdapterPerformOneRefinementWithoutGridSnapshot() const { return _repositoryState.getAction() == GridConstructionMovieBatchJobRepositoryState::UseAdapterPerformOneRefinementWithoutGridSnapshot; }



#ifdef CCA
void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::logIterationStatistics(peano::integration::cca::ports::grid::Statistics& writeToPort) const {
  writeToPort.addAdapterRuntime( "PerformOneRefinement", _countPerformOneRefinementRuns, _measurePerformOneRefinementCPUTime, _measurePerformOneRefinementCPUTime );
  writeToPort.addAdapterRuntime( "PerformOneRefinementWithoutGridSnapshot", _countPerformOneRefinementWithoutGridSnapshotRuns, _measurePerformOneRefinementWithoutGridSnapshotCPUTime, _measurePerformOneRefinementWithoutGridSnapshotCPUTime );

}
#endif


void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::logIterationStatistics() const {
  logInfo( "logIterationStatistics()", "|| adapter name \t || iterations \t || total CPU time [t]=s \t || average CPU time [t]=s \t || total user time [t]=s \t || average user time [t]=s " );  
   logInfo( "logIterationStatistics()", "| PerformOneRefinement \t |  " << _countPerformOneRefinementRuns << " \t |  " << _measurePerformOneRefinementCPUTime << " \t |  " << (_countPerformOneRefinementRuns==0 ? 0 : _measurePerformOneRefinementCPUTime / static_cast<double>(_countPerformOneRefinementRuns))  << " \t |  " << _measurePerformOneRefinementCalendarTime << " \t |  " << (_countPerformOneRefinementRuns==0 ? 0 : _measurePerformOneRefinementCalendarTime / static_cast<double>(_countPerformOneRefinementRuns))  );  
   logInfo( "logIterationStatistics()", "| PerformOneRefinementWithoutGridSnapshot \t |  " << _countPerformOneRefinementWithoutGridSnapshotRuns << " \t |  " << _measurePerformOneRefinementWithoutGridSnapshotCPUTime << " \t |  " << (_countPerformOneRefinementWithoutGridSnapshotRuns==0 ? 0 : _measurePerformOneRefinementWithoutGridSnapshotCPUTime / static_cast<double>(_countPerformOneRefinementWithoutGridSnapshotRuns))  << " \t |  " << _measurePerformOneRefinementWithoutGridSnapshotCalendarTime << " \t |  " << (_countPerformOneRefinementWithoutGridSnapshotRuns==0 ? 0 : _measurePerformOneRefinementWithoutGridSnapshotCalendarTime / static_cast<double>(_countPerformOneRefinementWithoutGridSnapshotRuns))  );  

}


peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell>* peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::createEmptyCheckpoint() {
  return new peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell>();
} 


void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::writeCheckpoint(peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell> * const checkpoint) {
  _solverState.writeToCheckpoint( *checkpoint );
  _vertexStack.writeToCheckpoint( *checkpoint );
  _cellStack.writeToCheckpoint( *checkpoint );
} 


void peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::readCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::puregrid::SpacetreeGridVertex, peano::applications::puregrid::SpacetreeGridCell> const * const checkpoint ) {
  assertionMsg( checkpoint->isValid(), "checkpoint has to be valid if you call this operation" );

  _solverState.readFromCheckpoint( *checkpoint );
  _vertexStack.readFromCheckpoint( *checkpoint );
  _cellStack.readFromCheckpoint( *checkpoint );
}


#ifdef Parallel
bool peano::applications::puregrid::repositories::GridConstructionMovieBatchJobRepositoryForSpacetreeGridSTDDoubleStackImplementation::continueToIterate() {
  logTraceIn( "continueToIterate()" );

  assertion( !tarch::parallel::Node::getInstance().isMasterProcess());
  // well, it could be the very first iteration, so this assertion would be wrong
  // assertion( _repositoryState.getAction() != GridConstructionMovieBatchJobRepositoryState::Terminate );

  int masterNode = tarch::parallel::NodePool::getInstance().getMasterNodeNumber();
  assertion( masterNode != -1 );

  _repositoryState.receive( masterNode, peano::kernel::parallel::SendReceiveBufferPool::getInstance().getIterationManagementTag() );

  bool result = _repositoryState.getAction()!=GridConstructionMovieBatchJobRepositoryState::Terminate; 
  logTraceOutWith1Argument( "continueToIterate()", result );
  return result;
}
#endif
